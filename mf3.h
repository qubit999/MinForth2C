/* ===========================================================================
   MINFORTH V3.4 GLOBAL C DECLARATIONS
   ===========================================================================
*/

// ====== Build Parameters ===================================================

// Compile runtime error checking code (O: no / 1: yes, recommended)
#define MFRTCHECK    1

// Default size of data space, stacks, input buffers
#define MFDSPSIZE    1024*1024
#define MFSTKSIZE    128
#define MFFSTSIZE    16  // min 6 when float included
#define MFRSTSIZE    128
#define MFIB         160

// ====== C Compiler settings ================================================

// Suppress some compiler warnings
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

// note: set C compiler option for unsigned char 

// ------ Include C Libraries ------------------------------------------------

#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>
#include <time.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <float.h>
#include <math.h>

#if defined _WIN32
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <direct.h>

#elif defined __linux__  /* Linux */
   /* POSIX/LINUX: leave the real open/close/read/write/lseek in place */
   #include <unistd.h>
   #include <fcntl.h>

#elif defined __unix__  /* BSD, Solaris, etc. */
+  #include <unistd.h>
+  #include <fcntl.h>
+#elif defined(__APPLE__) /* macOS is POSIX, too! */
+  #include <unistd.h>
+  #include <fcntl.h>
 #else
-#error  -- Unsupported System --
+#error  "mf3.h: Unsupported system; you must be on Windows or a POSIX OS"
 #endif

// ------ Recognize 32/64 Bit Compilers --------------------------------------

#if INTPTR_MAX == 0x7FFFFFFF
# define MFSIZE 4
# define MFFLTSIZE 2
# define MF32
# define MFDBL
# define MFBITS 32
#elif INTPTR_MAX == 0x7FFFFFFFFFFFFFFF
# define MFSIZE 8
# define MFFLTSIZE 1
# define MF64
# define MFBITS 64
# ifdef __GNUC__
#  define MF128
#  define MFDBL
# endif
#else
# error -- Unsupported Bitness --
# include <stop>
#endif

// ------ Type Definitions ---------------------------------------------------

typedef int8_t		mfFlag;
typedef uint8_t     mfChar;
typedef int16_t	    mfWord;
typedef uint16_t    mfUWord; 
typedef int32_t  	mfInt;
typedef uint32_t	mfUInt;
#ifdef MF32
typedef int32_t     mfCell;
typedef uint32_t    mfUCell;
typedef int64_t     mfDbl;
typedef uint64_t    mfUDbl;
#endif
#ifdef MF64
typedef int64_t     mfCell;
typedef uint64_t    mfUCell;
#endif
#ifdef MF128
typedef __int128          mfDbl;
typedef unsigned __int128 mfUDbl;
#endif
typedef float		mfSFlt;
typedef double		mfFlt;

// ------ Dataspace and Stacks Declarations ----------------------------------

mfChar  mfdsp[MFDSPSIZE];		// data space
mfChar *mfdp=mfdsp;	
mfCell *mfstk, *mfsp, *mflp;    // data and locals stack
mfUCell mfstksize=MFSTKSIZE;
mfCell *mfrst, *mfrp;           // return stack
mfUCell mfrstsize=MFRSTSIZE;
mfFlt  *mffst, *mffp;           // fp-stack
mfUCell mffstsize=MFFSTSIZE;
mfChar  mfbuf[MFIB];  			// global scratch buffer

// ------ Execution ---------------------------------------------vv-------------

typedef void (*mfXT)(void); // execution token
mfXT    **mfip, *mfw;		// instruction pointers	

int    mfargc;				// command line arguments
char** mfargv;

// ------ Dictionary ---------------------------------------------------------

typedef struct MFHDR {		// MinForth Header struct
	struct MFHDR* link;     // to previous in vocabulary
	mfUCell		  pfa;      // parameter and flags address
	char*         nfa;      // name field address 
	mfXT     	  cfa; 	    // code field address
} mfHdr;

// ------ Stack Macros -------------------------------------------------------

#define mfontos		 mfsp[1]
#define mftos		 *mfsp
#define mfsec		 mfsp[-1]
#define mfthd		 mfsp[-2]
#define mffth		 mfsp[-3]
#define mfdrop       mfsp--
#define mf2drop		 mfsp-=2
#define mfpop()		 *mfsp--
#define mfup		 ++mfsp
#define mf2up		 mfsp+=2
#define mfpush(x)    *++mfsp=(mfCell)(x)
#define mfspush(s)	 mfpush(s),mfpush(strlen(s))

// ------ FP-Stack Macros ----------------------------------------------------

#define mffontos	 mffp[1]
#define mfftos		 *mffp
#define mffsec		 mffp[-1]
#define mffthd		 mffp[-2]
#define mffdrop      mffp--
#define mff2drop     mffp-=2
#define mffpop()	 *mffp--
#define mffup		 ++mffp
#define mffpush(x)   *++mffp=(mfFlt)(x)

// ------ Return-Stack Macros ------------------------------------------------

#define mfrup		++mfrp
#define mfrtos      *mfrp
#define mfrsec      mfrp[-1]
#define mfrdrop     mfrp--
#define mfrpop()    *mfrp--
#define mfrpush(x)  mfrp++,*mfrp=(mfCell)(x)

// ------ Double Integer Macros ----------------------------------------------

#ifdef MFDBL
#define mfdontos	*(mfDbl*)(mfsp+1)
#define mfdtos		*(mfDbl*)(mfsp-1)
#define mfdsec		*(mfDbl*)(mfsp-3)
#define mfdpop()	(mf2drop,mfdontos)
#define mfdpush(d)	(mf2up,mfdtos=(mfDbl)(d))
#endif

// ------ Memory Macros ------------------------------------------------------

#define mfcat(x)	  *(mfChar*)(x)
#define mfat(x)		  *(mfUCell*)(x)
#define mffat(x)	  *(mfFlt*)(x)
#define mfaligned(x)  ((mfUCell)(x)+MFSIZE-1)&-MFSIZE
#define mffaligned(x) ((mfUCell)(x)+7)&-8

// ------ Flow-control Macros ------------------------------------------------

#define mfIF        if(mfpop()){
#define mfNOTIF     if(!mfpop()){
#define mfDUPIF		if(mftos){
#define mfELSE      }else{
#define mfTHEN      }

#define mfCASE		while(1){		
#define mfOF		if(mfdrop,mftos==mfontos){mfdrop;
#define mfNOTOF		if(mfdrop,mftos!=mfontos){mfdrop;
#define mfDUPOF		if(mfdrop,mftos==mfontos){
#define mfENDOF		break;}
#define mfENDCASE	mfdrop;break;}

#define mfBEGIN    	do{
#define mfUNTIL    	}while(!mfpop());
#define mfNOTUNTIL  }while(mfpop());
#define mfDUPUNTIL	}while(!mftos));
#define mfWHILE    	if(!mfpop())break;
#define mfNOTWHILE  if(mfpop())break;
#define mfDUPWHILE  if(!mftos)break;
#define mfREPEAT   	}while(1);
#define mfAGAIN		}while(-1);
#define mfCONTINUE  continue;
#define mfBREAK     break;
#define mfEXIT      return;

#define mfFOR       for(mfCell fe=mfpop(),fn=0;fn<fe;fn++){
#define mfFORUP		for(mfCell fd=mfpop(),fe=mfpop(),fn=mfpop(),fi=0;\
					  fi<fe;fn+=fd,fi++){
#define mfDOWNFOR	for(mfCell fd=mfpop(),fe=mfpop(),fn=mfpop()+fd*(fe-1),fi=0;\
					  fi<fe;fn-=fd,fi++){
#define mfN			mfpush(fn);
#define mfPLUSN		fn+=mfpop();
#define mfNEXT		}
#define mfDO	    for(mfCell ds=mfpop(),de=mfpop(),dp=ds,di;\
    				  ((ds-de)^(dp-de))>=0;dp=ds,ds+=di){
#define mfQDO		for(mfCell ds=mfpop(),de=mfpop(),dp=ds-(de==ds),di;\
    				  ((ds-de)^(dp-de))>=0;dp=ds,ds+=di){
#define mfI			mfpush(ds);
#define mfLOOP		di=1;}
#define mfPLOOP		di=mfpop();}

// ------ Min/Max ------------------------------------------------------------

#ifndef min
#define min(x,y)    (x<y?x:y)
#endif
#if !defined max
#define max(x,y)    (x>y?x:y)
#endif

// ------ Exception Handling ------------------------------------------------- 

typedef struct MFXCF {   	// exception frame
	struct MFXCF*  old;  	// pointer to previous frame
	mfCell*        sp;   	// stack pointer
	mfCell*	       lp;		// locals stack pointer
	mfFlt*		   fp;		// fp-stack pointer
	mfCell*        rp;   	// returnstack pointer
	mfXT**         ip;   	// instruction pointer
	jmp_buf        buf;  	// jump buffer to last CATCH
} mfXcf;

mfXcf*  mfxcf=NULL;  		// global exception frame pointer
jmp_buf mfabort;  			// global jump buffer for uncaught exceptions
mfCell  mfxc=0;		 		// last exception code

mfXT mfTHROW=abort;			// low-level exception

// ------ Runtime Error Checking ---------------------------------------------

void mfthrow(int xc) { // call hilevel THROW
  mfxc=xc, mfpush(xc), mfTHROW(); }

#if MFRTCHECK          // safer with runtime error checking
int mfrtc=1;           // control flag
#define mferr(x);    if(mfrtc){x}

#define mfin(x)      if(mfsp<mfstk+(x))mfthrow(-4);
#define mfout(x)	 if(mfsp>=mflp-(x))mfthrow(-3);

#define mfrin(x)     if(mfrp<mfrst+(x))mfthrow(-6);
#define mfrout(x)	 if(mfrp>=mfrst+mfrstsize-(x))mfthrow(-5);

#define mfzero(x)	 if(!(x))mfthrow(-10);
#define mfless(r,b)  if(r<b)mfthrow(-24);
#define mflesseq(r,b) if(r<=b)mfthrow(-24);
#define mfgreater(r,b) if(r>b)mfthrow(-24);
#define mfgreatereq(r,b) if(r>=b)mfthrow(-24);
#define mfwithin(u,x,o)	if((mfCell)(x)<(mfCell)(u)||(mfCell)(x)>=(mfCell)(o)) \
					    mfthrow(-24);

#define mffin(x)     if(mffp<mffst+(x))mfthrow(-45);
#define mffout(x)	 if(mffp>=mffst+mffstsize-(x))mfthrow(-44);

#else // faster without runtime checking
int mfrtc=0;
#define mferr(...);
#endif

