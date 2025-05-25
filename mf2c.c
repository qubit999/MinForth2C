/* ===========================================================================
   MF2C.C - MinForth V3.4 to C Transpiler
   ===========================================================================
   provided "as is" as per the license conditions stated in file mflicense.txt 
*/

// ---------------------------------------------------------------------------
//   Suppress some Compiler Warnings

#ifdef __GNUC__
// # pragma GCC diagnostic ignored "-Wstringop-truncation"
#endif
#define _CRT_SECURE_NO_WARNINGS

// ---------------------------------------------------------------------------
//   C librari�s

#include <stdlib.h> 
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// ---------------------------------------------------------------------------
//   Global Definitions

#define LINELEN     128		// max input line length
#define TOKLEN		32		// max. dictionary name length
#define ERRLEN      128		// max length of error message 
#define FILELEN     128		// max length of file names < LINELEN 
#define DICTSIZE	2000	// initial transpiler dictionary entries
#define INFILES		30		// max number of required files

// ---------------------------------------------------------------------------
//   Global Variables

FILE* ffile;				// input file with MinForth definitions 
char  ffilename[FILELEN];	// name of definition and image file 
FILE* cfile;				// output file for C compiler 
char  cfilename[FILELEN];	// name of image file 
int   verbose=0;			// echo c file to terminal 
char  line[LINELEN]={0}; 	// input line
char  string[LINELEN]={0};  // string buffer
char  token[LINELEN]={0};	// scanned token copy
char  uptoken[LINELEN];		// token converted to uppercase
int	  linelen=0;			// actual line length
int   ln=0;					// source line number 
int   in=0;					// source index
	
int   toklen=0;				// actual token length 
int   tokhash=0;			// token hash

int   pass=0;				// transpiler pass, start with 0 internally
int	  trace=0;				// tracer flag

int	  numctl=0;				// number control flag
int   num=0;				// recognized number
int   numt=0;				// number type (1:float)
double numf=0.;				// recognized fp-number
int   cel=0;				// cells multiplier flag

int   defl=0;				// #ifdefined flag
int   iffl=0;				// [if] flag

int   inf=0;				// number of #included files
char  infiles[INFILES][FILELEN]; // names of #included files

int   hdi=0;				// actual header index
int   hdmax=0;				// max source definitions
int   hdh=0;				// hidden target dictionary headers
int   hdd=0;				// max target dictionary headers
int   hdf=0;				// found header index
int	  reduce=0;				// dictionary reduction flag
int   cfs=0;				// flow control check variable

// ---------------------------------------------------------------------------
//   Transpiler Dictionary

typedef struct HDDICT {
 int  hdd;					// target dictionary index
 int  link;					// target dictionary link
 int  hash;					// hash value from uptoken
 int  par;					// parameter
 int  inl;					// inline flag
 int  hid;					// hidden word flag
 int  len;					// name length
 char name[TOKLEN+2];		// name string
 int  typ;					// word type
 int  flag;					// compilation flag 
 int  dep[DICTSIZE]; } HD;	// dependency tree
HD    hd[DICTSIZE];			// transpiler dictionary

// ---------------------------------------------------------------------------
//   Terminations

void Terminate(char *msg) { // terminate with message
    printf(" ?? %s\n%s",msg,"(press return)");
    getchar();
    fflush(stdout);
    exit(EXIT_FAILURE); }

void LTerminate(char *msg) { // terminate with line dump and message
    printf("\nError in file %s line %d:\n%s\n",ffilename,ln,line);
    for (int i=0;i<in-toklen;i++) putchar('-');
    putchar('^');
    Terminate(msg); }

// ---------------------------------------------------------------------------
//   Macros

#ifndef min
#define min(x1,x2) (x1<x2?x1:x2) 
#endif

// ---------------------------------------------------------------------------
//   Print Functions

#define PR(...)	{if(pass&&(hd[hdi].hid)!=3){fprintf(cfile,__VA_ARGS__);}\
				if(verbose)printf(__VA_ARGS__);}

char* CS(void) { // cellsize
	if (cel==1)	{ cel=0; return "*MFSIZE"; } else
	if (cel==2) { cel=0; return "*MFSIZE*MFFLTSIZE"; }
	return ""; }

char* CCS(void) { // cellsize as comment
	if (cel==1)	return " CELLS"; else
	if (cel==2) return " FLOATS";
	return ""; }

char* PN(char* s) { // printable name
	char c,*ct=string;
	do { c = *s++;
		 if (c == '\\') c = '|'; 
		 *ct++ = c; } while (c);
 	return string; }

char* DN(char* s) { // unescaped dictionary name
	char c,*ct=string;
	do { c = *s++;
		 if((c=='\\')||(c=='\"')||(c=='\'')) *ct++='\\';
	     *ct++=c; } while (c);
	return string; }

// ---------------------------------------------------------------------------
//   String Functions

void Hash(void) { // 32-bit FNV-1a hash 
    char c,*str=uptoken; int h=(int)2166136261;
    while (c=*str++,c) h=(h^c)*16777619;
    tokhash=h; }

int IsCmd(char *cmd) { // check if token is transpiler command 
    return !strcmp(uptoken,cmd); }

// ---------------------------------------------------------------------------
//   Number Functions

int IsNumber(void) { // check if token is number
   char *p; numt=0;
   if ('$'==*token) num=strtol(token+1,&p,16);
   else num = strtol(token,&p,0);
   if ('\0'== p[0]) return 1;
   if (('\''==token[0])&&('\''==token[2])&&(0==token[3])) {
      num = token[1]; return 1; }
   numf=strtod(token,&p);
   if ('\0'== p[0]) { numt=1; return 1; }
   return 0; }

// ---------------------------------------------------------------------------
//   Dictionary Functions

int IsWord(void) { // check if token is already in word list
	hdf=0;
	for (int i=hdi;i>0;i--) {
		if (tokhash==hd[i].hash) {
			hdf=i; return i; } }
	return 0; }

int IsDefined(char* name) { // check if Forth NAME is defined
	strcpy(uptoken,name), Hash();
	return IsWord(); }

int IsIncluded(char* name) { // check if source file is already included
   for (int i=inf-1;i>=0;i--)
     if(0==strncmp(name,infiles[i],FILELEN))
	   return 1;
   return 0; }

// ---------------------------------------------------------------------------
//   Scan Forth Source

int ScanLine(void) {  // prepare new line when token scan is exhausted
    int i=0;
    if (!fgets(line,LINELEN,ffile)) return 0;
	while(line[i]) { if (line[i]<' ') line[i]=' '; i++; }
    linelen=i, in=0, ln+=1;
	return 1; }

int ScanToken(void) { // scan whitespace-delimited tokens
    int r,n;
    r=sscanf(line+in,"%s%n",token,&n);
    if (r==EOF) r=0;
    if (r) { in+=n,toklen=strlen(token); }
	return r; }

int ReadToken(void) { // read token and copy to uptoken
    do { if (ScanToken()) { 
		 strcpy(uptoken,token);
		 for (int i=0;i<toklen;i++) uptoken[i]=toupper(uptoken[i]);
		 Hash(); return 1; } } while (ScanLine());
    return 0; }

void SkipComment(char* starter,char* closer) { // do nested comments 
    char st[TOKLEN+1], cl[TOKLEN+1]; int i,l;
	strcpy(st,starter), strcpy(cl,closer);
	for (i=0,l=strlen(starter);i<l;i++) st[i]=toupper(st[i]);
	for (i=0,l=strlen(closer);i<l;i++) cl[i]=toupper(cl[i]);
	while (ReadToken()) {
		if (!strcmp(uptoken,st)) SkipComment(starter,closer);
		if (!strcmp(uptoken,cl)) return; }
    LTerminate("source file end within comment of #IF../[IF]"); }

int GetToken(void) { // get token and skip comments
gt:	if (!ReadToken()) return 0;
	if (IsCmd("\\")) { line[in]=0; goto gt; }
	else if (IsCmd("(")) { SkipComment("(",")"); goto gt; }
	else if (IsCmd("\\*")) { SkipComment("\\*","*\\"); goto gt; }
	else if (IsCmd("\\S")) { line[in]=0, fseek(ffile,0,SEEK_END); return 0; }
	return 1; }

void GetString(void) { // get string until closing "
	char *e=NULL,*s=line+in+1; int l;
	e=strchr(s,'\"'); if (!e) LTerminate("unterminated string");
	l=e-s; strncpy(string,s,l);
	string[l]=0, in+=l+2; }

void GetStringPar(void) { // get "-enclosed string or token parameter
	char *s=line+in;
	while (*s) if (*s>' ') break; else s++;
	in=s-line;
	if (*s=='\"') GetString(); else { ReadToken(); strcpy(string,token); } }

void ReadCLine(void) { // read inserted C code 
	int i;
    if (in!=1) LTerminate("C not at line start");
	if (linelen<=2) { token[0]=0; return; }
    for (i=linelen-1; i>2; i--)
		if (line[i]==';'&&line[i-1]==' ') break;   
	if (i==2) { in=linelen; strcpy(token,line+2); } 
    else { in=i; strncpy(token,line+2,i-3); token[i-3]=0; } }

// ---------------------------------------------------------------------------
//   Make Transpiler Dictionary Entry aka Header

void PHD(char* typ) { // start header
	PR("\n\n");
	if (hd[hdi].inl) { PR("static inline "); }
	PR("void mf%08X(void) { // %s %s",tokhash,typ,PN(uptoken)); }

void MakesHeader(char typ) { // append new header to dictionary
	hdi++;
	if (pass) return;
    if (hdi>=DICTSIZE)
		LTerminate("dictionary full (increase DICTSIZE)");
	for (int i=1;i<hdi;i++)
		if (tokhash==hd[i].hash) {
			printf("\n<%s>?",hd[i].name);
			LTerminate("redefinition or hash collision"); }
    HD* h=&hd[hdi];
	h->hash=tokhash, h->len=toklen;
	strncpy(h->name,uptoken,min(toklen+1,TOKLEN));
	h->dep[0]=1, h->flag=0, h->typ=typ;
    if (token[0]=='_') { h->hid=1;
    if (token[1]=='_')   h->hid=2; } }

void MakeHeader(char typ) { // read name and append new header to dictionary
	if (!ReadToken())
	    LTerminate("source file exhausted");
	MakesHeader(typ); }

void CheckFlag(void) { // print flag status
	int hf=hd[hdi].flag;
	if (hf==0) return; else { PR(" // "); }
	if (hf&1) { PR("IMMEDIATE "); }
	if (hf&2) { PR("COMPILE-ONLY"); } }

// ---------------------------------------------------------------------------
//   Do Colon Definition
	
void CompCLine(void) { // C hilevel
	ReadCLine();
    if (token[0]=='#') { PR("\n%s",token); } else { PR("\n %s",token); } }

void CompTick(void) { // [']
	ReadToken(); IsWord();
	if (!pass&&!hdf)
	   LTerminate("ticked word not found");
	if (hd[hdf].hid==2) LTerminate("word to compile not in dictionary");
	if (!pass) hd[hdi].dep[hdf]=1;
	PR("\n  mfpush(&mfdict[%d].cfa); // [\'] %s",hd[hdf].hdd,PN(uptoken)); }

void CompComma(void) { // [,]
	ReadToken(); IsWord();
	if (!pass&&!hdf)
  	   LTerminate("word to compile not found");
	if (!pass) hd[hdi].dep[hdf]=1;
	if (hd[hdf].hid==2)
	   LTerminate("word to compile not in dictionary");
	if (hd[hdf].flag&1) { // imm+
	   PR("\n  mf%08X(); // %s",hd[hdf].hash,PN(uptoken)); } 
	else { // norm
	   PR("\n  mfat(mfdp)=(mfCell)&mfdict[%d].cfa;",hd[hdf].hdd);
	   PR("\n  mfdp+=MFSIZE; // [,] %s",PN(uptoken)); } }

void CompDeferred(void) { // DEFERRED
	ReadToken(); IsWord();
	if (!pass&&!hdf)
	   LTerminate("deferred word not found");
	if (hd[hdf].typ!='d') LTerminate("is no deferred word");
	int par=hd[hdf].par; hd[hdi].dep[par]=1;
	if (!par) LTerminate("uninitialized deferred word");
	PR("\n  mf%08X();",hd[par].hash);
	PR(" // %s",PN(hd[par].name)); }

void CompString(void) { // S"
	GetString();
	PR("\n  mfspush(\"%s\"); // S\"",string); }

void CompType(void) { // ."
	GetString();
	PR("\n  mfprint(\"%s\"); // S\"",string); }

void CompInlineC(void) { // I"
	GetString();
	PR("\n  %s",string); }

void CompNumber(void) { // literal number
	if (numt) { PR("\n  mffpush(%g); // %f",numf,numf); }
	else { PR("\n  mfpush(%d); // $%X",num,num); } }

void CompWord(void) { // word
	int hh=hd[hdf].hash; char *hn=PN(hd[hdf].name);
	if (!pass) hd[hdi].dep[hdf]=1;
    if (hd[hdf].flag&1) 
		LTerminate("can't transpile immediate word, use [,]");
	switch (hd[hdf].typ) {
	case 'v':
	case 'b': // push address
		PR("\n  mfpush(&MF%08X); // %s",hh,hn); break;
	case 'c': // push constant
		PR("\n  mfpush(MF%08X); // %s",hh,hn); break;
	case 'd': // call deffered function
		PR("\n  (MF%08X)(); // %s",hh,hn); break;
	default:  // call normal function
		PR("\n  mf%08X(); // %s",hh,hn); } }

void CompIfDefined(void) { // #IFDEFINED word
	if (defl) LTerminate("nested #IF(UN)DEFINED..#ENDIF"); 
	ReadToken(); IsWord();
	if (!hdf) SkipComment("#IFDEFINED","#ENDIF");
	else defl++; }

void CompIfUndefined(void) { // #IFUNDEFINED word
	if (defl) LTerminate("nested #IF(UN)DEFINED..#ENDIF" ); 
	ReadToken(); IsWord();
	if (hdf) SkipComment("#IFUNDEFINED","#ENDIF");
	else defl++; }
	
void CompEndIf(void) { // #ENDIF
	if (defl!=1) LTerminate("#ENDIF without prior #IF(UN)DEFINED");
	defl--;	}

void WalkColon(void) { // (:) walk through hilevel definition
 	char *cfm, dof=0; 
    PHD(":");
 	while (GetToken()) {
	if (IsCmd("C")) { CompCLine(); continue; }
// lolevel debugger
	if (IsCmd("+TR")) { trace=1; }
	if (trace) { PR("\nmfTR(\"%s\");",DN(token)); }
	if (IsCmd("+TR")) { continue; }
	if (IsCmd("-TR")) { trace=0; continue; }
// end hilevel definitio
    if (IsCmd(";")) { trace=0; PR("\n}"); 
	  if (defl) LTerminate("missing closing #ENDIF"); else break; }
// flow control by flags
	else if (IsCmd("IF")) { cfs++; PR("\nmfIF"); }
	else if (IsCmd("^IF")) { cfs++; PR("\nmfDUPIF"); }
	else if (IsCmd("~IF")) { cfs++; PR("\nmfNOTIF"); }
	else if (IsCmd("ELSE")) { PR("\nmfELSE"); }
	else if (IsCmd("THEN")) { cfs--; PR("\nmfTHEN"); }
	else if (IsCmd("CASE")) { cfs+=10; PR("\nmfCASE"); }
	else if (IsCmd("OF")) { cfs+=100; PR("\nmfOF"); }
	else if (IsCmd("~OF")) { cfs+=100; PR("\nmfNOTOF"); }
	else if (IsCmd("^OF")) { cfs+=100; PR("\nmfDUPOF"); }
	else if (IsCmd("ENDOF")) { cfs-=100; PR("\nmfENDOF"); }
	else if (IsCmd("ENDCASE")) { cfs-=10; PR("\nmfENDCASE"); }
// loops
	else if (IsCmd("BEGIN")) { cfs+=1000; PR("\nmfBEGIN"); }
	else if (IsCmd("WHILE")) { PR("\nmfWHILE"); }
	else if (IsCmd("REPEAT")) { cfs-=1000; PR("\nmfREPEAT"); }
	else if (IsCmd("UNTIL")) { cfs-=1000; PR("\nmfUNTIL"); }
	else if (IsCmd("AGAIN")) { cfs-=1000; PR("\nmfAGAIN"); }
	else if (IsCmd("^WHILE")) { PR("\nmfDUPWHILE"); }
	else if (IsCmd("~WHILE")) { PR("\nmfNOTWHILE"); }
	else if (IsCmd("^UNTIL")) { cfs-=1000; PR("\nmfDUPUNTIL"); }
	else if (IsCmd("~UNTIL")) { cfs-=1000; PR("\nmfNOTUNTIL"); }
	else if (IsCmd("CONTINUE")) { PR("\nmfCONTINUE"); }
	else if (IsCmd("BREAK")) { PR("\nmfBREAK"); }
	else if (IsCmd("EXIT")) { PR("\nmfEXIT"); }
// counted loops
	else if (IsCmd("DO")) { 
	  if (dof) LTerminate("nested DO..+|LOOPs not allowed");
	  dof=1, cfs+=10000; PR("\nmfDO"); }
	else if (IsCmd("?DO")) { 
	  if (dof) LTerminate("nested ?DO..+|LOOPs not allowed");
	  dof=1, cfs+=10000; PR("\nmfQDO"); }
	else if (IsCmd("I")) { PR("\nmfI"); }
	else if (IsCmd("LOOP")) { dof=0, cfs-=10000; PR("\nmfLOOP"); }
	else if (IsCmd("+LOOP")) { dof=0, cfs-=10000; PR("\nmfPLOOP"); }
	else if (IsCmd("FOR")) { cfs+=20000; PR("\nmfFOR"); }
	else if (IsCmd("FOR>")) { cfs+=20000; PR("\nmfFORUP"); }
	else if (IsCmd("<FOR")) { cfs+=20000; PR("\nmfDOWNFOR"); }
	else if (IsCmd("N")) { PR("\nmfN"); }
	else if (IsCmd("+N")) { PR("\nmfPLUSN"); }
	else if (IsCmd("NEXT")) { cfs-=20000; PR("\nmfNEXT"); }
// special compilations
	else if (IsCmd("S\"")) CompString();
	else if (IsCmd(".\"")) CompType();
	else if (IsCmd("I\"")) CompInlineC();
	else if (IsCmd("[\']")) CompTick();
	else if (IsCmd("[,]")) CompComma();
	else if (IsCmd("DEFERRED")) CompDeferred();
	else if (IsCmd("#IFDEF")) CompIfDefined();
	else if (IsCmd("#IFUNDEF")) CompIfUndefined();
	else if (IsCmd("#ENDIF")) CompEndIf();
// standard compilations
	else if (IsWord()) CompWord();
	else if (IsNumber()) CompNumber();
	else LTerminate("word not found"); }
// check flow control flags 
	if (cfs) { cfs=abs(cfs);
	  if (cfs>=20000) cfm="FOR..NEXT";
	  else if (cfs>=10000) cfm="DO..+|LOOP";
	  else if (cfs>=1000) cfm="BEGIN..UNTIL|REPEAT|AGAIN";
	  else if (cfs>=100) cfm="OF..ENDOF";
	  else if (cfs>=10) cfm="CASE..ENDCASE";
	  else cfm="IF..ENDIF";
	  strcpy(string,cfm), strcat(string," flow control imbalance");
	  LTerminate(string); } 
	CheckFlag(); }

void DoColon(void) { // : (read name as token from input source)
	if (numctl) LTerminate("found unconsumed number");
	MakeHeader(':'), WalkColon(); }

void DoesColon(void) { // : (use prepared token)
	if (numctl) LTerminate("found unconsumed number");
	MakesHeader(':'), WalkColon(); }

// ---------------------------------------------------------------------------
//   Do other Toplevel Definitions

void DoVariable(void) { // VARIABLE
	num=numctl*num, numctl=0;
	MakeHeader('v');
	hd[hdi].par=num;
	PR("\n\nmfCell MF%08X=%d%s; // %d%s",tokhash,num,CS(),num,CCS());
	PHD("VARIABLE"); 
	PR("\n  mfpush(&MF%08X);\n}",tokhash);
	CheckFlag(); }

void DoBuffer(void) { // BUFFER:
	if (!numctl) LTerminate("missing buffer length");
	MakeHeader('b');
	hd[hdi].par=num, numctl=0;
	PR("\n\nmfChar MF%08X[%d%s]={0}; // %d%s",tokhash,num,CS(),num,CCS());
	PHD("BUFFER"); 
	PR("\n  mfpush(MF%08X);\n}",tokhash);
	CheckFlag(); }

void DoConstant(void) { // CONSTANT
	if (!numctl) LTerminate("missing constant number");
	MakeHeader('c');
	hd[hdi].par=num, numctl=0;
	PR("\n\nconst mfCell MF%08X=%d%s; // %d%s",tokhash,num,CS(),num,CCS());
	PHD("CONSTANT");
	PR("\n  mfpush(MF%08X);\n}",tokhash);
	CheckFlag(); }

void DoIs(void) { // IS
	ReadToken(); 
	IsWord(); if (!hdf) LTerminate("deferred word not found");
    if (hd[hdi].typ=='d') { // last is vector
      if (hd[hdf].typ=='d') LTerminate("can't chain deferred words");
      hd[hdi].par=hdf, hd[hdi].dep[hdf]=1; }
    else { // last is def
      if (hd[hdf].typ!='d') LTerminate("is no deferred word");
	  hd[hdf].par=hdi, hd[hdf].dep[hdi]=1; } }

void DoDefer(void) { // DEFER
	MakeHeader('d'); 
	int ref=hd[hdi].par;
	PR("\n\nmfXT MF%08X=",tokhash); 
	if (ref) { PR("mf%08X; // IS %s",hd[ref].hash,PN(hd[ref].name)); }
	else { PR("NULL;"); }
	PHD("DEFER"); 
	PR("\n  (MF%08X)();\n}",tokhash);
	CheckFlag(); }

void DoDeferColon(void) { // DEFER:
	DoDefer();
    memmove(token+2,token,toklen+1), memmove(uptoken+2,uptoken,toklen+1);
    memcpy(token,"__",2), memcpy(uptoken,"__",2), toklen+=2, Hash();
	DoesColon();
    hd[hdi-1].par=hdi, hd[hdi-1].dep[hdi]=1; }

void DoCells(void) { // CELLS
	if (!numctl) LTerminate("missing number of cells");
	cel=1; }

void DoFloats(void) { // FLOATS
	if (!numctl) LTerminate("missing number of floats");
	cel=2; }

void DoNumber(void) { // check if number available
    if (numt) LTerminate("no integer number");
    if (numctl) LTerminate("number already set");
    numctl=1; }

void DoReduce(void) { // enable recursive reduction algorithm
	reduce=1; }

void DoImmediate(void) { // IMMEDIATE
    int i=hdi;
	while ((hd[i].name[0]=='_')&&(hd[i].name[1]=='_')) i--;
	hd[i].flag|=1; }

void DoCompOnly(void) { // COMPILE-ONLY
    int i=hdi;
	while ((hd[i].name[0]=='_')&&(hd[i].name[1]=='_')) i--;
	hd[i].flag|=2; }
	
void DoInline(void) { // INLINE
    int i=hdi;
	while ((hd[i].name[0]=='_')&&(hd[i].name[1]=='_')) i--;
	hd[i].inl=1; }

void DoCLine(void) { // C toplevel
	ReadCLine();
    PR("\n%s",token); }

// ---------------------------------------------------------------------------
//   Require other Source Files

void AddIncluded(char* name) { // add new file to array of included files
   strncpy(infiles[inf],name,FILELEN);
   if (++inf>=INFILES) LTerminate("too many included source files"); }

// forward declarations for nesting:
void CloseFFile(void);
void ParseFFile(void);

void DoInclude(void) { // nestable inclusion of source files
   FILE *ifile; char ifilename[FILELEN]; int i,iln;
   GetStringPar(); iln=strlen(string);
   for (i=0;i<iln;i++) if(string[i]=='\\') string[i]='/';
   if (IsIncluded(string)) return;
   AddIncluded(string);
   ifile=ffile,  strcpy(ifilename,ffilename);
   if (NULL == (ffile = fopen(string,"r")))
      LTerminate("can't include source file");
   strncpy(ffilename,string,FILELEN), ffilename[FILELEN-1]=0;
   iln=ln, ln=0;
   if (!pass) printf("\nIncluding %s",ffilename);
   ParseFFile();
   CloseFFile();
   ln=iln, ffile=ifile;
   strcpy(ffilename,ifilename); }

void DoDefined(void) {
	if (numctl) LTerminate("found unconsumed number");
	ReadToken(); IsWord();
	numctl=1, num=(hdf?1:0); }

void DoUndefined(void) {
	if (numctl) LTerminate("found unconsumed number");
	ReadToken(); IsWord();
	numctl=1, num=!hdf; }

void DoIf(void) {
	if (!numctl) LTerminate("missing flag");
	if (iffl) LTerminate("nested [IF]..[THEN]");
	numctl=0; if (!num) SkipComment("[IF]","[THEN]");
 	else iffl++; }

void DoThen(void) {
	if (numctl) LTerminate("found unconsumed number");
	if (iffl!=1) LTerminate("[THEN] without prior [IF]");
	iffl--;	}

// ---------------------------------------------------------------------------
//   Parse Toplevel Definitions in Source

void ParseFFile(void) { // walk through interpreted toplevel definitions
	fseek(ffile,0,SEEK_SET);
	while (GetToken()) {
		 if (IsCmd(":")) DoColon();
	else if (IsCmd("C")) DoCLine();
	else if (IsCmd("DEFER")) DoDefer();
	else if (IsCmd("DEFER:")) DoDeferColon();
	else if (IsCmd("IS")) DoIs();
	else if (IsCmd("VARIABLE")) DoVariable();
	else if (IsCmd("BUFFER:")) DoBuffer();
	else if (IsCmd("CONSTANT")) DoConstant();
	else if (IsCmd("CELLS")) DoCells();
	else if (IsCmd("FLOATS")) DoFloats();
	else if (IsCmd("[DEFINED]")) DoDefined();
	else if (IsCmd("[UNDEFINED]")) DoUndefined();
	else if (IsCmd("[IF]")) DoIf();
	else if (IsCmd("[THEN]")) DoThen();
	else if (IsNumber()) DoNumber();
	else if (IsCmd("IMMEDIATE")) DoImmediate();
	else if (IsCmd("COMPILE-ONLY")) DoCompOnly();
	else if (IsCmd("INLINE")) DoInline();
	else if (IsCmd("#INCLUDE")) DoInclude();
	else if (IsCmd("#REDUCE")) DoReduce();
	else LTerminate("unknown toplevel word"); } }

// ---------------------------------------------------------------------------
//   Process Transpiler Dictionary incl. Dependency Trees
 
void ReduceTrees(int def) // mark only required definitions for MAIN
{  if (hd[def].dep[0]) return;
   hd[def].dep[0] = 1;
   for (int i=1;i<=hdmax;i++)
	  if (hd[def].dep[i]) ReduceTrees(i); } // descend branches

void ReduceDictionary(void) { // walk dictionary and mark dependencies
	strcpy(uptoken,"MAIN"); Hash(); 
    if (!IsWord())
		LTerminate("can't reduce without MAIN");
	for (int i=1;i<=hdmax;i++)
		hd[i].dep[0]=0; 
	ReduceTrees(hdf);
	for (int i=1;i<=hdmax;i++)
		if (!hd[i].dep[0]) hd[i].hid=3; 
	strcpy(uptoken,"_SEARCHNT"); Hash(); 
    if (IsWord()) { if (hd[hdf].dep[0]) 
		LTerminate("can't reduce Forth interpreter"); } }

void PrepareDictionary(void) { // set remaining transpiler dictionary fields
	int link=0;
	if (reduce) ReduceDictionary();
	for (int i=1; i<=hdmax; i++) {
		if (hd[i].hid>=2) continue; else hdd++;
		if (hd[i].hid) hdh++; else hd[i].link=link,link=hdd;
		hd[i].hdd=hdd; } }

// ---------------------------------------------------------------------------
//   Write C File

void WriteIntro(void) { // write intro to C target
    time_t t=time(NULL);
    PR("/* ----------- MinForth C Target -----------");  
    PR("\n   - transpiled by emf2c ----- do not edit -");
    PR("\n   - Forth source : %s",ffilename);
    PR("\n   - built %s",ctime(&t));
	PR("\n   (see license conditions in mflicense.txt)\n*/");
    PR("\n\n#include \"mf3.h\""); }

void WriteDeclarations(void) { // write function declarations
	PR("\n\n// --- Forward Declarations ---\n");
	for (int i=1; i<=hdmax; i++) {
		HD h=hd[i];
		if (h.hid==3) continue;
		if (h.inl) { PR("\nstatic inline "); } else { PR("\n"); }
		PR("void mf%08X(void); // %s",h.hash,PN(h.name)); } }

void WriteDictionary(void) { // write dictionary
	PR("\n\n// --- Forth Dictionary ---\n");
	PR("\nmfHdr mfdict[%d]={{NULL,0,NULL,NULL}",hdd+1);
	for (int i=1; i<=hdmax; i++) { 
		HD h=hd[i]; 
		if (h.hid>=2) continue;		
		if (h.hid>=2) continue;		
		PR(",\n{mfdict"); if (h.link) { PR("+%d",h.link); }
		PR(",%d,\"\\%03o%s\"",h.flag,h.len,DN(h.name));
		PR(",mf%08X}",h.hash); }
	PR("};");
	PR("\n\n// --- Search Parameters");
	PR("\n\n#define MFPRIMS %d",hdd);
	PR("\nvoid* MFLAST=mfdict+MFPRIMS;");
	PR("\nvoid* MFLATEST=mfdict+MFPRIMS;");
	PR("\nvoid* MFFWL[3]={mfdict+MFPRIMS,\"\\005FORTH\",NULL};");
	PR("\nvoid* MFCTX[8]={MFFWL,NULL};");
	PR("\n\n#include \"mf3.sys\"");
	PR("\n\n// --- Forth Definitions"); }

void WriteMain(void) { // write C main if Forth MAIN is defined
    if (IsDefined("MAIN")) {
	int hdm=hdf;
	PR("\n\n// --- C Main ---");
	PR("\n\nint main(int argc, char* argv[]) {");
    PR("\n  mfstk=malloc((1+mfstksize)*MFSIZE), mfsp=mfstk;");
	PR("\n  mflp=mfstk+mfstksize;");
    PR("\n  mfrst=malloc((1+mfrstsize)*MFSIZE), mfrp=mfrst;");
    PR("\n  mffst=malloc((1+mffstsize)*MFSIZE*MFFLTSIZE), mffp=mffst;");
	PR("\n  mfargc=argc, mfargv=argv;");
	if (IsDefined("THROW")&&(hd[hdf].hid!=3))
	   PR("\n  mfTHROW=mfE5B4B40F;"); 
	PR("\n  setjmp(mfabort);");
	PR("\n  mf%X(); // %s\n}",hd[hdm].hash,hd[hdm].name); }
	PR("\n\n// --- End ---\n"); }

// ---------------------------------------------------------------------------
//   Transpiler Passes

void PreparePass1(void) { // allocate transpiler dictionary
	memset(hd,0,DICTSIZE*sizeof(HD)); }

void DoPass1(void) { // walk through source and fill transpiler dictionary
	ParseFFile();
	hdmax=hdi; }

void PreparePass2(void) { // update transpiler dictionary
	PrepareDictionary();
	pass=1; }

void DoPass2(void) { // write declarations & definitions to C target file
	WriteIntro();
	WriteDeclarations();
	WriteDictionary();
    hdi=0, cel=0, inf=0;
	ParseFFile();
	WriteMain(); }

// ---------------------------------------------------------------------------
//   File Functions

void GetFileName(int argc, char *argv[]) { // get Forth definition file name 
   int i,nset=0; char *a,*b;
   strcpy(ffilename,"mf3.mfc"), strcpy(cfilename,"mf3.c");
   for (i=1;i<argc;i++)
   {  if ((argv[i][0]=='-')&&(argv[i][1]=='v'))
      {  verbose = 1; continue; }
      if (nset==1) goto nok;
      strncpy(ffilename,argv[i],FILELEN-4), strcpy(cfilename,ffilename);
      if (NULL == (a = strrchr(ffilename,'/'))) a = ffilename;
      if (NULL == (b = strrchr(ffilename,'\\'))) b = ffilename;
      if (b > a) a = b;
      if ((*a == '/')||(*a == '\\')) a++; //  a points to filename in path
      if (NULL != (b = strrchr(a,'.'))) cfilename[b-ffilename]=0;
	  else strcat(ffilename,".mfc");
      strcat(cfilename,".c"); 	  
      nset=1; }
   return;
nok: Terminate("\nWrong parameters.\nUsage: mf2c [-v] [forthfile]"); }

void OpenFFile(char *fname) { // open Forth source file 
   if (NULL == (ffile = fopen(fname,"r")))
      Terminate("can't open Forth file"); }

void CloseFFile(void) { // close Forth file  
   if (fclose(ffile) == EOF)
      Terminate("Forth file close error"); }

void CreateCFile(void) { // create C target file 
   if (NULL == (cfile = fopen(cfilename,"w")))
      Terminate("can't create C file"); }

void CloseCFile(void) { // close C file sprintf
   if (fclose(cfile) == EOF)
      Terminate("image file close error"); }

// ---------------------------------------------------------------------------
//   Dictionary Analytics

void ShowUsage(void) {
	int a=0,i,j;
	for (i=1;i<=hdmax;i++) hd[i].dep[0]=0; // delete dep0
	for (i=1;i<=hdmax;i++) { // sum references within hl words
		for (j=1;j<=hdmax;j++) {
			if (hd[i].dep[j]) hd[j].dep[0]+=1; } }
	printf("\n\nUnused words: "); 
	for (i=1;i<=hdmax;i++)
		if (!hd[i].dep[0]) printf(" %s",hd[i].name);
	for (i=1;i<=hdmax;i++) { // get max count
		j=hd[i].dep[0];
		if (j>a) a=j; }
    printf("\n\nColon words usage ranking: "); 
    for (i=a;i>1;i--)
		for (j=1;j<=hdmax;j++)
			if ((hd[j].dep[0]==i)&&(hd[j].typ==':'))
				printf(" %s",hd[j].name);
	printf("\n\n"); }

// ---------------------------------------------------------------------------
//   Transpiler Main

int main(int argc, char* argv[]) { // 2-pass transpiler MinForth to C
   printf("\nMinForth V3.4 to C Transpiler");
   printf("\n-----------------------------");
   GetFileName(argc,argv);
   printf("\nReading Forth source file %s",ffilename);
   OpenFFile(ffilename), CreateCFile();
   PreparePass1();
   DoPass1();
   printf("\nTotal definitions: %d",hdmax);
   PreparePass2();
   printf("\n - in dictionary:  %d",hdd);
   printf("\n - therein hidden: %d",hdh);
   printf("\nWriting C target file %s",cfilename);
   DoPass2();
   CloseCFile(), CloseFFile();
   printf("\n");
// ShowUsage();
   return(EXIT_SUCCESS); }
