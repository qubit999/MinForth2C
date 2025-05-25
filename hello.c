/* ----------- MinForth C Target -----------
   - transpiled by minf2c ----- do not edit -
   - Forth source : hello.mfc
   - built Sun May 25 05:11:58 2025

   (see license conditions in mflicense.txt)
*/
#if defined(__APPLE__)
#  define __linux__   1
#  define __unix__    1
#  define __MACH__    1
#  undef  __APPLE__
#endif

#include "mf3.h"

// restore real POSIX syscall names
#undef open
#undef close
#undef read
#undef write
#undef lseek
#undef unlink
#undef chdir
#include <unistd.h>
#include <fcntl.h>
#include <setjmp.h>
#undef _open
#undef _close
#undef _read
#undef _write
#undef _lseek
#undef _unlink
#undef _creat
#undef _chdir
#define _open   open
#define _close  close
#define _read   read
#define _write  write
#define _lseek  lseek
#define _unlink unlink
#define _creat  creat
#define _chdir  chdir


// --- Forward Declarations ---

void mfE5B4B40F(void); // THROW
void mf8B51E6F7(void); // _RP!
void mf3EC47269(void); // _RDEPTH
static inline void mf67FCEB09(void); // >R
static inline void mf130456D1(void); // R>
static inline void mf7D04FDAF(void); // R@
static inline void mf0807143C(void); // RDROP
static inline void mf982060C8(void); // RPICK
void mf89C518BC(void); // _SP!
static inline void mfCE61558A(void); // DEPTH
static inline void mf52C16B0C(void); // DROP
static inline void mfA2DF200E(void); // SWAP
static inline void mf87E8362E(void); // ROT
static inline void mf57E80646(void); // DUP
static inline void mf2FE7860F(void); // OVER
static inline void mf8003A4B3(void); // ?DUP
static inline void mfE67669F8(void); // PICK
static inline void mf63DECBC8(void); // NIP
static inline void mf93A82DE8(void); // TUCK
static inline void mfEFF28235(void); // -ROT
static inline void mf6AB5854A(void); // PLUCK
void mf5451721E(void); // ROLL
static inline void mfEF6476DC(void); // 2DROP
static inline void mfE0839FF6(void); // 2DUP
static inline void mf8C8BC01F(void); // 2OVER
static inline void mf404D123E(void); // 2SWAP
static inline void mf89F60699(void); // 2>R
static inline void mf34FF0561(void); // 2R>
static inline void mf3EFF151F(void); // 2R@
void mfE97032F9(void); // _LP!
void mfA14BE51B(void); // _FP!
void mfAC2CA76D(void); // NOOP
void mf501B0925(void); // TRUE
void mfEE597878(void); // FALSE
static inline void mfABEE47AA(void); // NOT
static inline void mf91666DC6(void); // AND
static inline void mf7CE4AA04(void); // OR
static inline void mf4F46575E(void); // XOR
static inline void mfD745D921(void); // INVERT
static inline void mf84439159(void); // LSHIFT
static inline void mf24728B77(void); // RSHIFT
void mf6FE81066(void); // ROL
void mf89E83954(void); // ROR
static inline void mf80E4B050(void); // ON
static inline void mf2E1505EA(void); // OFF
static inline void mf14ED5DD6(void); // 0=
static inline void mfDBAD15F5(void); // 0<>
static inline void mf15ED5F69(void); // 0<
static inline void mf13ED5C43(void); // 0>
static inline void mfD8AD113C(void); // 0<=
static inline void mfDCA89A5A(void); // 0>=
static inline void mf380CAD68(void); // =
static inline void mf93F7201F(void); // <>
static inline void mf390CAEFB(void); // <
static inline void mf3B0CB221(void); // >
static inline void mf94F721B2(void); // <=
static inline void mf10FC6214(void); // >=
static inline void mf0EF30764(void); // U<
static inline void mf10F30A8A(void); // U>
static inline void mfE194911B(void); // U<=
static inline void mf6599DE15(void); // U>=
static inline void mf2E0C9DAA(void); // +
static inline void mf280C9438(void); // -
static inline void mf5EE442DB(void); // NEGATE
static inline void mf26EB3B95(void); // 1+
static inline void mf20EB3223(void); // 1-
static inline void mf6C84489B(void); // ABS
static inline void mf2F0C9F3D(void); // *
void mf45BE23A2(void); // /MOD
static inline void mf2A0C975E(void); // /
static inline void mf6453F3A3(void); // MOD
static inline void mfA7F2C26D(void); // 2*
static inline void mfA2F2BA8E(void); // 2/
void mf09D242EA(void); // WITHIN
void mf1C599279(void); // MAX
void mf0E45F4B7(void); // MIN
void mfE40F181D(void); // _MU+
void mfE30F168A(void); // _MU*
void mf1691D15F(void); // _MU/MOD
void mfD9ACE697(void); // UM*
void mf5F2279EC(void); // UM/MOD
void mf16478CF0(void); // S>D
void mf8B105859(void); // DNEGATE
void mfE23549BD(void); // DABS
void mf1CDF95B6(void); // M*
void mf1705E412(void); // SM/REM
void mf66F1FDC7(void); // FM/MOD
void mfE5A71F0A(void); // */MOD
void mf22DE6956(void); // */
static inline void mf2FEE4BC2(void); // CHAR+
void mfC7EDA80A(void); // CHARS
static inline void mf76DA1336(void); // C@
static inline void mf97DA4729(void); // C!
void mfC2064154(void); // MOVE
void mfAF3DC588(void); // FILL
void mfB7F60EB5(void); // ERASE
static inline void mfBB8FCA7A(void); // CELL+
static inline void mfB58FC108(void); // CELL-
static inline void mf662FFFF5(void); // CELL
static inline void mf838F7252(void); // CELLS
static inline void mfC50BF85F(void); // @
static inline void mf240C8DEC(void); // !
static inline void mf08DC01D1(void); // +!
static inline void mf5A131C6F(void); // INCR
static inline void mf7D948B73(void); // DECR
static inline void mf3DF21B8F(void); // 2@
static inline void mf9CF2B11C(void); // 2!
void mfA3F7B2D4(void); // COUNT
void mf62A404AF(void); // /STRING
void mf2BEE4576(void); // CHAR/
void mf465CFE55(void); // _TOUPPER
void mfEE2653C2(void); // _UPPER
void mfA274DA18(void); // CAPS
void mfA7AD15F7(void); // STR=
void mf10E38971(void); // _PLACE
void mf12E2D898(void); // _ORIGIN
void mf9F4C117D(void); // _LIMIT
void mf0119CBC8(void); // _#IB
void mfB93DEEA6(void); // _HP
static inline void mfD148A1CA(void); // _DP
void mf901B2AFF(void); // ALIGNED
static inline void mf5F2B6B8B(void); // HERE
void mf9E0B1B0A(void); // PAD
void mfCF430E1B(void); // UNUSED
void mfAFA183BE(void); // ALIGN
void mf3FA1943F(void); // ALLOT
void mfE972DB58(void); // BASE
static inline void mf48AF9A2C(void); // DECIMAL
static inline void mf818F192A(void); // HEX
void mf7A717643(void); // _DIGIT>N
void mf5773A68C(void); // >NUMBER
void mfDF58554B(void); // __DBL
void mfE37AEDD9(void); // __DPL
void mf60DFCE8E(void); // __BASE
void mfCC4D88AE(void); // __SIGN
void mf15208282(void); // __NUMADJ
void mf867FFF4D(void); // NUMBER?
void mf1BF6A5CC(void); // _NUMBER?
static inline void mfD9BC5E8A(void); // EMIT
void mf20DD5D6B(void); // BL
void mf1808F0E5(void); // SPACE
void mf8C12EE82(void); // SPACES
static inline void mf64D9F6E0(void); // CR
void mf142FE78D(void); // TYPE
void mf6B388877(void); // _N>DIGIT
void mf4DCEA979(void); // __HLD
void mf6F86C1B1(void); // __NUM
void mf5389E74A(void); // _,SEP
void mfEBB64F78(void); // HOLD
void mf3AFEA0B1(void); // HOLDS
void mfA6F73E08(void); // <#
void mf260C9112(void); // #
void mf11C88844(void); // #>
void mf26C8A953(void); // #S
void mf0AADBFA4(void); // SIGN
void mfE4E51507(void); // _(.)
void mf2B0C98F1(void); // .
void mf67D44899(void); // .R
void mfFD90D4E8(void); // _(U.)
void mf20F323BA(void); // U.
void mfC6C18638(void); // U.R
void mfB994E9E7(void); // DEC.
void mfF844614C(void); // HEX.
void mf83CFF77F(void); // ,.
void mfAD621BD7(void); // ,.R
void mf72BC84CE(void); // U,.
void mf3AC4C194(void); // U,.R
void mfACCAE4CC(void); // KEY
void mf2345CC3A(void); // __KEY
void mf209E17E9(void); // ACCEPT
void mfD3091947(void); // __ACCEPT
void mfC49B66C5(void); // _TIB
void mfB3D82B11(void); // _SIBS
void mf0FF74456(void); // __SIBID
void mf12AE9718(void); // _SIB
void mfCFEC5BB6(void); // _>SIB
void mf01A69217(void); // _SRCSPEC
void mf7C1EEF6B(void); // _SRCLEN
void mf7A91D589(void); // _SRCADR
void mfFD898658(void); // _SRCID!
void mf5AF98C79(void); // _SRC2!
void mf600421B4(void); // _SRC>R
void mfD24E2A14(void); // _R>SRC
void mfB9790298(void); // SOURCE
void mf580B1E42(void); // >IN
void mf254113A2(void); // SOURCE-ID
void mfDC799960(void); // BLK
void mf94A8FFED(void); // SAVE-INPUT
void mf3D67AD0F(void); // __SAVE-INPUT
void mfA10A7AB8(void); // RESTORE-INPUT
void mf97C8D2EE(void); // __RESTORE-INPUT
void mfC1D4E711(void); // REFILL
void mf9715CACF(void); // __REFILL
void mfD66336C5(void); // _SKIP
void mfC119E57B(void); // _SCAN
void mfB8B7D9B3(void); // __PRSAREA
void mf60C7C223(void); // __PRSOVF
void mfADFC5551(void); // _PARSE
void mfD918C10C(void); // PARSE
void mfF08832C0(void); // _PARSE-CHAR
void mfE9BCE12F(void); // _PARSE-NAME
void mfF92179F8(void); // PARSE-NAME
void mfF939F00F(void); // _PARSED
void mf5242998B(void); // _SWORD
void mf6D01E13D(void); // WORD
void mfC94E167C(void); // _PARSE-WORD
void mfA59F665D(void); // CHAR
void mfD90C17DB(void); // |
void mf075A3FED(void); // __|
void mf2D0C9C17(void); // (
void mf93598951(void); // __(
void mf9DD49D9B(void); // .(
void mf85A4C44F(void); // _WORDLISTS
void mf82CE5579(void); // _CONTEXT
void mf4FBFA22C(void); // _SEARCHNT
void mf9E5A6ED4(void); // _SEEKNT
void mfA240DD3A(void); // _SEEKXT
void mf7571BB77(void); // _TEMPWL
void mf97C25204(void); // __HID
void mf6180557C(void); // UNHIDE>
void mf9C545369(void); // HIDE>
void mf93C45CF9(void); // HIDDEN
void mf5AADB2E4(void); // _FIND-WORD
void mf824A24DA(void); // ___FIND-WORD
void mfFB42BA5A(void); // FIND
void mf220C8AC6(void); // '
void mfCF77DFB8(void); // EXECUTE
void mfE09A6F96(void); // STATE
void mf290C95CB(void); // ,
void mf1479C7E3(void); // _[LIT]
void mfBAFC44C4(void); // LITERAL
void mfB6918D28(void); // _RECLIST
void mf26F8E50E(void); // _LITERAL?
void mf12FA26A3(void); // ??
void mf87601DFB(void); // _INTERPRET
void mf9FC8664E(void); // _EXCSRC
void mfB851E7EC(void); // ___EXCSRC
void mf93D1E229(void); // _EXCMSG
void mf744370F3(void); // ___EXCMSG
void mf407C881D(void); // _EXCCODE
void mf2B37385B(void); // ___EXCCODE
void mfEAF28AAC(void); // CATCH
void mf773B319E(void); // _THROW
void mfE0D91783(void); // FAST>
void mf03A71F52(void); // SAFE>
void mf319DE64A(void); // EVALUATE
void mf2C72BE34(void); // _PROMPT
void mf04CAF222(void); // ___PROMPT
void mf84D9BC36(void); // QUIT
void mf8A823C60(void); // _>LINK
void mf4B2037E9(void); // _>PFA
void mf03D7EB73(void); // _>NAME
void mf74404CD4(void); // _>CFA
void mfC439E65E(void); // _<CFA
void mfE345B847(void); // _CURRENT
void mfB8F49A42(void); // _LAST
void mfEA08BD65(void); // _LATEST
void mfEF0255CF(void); // WARNING
void mf5013BC6B(void); // _NAMED
void mf9DA7D846(void); // NAMED
void mf20B9677F(void); // _HEADER
void mf3BFC9593(void); // _REVEAL
void mf779E612E(void); // _HIDE
void mfA483CD31(void); // __FLG!
void mfD1E3DADA(void); // IMMEDIATE
void mf72FB7883(void); // COMPILE-ONLY
void mfDE0C1FBA(void); // [
void mfD80C1648(void); // ]
void mfB988A2D6(void); // _[:]
void mf04316999(void); // __CSYS
void mf3FC95052(void); // __CSYS?
void mf3F0CB86D(void); // :
void mf3E0CB6DA(void); // ;
void mfA0599DC8(void); // __;
void mfF0A95069(void); // :NONAME
void mfBA444C0E(void); // [']
void mfD89985D6(void); // COMPILE,
void mfA66C8E4A(void); // [COMPILE]
void mf33530D01(void); // _POST[
void mf9A7AC789(void); // _]PONE
void mfDD00FE9F(void); // POSTPONE
void mfFDFF8019(void); // [CHAR]
void mfA2DA587A(void); // C,
void mf7BDCDF68(void); // _[SLIT]
void mf50BE3701(void); // SLITERAL
void mfF501E900(void); // S"
void mf94DA4270(void); // C"
void mf97D49429(void); // ."
void mfAC2233D4(void); // __PARSE|"
void mf853A39E8(void); // S|"
void mfA647402F(void); // .|"
void mfFF7226AE(void); // _ABORT"
void mfC3343021(void); // ABORT"
void mf79836105(void); // EXIT
void mfA686D353(void); // __EXIT
void mf992CB91D(void); // _[JMP]
void mf6156569F(void); // _[JMPZ]
void mf9592F3FF(void); // _MARK
void mf76D47BF1(void); // _>MARK
void mf79E02667(void); // _<MARK
void mf58E8EE86(void); // IF
void mf69F37330(void); // ELSE
void mfE78A4DB6(void); // THEN
void mfD8776DB1(void); // CASE
void mf88E4BCE8(void); // OF
void mfB2F63B9B(void); // ENDOF
void mf75E9FDF6(void); // ENDCASE
void mf2AEDCB62(void); // RECURSE
void mf3F126D5E(void); // BEGIN
void mf9A02B1AE(void); // WHILE
void mf6588C8EA(void); // REPEAT
void mf64F9C7EF(void); // UNTIL
void mf5E7C87EF(void); // AGAIN
void mfDA088408(void); // _[LOOP]
void mfC0946685(void); // _[DO]
void mfE2A5025C(void); // _[?DO]
void mf34D794DE(void); // __DO
void mf41CE86D4(void); // DO
void mfEC084DA3(void); // ?DO
void mfCC0C0364(void); // I
void mfCF0C081D(void); // J
void mfE11A6788(void); // UNLOOP
void mf354C36E0(void); // LEAVE
void mfF033FF78(void); // +LOOP
void mfDBE07C6B(void); // LOOP
void mfCE05F488(void); // BOUNDS
void mf3CF98E2B(void); // _[VAR]
void mf04B69205(void); // VARIABLE
void mf5047FCD5(void); // _[CONST]
void mfADA9DCA5(void); // CONSTANT
void mfCD566A47(void); // _[BUF]
void mf86AC1293(void); // BUFFER:
void mfCDFDC67E(void); // _[CREATE]
void mfC19230DD(void); // CREATE
void mf4520460B(void); // _<DOES
void mfFF60370A(void); // DOES>
void mf5E1BC1F8(void); // __DOES>
void mf800A2691(void); // >BODY
void mf5E8B98AB(void); // RECOGNIZER
void mf9F67357B(void); // _>V+
void mf99672C09(void); // _>V!
void mf38669356(void); // _>V@
void mf3C6699A2(void); // _>VD
void mf80B951E1(void); // _[VAL]
void mf24D3F916(void); // _(VALUE)
void mf2513E22A(void); // VALUE
void mfCCCCC70B(void); // __?VAL
void mf21F563E4(void); // TO
void mf14FE71EE(void); // __TO
void mf91736C8F(void); // +TO
void mf76991F71(void); // __+TO
void mfBA65A38C(void); // _[DEFER]
void mfDC2E9701(void); // DEFER@
void mf3B2F2C8E(void); // DEFER!
void mfE9EDB1DB(void); // DEFER
void mfCB746F0B(void); // __?DEF
void mf55EA9727(void); // ACTION-OF
void mf6DE90F95(void); // IS
void mf55174F30(void); // _[MARKER]
void mfB53F8A17(void); // MARKER
void mfD09523AC(void); // _ENVIRONMENT?
void mf70506F4E(void); // ___ENVIRONMENT?
void mf304F16BF(void); // ENVIRONMENT?
void mf1BDFA94F(void); // __NOLOGO
void mf153EF16E(void); // __BOOTED
void mf28B3832A(void); // _BOOT
void mf8A8942B4(void); // ___BOOT
void mfF766613E(void); // _START
void mfD6B694B8(void); // ___START
void mf49997C51(void); // _LOGO
void mf8F0754EB(void); // ___LOGO
void mfD2338EAD(void); // _RESET-STACKS
void mf4A1971BB(void); // ___RESET-STACKS
void mf946BA378(void); // _ABORT
void mf367DE7D9(void); // ABORT
void mfB6A8BBC3(void); // BYE
void mf3CD40A81(void); // __BYE
void mf4812015B(void); // __XCTRACE
void mfCF09AB1E(void); // __XCBACKTRACE
void mfCFCC69B8(void); // WHERE
void mf720CD026(void); // __XCTHROW
void mf4F319F25(void); // __XCEXCCODE
void mf37076D94(void); // __XCENVIRONMENT?
void mfC090D7CC(void); // SEARCH-WORDLIST
void mf346A6677(void); // FORTH-WORDLIST
void mfC220C34B(void); // __EMPTYWL
void mfDA547415(void); // __.VOC
void mfDAF5E977(void); // ORDER
void mf52EF5230(void); // VOCS
void mfE81D9A59(void); // WORDLIST
void mf0538B17B(void); // _!VOC
void mf4FE08CC9(void); // VOCABULARY
void mf1CECBE2C(void); // FORTH
void mfB52F140B(void); // SET-CURRENT
void mfBB3DE887(void); // GET-CURRENT
void mfB78902C9(void); // DEFINITIONS
void mfB81C6B28(void); // PREVIOUS
void mfD3AAC792(void); // ALSO
void mf85D1E1A1(void); // _ROOTWL
void mf1E4EDE85(void); // ROOT
void mf9AF1ED37(void); // ONLY
void mf57DD8CC6(void); // GET-ORDER
void mf02F15E02(void); // SET-ORDER
void mf04FB34A4(void); // __SCEXCCODE
void mf1230EC41(void); // __SCBOOT
void mfEAF793FE(void); // __SCENVIRONMENT
void mfE69B7462(void); // ALLOCATE
void mf97A522DB(void); // FREE
void mfAF26F721(void); // RESIZE
void mfCE7AD8ED(void); // __MEXCMSG
void mf1981A6D7(void); // __MENVIRONMENT
void mfADF95DF3(void); // R/O
void mfAE118C5C(void); // W/O
void mfC5F983BB(void); // R/W
void mfDF81ECDE(void); // BIN
void mfFB4621B4(void); // FILE-STATUS
void mfC911533D(void); // EXIST-FILE
void mf220B8735(void); // FILE-POSITION
void mf8CAE1B93(void); // FILE-SIZE
void mf45455D7C(void); // REPOSITION-FILE
void mf68AAA8F2(void); // RESIZE-FILE
void mf0029C11C(void); // RENAME-FILE
void mf207DC7E3(void); // DELETE-FILE
void mf4D44B3FD(void); // STDIN
void mfD92AC866(void); // STDOUT
void mf4F8412B5(void); // STDERR
void mf3C8F801A(void); // OPEN-FILE
void mfD2C02CE6(void); // CREATE-FILE
void mfE7813386(void); // FLUSH-FILE
void mfB7443E2C(void); // CLOSE-FILE
void mf1ED165FD(void); // WRITE-FILE
void mf00FC6F09(void); // WRITE-LINE
void mf71E6784E(void); // READ-FILE
void mf68B9A0A2(void); // READ-LINE
void mfB0766C12(void); // LIST-FILE
void mf0D0C3A36(void); // __FILEWL
void mfA92D1570(void); // FILES
void mf1085E39D(void); // __FILE
void mf30A80A8D(void); // _SLN
void mfFF1C37B3(void); // __POS
void mf6FB85E7D(void); // __NAM
void mfB69116BF(void); // __FSRC>R
void mfC81E32AF(void); // __R>FSRC
void mf9B1237DF(void); // FORGET-INCLUDED
void mf10326A51(void); // __INCLUDE
void mf5C03B764(void); // __ISINCLUDED?
void mf0631BAC6(void); // __ADDINCLUDED
void mfE2E62798(void); // INCLUDE-FILE
void mf3CC67F79(void); // INCLUDED
void mf4A045F20(void); // REQUIRED
void mf40C75207(void); // INCLUDE
void mf916A1824(void); // REQUIRE
void mf70A53D75(void); // __FLREFILL
void mf202AC333(void); // __FL(
void mf36090B18(void); // |S
void mf5112581A(void); // __|S
void mfA540A49C(void); // __FLSVINPUT
void mf38712CFA(void); // __FLRSTINPUT
void mf45EF8172(void); // __FLEXCMSG
void mf03406B1E(void); // __FLENVIRONMENT
void mfA4959F21(void); // __FLBOOT
void mf4375DF0F(void); // (TIMER)
void mf35DFBD11(void); // MS
void mf889600AF(void); // _TIMER
void mf382762B2(void); // __TMFL
void mfFAA3E0E8(void); // TIMER-RESET
void mf2F77738D(void); // TIMER-STOP
void mfC3A5A6AF(void); // .ELAPSED
void mf603D5B62(void); // RANDOM
void mf94BA29B2(void); // TIME&DATE
void mfC1528055(void); // WEEKDAY
void mfA71A54D5(void); // DAYLIGHTSAVING
void mf16954D39(void); // _TIME$
void mfA9FEB30C(void); // _WEEKDAY$
void mf4900DA24(void); // _MONTH$
void mf36F6EBFA(void); // _DATE$
void mf1B1FA7CA(void); // BEGIN-STRUCTURE
void mf316084C6(void); // END-STRUCTURE
void mfEF03F461(void); // _+FIELD
void mf4F90F13E(void); // +FIELD
void mf3C3B6224(void); // CFIELD:
void mf39538B07(void); // FIELD:
void mfD1B716C0(void); // EKEY?
void mf38E5C67F(void); // EKEY
void mf9C0BB436(void); // EKEY>FKEY
void mf4D1CE30E(void); // K-SHIFT-MASK
void mf08D7F4BF(void); // K-CTRL-MASK
void mf85B23637(void); // K-ALT-MASK
void mf74934078(void); // K-F1
void mf77934531(void); // K-F2
void mf7693439E(void); // K-F3
void mf79934857(void); // K-F4
void mf789346C4(void); // K-F5
void mf7B934B7D(void); // K-F6
void mf7A9349EA(void); // K-F7
void mf6D933573(void); // K-F8
void mf6C9333E0(void); // K-F9
void mfCBCE3158(void); // K-F10
void mf0DD800EE(void); // K-HOME
void mf83B3ABC0(void); // K-UP
void mf96DF0DF7(void); // K-PRIOR
void mf8D5A8F90(void); // K-LEFT
void mf3280C6E5(void); // K-RIGHT
void mf5C78EFEA(void); // K-END
void mfB1D8C2F5(void); // K-DOWN
void mfD2B09D08(void); // K-NEXT
void mfA0546E08(void); // K-INSERT
void mf3653A2EA(void); // K-DELETE
void mfCCCE32EB(void); // K-F11
void mfCDCE347E(void); // K-F12
void mfD41B511B(void); // EKEY>CHAR
void mf1BE205F6(void); // EKEY>ECHAR
void mf8AB69C40(void); // __PKEY
void mfF6666A89(void); // KEY?
void mf7CB31EB3(void); // __FCKEY
void mf788916EF(void); // EMIT?
void mf78FA6A07(void); // VT
void mf9267E927(void); // __VTSET
void mfB2C838F9(void); // __VTCHAR
void mf9C5DA170(void); // VTNORMAL
void mf4B114CCB(void); // VTBRIGHT
void mf89B1A1B9(void); // VTUNDERLINE
void mf40D82043(void); // VTREVERSE
void mf74C8DEA7(void); // VTHIDDEN
void mfCAA480DE(void); // VTBLACK
void mfA569F60E(void); // VTRED
void mf430AE6BE(void); // VTGREEN
void mfF69B4083(void); // VTYELLOW
void mfD34E84E3(void); // VTBLUE
void mf9FE539DE(void); // VTMAGENTA
void mfAFA0318C(void); // VTCYAN
void mf3F9C8520(void); // VTWHITE
void mf6A78A9B6(void); // PAGE
void mfBEE2C2F4(void); // AT-XY
void mfE740E281(void); // GET-XY
void mf31B023B4(void); // SAVE-XY
void mf5C0DBF87(void); // RESTORE-XY
void mf7F99FF1B(void); // VTERASE
void mf2604FB32(void); // VTUP
void mf6AB7D413(void); // VTDOWN
void mf77661DA3(void); // VTRIGHT
void mf54A88DAE(void); // VTLEFT
void mfB81DD0EA(void); // PRINTF
void mf0EFFD357(void); // P"
void mfD45CF653(void); // __K-HIST
void mf1244A8B2(void); // __K-I
void mf82BDE93A(void); // __K-UPD
void mfC5B3D32F(void); // __K-LAST
void mf98870EED(void); // __K-ACT
void mfCE4C0FDE(void); // __K-RESET
void mfFB2DAD09(void); // __K-GET
void mf8F16E98A(void); // __K-INSDEL
void mf6A553006(void); // __K-INSERT
void mfEE36F1CC(void); // __K-DELETE
void mf8BDFFCD3(void); // __K-FKEYS
void mfBC6EE21B(void); // __K-ADJ-HIST
void mfB525B56C(void); // __FCACCEPT
void mf528B5A4C(void); // ARGC
void mf5F8B6EC3(void); // ARGV
void mf3FBAD1DC(void); // SYSTEM
void mf6E19C5B4(void); // DIR
void mf987D8205(void); // CHDIR
void mfB6B69E5E(void); // SYSEXIT
void mfDACA59F2(void); // __RESIZE-STACK
void mf38087488(void); // __RESIZE-RSTACK
void mf450A1A9C(void); // __RESIZE-FPSTACK
void mfE0018F77(void); // _STACKS
void mf92FE3A3D(void); // ___STACKS
void mf62E73D2D(void); // __EVALCMDLINE
void mf95F7CE78(void); // __FCSTART
void mf868F97AB(void); // __FCLOGO
void mf5ED1E4C5(void); // __FCENVIRONMENT
void mf54E088CC(void); // __FCBYE
void mf82118574(void); // __FCBOOT
void mfB49A1F9E(void); // 2ROT
void mfEEA51C98(void); // 2NIP
void mf37C99D78(void); // 2TUCK
void mf1EA943CC(void); // D>S
void mf1DCE4E28(void); // D+
void mf23CE579A(void); // D-
void mf8F8BE09B(void); // D2*
void mf928BE554(void); // D2/
void mf1ECE4FBB(void); // D*
void mf7ADB6C68(void); // D/REM
void mf581A2788(void); // D/MOD
void mf21CE5474(void); // D/
void mf00910FAC(void); // D0=
void mf0191113F(void); // D0<
void mf13CE3E6A(void); // D=
void mf83AE5FF9(void); // D<>
void mf14CE3FFD(void); // D<
void mf12CE3CD7(void); // D>
void mf84A9E45E(void); // D>=
void mf80AE5B40(void); // D<=
void mf03E7820A(void); // DU<
void mf01E77EE4(void); // DU>
void mfD86CAF9B(void); // DU>=
void mf5C71FC95(void); // DU<=
void mfA0BB6085(void); // DMIN
void mfEACF5CBB(void); // DMAX
void mf66C18A88(void); // DROL
void mf54C16E32(void); // DROR
void mf1DDF9749(void); // M+
void mf0CF87FDB(void); // M*/
void mf981F4C2E(void); // __(D.)
void mf22CE5607(void); // D.
void mf1FD1E7CF(void); // D.R
void mf865D0E31(void); // __(UD.)
void mf73967FB6(void); // UD.
void mfD9EB53EC(void); // UD.R
void mfF3D61FB9(void); // D,.
void mfC5143EF1(void); // D,.R
void mf8DE65F1A(void); // UD,.
void mfA9A7FE58(void); // UD,.R
void mfA1F2B8FB(void); // 2,
void mf071CC234(void); // 2LITERAL
void mf154B5C15(void); // 2CONSTANT
void mfEFCA0295(void); // 2VARIABLE
void mf5E07509A(void); // 2VALUE
void mf2FABFE3A(void); // __DENVIRONMENT
void mfE74BDF44(void); // _DOUBLE?
void mf71DFE06F(void); // DPL
void mf249E5635(void); // __DBOOT
void mf017B185E(void); // FDEPTH
static inline void mfF41B2E30(void); // FDROP
static inline void mf030EAC5C(void); // FPICK
static inline void mf26F17CF2(void); // FDUP
static inline void mfE3615E4B(void); // FOVER
static inline void mf5B6A7C0A(void); // FSWAP
static inline void mf8ABEA64A(void); // FROT
static inline void mf9580290C(void); // FNIP
static inline void mf430C7B9C(void); // FTUCK
static inline void mfF8BB56F5(void); // F>R
static inline void mf3FB24223(void); // FR@
static inline void mf5DB2715D(void); // FR>
void mf9C3B7E3D(void); // FLOOR
void mf12346AD7(void); // FROUND
void mf723ABD29(void); // FTRUNC
void mf18479016(void); // S>F
void mfF7BB5562(void); // F>S
void mf2BA95843(void); // D>F
void mfE2BB3453(void); // F>D
void mf69C5AA87(void); // FNEGATE
void mf155A76B7(void); // FABS
static inline void mf1DD2CB56(void); // F+
static inline void mf1FD2CE7C(void); // F-
static inline void mf1ED2CCE9(void); // F*
static inline void mf21D2D1A2(void); // F/
static inline void mf0744869D(void); // 1/F
void mfE9429E04(void); // FINV
void mf68C501A1(void); // F2*
void mf6BC5065A(void); // F2/
void mf16C95AE7(void); // FMA
void mf48D856F9(void); // F**
void mfD01424BA(void); // FALOG
void mf21928C5D(void); // FSQR
void mfE2B2722B(void); // FSQRT
void mfB719E43C(void); // FEXP
void mfEE5E7196(void); // FEXPM1
void mf2DCBBDB3(void); // FLN
void mf1DD527B8(void); // FLNP1
void mfEBB99625(void); // FLOG
void mf197F2C4A(void); // ISNAN
void mfCE764F78(void); // ISINF
void mf920371A8(void); // FSIGN
void mfDDBFA9A2(void); // F0=
void mfDEBFAB35(void); // F0<
void mfDCBFA80F(void); // F0>
void mfB2BA4251(void); // F0<>
void mfB3B5C6B6(void); // F0>=
void mfAFBA3D98(void); // F0<=
void mf10D2B6DF(void); // F<
void mfD9BB2628(void); // F>=
void mf12D2BA05(void); // F>
void mf5DB5E5C6(void); // F<=
void mf0FD2B54C(void); // F=
void mf5CB5E433(void); // F<>
void mf52D31EC5(void); // F~
void mf47E5CB93(void); // FMIN
void mf9DF9DAAD(void); // FMAX
void mfA01628D6(void); // RAD>DEG
void mf8C3D07D6(void); // DEG>RAD
void mf65A67F21(void); // FSIN
void mfD83F1900(void); // FCOS
void mf8BA5E8C4(void); // FTAN
void mfCEB8A782(void); // FASIN
void mfB6996E2B(void); // FACOS
void mf1D906973(void); // FATAN
void mf9F4E25E8(void); // FSINCOS
void mf52204221(void); // FHYPOT
void mfCB55B153(void); // FATAN2
void mf6E1A924B(void); // FSINH
void mfB354CC58(void); // FCOSH
void mf622D1464(void); // FTANH
void mf36B022FE(void); // FASINH
void mfD688C5D9(void); // FACOSH
void mfC555A7E1(void); // FATANH
static inline void mf27FFFAB2(void); // PI
static inline void mf1DD48712(void); // EULER
static inline void mfF7E99D5B(void); // FSQRT2
static inline void mf84D36D7B(void); // F@
static inline void mf23D2D4C8(void); // F!
static inline void mf8A18CFA5(void); // FLOAT
static inline void mf5B0F6042(void); // FLOATS
static inline void mfF30EBC8A(void); // FLOAT+
void mf18766AA3(void); // FALIGNED
void mf3D65DC12(void); // FALIGN
void mf220C821D(void); // DF@
void mf810D17AA(void); // DF!
void mfF14468F4(void); // DFLOAT+
void mfF944758C(void); // DFLOATS
void mfA0D02C85(void); // DFALIGNED
void mfC001DA54(void); // DFALIGN
void mf4AF93744(void); // SF@
void mf6BF96B37(void); // SF!
void mfE0232691(void); // SFLOAT+
void mfC82300C9(void); // SFLOATS
void mf78FE0C50(void); // SFALIGNED
void mf3C8CEB39(void); // SFALIGN
void mf2F4C5F9D(void); // __PREC
void mf0DC9BAA5(void); // __SGNF
void mf9FC732F7(void); // PRECISION
void mf469D9BEE(void); // SET-PRECISION
void mf5FD98290(void); // __FPAD
void mfC5CB6802(void); // _REPRESENT
void mfDDB6AC9B(void); // REPRESENT
void mf6486A472(void); // __(FCHK)
void mf3BF0B184(void); // __(MANT)
void mfCB968127(void); // __(EXP)
void mf2419805E(void); // __FS.
void mf6BB048D0(void); // FS.
void mf61138913(void); // GS.
void mf243C12A0(void); // __FE.
void mfEBDC9EEE(void); // FE.
void mf00E76555(void); // GE.
void mf33432BE2(void); // _F.
void mf22D2D335(void); // F.
void mf367FD819(void); // >FLOAT
void mf48726737(void); // _[FLIT]
void mf20D2D00F(void); // F,
void mf5D7A6040(void); // FLITERAL
void mf91346E41(void); // FCONSTANT
void mf66D780C1(void); // FVARIABLE
void mfA157AEE6(void); // FVALUE
void mf05CF154B(void); // FFIELD:
void mf73FF7A3E(void); // SFFIELD:
void mfFF86BB11(void); // DFFIELD:
void mf5A699584(void); // __FEXCMSG
void mf39A3E095(void); // __FPROMPT
void mf51B01875(void); // __FENVIRONMENT?
void mfD0F57DA1(void); // _FLOAT?
void mf6502BC33(void); // __FBOOT
void mfEAD10741(void); // Z>R
void mfDFFFF6F7(void); // ZR@
void mf46009789(void); // ZR>
void mf99159864(void); // ZDROP
void mf8FAE2136(void); // ZSWAP
void mf10DC9380(void); // ZNIP
void mf40D6FBF6(void); // ZROT
void mfB28A2ABE(void); // ZDUP
void mfD263C767(void); // ZOVER
void mf707715E0(void); // ZTUCK
void mf8FB74C1F(void); // COMPLEXES
void mf5D3C2BDF(void); // ZFIELD:
void mf8C189D04(void); // Z!
void mf2D180777(void); // Z@
void mf47E99E8E(void); // Z0=
void mf9018A350(void); // Z=
void mf53184349(void); // Z~
void mf1BBBF3F5(void); // ZREAL
void mfE0A42303(void); // ZIMAG
void mf0C004CEB(void); // ZCONJ
void mfE6D6ED93(void); // ZABS
void mfDAFF7D1F(void); // ZARG
void mfC89293D9(void); // ZSCALE
void mf1EA1F243(void); // Z>POLAR
void mf1316E611(void); // Z>CARTESIAN
void mf3AEE0745(void); // Z2*
void mf35EDFF66(void); // Z2/
void mfB859ACF3(void); // ZNEGATE
void mf86189392(void); // Z+
void mf80188A20(void); // Z-
void mf87189525(void); // Z*
void mf0B448CE9(void); // 1/Z
void mfC2848A50(void); // ZINV
void mf82188D46(void); // Z/
void mfD122A119(void); // ZSQR
void mf8683EC37(void); // ZSQRT
void mf31391A30(void); // ZEXP
void mfF5B677E7(void); // ZLN
void mfBAB2A69D(void); // Z**
void mfD9D0F624(void); // ZCOS
void mf8D3750C5(void); // ZSIN
void mfA9869DE0(void); // ZTAN
void mfA97580B7(void); // ZACOS
void mf7C22396E(void); // ZASIN
void mf63C543B7(void); // ZATAN
void mf4FF3EC04(void); // ZCOSH
void mfDB13CDF7(void); // ZSINH
void mf86EA2F78(void); // ZTANH
void mfC2FA116D(void); // ZACOSH
void mf8FDFF6D2(void); // ZASINH
void mf0E8A0A6D(void); // ZATANH
void mf83188ED9(void); // Z.
void mfF0FA4B5B(void); // >COMPLEX
void mf2490216C(void); // ZLITERAL
void mfA1FE94DD(void); // ZCONSTANT
void mfEC17516D(void); // ZVARIABLE
void mfE291D512(void); // ZVALUE
void mf1BCADC89(void); // __CXENVIRONMENT
void mf1E1FE1D0(void); // __CXBOOT
void mf54B9890C(void); // _[L:]
void mf2D494277(void); // _[;L]
void mfB50D5E0C(void); // _[L]
void mfBF5EECFC(void); // _[LOC@]
void mf8670E50B(void); // __(LOC!)
void mf8A0947EC(void); // __(LOC+!)
void mf904A265A(void); // __TLOCS
void mf7A4A03B8(void); // __TLOCE
void mf3B594085(void); // __ULOCS
void mf09FAEC81(void); // __ILOCS
void mf49D94043(void); // __OLOCS
void mf465951D6(void); // __ULOCF
void mf8FDB85B9(void); // __LSYNF
void mf5CD08362(void); // __LDEPTH
void mf1D6691F2(void); // __LTYP
void mfE32D4E7B(void); // __PREP-LOCALS
void mfA092C957(void); // __(LOCAL)
void mf3D63AA51(void); // __NEW-LOCAL
void mfD5625221(void); // __LAST-LOCAL
void mf0AD4B2AD(void); // (LOCAL)
void mf51D83708(void); // __(OLOCAL)
void mfD0F0D3E7(void); // LOCALS|
void mfE65A0BFA(void); // __}
void mf05D84E38(void); // __LOCALS{
void mf0D654860(void); // {:
void mfFE0C521A(void); // {
void mf910625F0(void); // :=
void mf14DC14B5(void); // +=
void mf07568FCC(void); // __LTO
void mfC2F806F7(void); // __L+TO
void mfF0939D46(void); // __LFINDWORD
void mfD2A4D0F5(void); // __(,OLOC)
void mf0EB4BDB3(void); // __(;LOC)
void mfE8EAA4F2(void); // __L;
void mfF575BA52(void); // __LDOES>
void mf17719FDD(void); // __LEXIT
void mf4AA88A69(void); // __LRESETSTACKS
void mf375A2BDE(void); // __LEXCMSG
void mf39170642(void); // __LENVIRONMENT
void mf4C05BF94(void); // COMPARE
void mf36D11E29(void); // SEARCH
void mfFC534FAF(void); // CMOVE
void mfC8264143(void); // CMOVE>
void mfE6D53A44(void); // -TRAILING
void mf80363E61(void); // BLANK
void mfA4420196(void); // PARSE-STRING
void mf0E66217D(void); // __REPWL
void mf42101DD0(void); // REPLACES
void mfFF0E38ED(void); // UNESCAPE
void mf1C4B40F1(void); // SUBSTITUTE
void mf1F1F79B7(void); // __SEXCMSG
void mf5547E6F8(void); // __SBOOT
void mfA5C7BBD2(void); // _BFILE
void mf1BFC78FE(void); // __BID
void mfAB77EF55(void); // __BIBS
void mf200FB32D(void); // __#BIB
void mfD0BA2FD1(void); // _CURBIB
void mf03DC3CB2(void); // __ALLOCBIBS
void mf52AA6F21(void); // CLOSE-BLOCKFILE
void mfB64C9D63(void); // OPEN-BLOCKFILE
void mf0420D2C7(void); // CREATE-BLOCKFILE
void mfD5DFF5E4(void); // __?BFILE
void mf66E765AF(void); // __?BID
void mfB2409D2E(void); // __?BIBS
void mf50FACB30(void); // BLOCKFILE-NAME
void mfC8C9F96A(void); // BLOCKFILE-SIZE
void mf5538243B(void); // RESIZE-BLOCKFILE
void mfFC2520DF(void); // __BSEEK
void mf1ED475DD(void); // BLOCK-READ
void mf848FBD34(void); // BLOCK-WRITE
void mf06E88970(void); // BLOCK-FILL
void mf33F278BC(void); // __FORBIBS
void mf4CE18DB4(void); // EMPTY-BUFFERS
void mfDB44F5B0(void); // __FLUSHBIB
void mfAECB85D2(void); // SAVE-BUFFERS
void mf95A90CFD(void); // FLUSH
void mf1C3385B4(void); // UPDATE
void mf0E37B939(void); // __!CURBIB
void mfFFB24B3B(void); // BUFFER
void mfDB64ED68(void); // __CURBUF
void mf6CF7569E(void); // __CURSIZE
void mfFAF8D8C2(void); // BLOCK
void mf46F27533(void); // SCR
void mf0A4EBBC1(void); // LIST
void mf70B4A90B(void); // TRIAD
void mfE3F88DE9(void); // LOAD
void mfDE60F184(void); // THRU
void mfD3E4F423(void); // -->
void mf42A996C6(void); // __BLKREFILL
void mf62082023(void); // __BL|
void mfC2CB1050(void); // __BL|S
void mf8187DB0E(void); // __BLEXCMSG
void mf567914F7(void); // __BLENVIRONMENT?
void mfA22AC7EB(void); // CS-PICK
void mf70256A75(void); // CS-ROLL
void mfB0B6FFBD(void); // N>R
void mf43AABE05(void); // NR>
void mf3A0CB08E(void); // ?
void mf3560A2EE(void); // AHEAD
void mf0D159680(void); // [:
void mf35035685(void); // ;]
void mfCC9D3437(void); // ALIAS
void mfEA57B3EA(void); // SYNONYM
void mfC499B67A(void); // [DEFINED]
void mf3FBA9B29(void); // [UNDEFINED]
void mf47F43EC6(void); // [ELSE]
void mf1DE32B80(void); // [IF]
void mf633F5F98(void); // [THEN]
void mfAF4978BE(void); // MINFORTH
void mf2A138099(void); // _NAME.
void mf68A478E2(void); // TRAVERSE-WORDLIST
void mfD92BB8B1(void); // NAME>STRING
void mf57EEA72D(void); // NAME>INTERPRET
void mf96E72E3D(void); // NAME>COMPILE
void mf07F5E02A(void); // WORDS
void mfDF63F90A(void); // SHOW-RECOGNIZERS
void mfB9B294E7(void); // SWAP-RECOGNIZER
void mf7CD8E2E8(void); // <IN
void mfA3D4A70D(void); // ..
void mf66D44706(void); // .S
void mf3D2E95FE(void); // .RS
void mf35602632(void); // .FS
void mfC6897287(void); // DUMP
void mf27EBD594(void); // __SEE-PAR
void mf23815188(void); // __SEE-COLON
void mf6B7D8387(void); // XT-SEE
void mf38016820(void); // SEE
void mf571B6828(void); // __DEBFLAG
void mf1510CB2A(void); // __DEBXT
void mfD375B113(void); // __DEBLIT
void mf4C847914(void); // __DEBSTEP
void mfFBBF5FA7(void); // _[DEB:]
void mf0EE95A7D(void); // _UNBUG
void mf4C2C9E72(void); // UNBUG-ALL
void mf7E05BCA0(void); // UNBUG
void mf685108F8(void); // DEBUG
void mf5E9C0268(void); // __TEXCCODE
void mfEBCBC8AA(void); // __TENVIRONMENT
void mfDD0C1E27(void); // X
void mfF0EB79A1(void); // FIRST
void mfA7E14EE4(void); // RESULT
void mf9B986251(void); // CALC_SUM_PLUS_5_5
void mfE4FB099E(void); // INCREMENT
void mf9AF12F6E(void); // CHECK_LARGER_THAN_20
void mf04D308C3(void); // COUNTER
void mfB186312A(void); // WHILE_LOOP_TEST
void mf1CAF194F(void); // RESULT1
void mf22CA2F63(void); // INIT-SYSTEM
void mf79F2F113(void); // CLEANUP
void mf96272888(void); // MAIN

// --- Forth Dictionary ---

mfHdr mfdict[786]={{NULL,0,NULL,NULL},
{mfdict,0,"\005THROW",mfE5B4B40F},
{mfdict,0,"\004_RP!",mf8B51E6F7},
{mfdict,0,"\007_RDEPTH",mf3EC47269},
{mfdict+1,0,"\002>R",mf67FCEB09},
{mfdict+4,0,"\002R>",mf130456D1},
{mfdict+5,0,"\002R@",mf7D04FDAF},
{mfdict+6,0,"\005RDROP",mf0807143C},
{mfdict+7,0,"\005RPICK",mf982060C8},
{mfdict,0,"\004_SP!",mf89C518BC},
{mfdict+8,0,"\005DEPTH",mfCE61558A},
{mfdict+10,0,"\004DROP",mf52C16B0C},
{mfdict+11,0,"\004SWAP",mfA2DF200E},
{mfdict+12,0,"\003ROT",mf87E8362E},
{mfdict+13,0,"\003DUP",mf57E80646},
{mfdict+14,0,"\004OVER",mf2FE7860F},
{mfdict+15,0,"\004?DUP",mf8003A4B3},
{mfdict+16,0,"\004PICK",mfE67669F8},
{mfdict+17,0,"\003NIP",mf63DECBC8},
{mfdict+18,0,"\004TUCK",mf93A82DE8},
{mfdict+19,0,"\004-ROT",mfEFF28235},
{mfdict+20,0,"\005PLUCK",mf6AB5854A},
{mfdict+21,0,"\004ROLL",mf5451721E},
{mfdict+22,0,"\0052DROP",mfEF6476DC},
{mfdict+23,0,"\0042DUP",mfE0839FF6},
{mfdict+24,0,"\0052OVER",mf8C8BC01F},
{mfdict+25,0,"\0052SWAP",mf404D123E},
{mfdict+26,0,"\0032>R",mf89F60699},
{mfdict+27,0,"\0032R>",mf34FF0561},
{mfdict+28,0,"\0032R@",mf3EFF151F},
{mfdict,0,"\004_LP!",mfE97032F9},
{mfdict,0,"\004_FP!",mfA14BE51B},
{mfdict+29,0,"\004NOOP",mfAC2CA76D},
{mfdict+32,0,"\004TRUE",mf501B0925},
{mfdict+33,0,"\005FALSE",mfEE597878},
{mfdict+34,0,"\003NOT",mfABEE47AA},
{mfdict+35,0,"\003AND",mf91666DC6},
{mfdict+36,0,"\002OR",mf7CE4AA04},
{mfdict+37,0,"\003XOR",mf4F46575E},
{mfdict+38,0,"\006INVERT",mfD745D921},
{mfdict+39,0,"\006LSHIFT",mf84439159},
{mfdict+40,0,"\006RSHIFT",mf24728B77},
{mfdict+41,0,"\003ROL",mf6FE81066},
{mfdict+42,0,"\003ROR",mf89E83954},
{mfdict+43,0,"\002ON",mf80E4B050},
{mfdict+44,0,"\003OFF",mf2E1505EA},
{mfdict+45,0,"\0020=",mf14ED5DD6},
{mfdict+46,0,"\0030<>",mfDBAD15F5},
{mfdict+47,0,"\0020<",mf15ED5F69},
{mfdict+48,0,"\0020>",mf13ED5C43},
{mfdict+49,0,"\0030<=",mfD8AD113C},
{mfdict+50,0,"\0030>=",mfDCA89A5A},
{mfdict+51,0,"\001=",mf380CAD68},
{mfdict+52,0,"\002<>",mf93F7201F},
{mfdict+53,0,"\001<",mf390CAEFB},
{mfdict+54,0,"\001>",mf3B0CB221},
{mfdict+55,0,"\002<=",mf94F721B2},
{mfdict+56,0,"\002>=",mf10FC6214},
{mfdict+57,0,"\002U<",mf0EF30764},
{mfdict+58,0,"\002U>",mf10F30A8A},
{mfdict+59,0,"\003U<=",mfE194911B},
{mfdict+60,0,"\003U>=",mf6599DE15},
{mfdict+61,0,"\001+",mf2E0C9DAA},
{mfdict+62,0,"\001-",mf280C9438},
{mfdict+63,0,"\006NEGATE",mf5EE442DB},
{mfdict+64,0,"\0021+",mf26EB3B95},
{mfdict+65,0,"\0021-",mf20EB3223},
{mfdict+66,0,"\003ABS",mf6C84489B},
{mfdict+67,0,"\001*",mf2F0C9F3D},
{mfdict+68,0,"\004/MOD",mf45BE23A2},
{mfdict+69,0,"\001/",mf2A0C975E},
{mfdict+70,0,"\003MOD",mf6453F3A3},
{mfdict+71,0,"\0022*",mfA7F2C26D},
{mfdict+72,0,"\0022/",mfA2F2BA8E},
{mfdict+73,0,"\006WITHIN",mf09D242EA},
{mfdict+74,0,"\003MAX",mf1C599279},
{mfdict+75,0,"\003MIN",mf0E45F4B7},
{mfdict,0,"\004_MU+",mfE40F181D},
{mfdict,0,"\004_MU*",mfE30F168A},
{mfdict,0,"\007_MU/MOD",mf1691D15F},
{mfdict+76,0,"\003UM*",mfD9ACE697},
{mfdict+80,0,"\006UM/MOD",mf5F2279EC},
{mfdict+81,0,"\003S>D",mf16478CF0},
{mfdict+82,0,"\007DNEGATE",mf8B105859},
{mfdict+83,0,"\004DABS",mfE23549BD},
{mfdict+84,0,"\002M*",mf1CDF95B6},
{mfdict+85,0,"\006SM/REM",mf1705E412},
{mfdict+86,0,"\006FM/MOD",mf66F1FDC7},
{mfdict+87,0,"\005*/MOD",mfE5A71F0A},
{mfdict+88,0,"\002*/",mf22DE6956},
{mfdict+89,0,"\005CHAR+",mf2FEE4BC2},
{mfdict+90,0,"\005CHARS",mfC7EDA80A},
{mfdict+91,0,"\002C@",mf76DA1336},
{mfdict+92,0,"\002C!",mf97DA4729},
{mfdict+93,0,"\004MOVE",mfC2064154},
{mfdict+94,0,"\004FILL",mfAF3DC588},
{mfdict+95,0,"\005ERASE",mfB7F60EB5},
{mfdict+96,0,"\005CELL+",mfBB8FCA7A},
{mfdict+97,0,"\005CELL-",mfB58FC108},
{mfdict+98,0,"\004CELL",mf662FFFF5},
{mfdict+99,0,"\005CELLS",mf838F7252},
{mfdict+100,0,"\001@",mfC50BF85F},
{mfdict+101,0,"\001!",mf240C8DEC},
{mfdict+102,0,"\002+!",mf08DC01D1},
{mfdict+103,0,"\004INCR",mf5A131C6F},
{mfdict+104,0,"\004DECR",mf7D948B73},
{mfdict+105,0,"\0022@",mf3DF21B8F},
{mfdict+106,0,"\0022!",mf9CF2B11C},
{mfdict+107,0,"\005COUNT",mfA3F7B2D4},
{mfdict+108,0,"\007/STRING",mf62A404AF},
{mfdict+109,0,"\005CHAR/",mf2BEE4576},
{mfdict,0,"\010_TOUPPER",mf465CFE55},
{mfdict,0,"\006_UPPER",mfEE2653C2},
{mfdict+110,0,"\004CAPS",mfA274DA18},
{mfdict+113,0,"\004STR=",mfA7AD15F7},
{mfdict,0,"\006_PLACE",mf10E38971},
{mfdict,0,"\007_ORIGIN",mf12E2D898},
{mfdict,0,"\006_LIMIT",mf9F4C117D},
{mfdict,0,"\004_#IB",mf0119CBC8},
{mfdict,0,"\003_HP",mfB93DEEA6},
{mfdict,0,"\003_DP",mfD148A1CA},
{mfdict+114,0,"\007ALIGNED",mf901B2AFF},
{mfdict+121,0,"\004HERE",mf5F2B6B8B},
{mfdict+122,0,"\003PAD",mf9E0B1B0A},
{mfdict+123,0,"\006UNUSED",mfCF430E1B},
{mfdict+124,0,"\005ALIGN",mfAFA183BE},
{mfdict+125,0,"\005ALLOT",mf3FA1943F},
{mfdict+126,0,"\004BASE",mfE972DB58},
{mfdict+127,0,"\007DECIMAL",mf48AF9A2C},
{mfdict+128,0,"\003HEX",mf818F192A},
{mfdict,0,"\010_DIGIT>N",mf7A717643},
{mfdict+129,0,"\007>NUMBER",mf5773A68C},
{mfdict+131,0,"\007NUMBER?",mf867FFF4D},
{mfdict,0,"\010_NUMBER?",mf1BF6A5CC},
{mfdict+132,0,"\004EMIT",mfD9BC5E8A},
{mfdict+134,0,"\002BL",mf20DD5D6B},
{mfdict+135,0,"\005SPACE",mf1808F0E5},
{mfdict+136,0,"\006SPACES",mf8C12EE82},
{mfdict+137,0,"\002CR",mf64D9F6E0},
{mfdict+138,0,"\004TYPE",mf142FE78D},
{mfdict,0,"\010_N>DIGIT",mf6B388877},
{mfdict,0,"\005_,SEP",mf5389E74A},
{mfdict+139,0,"\004HOLD",mfEBB64F78},
{mfdict+142,0,"\005HOLDS",mf3AFEA0B1},
{mfdict+143,0,"\002<#",mfA6F73E08},
{mfdict+144,0,"\001#",mf260C9112},
{mfdict+145,0,"\002#>",mf11C88844},
{mfdict+146,0,"\002#S",mf26C8A953},
{mfdict+147,0,"\004SIGN",mf0AADBFA4},
{mfdict,0,"\004_(.)",mfE4E51507},
{mfdict+148,0,"\001.",mf2B0C98F1},
{mfdict+150,0,"\002.R",mf67D44899},
{mfdict,0,"\005_(U.)",mfFD90D4E8},
{mfdict+151,0,"\002U.",mf20F323BA},
{mfdict+153,0,"\003U.R",mfC6C18638},
{mfdict+154,0,"\004DEC.",mfB994E9E7},
{mfdict+155,0,"\004HEX.",mfF844614C},
{mfdict+156,0,"\002,.",mf83CFF77F},
{mfdict+157,0,"\003,.R",mfAD621BD7},
{mfdict+158,0,"\003U,.",mf72BC84CE},
{mfdict+159,0,"\004U,.R",mf3AC4C194},
{mfdict+160,0,"\003KEY",mfACCAE4CC},
{mfdict+161,0,"\006ACCEPT",mf209E17E9},
{mfdict,0,"\004_TIB",mfC49B66C5},
{mfdict,0,"\005_SIBS",mfB3D82B11},
{mfdict,0,"\004_SIB",mf12AE9718},
{mfdict,0,"\005_>SIB",mfCFEC5BB6},
{mfdict,0,"\010_SRCSPEC",mf01A69217},
{mfdict,0,"\007_SRCLEN",mf7C1EEF6B},
{mfdict,0,"\007_SRCADR",mf7A91D589},
{mfdict,0,"\007_SRCID!",mfFD898658},
{mfdict,0,"\006_SRC2!",mf5AF98C79},
{mfdict,0,"\006_SRC>R",mf600421B4},
{mfdict,0,"\006_R>SRC",mfD24E2A14},
{mfdict+162,0,"\006SOURCE",mfB9790298},
{mfdict+174,0,"\003>IN",mf580B1E42},
{mfdict+175,0,"\011SOURCE-ID",mf254113A2},
{mfdict+176,0,"\003BLK",mfDC799960},
{mfdict+177,0,"\012SAVE-INPUT",mf94A8FFED},
{mfdict+178,0,"\015RESTORE-INPUT",mfA10A7AB8},
{mfdict+179,0,"\006REFILL",mfC1D4E711},
{mfdict,0,"\005_SKIP",mfD66336C5},
{mfdict,0,"\005_SCAN",mfC119E57B},
{mfdict,0,"\006_PARSE",mfADFC5551},
{mfdict+180,0,"\005PARSE",mfD918C10C},
{mfdict,0,"\013_PARSE-CHAR",mfF08832C0},
{mfdict,0,"\013_PARSE-NAME",mfE9BCE12F},
{mfdict+184,0,"\012PARSE-NAME",mfF92179F8},
{mfdict,0,"\007_PARSED",mfF939F00F},
{mfdict,0,"\006_SWORD",mf5242998B},
{mfdict+187,0,"\004WORD",mf6D01E13D},
{mfdict,0,"\013_PARSE-WORD",mfC94E167C},
{mfdict+190,0,"\004CHAR",mfA59F665D},
{mfdict+192,1,"\001\\",mfD90C17DB},
{mfdict+193,1,"\001(",mf2D0C9C17},
{mfdict+194,1,"\002.(",mf9DD49D9B},
{mfdict,0,"\012_WORDLISTS",mf85A4C44F},
{mfdict,0,"\010_CONTEXT",mf82CE5579},
{mfdict,0,"\011_SEARCHNT",mf4FBFA22C},
{mfdict,0,"\007_SEEKNT",mf9E5A6ED4},
{mfdict,0,"\007_SEEKXT",mfA240DD3A},
{mfdict,0,"\007_TEMPWL",mf7571BB77},
{mfdict+195,1,"\007UNHIDE>",mf6180557C},
{mfdict+202,1,"\005HIDE>",mf9C545369},
{mfdict+203,1,"\006HIDDEN",mf93C45CF9},
{mfdict,0,"\012_FIND-WORD",mf5AADB2E4},
{mfdict+204,0,"\004FIND",mfFB42BA5A},
{mfdict+206,0,"\001\'",mf220C8AC6},
{mfdict+207,0,"\007EXECUTE",mfCF77DFB8},
{mfdict+208,0,"\005STATE",mfE09A6F96},
{mfdict+209,0,"\001,",mf290C95CB},
{mfdict,0,"\006_[LIT]",mf1479C7E3},
{mfdict+210,3,"\007LITERAL",mfBAFC44C4},
{mfdict,0,"\010_RECLIST",mfB6918D28},
{mfdict,0,"\011_LITERAL?",mf26F8E50E},
{mfdict+212,0,"\002??",mf12FA26A3},
{mfdict,0,"\012_INTERPRET",mf87601DFB},
{mfdict,0,"\007_EXCSRC",mf9FC8664E},
{mfdict,0,"\007_EXCMSG",mf93D1E229},
{mfdict,0,"\010_EXCCODE",mf407C881D},
{mfdict+215,0,"\005CATCH",mfEAF28AAC},
{mfdict,0,"\006_THROW",mf773B319E},
{mfdict+220,0,"\005FAST>",mfE0D91783},
{mfdict+222,0,"\005SAFE>",mf03A71F52},
{mfdict+223,0,"\010EVALUATE",mf319DE64A},
{mfdict,0,"\007_PROMPT",mf2C72BE34},
{mfdict+224,0,"\004QUIT",mf84D9BC36},
{mfdict,0,"\006_>LINK",mf8A823C60},
{mfdict,0,"\005_>PFA",mf4B2037E9},
{mfdict,0,"\006_>NAME",mf03D7EB73},
{mfdict,0,"\005_>CFA",mf74404CD4},
{mfdict,0,"\005_<CFA",mfC439E65E},
{mfdict,0,"\010_CURRENT",mfE345B847},
{mfdict,0,"\005_LAST",mfB8F49A42},
{mfdict,0,"\007_LATEST",mfEA08BD65},
{mfdict+226,0,"\007WARNING",mfEF0255CF},
{mfdict,0,"\006_NAMED",mf5013BC6B},
{mfdict+235,0,"\005NAMED",mf9DA7D846},
{mfdict,0,"\007_HEADER",mf20B9677F},
{mfdict,0,"\007_REVEAL",mf3BFC9593},
{mfdict,0,"\005_HIDE",mf779E612E},
{mfdict+237,0,"\011IMMEDIATE",mfD1E3DADA},
{mfdict+241,0,"\014COMPILE-ONLY",mf72FB7883},
{mfdict+242,1,"\001[",mfDE0C1FBA},
{mfdict+243,0,"\001]",mfD80C1648},
{mfdict,0,"\004_[:]",mfB988A2D6},
{mfdict+244,0,"\001:",mf3F0CB86D},
{mfdict+246,3,"\001;",mf3E0CB6DA},
{mfdict+247,0,"\007:NONAME",mfF0A95069},
{mfdict+248,3,"\003[\']",mfBA444C0E},
{mfdict+249,0,"\010COMPILE,",mfD89985D6},
{mfdict+250,3,"\011[COMPILE]",mfA66C8E4A},
{mfdict,0,"\006_POST[",mf33530D01},
{mfdict,0,"\006_]PONE",mf9A7AC789},
{mfdict+251,3,"\010POSTPONE",mfDD00FE9F},
{mfdict+254,3,"\006[CHAR]",mfFDFF8019},
{mfdict+255,0,"\002C,",mfA2DA587A},
{mfdict,0,"\007_[SLIT]",mf7BDCDF68},
{mfdict+256,3,"\010SLITERAL",mf50BE3701},
{mfdict+258,1,"\002S\"",mfF501E900},
{mfdict+259,3,"\002C\"",mf94DA4270},
{mfdict+260,1,"\002.\"",mf97D49429},
{mfdict+261,1,"\003S\\\"",mf853A39E8},
{mfdict+262,1,"\003.\\\"",mfA647402F},
{mfdict,0,"\007_ABORT\"",mfFF7226AE},
{mfdict+263,3,"\006ABORT\"",mfC3343021},
{mfdict+265,3,"\004EXIT",mf79836105},
{mfdict,0,"\006_[JMP]",mf992CB91D},
{mfdict,0,"\007_[JMPZ]",mf6156569F},
{mfdict,0,"\005_MARK",mf9592F3FF},
{mfdict,0,"\006_>MARK",mf76D47BF1},
{mfdict,0,"\006_<MARK",mf79E02667},
{mfdict+266,3,"\002IF",mf58E8EE86},
{mfdict+272,3,"\004ELSE",mf69F37330},
{mfdict+273,3,"\004THEN",mfE78A4DB6},
{mfdict+274,3,"\004CASE",mfD8776DB1},
{mfdict+275,3,"\002OF",mf88E4BCE8},
{mfdict+276,3,"\005ENDOF",mfB2F63B9B},
{mfdict+277,3,"\007ENDCASE",mf75E9FDF6},
{mfdict+278,3,"\007RECURSE",mf2AEDCB62},
{mfdict+279,3,"\005BEGIN",mf3F126D5E},
{mfdict+280,3,"\005WHILE",mf9A02B1AE},
{mfdict+281,3,"\006REPEAT",mf6588C8EA},
{mfdict+282,3,"\005UNTIL",mf64F9C7EF},
{mfdict+283,3,"\005AGAIN",mf5E7C87EF},
{mfdict,0,"\007_[LOOP]",mfDA088408},
{mfdict,0,"\005_[DO]",mfC0946685},
{mfdict,0,"\006_[?DO]",mfE2A5025C},
{mfdict+284,3,"\002DO",mf41CE86D4},
{mfdict+288,3,"\003?DO",mfEC084DA3},
{mfdict+289,2,"\001I",mfCC0C0364},
{mfdict+290,2,"\001J",mfCF0C081D},
{mfdict+291,2,"\006UNLOOP",mfE11A6788},
{mfdict+292,3,"\005LEAVE",mf354C36E0},
{mfdict+293,3,"\005+LOOP",mfF033FF78},
{mfdict+294,3,"\004LOOP",mfDBE07C6B},
{mfdict+295,0,"\006BOUNDS",mfCE05F488},
{mfdict,0,"\006_[VAR]",mf3CF98E2B},
{mfdict+296,0,"\010VARIABLE",mf04B69205},
{mfdict,0,"\010_[CONST]",mf5047FCD5},
{mfdict+298,0,"\010CONSTANT",mfADA9DCA5},
{mfdict,0,"\006_[BUF]",mfCD566A47},
{mfdict+300,0,"\007BUFFER:",mf86AC1293},
{mfdict,0,"\011_[CREATE]",mfCDFDC67E},
{mfdict+302,0,"\006CREATE",mfC19230DD},
{mfdict,0,"\006_<DOES",mf4520460B},
{mfdict+304,3,"\005DOES>",mfFF60370A},
{mfdict+306,0,"\005>BODY",mf800A2691},
{mfdict+307,0,"\012RECOGNIZER",mf5E8B98AB},
{mfdict,0,"\004_>V+",mf9F67357B},
{mfdict,0,"\004_>V!",mf99672C09},
{mfdict,0,"\004_>V@",mf38669356},
{mfdict,0,"\004_>VD",mf3C6699A2},
{mfdict,0,"\006_[VAL]",mf80B951E1},
{mfdict,0,"\010_(VALUE)",mf24D3F916},
{mfdict+308,0,"\005VALUE",mf2513E22A},
{mfdict+315,1,"\002TO",mf21F563E4},
{mfdict+316,1,"\003+TO",mf91736C8F},
{mfdict,0,"\010_[DEFER]",mfBA65A38C},
{mfdict+317,0,"\006DEFER@",mfDC2E9701},
{mfdict+319,0,"\006DEFER!",mf3B2F2C8E},
{mfdict+320,0,"\005DEFER",mfE9EDB1DB},
{mfdict+321,1,"\011ACTION-OF",mf55EA9727},
{mfdict+322,1,"\002IS",mf6DE90F95},
{mfdict,0,"\011_[MARKER]",mf55174F30},
{mfdict+323,0,"\006MARKER",mfB53F8A17},
{mfdict,0,"\015_ENVIRONMENT?",mfD09523AC},
{mfdict+325,0,"\014ENVIRONMENT?",mf304F16BF},
{mfdict,0,"\005_BOOT",mf28B3832A},
{mfdict,0,"\006_START",mfF766613E},
{mfdict,0,"\005_LOGO",mf49997C51},
{mfdict,0,"\015_RESET-STACKS",mfD2338EAD},
{mfdict,0,"\006_ABORT",mf946BA378},
{mfdict+327,0,"\005ABORT",mf367DE7D9},
{mfdict+333,0,"\003BYE",mfB6A8BBC3},
{mfdict+334,0,"\005WHERE",mfCFCC69B8},
{mfdict+335,0,"\017SEARCH-WORDLIST",mfC090D7CC},
{mfdict+336,0,"\016FORTH-WORDLIST",mf346A6677},
{mfdict+337,0,"\005ORDER",mfDAF5E977},
{mfdict+338,0,"\004VOCS",mf52EF5230},
{mfdict+339,0,"\010WORDLIST",mfE81D9A59},
{mfdict,0,"\005_!VOC",mf0538B17B},
{mfdict+340,0,"\012VOCABULARY",mf4FE08CC9},
{mfdict+342,0,"\005FORTH",mf1CECBE2C},
{mfdict+343,0,"\013SET-CURRENT",mfB52F140B},
{mfdict+344,0,"\013GET-CURRENT",mfBB3DE887},
{mfdict+345,0,"\013DEFINITIONS",mfB78902C9},
{mfdict+346,0,"\010PREVIOUS",mfB81C6B28},
{mfdict+347,0,"\004ALSO",mfD3AAC792},
{mfdict,0,"\007_ROOTWL",mf85D1E1A1},
{mfdict+348,0,"\004ROOT",mf1E4EDE85},
{mfdict+350,0,"\004ONLY",mf9AF1ED37},
{mfdict+351,0,"\011GET-ORDER",mf57DD8CC6},
{mfdict+352,0,"\011SET-ORDER",mf02F15E02},
{mfdict+353,0,"\010ALLOCATE",mfE69B7462},
{mfdict+354,0,"\004FREE",mf97A522DB},
{mfdict+355,0,"\006RESIZE",mfAF26F721},
{mfdict+356,0,"\003R/O",mfADF95DF3},
{mfdict+357,0,"\003W/O",mfAE118C5C},
{mfdict+358,0,"\003R/W",mfC5F983BB},
{mfdict+359,0,"\003BIN",mfDF81ECDE},
{mfdict+360,0,"\013FILE-STATUS",mfFB4621B4},
{mfdict+361,0,"\012EXIST-FILE",mfC911533D},
{mfdict+362,0,"\015FILE-POSITION",mf220B8735},
{mfdict+363,0,"\011FILE-SIZE",mf8CAE1B93},
{mfdict+364,0,"\017REPOSITION-FILE",mf45455D7C},
{mfdict+365,0,"\013RESIZE-FILE",mf68AAA8F2},
{mfdict+366,0,"\013RENAME-FILE",mf0029C11C},
{mfdict+367,0,"\013DELETE-FILE",mf207DC7E3},
{mfdict+368,0,"\005STDIN",mf4D44B3FD},
{mfdict+369,0,"\006STDOUT",mfD92AC866},
{mfdict+370,0,"\006STDERR",mf4F8412B5},
{mfdict+371,0,"\011OPEN-FILE",mf3C8F801A},
{mfdict+372,0,"\013CREATE-FILE",mfD2C02CE6},
{mfdict+373,0,"\012FLUSH-FILE",mfE7813386},
{mfdict+374,0,"\012CLOSE-FILE",mfB7443E2C},
{mfdict+375,0,"\012WRITE-FILE",mf1ED165FD},
{mfdict+376,0,"\012WRITE-LINE",mf00FC6F09},
{mfdict+377,0,"\011READ-FILE",mf71E6784E},
{mfdict+378,0,"\011READ-LINE",mf68B9A0A2},
{mfdict+379,0,"\011LIST-FILE",mfB0766C12},
{mfdict+380,0,"\005FILES",mfA92D1570},
{mfdict,0,"\004_SLN",mf30A80A8D},
{mfdict+381,0,"\017FORGET-INCLUDED",mf9B1237DF},
{mfdict+383,0,"\014INCLUDE-FILE",mfE2E62798},
{mfdict+384,0,"\010INCLUDED",mf3CC67F79},
{mfdict+385,0,"\010REQUIRED",mf4A045F20},
{mfdict+386,0,"\007INCLUDE",mf40C75207},
{mfdict+387,0,"\007REQUIRE",mf916A1824},
{mfdict+388,1,"\002\\S",mf36090B18},
{mfdict+389,0,"\007(TIMER)",mf4375DF0F},
{mfdict+390,0,"\002MS",mf35DFBD11},
{mfdict,0,"\006_TIMER",mf889600AF},
{mfdict+391,0,"\013TIMER-RESET",mfFAA3E0E8},
{mfdict+393,0,"\012TIMER-STOP",mf2F77738D},
{mfdict+394,0,"\010.ELAPSED",mfC3A5A6AF},
{mfdict+395,0,"\006RANDOM",mf603D5B62},
{mfdict+396,0,"\011TIME&DATE",mf94BA29B2},
{mfdict+397,0,"\007WEEKDAY",mfC1528055},
{mfdict+398,0,"\016DAYLIGHTSAVING",mfA71A54D5},
{mfdict,0,"\006_TIME$",mf16954D39},
{mfdict,0,"\011_WEEKDAY$",mfA9FEB30C},
{mfdict,0,"\007_MONTH$",mf4900DA24},
{mfdict,0,"\006_DATE$",mf36F6EBFA},
{mfdict+399,0,"\017BEGIN-STRUCTURE",mf1B1FA7CA},
{mfdict+404,0,"\015END-STRUCTURE",mf316084C6},
{mfdict,0,"\007_+FIELD",mfEF03F461},
{mfdict+405,0,"\006+FIELD",mf4F90F13E},
{mfdict+407,0,"\007CFIELD:",mf3C3B6224},
{mfdict+408,0,"\006FIELD:",mf39538B07},
{mfdict+409,0,"\005EKEY?",mfD1B716C0},
{mfdict+410,0,"\004EKEY",mf38E5C67F},
{mfdict+411,0,"\011EKEY>FKEY",mf9C0BB436},
{mfdict+412,0,"\014K-SHIFT-MASK",mf4D1CE30E},
{mfdict+413,0,"\013K-CTRL-MASK",mf08D7F4BF},
{mfdict+414,0,"\012K-ALT-MASK",mf85B23637},
{mfdict+415,0,"\004K-F1",mf74934078},
{mfdict+416,0,"\004K-F2",mf77934531},
{mfdict+417,0,"\004K-F3",mf7693439E},
{mfdict+418,0,"\004K-F4",mf79934857},
{mfdict+419,0,"\004K-F5",mf789346C4},
{mfdict+420,0,"\004K-F6",mf7B934B7D},
{mfdict+421,0,"\004K-F7",mf7A9349EA},
{mfdict+422,0,"\004K-F8",mf6D933573},
{mfdict+423,0,"\004K-F9",mf6C9333E0},
{mfdict+424,0,"\005K-F10",mfCBCE3158},
{mfdict+425,0,"\006K-HOME",mf0DD800EE},
{mfdict+426,0,"\004K-UP",mf83B3ABC0},
{mfdict+427,0,"\007K-PRIOR",mf96DF0DF7},
{mfdict+428,0,"\006K-LEFT",mf8D5A8F90},
{mfdict+429,0,"\007K-RIGHT",mf3280C6E5},
{mfdict+430,0,"\005K-END",mf5C78EFEA},
{mfdict+431,0,"\006K-DOWN",mfB1D8C2F5},
{mfdict+432,0,"\006K-NEXT",mfD2B09D08},
{mfdict+433,0,"\010K-INSERT",mfA0546E08},
{mfdict+434,0,"\010K-DELETE",mf3653A2EA},
{mfdict+435,0,"\005K-F11",mfCCCE32EB},
{mfdict+436,0,"\005K-F12",mfCDCE347E},
{mfdict+437,0,"\011EKEY>CHAR",mfD41B511B},
{mfdict+438,0,"\012EKEY>ECHAR",mf1BE205F6},
{mfdict+439,0,"\004KEY?",mfF6666A89},
{mfdict+440,0,"\005EMIT?",mf788916EF},
{mfdict+441,0,"\002VT",mf78FA6A07},
{mfdict+442,0,"\010VTNORMAL",mf9C5DA170},
{mfdict+443,0,"\010VTBRIGHT",mf4B114CCB},
{mfdict+444,0,"\013VTUNDERLINE",mf89B1A1B9},
{mfdict+445,0,"\011VTREVERSE",mf40D82043},
{mfdict+446,0,"\010VTHIDDEN",mf74C8DEA7},
{mfdict+447,0,"\007VTBLACK",mfCAA480DE},
{mfdict+448,0,"\005VTRED",mfA569F60E},
{mfdict+449,0,"\007VTGREEN",mf430AE6BE},
{mfdict+450,0,"\010VTYELLOW",mfF69B4083},
{mfdict+451,0,"\006VTBLUE",mfD34E84E3},
{mfdict+452,0,"\011VTMAGENTA",mf9FE539DE},
{mfdict+453,0,"\006VTCYAN",mfAFA0318C},
{mfdict+454,0,"\007VTWHITE",mf3F9C8520},
{mfdict+455,0,"\004PAGE",mf6A78A9B6},
{mfdict+456,0,"\005AT-XY",mfBEE2C2F4},
{mfdict+457,0,"\006GET-XY",mfE740E281},
{mfdict+458,0,"\007SAVE-XY",mf31B023B4},
{mfdict+459,0,"\012RESTORE-XY",mf5C0DBF87},
{mfdict+460,0,"\007VTERASE",mf7F99FF1B},
{mfdict+461,0,"\004VTUP",mf2604FB32},
{mfdict+462,0,"\006VTDOWN",mf6AB7D413},
{mfdict+463,0,"\007VTRIGHT",mf77661DA3},
{mfdict+464,0,"\006VTLEFT",mf54A88DAE},
{mfdict+465,0,"\006PRINTF",mfB81DD0EA},
{mfdict+466,1,"\002P\"",mf0EFFD357},
{mfdict+467,0,"\004ARGC",mf528B5A4C},
{mfdict+468,0,"\004ARGV",mf5F8B6EC3},
{mfdict+469,0,"\006SYSTEM",mf3FBAD1DC},
{mfdict+470,0,"\003DIR",mf6E19C5B4},
{mfdict+471,0,"\005CHDIR",mf987D8205},
{mfdict+472,0,"\007SYSEXIT",mfB6B69E5E},
{mfdict,0,"\007_STACKS",mfE0018F77},
{mfdict+473,0,"\0042ROT",mfB49A1F9E},
{mfdict+475,0,"\0042NIP",mfEEA51C98},
{mfdict+476,0,"\0052TUCK",mf37C99D78},
{mfdict+477,0,"\003D>S",mf1EA943CC},
{mfdict+478,0,"\002D+",mf1DCE4E28},
{mfdict+479,0,"\002D-",mf23CE579A},
{mfdict+480,0,"\003D2*",mf8F8BE09B},
{mfdict+481,0,"\003D2/",mf928BE554},
{mfdict+482,0,"\002D*",mf1ECE4FBB},
{mfdict+483,0,"\005D/REM",mf7ADB6C68},
{mfdict+484,0,"\005D/MOD",mf581A2788},
{mfdict+485,0,"\002D/",mf21CE5474},
{mfdict+486,0,"\003D0=",mf00910FAC},
{mfdict+487,0,"\003D0<",mf0191113F},
{mfdict+488,0,"\002D=",mf13CE3E6A},
{mfdict+489,0,"\003D<>",mf83AE5FF9},
{mfdict+490,0,"\002D<",mf14CE3FFD},
{mfdict+491,0,"\002D>",mf12CE3CD7},
{mfdict+492,0,"\003D>=",mf84A9E45E},
{mfdict+493,0,"\003D<=",mf80AE5B40},
{mfdict+494,0,"\003DU<",mf03E7820A},
{mfdict+495,0,"\003DU>",mf01E77EE4},
{mfdict+496,0,"\004DU>=",mfD86CAF9B},
{mfdict+497,0,"\004DU<=",mf5C71FC95},
{mfdict+498,0,"\004DMIN",mfA0BB6085},
{mfdict+499,0,"\004DMAX",mfEACF5CBB},
{mfdict+500,0,"\004DROL",mf66C18A88},
{mfdict+501,0,"\004DROR",mf54C16E32},
{mfdict+502,0,"\002M+",mf1DDF9749},
{mfdict+503,0,"\003M*/",mf0CF87FDB},
{mfdict+504,0,"\002D.",mf22CE5607},
{mfdict+505,0,"\003D.R",mf1FD1E7CF},
{mfdict+506,0,"\003UD.",mf73967FB6},
{mfdict+507,0,"\004UD.R",mfD9EB53EC},
{mfdict+508,0,"\003D,.",mfF3D61FB9},
{mfdict+509,0,"\004D,.R",mfC5143EF1},
{mfdict+510,0,"\004UD,.",mf8DE65F1A},
{mfdict+511,0,"\005UD,.R",mfA9A7FE58},
{mfdict+512,0,"\0022,",mfA1F2B8FB},
{mfdict+513,3,"\0102LITERAL",mf071CC234},
{mfdict+514,0,"\0112CONSTANT",mf154B5C15},
{mfdict+515,0,"\0112VARIABLE",mfEFCA0295},
{mfdict+516,0,"\0062VALUE",mf5E07509A},
{mfdict,0,"\010_DOUBLE?",mfE74BDF44},
{mfdict+517,0,"\003DPL",mf71DFE06F},
{mfdict+519,0,"\006FDEPTH",mf017B185E},
{mfdict+520,0,"\005FDROP",mfF41B2E30},
{mfdict+521,0,"\005FPICK",mf030EAC5C},
{mfdict+522,0,"\004FDUP",mf26F17CF2},
{mfdict+523,0,"\005FOVER",mfE3615E4B},
{mfdict+524,0,"\005FSWAP",mf5B6A7C0A},
{mfdict+525,0,"\004FROT",mf8ABEA64A},
{mfdict+526,0,"\004FNIP",mf9580290C},
{mfdict+527,0,"\005FTUCK",mf430C7B9C},
{mfdict+528,0,"\003F>R",mfF8BB56F5},
{mfdict+529,0,"\003FR@",mf3FB24223},
{mfdict+530,0,"\003FR>",mf5DB2715D},
{mfdict+531,0,"\005FLOOR",mf9C3B7E3D},
{mfdict+532,0,"\006FROUND",mf12346AD7},
{mfdict+533,0,"\006FTRUNC",mf723ABD29},
{mfdict+534,0,"\003S>F",mf18479016},
{mfdict+535,0,"\003F>S",mfF7BB5562},
{mfdict+536,0,"\003D>F",mf2BA95843},
{mfdict+537,0,"\003F>D",mfE2BB3453},
{mfdict+538,0,"\007FNEGATE",mf69C5AA87},
{mfdict+539,0,"\004FABS",mf155A76B7},
{mfdict+540,0,"\002F+",mf1DD2CB56},
{mfdict+541,0,"\002F-",mf1FD2CE7C},
{mfdict+542,0,"\002F*",mf1ED2CCE9},
{mfdict+543,0,"\002F/",mf21D2D1A2},
{mfdict+544,0,"\0031/F",mf0744869D},
{mfdict+545,0,"\004FINV",mfE9429E04},
{mfdict+546,0,"\003F2*",mf68C501A1},
{mfdict+547,0,"\003F2/",mf6BC5065A},
{mfdict+548,0,"\003FMA",mf16C95AE7},
{mfdict+549,0,"\003F**",mf48D856F9},
{mfdict+550,0,"\005FALOG",mfD01424BA},
{mfdict+551,0,"\004FSQR",mf21928C5D},
{mfdict+552,0,"\005FSQRT",mfE2B2722B},
{mfdict+553,0,"\004FEXP",mfB719E43C},
{mfdict+554,0,"\006FEXPM1",mfEE5E7196},
{mfdict+555,0,"\003FLN",mf2DCBBDB3},
{mfdict+556,0,"\005FLNP1",mf1DD527B8},
{mfdict+557,0,"\004FLOG",mfEBB99625},
{mfdict+558,0,"\005ISNAN",mf197F2C4A},
{mfdict+559,0,"\005ISINF",mfCE764F78},
{mfdict+560,0,"\005FSIGN",mf920371A8},
{mfdict+561,0,"\003F0=",mfDDBFA9A2},
{mfdict+562,0,"\003F0<",mfDEBFAB35},
{mfdict+563,0,"\003F0>",mfDCBFA80F},
{mfdict+564,0,"\004F0<>",mfB2BA4251},
{mfdict+565,0,"\004F0>=",mfB3B5C6B6},
{mfdict+566,0,"\004F0<=",mfAFBA3D98},
{mfdict+567,0,"\002F<",mf10D2B6DF},
{mfdict+568,0,"\003F>=",mfD9BB2628},
{mfdict+569,0,"\002F>",mf12D2BA05},
{mfdict+570,0,"\003F<=",mf5DB5E5C6},
{mfdict+571,0,"\002F=",mf0FD2B54C},
{mfdict+572,0,"\003F<>",mf5CB5E433},
{mfdict+573,0,"\002F~",mf52D31EC5},
{mfdict+574,0,"\004FMIN",mf47E5CB93},
{mfdict+575,0,"\004FMAX",mf9DF9DAAD},
{mfdict+576,0,"\007RAD>DEG",mfA01628D6},
{mfdict+577,0,"\007DEG>RAD",mf8C3D07D6},
{mfdict+578,0,"\004FSIN",mf65A67F21},
{mfdict+579,0,"\004FCOS",mfD83F1900},
{mfdict+580,0,"\004FTAN",mf8BA5E8C4},
{mfdict+581,0,"\005FASIN",mfCEB8A782},
{mfdict+582,0,"\005FACOS",mfB6996E2B},
{mfdict+583,0,"\005FATAN",mf1D906973},
{mfdict+584,0,"\007FSINCOS",mf9F4E25E8},
{mfdict+585,0,"\006FHYPOT",mf52204221},
{mfdict+586,0,"\006FATAN2",mfCB55B153},
{mfdict+587,0,"\005FSINH",mf6E1A924B},
{mfdict+588,0,"\005FCOSH",mfB354CC58},
{mfdict+589,0,"\005FTANH",mf622D1464},
{mfdict+590,0,"\006FASINH",mf36B022FE},
{mfdict+591,0,"\006FACOSH",mfD688C5D9},
{mfdict+592,0,"\006FATANH",mfC555A7E1},
{mfdict+593,0,"\002PI",mf27FFFAB2},
{mfdict+594,0,"\005EULER",mf1DD48712},
{mfdict+595,0,"\006FSQRT2",mfF7E99D5B},
{mfdict+596,0,"\002F@",mf84D36D7B},
{mfdict+597,0,"\002F!",mf23D2D4C8},
{mfdict+598,0,"\005FLOAT",mf8A18CFA5},
{mfdict+599,0,"\006FLOATS",mf5B0F6042},
{mfdict+600,0,"\006FLOAT+",mfF30EBC8A},
{mfdict+601,0,"\010FALIGNED",mf18766AA3},
{mfdict+602,0,"\006FALIGN",mf3D65DC12},
{mfdict+603,0,"\003DF@",mf220C821D},
{mfdict+604,0,"\003DF!",mf810D17AA},
{mfdict+605,0,"\007DFLOAT+",mfF14468F4},
{mfdict+606,0,"\007DFLOATS",mfF944758C},
{mfdict+607,0,"\011DFALIGNED",mfA0D02C85},
{mfdict+608,0,"\007DFALIGN",mfC001DA54},
{mfdict+609,0,"\003SF@",mf4AF93744},
{mfdict+610,0,"\003SF!",mf6BF96B37},
{mfdict+611,0,"\007SFLOAT+",mfE0232691},
{mfdict+612,0,"\007SFLOATS",mfC82300C9},
{mfdict+613,0,"\011SFALIGNED",mf78FE0C50},
{mfdict+614,0,"\007SFALIGN",mf3C8CEB39},
{mfdict+615,0,"\011PRECISION",mf9FC732F7},
{mfdict+616,0,"\015SET-PRECISION",mf469D9BEE},
{mfdict,0,"\012_REPRESENT",mfC5CB6802},
{mfdict+617,0,"\011REPRESENT",mfDDB6AC9B},
{mfdict+619,0,"\003FS.",mf6BB048D0},
{mfdict+620,0,"\003GS.",mf61138913},
{mfdict+621,0,"\003FE.",mfEBDC9EEE},
{mfdict+622,0,"\003GE.",mf00E76555},
{mfdict,0,"\003_F.",mf33432BE2},
{mfdict+623,0,"\002F.",mf22D2D335},
{mfdict+625,0,"\006>FLOAT",mf367FD819},
{mfdict,0,"\007_[FLIT]",mf48726737},
{mfdict+626,0,"\002F,",mf20D2D00F},
{mfdict+628,3,"\010FLITERAL",mf5D7A6040},
{mfdict+629,0,"\011FCONSTANT",mf91346E41},
{mfdict+630,0,"\011FVARIABLE",mf66D780C1},
{mfdict+631,0,"\006FVALUE",mfA157AEE6},
{mfdict+632,0,"\007FFIELD:",mf05CF154B},
{mfdict+633,0,"\010SFFIELD:",mf73FF7A3E},
{mfdict+634,0,"\010DFFIELD:",mfFF86BB11},
{mfdict,0,"\007_FLOAT?",mfD0F57DA1},
{mfdict+635,0,"\003Z>R",mfEAD10741},
{mfdict+637,0,"\003ZR@",mfDFFFF6F7},
{mfdict+638,0,"\003ZR>",mf46009789},
{mfdict+639,0,"\005ZDROP",mf99159864},
{mfdict+640,0,"\005ZSWAP",mf8FAE2136},
{mfdict+641,0,"\004ZNIP",mf10DC9380},
{mfdict+642,0,"\004ZROT",mf40D6FBF6},
{mfdict+643,0,"\004ZDUP",mfB28A2ABE},
{mfdict+644,0,"\005ZOVER",mfD263C767},
{mfdict+645,0,"\005ZTUCK",mf707715E0},
{mfdict+646,0,"\011COMPLEXES",mf8FB74C1F},
{mfdict+647,0,"\007ZFIELD:",mf5D3C2BDF},
{mfdict+648,0,"\002Z!",mf8C189D04},
{mfdict+649,0,"\002Z@",mf2D180777},
{mfdict+650,0,"\003Z0=",mf47E99E8E},
{mfdict+651,0,"\002Z=",mf9018A350},
{mfdict+652,0,"\002Z~",mf53184349},
{mfdict+653,0,"\005ZREAL",mf1BBBF3F5},
{mfdict+654,0,"\005ZIMAG",mfE0A42303},
{mfdict+655,0,"\005ZCONJ",mf0C004CEB},
{mfdict+656,0,"\004ZABS",mfE6D6ED93},
{mfdict+657,0,"\004ZARG",mfDAFF7D1F},
{mfdict+658,0,"\006ZSCALE",mfC89293D9},
{mfdict+659,0,"\007Z>POLAR",mf1EA1F243},
{mfdict+660,0,"\013Z>CARTESIAN",mf1316E611},
{mfdict+661,0,"\003Z2*",mf3AEE0745},
{mfdict+662,0,"\003Z2/",mf35EDFF66},
{mfdict+663,0,"\007ZNEGATE",mfB859ACF3},
{mfdict+664,0,"\002Z+",mf86189392},
{mfdict+665,0,"\002Z-",mf80188A20},
{mfdict+666,0,"\002Z*",mf87189525},
{mfdict+667,0,"\0031/Z",mf0B448CE9},
{mfdict+668,0,"\004ZINV",mfC2848A50},
{mfdict+669,0,"\002Z/",mf82188D46},
{mfdict+670,0,"\004ZSQR",mfD122A119},
{mfdict+671,0,"\005ZSQRT",mf8683EC37},
{mfdict+672,0,"\004ZEXP",mf31391A30},
{mfdict+673,0,"\003ZLN",mfF5B677E7},
{mfdict+674,0,"\003Z**",mfBAB2A69D},
{mfdict+675,0,"\004ZCOS",mfD9D0F624},
{mfdict+676,0,"\004ZSIN",mf8D3750C5},
{mfdict+677,0,"\004ZTAN",mfA9869DE0},
{mfdict+678,0,"\005ZACOS",mfA97580B7},
{mfdict+679,0,"\005ZASIN",mf7C22396E},
{mfdict+680,0,"\005ZATAN",mf63C543B7},
{mfdict+681,0,"\005ZCOSH",mf4FF3EC04},
{mfdict+682,0,"\005ZSINH",mfDB13CDF7},
{mfdict+683,0,"\005ZTANH",mf86EA2F78},
{mfdict+684,0,"\006ZACOSH",mfC2FA116D},
{mfdict+685,0,"\006ZASINH",mf8FDFF6D2},
{mfdict+686,0,"\006ZATANH",mf0E8A0A6D},
{mfdict+687,0,"\002Z.",mf83188ED9},
{mfdict+688,0,"\010>COMPLEX",mfF0FA4B5B},
{mfdict+689,3,"\010ZLITERAL",mf2490216C},
{mfdict+690,0,"\011ZCONSTANT",mfA1FE94DD},
{mfdict+691,0,"\011ZVARIABLE",mfEC17516D},
{mfdict+692,0,"\006ZVALUE",mfE291D512},
{mfdict,0,"\005_[L:]",mf54B9890C},
{mfdict,0,"\005_[;L]",mf2D494277},
{mfdict,0,"\004_[L]",mfB50D5E0C},
{mfdict,0,"\007_[LOC@]",mfBF5EECFC},
{mfdict+693,2,"\007(LOCAL)",mf0AD4B2AD},
{mfdict+698,3,"\007LOCALS|",mfD0F0D3E7},
{mfdict+699,3,"\002{:",mf0D654860},
{mfdict+700,3,"\001{",mfFE0C521A},
{mfdict+701,1,"\002:=",mf910625F0},
{mfdict+702,1,"\002+=",mf14DC14B5},
{mfdict+703,0,"\007COMPARE",mf4C05BF94},
{mfdict+704,0,"\006SEARCH",mf36D11E29},
{mfdict+705,0,"\005CMOVE",mfFC534FAF},
{mfdict+706,0,"\006CMOVE>",mfC8264143},
{mfdict+707,0,"\011-TRAILING",mfE6D53A44},
{mfdict+708,0,"\005BLANK",mf80363E61},
{mfdict+709,0,"\014PARSE-STRING",mfA4420196},
{mfdict+710,0,"\010REPLACES",mf42101DD0},
{mfdict+711,0,"\010UNESCAPE",mfFF0E38ED},
{mfdict+712,0,"\012SUBSTITUTE",mf1C4B40F1},
{mfdict,0,"\006_BFILE",mfA5C7BBD2},
{mfdict,0,"\007_CURBIB",mfD0BA2FD1},
{mfdict+713,0,"\017CLOSE-BLOCKFILE",mf52AA6F21},
{mfdict+716,0,"\016OPEN-BLOCKFILE",mfB64C9D63},
{mfdict+717,0,"\020CREATE-BLOCKFILE",mf0420D2C7},
{mfdict+718,0,"\016BLOCKFILE-NAME",mf50FACB30},
{mfdict+719,0,"\016BLOCKFILE-SIZE",mfC8C9F96A},
{mfdict+720,0,"\020RESIZE-BLOCKFILE",mf5538243B},
{mfdict+721,0,"\012BLOCK-READ",mf1ED475DD},
{mfdict+722,0,"\013BLOCK-WRITE",mf848FBD34},
{mfdict+723,0,"\012BLOCK-FILL",mf06E88970},
{mfdict+724,0,"\015EMPTY-BUFFERS",mf4CE18DB4},
{mfdict+725,0,"\014SAVE-BUFFERS",mfAECB85D2},
{mfdict+726,0,"\005FLUSH",mf95A90CFD},
{mfdict+727,0,"\006UPDATE",mf1C3385B4},
{mfdict+728,0,"\006BUFFER",mfFFB24B3B},
{mfdict+729,0,"\005BLOCK",mfFAF8D8C2},
{mfdict+730,0,"\003SCR",mf46F27533},
{mfdict+731,0,"\004LIST",mf0A4EBBC1},
{mfdict+732,0,"\005TRIAD",mf70B4A90B},
{mfdict+733,0,"\004LOAD",mfE3F88DE9},
{mfdict+734,0,"\004THRU",mfDE60F184},
{mfdict+735,1,"\003-->",mfD3E4F423},
{mfdict+736,0,"\007CS-PICK",mfA22AC7EB},
{mfdict+737,0,"\007CS-ROLL",mf70256A75},
{mfdict+738,0,"\003N>R",mfB0B6FFBD},
{mfdict+739,0,"\003NR>",mf43AABE05},
{mfdict+740,0,"\001?",mf3A0CB08E},
{mfdict+741,3,"\005AHEAD",mf3560A2EE},
{mfdict+742,3,"\002[:",mf0D159680},
{mfdict+743,3,"\002;]",mf35035685},
{mfdict+744,0,"\005ALIAS",mfCC9D3437},
{mfdict+745,0,"\007SYNONYM",mfEA57B3EA},
{mfdict+746,1,"\011[DEFINED]",mfC499B67A},
{mfdict+747,1,"\013[UNDEFINED]",mf3FBA9B29},
{mfdict+748,1,"\006[ELSE]",mf47F43EC6},
{mfdict+749,1,"\004[IF]",mf1DE32B80},
{mfdict+750,1,"\006[THEN]",mf633F5F98},
{mfdict+751,0,"\010MINFORTH",mfAF4978BE},
{mfdict,0,"\006_NAME.",mf2A138099},
{mfdict+752,0,"\021TRAVERSE-WORDLIST",mf68A478E2},
{mfdict+754,0,"\013NAME>STRING",mfD92BB8B1},
{mfdict+755,0,"\016NAME>INTERPRET",mf57EEA72D},
{mfdict+756,0,"\014NAME>COMPILE",mf96E72E3D},
{mfdict+757,0,"\005WORDS",mf07F5E02A},
{mfdict+758,0,"\020SHOW-RECOGNIZERS",mfDF63F90A},
{mfdict+759,0,"\017SWAP-RECOGNIZER",mfB9B294E7},
{mfdict+760,0,"\003<IN",mf7CD8E2E8},
{mfdict+761,0,"\002..",mfA3D4A70D},
{mfdict+762,0,"\002.S",mf66D44706},
{mfdict+763,0,"\003.RS",mf3D2E95FE},
{mfdict+764,0,"\003.FS",mf35602632},
{mfdict+765,0,"\004DUMP",mfC6897287},
{mfdict+766,0,"\006XT-SEE",mf6B7D8387},
{mfdict+767,0,"\003SEE",mf38016820},
{mfdict,0,"\007_[DEB:]",mfFBBF5FA7},
{mfdict,0,"\006_UNBUG",mf0EE95A7D},
{mfdict+768,0,"\011UNBUG-ALL",mf4C2C9E72},
{mfdict+771,0,"\005UNBUG",mf7E05BCA0},
{mfdict+772,0,"\005DEBUG",mf685108F8},
{mfdict+773,0,"\001X",mfDD0C1E27},
{mfdict+774,0,"\005FIRST",mfF0EB79A1},
{mfdict+775,0,"\006RESULT",mfA7E14EE4},
{mfdict+776,0,"\021CALC_SUM_PLUS_5_5",mf9B986251},
{mfdict+777,0,"\011INCREMENT",mfE4FB099E},
{mfdict+778,0,"\024CHECK_LARGER_THAN_20",mf9AF12F6E},
{mfdict+779,0,"\007COUNTER",mf04D308C3},
{mfdict+780,0,"\017WHILE_LOOP_TEST",mfB186312A},
{mfdict+781,0,"\007RESULT1",mf1CAF194F},
{mfdict+782,0,"\013INIT-SYSTEM",mf22CA2F63},
{mfdict+783,0,"\007CLEANUP",mf79F2F113},
{mfdict+784,0,"\004MAIN",mf96272888}};

// --- Search Parameters

#define MFPRIMS 785
void* MFLAST=mfdict+MFPRIMS;
void* MFLATEST=mfdict+MFPRIMS;
void* MFFWL[3]={mfdict+MFPRIMS,"\005FORTH",NULL};
void* MFCTX[8]={MFFWL,NULL};

#include "mf3.sys"

// --- Forth Definitions
 
#define MFCORE  

mfXT MFE5B4B40F=mf720CD026; // IS __XCTHROW

void mfE5B4B40F(void) { // DEFER THROW
  (MFE5B4B40F)();
}

void mf8B51E6F7(void) { // : _RP!
  mferr(mfin(1);mfwithin(0,mftos,mfrstsize));  
  mfrp=mfrst+mfpop();
}

void mf3EC47269(void) { // : _RDEPTH
  mferr(mfout(1));  
  mfpush(mfrp-mfrst);
}

static inline void mf67FCEB09(void) { // : >R
  mferr(mfin(1);mfrout(1));  
  mfrpush(mfpop());
}

static inline void mf130456D1(void) { // : R>
  mferr(mfrin(1);mfout(1));  
  mfpush(mfrpop());
}

static inline void mf7D04FDAF(void) { // : R@
  mferr(mfrin(1);mfout(1));  
  mfpush(mfrtos);
}

static inline void mf0807143C(void) { // : RDROP
  mferr(mfrin(1));  
  mfrdrop;
}

static inline void mf982060C8(void) { // : RPICK
  mferr(mfin(1);mfrin(abs((int)mftos)+1));  
  mftos=mfrp[-mftos];
}

void mf89C518BC(void) { // : _SP!
  mferr(mfin(1);mfwithin(0,mftos,mfstksize));  
  mfsp=mfstk+mftos;
}

static inline void mfCE61558A(void) { // : DEPTH
  mferr(mfout(1));  
  mfCell u=mfsp-mfstk;  
  mfpush(u);
}

static inline void mf52C16B0C(void) { // : DROP
  mferr(mfin(1));  
  mfdrop;
}

static inline void mfA2DF200E(void) { // : SWAP
  mferr(mfin(2));  
  mfCell a=mfsec;  
  mfsec=mftos, mftos=a;
}

static inline void mf87E8362E(void) { // : ROT
  mferr(mfin(3));  
  mfCell a=mfthd;  
  mfthd=mfsec,mfsec=mftos,mftos=a;
}

static inline void mf57E80646(void) { // : DUP
  mferr(mfin(1);mfout(1));  
  mfup, mftos=mfsec;
}

static inline void mf2FE7860F(void) { // : OVER
  mferr(mfin(2);mfout(1));  
  mfup, mftos=mfthd;
}

static inline void mf8003A4B3(void) { // : ?DUP
  if(mftos)
  mf57E80646(); // DUP
}

static inline void mfE67669F8(void) { // : PICK
  mferr(mfin(mftos+1));  
  mftos=mfsp[-mftos-1];
}

static inline void mf63DECBC8(void) { // : NIP
  mferr(mfin(2));  
  mfsec=mftos, mfdrop;
}

static inline void mf93A82DE8(void) { // : TUCK
  mferr(mfin(2);mfout(1));  
  mfup, mftos=mfsec, mfsec=mfthd, mfthd=mftos;
}

static inline void mfEFF28235(void) { // : -ROT
  mferr(mfin(3));  
  mfCell c=mftos;  
  mftos=mfsec,mfsec=mfthd,mfthd=c;
}

static inline void mf6AB5854A(void) { // : PLUCK
  mferr(mfin(3);mfout(1));  
  mfontos=mfthd, mfup;
}

void mf5451721E(void) { // : ROLL
  mferr(mfin(mftos+2));  
  mfCell n=mfpop(); mfCell x=mfsp[-n];  
  memmove(mfsp-n,mfsp-n+1,n*MFSIZE);  
  mftos=x;
}

static inline void mfEF6476DC(void) { // : 2DROP
  mferr(mfin(2));  
  mf2drop;
}

static inline void mfE0839FF6(void) { // : 2DUP
  mferr(mfin(2);mfout(2));  
  mfCell a=mfsec, b=mftos;  
  mfpush(a), mfpush(b);
}

static inline void mf8C8BC01F(void) { // : 2OVER
  mferr(mfin(4);mfout(2));  
  mfCell a=mffth, b=mfthd;  
  mfpush(a), mfpush(b);
}

static inline void mf404D123E(void) { // : 2SWAP
  mferr(mfin(4));  
  mfCell a=mffth, b=mfthd, c=mfsec, d=mftos;  
  mffth=c, mfthd=d, mfsec=a, mftos=b;
}

static inline void mf89F60699(void) { // : 2>R
  mferr(mfin(2);mfrout(2));  
  mfCell x=mfpop();  
  mfrpush(mfpop()), mfrpush(x);
}

static inline void mf34FF0561(void) { // : 2R>
  mferr(mfrin(2);mfout(2));  
  mfCell x=mfrpop();  
  mfpush(mfrpop()), mfpush(x);
}

static inline void mf3EFF151F(void) { // : 2R@
  mferr(mfrin(2);mfout(2));  
  mfpush(mfrsec), mfpush(mfrtos);
}

void mfE97032F9(void) { // : _LP!
  mferr(mfin(1);mfwithin(0,mftos,mfstksize));  
  mflp=mfstk+MFSTKSIZE-mfpop();
}

void mfA14BE51B(void) { // : _FP!
  mferr(mfin(1);mfwithin(0,mftos,mffstsize));  
  mffp=mffst+mfpop();
}

void mfAC2CA76D(void) { // : NOOP
}

const mfCell MF501B0925=-1; // -1

void mf501B0925(void) { // CONSTANT TRUE
  mfpush(MF501B0925);
}

const mfCell MFEE597878=0; // 0

void mfEE597878(void) { // CONSTANT FALSE
  mfpush(MFEE597878);
}

static inline void mfABEE47AA(void) { // : NOT
  mferr(mfin(1));  
  mftos=-!mftos;
}

static inline void mf91666DC6(void) { // : AND
  mferr(mfin(2));  
  mfdrop, mftos&=mfontos;
}

static inline void mf7CE4AA04(void) { // : OR
  mferr(mfin(2));  
  mfdrop, mftos|=mfontos;
}

static inline void mf4F46575E(void) { // : XOR
  mferr(mfin(2));  
  mfdrop, mftos^=mfontos;
}

static inline void mfD745D921(void) { // : INVERT
  mferr(mfin(1));  
  mftos=~mftos;
}

static inline void mf84439159(void) { // : LSHIFT
  mferr(mfin(2));  
  mfCell p=mfpop(); mftos<<=p;
}

static inline void mf24728B77(void) { // : RSHIFT
  mferr(mfin(2));  
  mfCell p=mfpop(); mftos=(mfUCell)mftos>>p;
}

void mf6FE81066(void) { // : ROL
  mferr(mfin(2));  
  mfCell p=mfpop(); mfUCell u=(mfUCell)mftos;     
  p&=MFBITS-1, mftos = u<<p | u>>(MFBITS-p);
}

void mf89E83954(void) { // : ROR
  mferr(mfin(2));  
  mfCell p=mfpop(); mfUCell u=(mfUCell)mftos;     
  p&=MFBITS-1, mftos = u>>p | u<<(MFBITS-p);
}

static inline void mf80E4B050(void) { // : ON
  mferr(mfin(1));  
  mfat(mfpop())=(mfUCell)-1;
}

static inline void mf2E1505EA(void) { // : OFF
  mferr(mfin(1));  
  mfat(mfpop())=0;
}

static inline void mf14ED5DD6(void) { // : 0=
  mferr(mfin(1));  
  mftos=-(mftos==0);
}

static inline void mfDBAD15F5(void) { // : 0<>
  mferr(mfin(1));  
  mftos=-(mftos!=0);
}

static inline void mf15ED5F69(void) { // : 0<
  mferr(mfin(1));  
  mftos=-(mftos<0);
}

static inline void mf13ED5C43(void) { // : 0>
  mferr(mfin(1));  
  mftos=-(mftos>0);
}

static inline void mfD8AD113C(void) { // : 0<=
  mferr(mfin(1));  
  mftos=-(mftos<=0);
}

static inline void mfDCA89A5A(void) { // : 0>=
  mferr(mfin(1));  
  mftos=-(mftos>=0);
}

static inline void mf380CAD68(void) { // : =
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos==mfontos);
}

static inline void mf93F7201F(void) { // : <>
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos!=mfontos);
}

static inline void mf390CAEFB(void) { // : <
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos<mfontos);
}

static inline void mf3B0CB221(void) { // : >
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos>mfontos);
}

static inline void mf94F721B2(void) { // : <=
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos<=mfontos);
}

static inline void mf10FC6214(void) { // : >=
  mferr(mfin(2));  
  mfdrop, mftos=-(mftos>=mfontos);
}

static inline void mf0EF30764(void) { // : U<
  mferr(mfin(2));  
  mfdrop, mftos=-((mfUCell)mftos<(mfUCell)mfontos);
}

static inline void mf10F30A8A(void) { // : U>
  mferr(mfin(2));  
  mfdrop, mftos=-((mfUCell)mftos>(mfUCell)mfontos);
}

static inline void mfE194911B(void) { // : U<=
  mferr(mfin(2));  
  mfdrop, mftos=-((mfUCell)mftos<=(mfUCell)mfontos);
}

static inline void mf6599DE15(void) { // : U>=
  mferr(mfin(2));  
  mfdrop, mftos=-((mfUCell)mftos>=(mfUCell)mfontos);
}

static inline void mf2E0C9DAA(void) { // : +
  mferr(mfin(2));  
  mfdrop, mftos+=mfontos;
}

static inline void mf280C9438(void) { // : -
  mferr(mfin(2));  
  mfdrop, mftos-=mfontos;
}

static inline void mf5EE442DB(void) { // : NEGATE
  mferr(mfin(1));  
  mftos=-mftos;
}

static inline void mf26EB3B95(void) { // : 1+
  mferr(mfin(1));  
  mftos+=1;
}

static inline void mf20EB3223(void) { // : 1-
  mferr(mfin(1));  
  mftos-=1;
}

static inline void mf6C84489B(void) { // : ABS
  mferr(mfin(1));  
  mftos=llabs(mftos);
}

static inline void mf2F0C9F3D(void) { // : *
  mferr(mfin(2));  
  mfdrop, mftos*=mfontos;
}

void mf45BE23A2(void) { // : /MOD
  mferr(mfin(2);mfzero(mftos));  
  mfCell a=mfsec, b=mftos, q=a/b, r=a-q*b;  
  mfsec=r, mftos=q;
}

static inline void mf2A0C975E(void) { // : /
  mferr(mfin(2);mfzero(mftos));  
  mfdrop, mftos/=mfontos;
}

static inline void mf6453F3A3(void) { // : MOD
  mferr(mfin(2);mfzero(mftos));  
  mfdrop, mftos%=mfontos;
}

static inline void mfA7F2C26D(void) { // : 2*
  mferr(mfin(1));  
  mftos<<=1;
}

static inline void mfA2F2BA8E(void) { // : 2/
  mferr(mfin(1));  
  mftos>>=1;
}

void mf09D242EA(void) { // : WITHIN
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf67FCEB09(); // >R
  mf280C9438(); // -
  mf130456D1(); // R>
  mf0EF30764(); // U<
}

void mf1C599279(void) { // : MAX
  mfE0839FF6(); // 2DUP
  mf390CAEFB(); // <
mfIF
  mfA2DF200E(); // SWAP
mfTHEN
  mf52C16B0C(); // DROP
}

void mf0E45F4B7(void) { // : MIN
  mfE0839FF6(); // 2DUP
  mf390CAEFB(); // <
mfNOTIF
  mfA2DF200E(); // SWAP
mfTHEN
  mf52C16B0C(); // DROP
}

void mfE40F181D(void) { // : _MU+
  mferr(mfin(3));  
#ifdef MFDBL  
  mfUCell w=mfpop(); mfUDbl ud=mfdtos;  
  mfdtos=ud+w;  
#else  
  mfUCell w=mfpop(), lo=mfsec+w;  
  mfsec=lo, mftos+=lo<w;  
#endif  
}

void mfE30F168A(void) { // : _MU*
  mferr(mfin(3));  
#ifdef MFDBL  
  mfUCell w=mfpop(); mfUDbl ud=mfdtos;  
  mfdtos=ud*w;  
#else  
  mfUCell c=mfpop(), b=mftos, a=mfsec;  
  mfUCell cl=c&0xffffffff, ch=c>>32, al=a&0xffffffff, ah=a>>32;  
  mfsec = a*c, mftos = b*c + ah*ch;  
  a = ch*al, b = a + cl*ah + ((cl*al)>>32), c = b>>32;  
  mftos += (a<=b ? c : c|0x100000000);  
#endif  
}

void mf1691D15F(void) { // : _MU/MOD
  mferr(mfin(3);mfzero(mftos));  
#ifdef MFDBL  
  mfUDbl udq, ud=*(mfUDbl*)(mfsp-2); mfUCell v=mftos;  
  if(ud==v) mfthd=0, mfsec=1, mftos=0;  
  else mfdtos=udq=ud/v, mfthd=ud-udq*v;  
#else  
  mfUCell v=mftos, a, b=mfthd, c=mfsec, d;  
  if (!c&&(b==v)) a=1, b=c=0; else {  
    if (!c) a=b/v, c=b-a*v, b=0; else {  
      a=c/v, c-=a*v;    
      for (int i=0; i<64; i++) {  
        d=c>>63, c=(c<<1)|(b>>63), b=(b<<1)|(a>>63), a<<=1;  
        if ((c>=v)||d) c-=v, a+=1; } } }  
  mfsec=a, mftos=b, mfthd=c;  
#endif  
}

void mfD9ACE697(void) { // : UM*
  mfpush(0); // $0
  mfA2DF200E(); // SWAP
  mfE30F168A(); // _MU*
}

void mf5F2279EC(void) { // : UM/MOD
  mf1691D15F(); // _MU/MOD
  mf52C16B0C(); // DROP
}

void mf16478CF0(void) { // : S>D
  mf57E80646(); // DUP
  mf15ED5F69(); // 0<
}

void mf8B105859(void) { // : DNEGATE
  mferr(mfin(2));  
#ifdef MFDBL  
  mfdtos=-mfdtos;  
#else  
  mfUCell l=~mfsec+1, h=~mftos+!l;  
  mfsec=l, mftos=h;  
#endif  
}

void mfE23549BD(void) { // : DABS
  mf57E80646(); // DUP
  mf15ED5F69(); // 0<
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
}

void mf1CDF95B6(void) { // : M*
  mfE0839FF6(); // 2DUP
  mf4F46575E(); // XOR
  mf67FCEB09(); // >R
  mf6C84489B(); // ABS
  mfA2DF200E(); // SWAP
  mf6C84489B(); // ABS
  mfD9ACE697(); // UM*
  mf130456D1(); // R>
  mf15ED5F69(); // 0<
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
}

void mf1705E412(void) { // : SM/REM
  mferr(mfin(3);mfzero(mftos));  
  mfCell z=mfsec, n=mftos, s=(z^n)<0;    
  mf6C84489B(); // ABS
  mf67FCEB09(); // >R
  mfE23549BD(); // DABS
  mf130456D1(); // R>
  mf5F2279EC(); // UM/MOD
  if (s) mftos=-mftos;   
  if (z<0) mfsec=-mfsec;
}

void mf66F1FDC7(void) { // : FM/MOD
  mfCell n=mftos, s=(mfsec^n)<0;  
  mf1705E412(); // SM/REM
  if (s&&mfsec) mftos-=1, mfsec+=n;
}

void mfE5A71F0A(void) { // : */MOD
  mf67FCEB09(); // >R
  mf1CDF95B6(); // M*
  mf130456D1(); // R>
  mf1705E412(); // SM/REM
}

void mf22DE6956(void) { // : */
  mfE5A71F0A(); // */MOD
  mf63DECBC8(); // NIP
}

static inline void mf2FEE4BC2(void) { // : CHAR+
  mferr(mfin(1));  
  mftos+=1;
}

void mfC7EDA80A(void) { // : CHARS
}

static inline void mf76DA1336(void) { // : C@
  mferr(mfin(1));  
  mftos=mfcat(mftos);
}

static inline void mf97DA4729(void) { // : C!
  mferr(mfin(2));  
  mfcat(mftos)=(mfChar)mfsec, mf2drop;
}

void mfC2064154(void) { // : MOVE
  mferr(mfin(3));  
  if (mftos>0) memmove((char*)mfsec,(char*)mfthd,mftos);  
  mfsp-=3;
}

void mfAF3DC588(void) { // : FILL
  mferr(mfin(3));  
  if (mfsec>0) memset((char*)mfthd,(char)mftos,mfsec);  
  mfsp-=3;
}

void mfB7F60EB5(void) { // : ERASE
  mfpush(0); // $0
  mfAF3DC588(); // FILL
}

static inline void mfBB8FCA7A(void) { // : CELL+
  mferr(mfin(1));  
  mftos+=MFSIZE;
}

static inline void mfB58FC108(void) { // : CELL-
  mferr(mfin(1));  
  mftos-=MFSIZE;
}

static inline void mf662FFFF5(void) { // : CELL
  mferr(mfout(1));  
  mfpush(MFSIZE);
}

static inline void mf838F7252(void) { // : CELLS
  mferr(mfin(1));  
  mftos*=MFSIZE;
}

static inline void mfC50BF85F(void) { // : @
  mferr(mfin(1));  
  mftos=mfat(mftos);
}

static inline void mf240C8DEC(void) { // : !
  mferr(mfin(2));  
  mfat(mftos)=mfsec, mf2drop;
}

static inline void mf08DC01D1(void) { // : +!
  mferr(mfin(2));  
  mfat(mftos)+=mfsec, mf2drop;
}

static inline void mf5A131C6F(void) { // : INCR
  mferr(mfin(1));  
  mfat(mftos)+=1, mfdrop;
}

static inline void mf7D948B73(void) { // : DECR
  mferr(mfin(1));  
  mfat(mftos)-=1, mfdrop;
}

static inline void mf3DF21B8F(void) { // : 2@
  mferr(mfin(1);mfout(1));  
  mfCell a=mftos;  
  mftos=mfat(a+MFSIZE), mfpush(mfat(a));
}

static inline void mf9CF2B11C(void) { // : 2!
  mferr(mfin(3));  
  mfCell a=mfpop();  
  mfat(a)=mfpop(), mfat(a+MFSIZE)=mfpop();
}

void mfA3F7B2D4(void) { // : COUNT
  mf57E80646(); // DUP
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mf76DA1336(); // C@
}

void mf62A404AF(void) { // : /STRING
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mf280C9438(); // -
  mfA2DF200E(); // SWAP
  mf130456D1(); // R>
  mf2E0C9DAA(); // +
  mfA2DF200E(); // SWAP
}

void mf2BEE4576(void) { // : CHAR/
  mf57E80646(); // DUP
  mf13ED5C43(); // 0>
mfIF
  mf20EB3223(); // 1-
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
mfTHEN
}

void mf465CFE55(void) { // : _TOUPPER
   mferr(mfin(1));  
   mftos=toupper(mftos);
}

void mfEE2653C2(void) { // : _UPPER
  mfpush(1); // $1
mfFORUP
mfN
  mf76DA1336(); // C@
  mf465CFE55(); // _TOUPPER
mfN
  mf97DA4729(); // C!
mfNEXT
}

mfCell MFA274DA18=-1; // -1

void mfA274DA18(void) { // VARIABLE CAPS
  mfpush(&MFA274DA18);
}

void mfA7AD15F7(void) { // : STR=
  char *a1,*a2; int u1,u2;  
  u2=mfpop(), a2=(char*)mfpop(), u1=mfpop(), a1=(char*)mftos; mftos=0;  
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mfsetcmp(mfpop());
  if ((u1==u2)&&!mfcmp(a1,a2,u1)) mftos=-1;
}

void mf10E38971(void) { // : _PLACE
  mfA2DF200E(); // SWAP
  mfpush(254); // $FE
  mf0E45F4B7(); // MIN
  mfE0839FF6(); // 2DUP
  mfA2DF200E(); // SWAP
  mf97DA4729(); // C!
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mfE0839FF6(); // 2DUP
  mf2E0C9DAA(); // +
  mfpush(0); // $0
  mfA2DF200E(); // SWAP
  mf97DA4729(); // C!
  mfA2DF200E(); // SWAP
  mfC2064154(); // MOVE
}

void mf12E2D898(void) { // : _ORIGIN
  mferr(mfout(1));  
  mfpush(mfdsp);
}

void mf9F4C117D(void) { // : _LIMIT
  mferr(mfout(1));  
  mfpush(mfdsp+MFDSPSIZE);
}

void mf0119CBC8(void) { // : _#IB
  mferr(mfout(1));  
  mfpush(MFIB);
}

void mfB93DEEA6(void) { // : _HP
  mferr(mfout(1));  
  static mfChar *hp=mfdsp+MFDSPSIZE;  
  mfpush(&hp);
}

static inline void mfD148A1CA(void) { // : _DP
  mferr(mfout(1));  
  mfpush(&mfdp);
}

void mf901B2AFF(void) { // : ALIGNED
  mferr(mfin(1));  
  mftos=(mftos+MFSIZE-1)&(-MFSIZE);
}

static inline void mf5F2B6B8B(void) { // : HERE
  mfD148A1CA(); // _DP
  mfC50BF85F(); // @
}

void mf9E0B1B0A(void) { // : PAD
  mf5F2B6B8B(); // HERE
  mf0119CBC8(); // _#IB
  mf2E0C9DAA(); // +
  mfpush(23); // $17
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf901B2AFF(); // ALIGNED
}

void mfCF430E1B(void) { // : UNUSED
  mfB93DEEA6(); // _HP
  mfC50BF85F(); // @
  mf5F2B6B8B(); // HERE
  mfpush(24); // $18
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfpush(256); // $100
  mf2E0C9DAA(); // +
  mf280C9438(); // -
}

void mfAFA183BE(void) { // : ALIGN
  mf5F2B6B8B(); // HERE
  mf901B2AFF(); // ALIGNED
  mfD148A1CA(); // _DP
  mf240C8DEC(); // !
}

void mf3FA1943F(void) { // : ALLOT
  mfCF430E1B(); // UNUSED
  mf2FE7860F(); // OVER
  mf390CAEFB(); // <
mfIF
  mfpush(-8); // $FFFFFFF8
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfD148A1CA(); // _DP
  mf08DC01D1(); // +!
}

mfCell MFE972DB58=10; // 10

void mfE972DB58(void) { // VARIABLE BASE
  mfpush(&MFE972DB58);
}

static inline void mf48AF9A2C(void) { // : DECIMAL
  mfpush(10); // $A
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

static inline void mf818F192A(void) { // : HEX
  mfpush(16); // $10
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

void mf7A717643(void) { // : _DIGIT>N
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfsec=mfdig2n(mfsec,mftos); mftos=(mfsec==256 ? 0 : -1);
}

void mf5773A68C(void) { // : >NUMBER
mfBEGIN
mfDUPWHILE
  mf2FE7860F(); // OVER
  mf76DA1336(); // C@
  mf7A717643(); // _DIGIT>N
mfNOTIF
  mf52C16B0C(); // DROP
mfEXIT
mfTHEN
  mf67FCEB09(); // >R
  mf404D123E(); // 2SWAP
  mf93A82DE8(); // TUCK
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfE30F168A(); // _MU*
  mf130456D1(); // R>
  mfE40F181D(); // _MU+
  mf87E8362E(); // ROT
  mf2FE7860F(); // OVER
  mf10F30A8A(); // U>
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(-1); // $FFFFFFFF
  mfpush(-1); // $FFFFFFFF
  mf404D123E(); // 2SWAP
mfEXIT
mfTHEN
  mf404D123E(); // 2SWAP
  mf2BEE4576(); // CHAR/
mfREPEAT
}

mfChar MFDF58554B[2*MFSIZE]={0}; // 2

void mfDF58554B(void) { // BUFFER __DBL
  mfpush(MFDF58554B);
}

mfCell MFE37AEDD9=0; // 0

void mfE37AEDD9(void) { // VARIABLE __DPL
  mfpush(&MFE37AEDD9);
}

mfCell MF60DFCE8E=0; // 0

void mf60DFCE8E(void) { // VARIABLE __BASE
  mfpush(&MF60DFCE8E);
}

mfCell MFCC4D88AE=0; // 0

void mfCC4D88AE(void) { // VARIABLE __SIGN
  mfpush(&MFCC4D88AE);
}

void mf15208282(void) { // : __NUMADJ
  mfEF6476DC(); // 2DROP
  mfpush(&MFCC4D88AE); // __SIGN
  mfC50BF85F(); // @
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfpush(&MFDF58554B); // __DBL
  mf9CF2B11C(); // 2!
  mfpush(&MF60DFCE8E); // __BASE
  mfC50BF85F(); // @
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

void mf867FFF4D(void) { // : NUMBER?
  mf57E80646(); // DUP
  mf13ED5C43(); // 0>
mfNOTIF
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
mfEXIT
mfTHEN
  mfpush(-1); // $FFFFFFFF
  mfpush(&MFE37AEDD9); // __DPL
  mf240C8DEC(); // !
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfpush(&MF60DFCE8E); // __BASE
  mf240C8DEC(); // !
  mf2FE7860F(); // OVER
  mf76DA1336(); // C@
mfCASE
  mfpush(36); // $24
mfOF
  mf2BEE4576(); // CHAR/
  mf818F192A(); // HEX
mfENDOF
  mfpush(35); // $23
mfOF
  mf2BEE4576(); // CHAR/
  mf48AF9A2C(); // DECIMAL
mfENDOF
  mfpush(37); // $25
mfOF
  mf2BEE4576(); // CHAR/
  mfpush(2); // $2
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
mfENDOF
  mfpush(46); // $2E
mfOF
  mf57E80646(); // DUP
  mfpush(1); // $1
  mf380CAD68(); // =
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
mfEXIT
mfTHEN
mfENDOF
  mfpush(39); // $27
mfOF
  mf57E80646(); // DUP
  mfpush(3); // $3
  mf380CAD68(); // =
mfIF
  mf2FE7860F(); // OVER
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf76DA1336(); // C@
  mfpush(39); // $27
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mf26EB3B95(); // 1+
  mf76DA1336(); // C@
  mfpush(1); // $1
mfEXIT
mfTHEN
mfTHEN
mfENDOF
mfENDCASE
  mfpush(0); // $0
  mfpush(&MFCC4D88AE); // __SIGN
  mf240C8DEC(); // !
  mf2FE7860F(); // OVER
  mf76DA1336(); // C@
mfCASE
  mfpush(43); // $2B
mfOF
  mf2BEE4576(); // CHAR/
mfENDOF
  mfpush(45); // $2D
mfOF
  mf2BEE4576(); // CHAR/
  mfpush(-1); // $FFFFFFFF
  mfpush(&MFCC4D88AE); // __SIGN
  mf240C8DEC(); // !
mfENDOF
mfENDCASE
  mfpush(0); // $0
  mfpush(0); // $0
  mf404D123E(); // 2SWAP
  mf57E80646(); // DUP
mfNOTIF
  mf48AF9A2C(); // DECIMAL
  mfpush(-24); // $FFFFFFE8
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf5773A68C(); // >NUMBER
mfDUPIF
  mf2FE7860F(); // OVER
  mf76DA1336(); // C@
  mfpush(46); // $2E
  mf380CAD68(); // =
mfIF
  mf2BEE4576(); // CHAR/
  mf57E80646(); // DUP
  mfpush(&MFE37AEDD9); // __DPL
  mf240C8DEC(); // !
  mf5773A68C(); // >NUMBER
  mf57E80646(); // DUP
mfNOTIF
  mf15208282(); // __NUMADJ
  mfpush(2); // $2
mfEXIT
mfTHEN
mfTHEN
  mfEF6476DC(); // 2DROP
  mfEF6476DC(); // 2DROP
  mfpush(-1); // $FFFFFFFF
  mfpush(&MFE37AEDD9); // __DPL
  mf240C8DEC(); // !
  mfpush(&MF60DFCE8E); // __BASE
  mfC50BF85F(); // @
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
  mfpush(0); // $0
mfEXIT
mfTHEN
  mf6AB5854A(); // PLUCK
  mf67FCEB09(); // >R
  mf15208282(); // __NUMADJ
  mf130456D1(); // R>
mfIF
  mfpush(2); // $2
mfELSE
  mf52C16B0C(); // DROP
  mfpush(1); // $1
mfTHEN
}

void mf1BF6A5CC(void) { // : _NUMBER?
  mf867FFF4D(); // NUMBER?
  mf57E80646(); // DUP
  mfpush(2); // $2
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
mfTHEN
}

static inline void mfD9BC5E8A(void) { // : EMIT
  mferr(mfin(1));  
  mfemit(mfpop());
}

const mfCell MF20DD5D6B=32; // 32

void mf20DD5D6B(void) { // CONSTANT BL
  mfpush(MF20DD5D6B);
}

void mf1808F0E5(void) { // : SPACE
  mfpush(MF20DD5D6B); // BL
  mfD9BC5E8A(); // EMIT
}

void mf8C12EE82(void) { // : SPACES
mfFOR
  mf1808F0E5(); // SPACE
mfNEXT
}

static inline void mf64D9F6E0(void) { // : CR
  mfemit('\n');
}

void mf142FE78D(void) { // : TYPE
  mferr(mfin(2));  
  mftype(mfsec,mftos), mf2drop;
}

void mf6B388877(void) { // : _N>DIGIT
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfsec=mfn2dig(mfsec,mftos); mftos=(mfsec==256 ? 0 : -1);
}

mfCell MF4DCEA979=0; // 0

void mf4DCEA979(void) { // VARIABLE __HLD
  mfpush(&MF4DCEA979);
}

mfCell MF6F86C1B1=0; // 0

void mf6F86C1B1(void) { // VARIABLE __NUM
  mfpush(&MF6F86C1B1);
}

mfCell MF5389E74A=0; // 0

void mf5389E74A(void) { // VARIABLE _,SEP
  mfpush(&MF5389E74A);
}

void mfEBB64F78(void) { // : HOLD
  mfpush(&MF4DCEA979); // __HLD
  mfC50BF85F(); // @
  mf20EB3223(); // 1-
  mf57E80646(); // DUP
  mfpush(&MF4DCEA979); // __HLD
  mf240C8DEC(); // !
  mf97DA4729(); // C!
}

void mf3AFEA0B1(void) { // : HOLDS
mfBEGIN
mfDUPWHILE
  mf20EB3223(); // 1-
  mfE0839FF6(); // 2DUP
  mf2E0C9DAA(); // +
  mf76DA1336(); // C@
  mfEBB64F78(); // HOLD
mfREPEAT
  mfEF6476DC(); // 2DROP
}

void mfA6F73E08(void) { // : <#
  mf9E0B1B0A(); // PAD
  mf20EB3223(); // 1-
  mfpush(0); // $0
  mf2FE7860F(); // OVER
  mf97DA4729(); // C!
  mfpush(&MF4DCEA979); // __HLD
  mf240C8DEC(); // !
  mfpush(&MF6F86C1B1); // __NUM
  mf2E1505EA(); // OFF
}

void mf260C9112(void) { // : #
  mfpush(&MF5389E74A); // _,SEP
  mfC50BF85F(); // @
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfpush(10); // $A
  mf380CAD68(); // =
  mf91666DC6(); // AND
mfIF
  mfpush(&MF6F86C1B1); // __NUM
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfpush(3); // $3
  mf6453F3A3(); // MOD
mfNOTIF
  mfpush(44); // $2C
  mfEBB64F78(); // HOLD
mfTHEN
mfTHEN
  mfpush(&MF6F86C1B1); // __NUM
  mf5A131C6F(); // INCR
mfTHEN
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf1691D15F(); // _MU/MOD
  mf87E8362E(); // ROT
  mf6B388877(); // _N>DIGIT
  mf52C16B0C(); // DROP
  mfEBB64F78(); // HOLD
}

void mf11C88844(void) { // : #>
  mfEF6476DC(); // 2DROP
  mfpush(&MF4DCEA979); // __HLD
  mfC50BF85F(); // @
  mf9E0B1B0A(); // PAD
  mf20EB3223(); // 1-
  mf2FE7860F(); // OVER
  mf280C9438(); // -
}

void mf26C8A953(void) { // : #S
mfBEGIN
  mf260C9112(); // #
  mfE0839FF6(); // 2DUP
  mf7CE4AA04(); // OR
mfNOTUNTIL
}

void mf0AADBFA4(void) { // : SIGN
  mf15ED5F69(); // 0<
mfIF
  mfpush(45); // $2D
  mfEBB64F78(); // HOLD
mfTHEN
}

void mfE4E51507(void) { // : _(.)
  mf57E80646(); // DUP
  mf6C84489B(); // ABS
  mfpush(0); // $0
  mfA6F73E08(); // <#
  mf26C8A953(); // #S
  mf87E8362E(); // ROT
  mf0AADBFA4(); // SIGN
  mf11C88844(); // #>
}

void mf2B0C98F1(void) { // : .
  mfE4E51507(); // _(.)
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mf67D44899(void) { // : .R
  mf67FCEB09(); // >R
  mfE4E51507(); // _(.)
  mf130456D1(); // R>
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf8C12EE82(); // SPACES
  mf142FE78D(); // TYPE
}

void mfFD90D4E8(void) { // : _(U.)
  mfpush(0); // $0
  mfA6F73E08(); // <#
  mf26C8A953(); // #S
  mf11C88844(); // #>
}

void mf20F323BA(void) { // : U.
  mfFD90D4E8(); // _(U.)
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mfC6C18638(void) { // : U.R
  mf67FCEB09(); // >R
  mfFD90D4E8(); // _(U.)
  mf130456D1(); // R>
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf8C12EE82(); // SPACES
  mf142FE78D(); // TYPE
}

void mfB994E9E7(void) { // : DEC.
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf48AF9A2C(); // DECIMAL
  mf2B0C98F1(); // .
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

void mfF844614C(void) { // : HEX.
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf818F192A(); // HEX
  mfpush(36); // $24
  mfD9BC5E8A(); // EMIT
  mf20F323BA(); // U.
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

void mf83CFF77F(void) { // : ,.
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf2B0C98F1(); // .
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mfAD621BD7(void) { // : ,.R
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf67D44899(); // .R
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mf72BC84CE(void) { // : U,.
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf20F323BA(); // U.
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mf3AC4C194(void) { // : U,.R
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mfC6C18638(); // U.R
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

mfXT MFACCAE4CC=mf7CB31EB3; // IS __FCKEY

void mfACCAE4CC(void) { // DEFER KEY
  (MFACCAE4CC)();
}

void mf2345CC3A(void) { // : __KEY
  mferr(mfout(1));  
  mfpush(mfkey());
}

mfXT MF209E17E9=mfB525B56C; // IS __FCACCEPT

void mf209E17E9(void) { // DEFER ACCEPT
  (MF209E17E9)();
}

void mfD3091947(void) { // : __ACCEPT
  mfpush(0); // $0
mfBEGIN
  (MFACCAE4CC)(); // KEY
  mf57E80646(); // DUP
  mfpush(13); // $D
  mf93F7201F(); // <>
mfWHILE
  mf57E80646(); // DUP
  mfpush(3); // $3
  mf380CAD68(); // =
  mf2FE7860F(); // OVER
  mfpush(27); // $1B
  mf380CAD68(); // =
  mf7CE4AA04(); // OR
mfIF
  mf52C16B0C(); // DROP
  mfpush(0); // $0
mfBREAK
mfTHEN
  mf57E80646(); // DUP
  mfpush(8); // $8
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
mfDUPIF
  mfpush(8); // $8
  mfD9BC5E8A(); // EMIT
  mf1808F0E5(); // SPACE
  mfpush(8); // $8
  mfD9BC5E8A(); // EMIT
  mf20EB3223(); // 1-
mfTHEN
mfCONTINUE
mfTHEN
  mf67FCEB09(); // >R
  mfE0839FF6(); // 2DUP
  mf3B0CB221(); // >
  mf130456D1(); // R>
  mfA2DF200E(); // SWAP
mfIF
  mf57E80646(); // DUP
  mfD9BC5E8A(); // EMIT
  mf2FE7860F(); // OVER
  mfpush(4); // $4
  mfE67669F8(); // PICK
  mf2E0C9DAA(); // +
  mf97DA4729(); // C!
  mf26EB3B95(); // 1+
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
mfREPEAT
  mf52C16B0C(); // DROP
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mf3B0CB221(); // >
mfIF
  mf7D04FDAF(); // R@
  mf2E0C9DAA(); // +
  mfpush(0); // $0
  mfA2DF200E(); // SWAP
  mf97DA4729(); // C!
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
  mf130456D1(); // R>
}

void mfC49B66C5(void) { // : _TIB
  mferr(mfout(1));  
  static mfChar tib[MFIB+1]; mfpush(tib);
}

void mfB3D82B11(void) { // : _SIBS
  mferr(mfout(1));  
  static mfChar sibs[4*(MFIB+2)]; mfpush(sibs);
}

mfCell MF0FF74456=0; // 0

void mf0FF74456(void) { // VARIABLE __SIBID
  mfpush(&MF0FF74456);
}

void mf12AE9718(void) { // : _SIB
  mfB3D82B11(); // _SIBS
  mfpush(&MF0FF74456); // __SIBID
  mfC50BF85F(); // @
  mf0119CBC8(); // _#IB
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf2F0C9F3D(); // *
  mf2E0C9DAA(); // +
}

void mfCFEC5BB6(void) { // : _>SIB
  mf0119CBC8(); // _#IB
  mfpush(2); // $2
  mf280C9438(); // -
  mf0E45F4B7(); // MIN
  mfpush(&MF0FF74456); // __SIBID
  mfC50BF85F(); // @
  mf26EB3B95(); // 1+
  mfpush(3); // $3
  mf91666DC6(); // AND
  mfpush(&MF0FF74456); // __SIBID
  mf240C8DEC(); // !
  mf12AE9718(); // _SIB
  mf10E38971(); // _PLACE
}

mfChar MF01A69217[5*MFSIZE]={0}; // 5

void mf01A69217(void) { // BUFFER _SRCSPEC
  mfpush(MF01A69217);
}

void mf7C1EEF6B(void) { // : _SRCLEN
  mfpush(&MF01A69217); // _SRCSPEC
}

void mf7A91D589(void) { // : _SRCADR
  mfpush(&MF01A69217); // _SRCSPEC
  mfBB8FCA7A(); // CELL+
}

void mfFD898658(void) { // : _SRCID!
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(4); // $4
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf240C8DEC(); // !
}

void mf5AF98C79(void) { // : _SRC2!
  mfpush(&MF01A69217); // _SRCSPEC
  mf9CF2B11C(); // 2!
}

void mf600421B4(void) { // : _SRC>R
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(5); // $5
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
mfNEXT
}

void mfD24E2A14(void) { // : _R>SRC
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(5); // $5
  mf662FFFF5(); // CELL
mfDOWNFOR
  mf130456D1(); // R>
mfN
  mf240C8DEC(); // !
mfNEXT
}

void mfB9790298(void) { // : SOURCE
  mfpush(&MF01A69217); // _SRCSPEC
  mf3DF21B8F(); // 2@
}

void mf580B1E42(void) { // : >IN
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

void mf254113A2(void) { // : SOURCE-ID
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(4); // $4
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
}

void mfDC799960(void) { // : BLK
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

mfXT MF94A8FFED=mfA540A49C; // IS __FLSVINPUT

void mf94A8FFED(void) { // DEFER SAVE-INPUT
  (MF94A8FFED)();
}

void mf3D67AD0F(void) { // : __SAVE-INPUT
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(5); // $5
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
mfNEXT
  mfpush(5); // $5
}

mfXT MFA10A7AB8=mf38712CFA; // IS __FLRSTINPUT

void mfA10A7AB8(void) { // DEFER RESTORE-INPUT
  (MFA10A7AB8)();
}

void mf97C8D2EE(void) { // : __RESTORE-INPUT
  mfpush(5); // $5
  mf93F7201F(); // <>
  mf2FE7860F(); // OVER
  mf254113A2(); // SOURCE-ID
  mf93F7201F(); // <>
  mf7CE4AA04(); // OR
mfIF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfpush(&MF01A69217); // _SRCSPEC
  mfpush(5); // $5
  mf662FFFF5(); // CELL
mfDOWNFOR
mfN
  mf240C8DEC(); // !
mfNEXT
  mfpush(MFEE597878); // FALSE
}

mfXT MFC1D4E711=mf42A996C6; // IS __BLKREFILL

void mfC1D4E711(void) { // DEFER REFILL
  (MFC1D4E711)();
}

void mf9715CACF(void) { // : __REFILL
  mf254113A2(); // SOURCE-ID
mfNOTIF
  mfC49B66C5(); // _TIB
  mf57E80646(); // DUP
  mf0119CBC8(); // _#IB
  (MF209E17E9)(); // ACCEPT
  mf5AF98C79(); // _SRC2!
  mfpush(0); // $0
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mfpush(MF501B0925); // TRUE
mfELSE
  mfpush(MFEE597878); // FALSE
mfTHEN
}

void mfD66336C5(void) { // : _SKIP
  mferr(mfin(3));  
  mfChar c=(mfChar)mfpop(),*a=(mfChar*)mfsec; mfCell u=mftos;  
  if (u<0) u=0;  
  if (c==32) { while (u>0) { if (*a>32) break; else a++,u--; } }   
  else { while (u>0) { if (*a!=c) break; else a++,u--; } }  
  mfsec=(mfCell)a, mftos=u;
}

void mfC119E57B(void) { // : _SCAN
  mferr(mfin(3));  
  mfChar c=(mfChar)mfpop(), *a=(mfChar*)mfsec; mfCell u=mftos;   
  if (u<0) u=0;  
  if (c==32) { while (u>0) { if (*a<=32) break; else a++,u--; } }   
  else { while (u>0) { if (*a==c) break; else a++,u--; } }  
  mfsec=(mfCell)a, mftos=u;
}

void mfB8B7D9B3(void) { // : __PRSAREA
  mfB9790298(); // SOURCE
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mf62A404AF(); // /STRING
  mfpush(0); // $0
  mf1C599279(); // MAX
}

void mf60C7C223(void) { // : __PRSOVF
  mf7C1EEF6B(); // _SRCLEN
  mfC50BF85F(); // @
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mf390CAEFB(); // <
mfIF
  mfpush(-18); // $FFFFFFEE
  (MFE5B4B40F)(); // THROW
mfTHEN
}

void mfADFC5551(void) { // : _PARSE
  mf2FE7860F(); // OVER
  mf67FCEB09(); // >R
  mf87E8362E(); // ROT
  mfC119E57B(); // _SCAN
  mf20EB3223(); // 1-
  mf7C1EEF6B(); // _SRCLEN
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mf280C9438(); // -
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mf93A82DE8(); // TUCK
  mf280C9438(); // -
}

void mfD918C10C(void) { // : PARSE
  mfB8B7D9B3(); // __PRSAREA
  mfADFC5551(); // _PARSE
}

void mfF08832C0(void) { // : _PARSE-CHAR
  mfD918C10C(); // PARSE
  mf60C7C223(); // __PRSOVF
}

void mfE9BCE12F(void) { // : _PARSE-NAME
  mfB8B7D9B3(); // __PRSAREA
  mfpush(2); // $2
  mfE67669F8(); // PICK
  mfD66336C5(); // _SKIP
  mfADFC5551(); // _PARSE
}

void mfF92179F8(void) { // : PARSE-NAME
  mfpush(MF20DD5D6B); // BL
  mfE9BCE12F(); // _PARSE-NAME
}

mfChar MFF939F00F[2*MFSIZE]={0}; // 2

void mfF939F00F(void) { // BUFFER _PARSED
  mfpush(MFF939F00F);
}

void mf5242998B(void) { // : _SWORD
  mf5F2B6B8B(); // HERE
  mf10E38971(); // _PLACE
  mf5F2B6B8B(); // HERE
}

void mf6D01E13D(void) { // : WORD
  mfE9BCE12F(); // _PARSE-NAME
  mfE0839FF6(); // 2DUP
  mfpush(&MFF939F00F); // _PARSED
  mf9CF2B11C(); // 2!
  mf5242998B(); // _SWORD
}

void mfC94E167C(void) { // : _PARSE-WORD
  mfpush(MF20DD5D6B); // BL
  mf6D01E13D(); // WORD
  mfA3F7B2D4(); // COUNT
}

void mfA59F665D(void) { // : CHAR
  mfF92179F8(); // PARSE-NAME
  mf52C16B0C(); // DROP
  mf76DA1336(); // C@
}

mfXT MFD90C17DB=mf62082023; // IS __BL|

void mfD90C17DB(void) { // DEFER |
  (MFD90C17DB)();
} // IMMEDIATE 

void mf075A3FED(void) { // : __|
  mf7C1EEF6B(); // _SRCLEN
  mfC50BF85F(); // @
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
}

mfXT MF2D0C9C17=mf202AC333; // IS __FL(

void mf2D0C9C17(void) { // DEFER (
  (MF2D0C9C17)();
} // IMMEDIATE 

void mf93598951(void) { // : __(
  mfpush(41); // $29
  mfF08832C0(); // _PARSE-CHAR
  mfEF6476DC(); // 2DROP
}

void mf9DD49D9B(void) { // : .(
  mfpush(41); // $29
  mfF08832C0(); // _PARSE-CHAR
  mf142FE78D(); // TYPE
} // IMMEDIATE 

void mf85A4C44F(void) { // : _WORDLISTS
  mferr(mfout(1));  
  mfpush(MFFWL);
}

void mf82CE5579(void) { // : _CONTEXT
  mferr(mfout(1));  
  mfpush(MFCTX);
}

void mf4FBFA22C(void) { // : _SEARCHNT
  mferr(mfin(3));  
  mfCell wid=mfpop(), u=mfpop(), a=mfpop(), f;  
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mfsetcmp(mfpop());
  f=mfsearchnt(a,u,mfat(wid)); if (f) mfpush(mfxt);  
  mfpush(f);
}

void mf9E5A6ED4(void) { // : _SEEKNT
  mferr(mfin(2));  
  mfCell u=mfpop(), a=mfpop(), f;  
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mfsetcmp(mfpop());
  f=mfseeknt(a,u); if (f) mfpush(mfxt);  
  mfpush(f);
}

void mfA240DD3A(void) { // : _SEEKXT
  mferr(mfin(1);mfout(1));  
  mfCell f=mfseekxt(mftos); mfdrop;  
  if (f!=-1) mfpush(mfxt);  
  mfpush(f);
}

mfCell MF7571BB77=0; // 0

void mf7571BB77(void) { // VARIABLE _TEMPWL
  mfpush(&MF7571BB77);
}

mfCell MF97C25204=0; // 0

void mf97C25204(void) { // VARIABLE __HID
  mfpush(&MF97C25204);
}

void mf6180557C(void) { // : UNHIDE>
  mfpush(2); // $2
  mfpush(&MF97C25204); // __HID
  mf240C8DEC(); // !
} // IMMEDIATE 

void mf9C545369(void) { // : HIDE>
  mfpush(&MF97C25204); // __HID
  mf2E1505EA(); // OFF
} // IMMEDIATE 

void mf93C45CF9(void) { // : HIDDEN
  mfpush(1); // $1
  mfpush(&MF97C25204); // __HID
  mf240C8DEC(); // !
} // IMMEDIATE 

mfXT MF5AADB2E4=mfF0939D46; // IS __LFINDWORD

void mf5AADB2E4(void) { // DEFER _FIND-WORD
  (MF5AADB2E4)();
}

void mf824A24DA(void) { // : ___FIND-WORD
  mfpush(&MF97C25204); // __HID
  mfC50BF85F(); // @
mfIF
  mf9E5A6ED4(); // _SEEKNT
  mfpush(&MF97C25204); // __HID
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf380CAD68(); // =
mfIF
  mf9C545369(); // HIDE>
mfTHEN
mfEXIT
mfTHEN
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
mfNOTIF
mfBREAK
mfTHEN
  mfE0839FF6(); // 2DUP
mfN
  mfC50BF85F(); // @
  mf4FBFA22C(); // _SEARCHNT
  mf8003A4B3(); // ?DUP
mfIF
  mf404D123E(); // 2SWAP
  mfEF6476DC(); // 2DROP
mfEXIT
mfTHEN
mfNEXT
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
}

void mfFB42BA5A(void) { // : FIND
  mf57E80646(); // DUP
  mfA3F7B2D4(); // COUNT
  (MF5AADB2E4)(); // _FIND-WORD
mfDUPIF
  mf87E8362E(); // ROT
  mf52C16B0C(); // DROP
mfTHEN
}

void mf220C8AC6(void) { // : '
  mfC94E167C(); // _PARSE-WORD
  (MF5AADB2E4)(); // _FIND-WORD
mfNOTIF
  mfpush(-13); // $FFFFFFF3
  (MFE5B4B40F)(); // THROW
mfTHEN
}

void mfCF77DFB8(void) { // : EXECUTE
  mferr(mfin(1));  
  mfw=(mfXT*)mfpop(); (*mfw)();
}

mfCell MFE09A6F96=0; // 0

void mfE09A6F96(void) { // VARIABLE STATE
  mfpush(&MFE09A6F96);
}

void mf290C95CB(void) { // : ,
  mferr(mfin(1));  
  mfat(mfdp)=mfpop(), mfdp+=MFSIZE;
}

void mf1479C7E3(void) { // : _[LIT]
  mferr(mfout(1));  
  mfpush(*mfip++);
}

void mfBAFC44C4(void) { // : LITERAL
  mfat(mfdp)=(mfCell)&mfdict[211].cfa;
  mfdp+=MFSIZE; // [,] _[LIT]
  mf290C95CB(); // ,
} // IMMEDIATE COMPILE-ONLY

mfCell MFB6918D28=0; // 0

void mfB6918D28(void) { // VARIABLE _RECLIST
  mfpush(&MFB6918D28);
}

void mf26F8E50E(void) { // : _LITERAL?
  mfpush(&MFB6918D28); // _RECLIST
mfBEGIN
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf0EF30764(); // U<
mfWHILE
  mf67FCEB09(); // >R
  mfpush(&MFF939F00F); // _PARSED
  mf3DF21B8F(); // 2@
  mf7D04FDAF(); // R@
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mfCF77DFB8(); // EXECUTE
mfIF
  mf7D04FDAF(); // R@
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mf130456D1(); // R>
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf130456D1(); // R>
mfREPEAT
  mf52C16B0C(); // DROP
  mfpush(MFEE597878); // FALSE
}

void mf12FA26A3(void) { // : ??
  mfpush(-13); // $FFFFFFF3
  (MFE5B4B40F)(); // THROW
}

void mf87601DFB(void) { // : _INTERPRET
mfBEGIN
  mfC94E167C(); // _PARSE-WORD
  mf57E80646(); // DUP
mfWHILE
  (MF5AADB2E4)(); // _FIND-WORD
  mf8003A4B3(); // ?DUP
mfIF
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf15ED5F69(); // 0<
mfIF
  mf290C95CB(); // ,
mfELSE
  mfCF77DFB8(); // EXECUTE
mfTHEN
mfELSE
  mfpush(1); // $1
  mf91666DC6(); // AND
mfIF
  mfCF77DFB8(); // EXECUTE
mfELSE
  mfpush(-14); // $FFFFFFF2
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
mfELSE
  mfpush(&MFF939F00F); // _PARSED
  mf3DF21B8F(); // 2@
  mf1BF6A5CC(); // _NUMBER?
mfIF
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfBAFC44C4(); // LITERAL
mfTHEN
mfCONTINUE
mfTHEN
  mf26F8E50E(); // _LITERAL?
mfIF
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfA2DF200E(); // SWAP
mfTHEN
  mf52C16B0C(); // DROP
  mfCF77DFB8(); // EXECUTE
mfELSE
  mfpush(&mfdict[215].cfa); // ['] ??
  mfCF77DFB8(); // EXECUTE
mfTHEN
mfTHEN
mfREPEAT
  mfEF6476DC(); // 2DROP
}

mfXT MF9FC8664E=mfB851E7EC; // IS ___EXCSRC

void mf9FC8664E(void) { // DEFER _EXCSRC
  (MF9FC8664E)();
}

void mfB851E7EC(void) { // : ___EXCSRC
mfDUPIF
  mf64D9F6E0(); // CR
  mfprint("? "); // S"
  mfB9790298(); // SOURCE
  mfpush(1); // $1
mfFORUP
mfN
  mf76DA1336(); // C@
  mfpush(MF20DD5D6B); // BL
  mf1C599279(); // MAX
  mfD9BC5E8A(); // EMIT
mfNEXT
  mf64D9F6E0(); // CR
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mf8C12EE82(); // SPACES
  mfprint("^ ?? "); // S"
mfTHEN
}

mfXT MF93D1E229=mf5E9C0268; // IS __TEXCCODE

void mf93D1E229(void) { // DEFER _EXCMSG
  (MF93D1E229)();
}

void mf744370F3(void) { // : ___EXCMSG
mfCASE
  mfpush(-3); // $FFFFFFFD
mfOF
  mfprint("stack overflow"); // S"
mfENDOF
  mfpush(-4); // $FFFFFFFC
mfOF
  mfprint("stack underflow"); // S"
mfENDOF
  mfpush(-5); // $FFFFFFFB
mfOF
  mfprint("return stack overflow"); // S"
mfENDOF
  mfpush(-6); // $FFFFFFFA
mfOF
  mfprint("return stack underflow"); // S"
mfENDOF
  mfpush(-8); // $FFFFFFF8
mfOF
  mfprint("dictionary overflow"); // S"
mfENDOF
  mfpush(-9); // $FFFFFFF7
mfOF
  mfprint("invalid memory address"); // S"
mfENDOF
  mfpush(-10); // $FFFFFFF6
mfOF
  mfprint("division by zero"); // S"
mfENDOF
  mfpush(-13); // $FFFFFFF3
mfOF
  mfprint("undefined word"); // S"
mfENDOF
  mfpush(-14); // $FFFFFFF2
mfOF
  mfprint("interpreting a compile-only word"); // S"
mfENDOF
  mfpush(-18); // $FFFFFFEE
mfOF
  mfprint("parsed string overflow"); // S"
mfENDOF
  mfpush(-21); // $FFFFFFEB
mfOF
  mfprint("unsupported operation"); // S"
mfENDOF
  mfpush(-22); // $FFFFFFEA
mfOF
  mfprint("control-structure mismatch"); // S"
mfENDOF
  mfpush(-24); // $FFFFFFE8
mfOF
  mfprint("invalid numeric argument"); // S"
mfENDOF
  mfpush(-28); // $FFFFFFE4
mfOF
  mfprint("user interrupt"); // S"
mfENDOF
  mfpush(-32); // $FFFFFFE0
mfOF
  mfprint("invalid name argument"); // S"
mfENDOF
  mfpush(-38); // $FFFFFFDA
mfOF
  mfprint("non-existent (locked) file"); // S"
mfENDOF
  mf57E80646(); // DUP
  mfprint("exception "); // S"
  mf2B0C98F1(); // .
mfENDCASE
}

mfXT MF407C881D=mf4F319F25; // IS __XCEXCCODE

void mf407C881D(void) { // DEFER _EXCCODE
  (MF407C881D)();
}

void mf2B37385B(void) { // : ___EXCCODE
  (MF93D1E229)(); // _EXCMSG
}

void mfEAF28AAC(void) { // : CATCH
  int xc; mfXcf xcf; // local exception frame  
  xcf.sp=mfsp-1, xcf.lp=mflp, xcf.fp=mffp, xcf.rp=mfrp, xcf.ip=mfip;  
  xcf.old=mfxcf, mfxcf=&xcf;     
  if (xc=setjmp(xcf.buf),xc) { // unwind  
     mfsp=xcf.sp, mflp=xcf.lp, mffp=xcf.fp, mfrp=xcf.rp, mfip=xcf.ip; }  
  else { // execute  
     mfw=(mfXT*)mfpop(); (*mfw)(); }   
  mfxcf=xcf.old, mfpush(xc);
}

void mf773B319E(void) { // : _THROW
mfDUPIF
    if (mfxcf) longjmp(mfxcf->buf,mftos); // unwind stacks  
  mf57E80646(); // DUP
  mfpush(-1); // $FFFFFFFF
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
mfELSE
  mf57E80646(); // DUP
  mfpush(-2); // $FFFFFFFE
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mf142FE78D(); // TYPE
mfELSE
  (MF9FC8664E)(); // _EXCSRC
  (MF407C881D)(); // _EXCCODE
mfTHEN
mfTHEN
    longjmp(mfabort,-1); // reset stacks  
mfTHEN
  mf52C16B0C(); // DROP
}

void mfE0D91783(void) { // : FAST>
  mfrtc=0;
}

void mf03A71F52(void) { // : SAFE>
  mfrtc=1;
}

void mf319DE64A(void) { // : EVALUATE
  mf600421B4(); // _SRC>R
  mf5AF98C79(); // _SRC2!
  mfpush(0); // $0
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mfpush(-1); // $FFFFFFFF
  mfFD898658(); // _SRCID!
  mfpush(0); // $0
  mfDC799960(); // BLK
  mf240C8DEC(); // !
  mfpush(&mfdict[216].cfa); // ['] _INTERPRET
  mfEAF28AAC(); // CATCH
mfDUPIF
  (MF9FC8664E)(); // _EXCSRC
  mfprint("in string"); // S"
mfTHEN
  mfD24E2A14(); // _R>SRC
  (MFE5B4B40F)(); // THROW
}

mfXT MF2C72BE34=mf39A3E095; // IS __FPROMPT

void mf2C72BE34(void) { // DEFER _PROMPT
  (MF2C72BE34)();
}

void mf04CAF222(void) { // : ___PROMPT
  mf3EC47269(); // _RDEPTH
mfIF
  mfprint("r: "); // S"
  mf3EC47269(); // _RDEPTH
mfFOR
  mf3EC47269(); // _RDEPTH
  mf20EB3223(); // 1-
mfN
  mf280C9438(); // -
  mf982060C8(); // RPICK
  mf83CFF77F(); // ,.
mfNEXT
  mfprint("| "); // S"
mfTHEN
  mfCE61558A(); // DEPTH
mfFOR
  mfCE61558A(); // DEPTH
  mf20EB3223(); // 1-
mfN
  mf280C9438(); // -
  mfE67669F8(); // PICK
  mf83CFF77F(); // ,.
mfNEXT
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfpush(10); // $A
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mfpush(35); // $23
mfELSE
  mfpush(16); // $10
  mf380CAD68(); // =
mfIF
  mfpush(36); // $24
mfELSE
  mfpush(126); // $7E
mfTHEN
mfTHEN
  mfD9BC5E8A(); // EMIT
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfpush(58); // $3A
  mfD9BC5E8A(); // EMIT
mfTHEN
  mf1808F0E5(); // SPACE
}

void mf84D9BC36(void) { // : QUIT
  mfpush(0); // $0
  mf8B51E6F7(); // _RP!
  mfpush(0); // $0
  mfFD898658(); // _SRCID!
  mfpush(0); // $0
  mfpush(&MFE09A6F96); // STATE
  mf240C8DEC(); // !
mfBEGIN
  mf64D9F6E0(); // CR
  (MF2C72BE34)(); // _PROMPT
  (MFC1D4E711)(); // REFILL
  mf1808F0E5(); // SPACE
mfWHILE
  mfpush(&mfdict[216].cfa); // ['] _INTERPRET
  mfEAF28AAC(); // CATCH
  mf8003A4B3(); // ?DUP
mfIF
  (MFE5B4B40F)(); // THROW
mfELSE
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfNOTIF
  mfprint(" ok"); // S"
mfTHEN
mfTHEN
mfREPEAT
}

void mf8A823C60(void) { // : _>LINK
}

void mf4B2037E9(void) { // : _>PFA
  mfBB8FCA7A(); // CELL+
}

void mf03D7EB73(void) { // : _>NAME
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
}

void mf74404CD4(void) { // : _>CFA
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

void mfC439E65E(void) { // : _<CFA
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf280C9438(); // -
}

void mfE345B847(void) { // : _CURRENT
  mferr(mfout(1));  
  static void* cur=MFFWL; mfpush(&cur);
}

void mfB8F49A42(void) { // : _LAST
  mferr(mfout(1));  
  mfpush(&MFLAST);
}

void mfEA08BD65(void) { // : _LATEST
  mferr(mfout(1));  
  mfpush(&MFLATEST);
}

mfCell MFEF0255CF=0; // 0

void mfEF0255CF(void) { // VARIABLE WARNING
  mfpush(&MFEF0255CF);
}

mfCell MF5013BC6B=0; // 0

void mf5013BC6B(void) { // VARIABLE _NAMED
  mfpush(&MF5013BC6B);
}

void mf9DA7D846(void) { // : NAMED
  mf89F60699(); // 2>R
  mfpush(&MF5013BC6B); // _NAMED
  mf80E4B050(); // ON
}

void mf20B9677F(void) { // : _HEADER
  mfpush(&MF5013BC6B); // _NAMED
  mfC50BF85F(); // @
mfIF
  mfpush(&MF5013BC6B); // _NAMED
  mf2E1505EA(); // OFF
  mf34FF0561(); // 2R>
  mf5242998B(); // _SWORD
  mfA3F7B2D4(); // COUNT
mfELSE
  mfC94E167C(); // _PARSE-WORD
  mf57E80646(); // DUP
mfNOTIF
  mfpush(-32); // $FFFFFFE0
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
  (MF5AADB2E4)(); // _FIND-WORD
mfIF
  mf52C16B0C(); // DROP
  mfpush(&MFEF0255CF); // WARNING
  mfC50BF85F(); // @
mfIF
  mfprint(" !! redefined "); // S"
  mf5F2B6B8B(); // HERE
  mfA3F7B2D4(); // COUNT
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
mfTHEN
mfTHEN
  mf5F2B6B8B(); // HERE
  mf57E80646(); // DUP
  mf76DA1336(); // C@
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf3FA1943F(); // ALLOT
  mfAFA183BE(); // ALIGN
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf5F2B6B8B(); // HERE
  mfEA08BD65(); // _LATEST
  mf240C8DEC(); // !
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfpush(0); // $0
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mfC50BF85F(); // @
  mf290C95CB(); // ,
}

void mf3BFC9593(void) { // : _REVEAL
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf03D7EB73(); // _>NAME
  mfC50BF85F(); // @
mfIF
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mf240C8DEC(); // !
  mfB8F49A42(); // _LAST
  mf240C8DEC(); // !
mfTHEN
}

void mf779E612E(void) { // : _HIDE
  mfB8F49A42(); // _LAST
  mfC50BF85F(); // @
  mf03D7EB73(); // _>NAME
  mfC50BF85F(); // @
mfIF
  mfB8F49A42(); // _LAST
  mfC50BF85F(); // @
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mf240C8DEC(); // !
  mfB8F49A42(); // _LAST
  mf240C8DEC(); // !
mfTHEN
}

void mfA483CD31(void) { // : __FLG!
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf4B2037E9(); // _>PFA
  mf93A82DE8(); // TUCK
  mfC50BF85F(); // @
  mf7CE4AA04(); // OR
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
}

void mfD1E3DADA(void) { // : IMMEDIATE
  mfpush(1); // $1
  mfA483CD31(); // __FLG!
}

void mf72FB7883(void) { // : COMPILE-ONLY
  mfpush(2); // $2
  mfA483CD31(); // __FLG!
}

void mfDE0C1FBA(void) { // : [
  mfpush(0); // $0
  mfpush(&MFE09A6F96); // STATE
  mf240C8DEC(); // !
} // IMMEDIATE 

void mfD80C1648(void) { // : ]
  mfpush(-1); // $FFFFFFFF
  mfpush(&MFE09A6F96); // STATE
  mf240C8DEC(); // !
}

void mfB988A2D6(void) { // : _[:]
  mferr(mfrout(1));  
  mfrpush(mfip); mfip=(mfXT**)mfw+1;  
  while(mfw=*mfip++,mfw) (*mfw)(); // MinForth VM  
  mfip=(mfXT**)mfrpop();
}

void mf04316999(void) { // : __CSYS
  mfCE61558A(); // DEPTH
  mfD745D921(); // INVERT
}

void mf3FC95052(void) { // : __CSYS?
  mfCE61558A(); // DEPTH
  mf2E0C9DAA(); // +
mfIF
  mfpush(-22); // $FFFFFFEA
  (MFE5B4B40F)(); // THROW
mfTHEN
}

void mf3F0CB86D(void) { // : :
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mf20B9677F(); // _HEADER
  mf04316999(); // __CSYS
  mfD80C1648(); // ]
}

mfXT MF3E0CB6DA=mfE8EAA4F2; // IS __L;

void mf3E0CB6DA(void) { // DEFER ;
  (MF3E0CB6DA)();
} // IMMEDIATE COMPILE-ONLY

void mfA0599DC8(void) { // : __;
  mfpush(0); // $0
  mf290C95CB(); // ,
  mfDE0C1FBA(); // [
  mf3FC95052(); // __CSYS?
  mf3BFC9593(); // _REVEAL
}

void mfF0A95069(void) { // : :NONAME
  mf5F2B6B8B(); // HERE
  mfpush(0); // $0
  mf290C95CB(); // ,
  mf5F2B6B8B(); // HERE
  mfEA08BD65(); // _LATEST
  mf240C8DEC(); // !
  mfpush(0); // $0
  mf290C95CB(); // ,
  mfpush(0); // $0
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf5F2B6B8B(); // HERE
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf04316999(); // __CSYS
  mfD80C1648(); // ]
}

void mfBA444C0E(void) { // : [']
  mf220C8AC6(); // '
  mfBAFC44C4(); // LITERAL
} // IMMEDIATE COMPILE-ONLY

void mfD89985D6(void) { // : COMPILE,
  mf290C95CB(); // ,
}

void mfA66C8E4A(void) { // : [COMPILE]
  mf220C8AC6(); // '
  mfD89985D6(); // COMPILE,
} // IMMEDIATE COMPILE-ONLY

void mf33530D01(void) { // : _POST[
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfD80C1648(); // ]
}

void mf9A7AC789(void) { // : _]PONE
  mf130456D1(); // R>
  mfpush(&MFE09A6F96); // STATE
  mf240C8DEC(); // !
}

void mfDD00FE9F(void) { // : POSTPONE
  mfC94E167C(); // _PARSE-WORD
  (MF5AADB2E4)(); // _FIND-WORD
  mf57E80646(); // DUP
mfNOTIF
  mfpush(-13); // $FFFFFFF3
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf15ED5F69(); // 0<
mfIF
  mfat(mfdp)=(mfCell)&mfdict[252].cfa;
  mfdp+=MFSIZE; // [,] _POST[
  mfBAFC44C4(); // LITERAL
  mfat(mfdp)=(mfCell)&mfdict[210].cfa;
  mfdp+=MFSIZE; // [,] ,
  mfat(mfdp)=(mfCell)&mfdict[253].cfa;
  mfdp+=MFSIZE; // [,] _]PONE
mfELSE
  mf290C95CB(); // ,
mfTHEN
} // IMMEDIATE COMPILE-ONLY

void mfFDFF8019(void) { // : [CHAR]
  mfA59F665D(); // CHAR
  mfBAFC44C4(); // LITERAL
} // IMMEDIATE COMPILE-ONLY

void mfA2DA587A(void) { // : C,
  mf5F2B6B8B(); // HERE
  mf97DA4729(); // C!
  mfpush(1); // $1
  mf3FA1943F(); // ALLOT
}

void mf7BDCDF68(void) { // : _[SLIT]
  mferr(mfout(2));  
  mfCell ip=(mfCell)mfip; mfChar c=mfcat(ip);  
  mfpush(ip+1), mfpush(c);  
  mfip=(mfXT**)((ip+c+1+MFSIZE)&-MFSIZE);
}

void mf50BE3701(void) { // : SLITERAL
  mfat(mfdp)=(mfCell)&mfdict[257].cfa;
  mfdp+=MFSIZE; // [,] _[SLIT]
  mfA2DF200E(); // SWAP
  mf2FE7860F(); // OVER
  mf5F2B6B8B(); // HERE
  mf10E38971(); // _PLACE
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf901B2AFF(); // ALIGNED
  mf3FA1943F(); // ALLOT
} // IMMEDIATE COMPILE-ONLY

void mfF501E900(void) { // : S"
  mfpush(34); // $22
  mfF08832C0(); // _PARSE-CHAR
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf50BE3701(); // SLITERAL
mfELSE
  mfCFEC5BB6(); // _>SIB
  mf12AE9718(); // _SIB
  mfA3F7B2D4(); // COUNT
mfTHEN
} // IMMEDIATE 

void mf94DA4270(void) { // : C"
  mfpush(34); // $22
  mfF08832C0(); // _PARSE-CHAR
  mf50BE3701(); // SLITERAL
  mfat(mfdp)=(mfCell)&mfdict[11].cfa;
  mfdp+=MFSIZE; // [,] DROP
  mfat(mfdp)=(mfCell)&mfdict[66].cfa;
  mfdp+=MFSIZE; // [,] 1-
} // IMMEDIATE COMPILE-ONLY

void mf97D49429(void) { // : ."
  mfpush(34); // $22
  mfF08832C0(); // _PARSE-CHAR
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf50BE3701(); // SLITERAL
  mfat(mfdp)=(mfCell)&mfdict[139].cfa;
  mfdp+=MFSIZE; // [,] TYPE
mfELSE
  mf142FE78D(); // TYPE
mfTHEN
} // IMMEDIATE 

void mfAC2233D4(void) { // : __PARSE|"
  mfB8B7D9B3(); // __PRSAREA
  mfCell i, u=mftos, ub=0, l, h; mfChar *a=(mfChar*)mfsec, c;   
  for (i=0;i<u;i++) { c=a[i];  
    if (c=='\"') break;  
    if (c=='\\') { c=a[++i];   
#ifdef _WIN32  
      if (c=='n') c='m';  
#endif  
      switch (c) {  
      case '\"': c=34; break;  
      case '\\': c=92; break;  
      case 'r': c=13; break;  
      case 'm': mfbuf[ub++]=13; // fall thru  
    case 'n': // fall thru  
      case 'l': c=10; break;  
      case 'a': c=7; break;  
      case 'b': c=8; break;  
      case 'e': c=27; break;  
      case 'f': c=12; break;  
      case 'q': c=34; break;  
      case 't': c=9; break;  
      case 'v': c=11; break;  
      case 'z': c=0; break;  
      case 'x': h=mfdig2n(a[i+1],16); if (h<16) {  
           l=mfdig2n(a[i+2],16); if (l<16) {  
           i+=2, c=16*h+l; break; } } // fall thru  
      default: mfbuf[ub++]='\\'; } }   
    mfbuf[ub++]=c; }  
  mfsec=(mfCell)mfbuf, mftos=ub, mfpush(i+1);   
  mf580B1E42(); // >IN
  mf08DC01D1(); // +!
  mf60C7C223(); // __PRSOVF
}

void mf853A39E8(void) { // : S|"
  mfAC2233D4(); // __PARSE|"
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf50BE3701(); // SLITERAL
mfELSE
  mfCFEC5BB6(); // _>SIB
  mf12AE9718(); // _SIB
  mfA3F7B2D4(); // COUNT
mfTHEN
} // IMMEDIATE 

void mfA647402F(void) { // : .|"
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf853A39E8(); // S|"
  mfat(mfdp)=(mfCell)&mfdict[139].cfa;
  mfdp+=MFSIZE; // [,] TYPE
mfELSE
  mf853A39E8(); // S|"
  mf142FE78D(); // TYPE
mfTHEN
} // IMMEDIATE 

void mfFF7226AE(void) { // : _ABORT"
  mf87E8362E(); // ROT
mfIF
  mfpush(-2); // $FFFFFFFE
  (MFE5B4B40F)(); // THROW
mfELSE
  mfEF6476DC(); // 2DROP
mfTHEN
}

void mfC3343021(void) { // : ABORT"
  mfpush(34); // $22
  mfF08832C0(); // _PARSE-CHAR
  mf50BE3701(); // SLITERAL
  mfat(mfdp)=(mfCell)&mfdict[264].cfa;
  mfdp+=MFSIZE; // [,] _ABORT"
} // IMMEDIATE COMPILE-ONLY

mfXT MF79836105=mf17719FDD; // IS __LEXIT

void mf79836105(void) { // DEFER EXIT
  (MF79836105)();
} // IMMEDIATE COMPILE-ONLY

void mfA686D353(void) { // : __EXIT
  mfpush(0); // $0
  mf290C95CB(); // ,
}

void mf992CB91D(void) { // : _[JMP]
  mfip+=mfat(mfip);
}

void mf6156569F(void) { // : _[JMPZ]
  mfip+=(mfpop()?1:mfat(mfip));
}

void mf9592F3FF(void) { // : _MARK
  mf5F2B6B8B(); // HERE
}

void mf76D47BF1(void) { // : _>MARK
  mf5F2B6B8B(); // HERE
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf662FFFF5(); // CELL
  mf2A0C975E(); // /
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
}

void mf79E02667(void) { // : _<MARK
  mf5F2B6B8B(); // HERE
  mf280C9438(); // -
  mf662FFFF5(); // CELL
  mf2A0C975E(); // /
  mf290C95CB(); // ,
}

void mf58E8EE86(void) { // : IF
  mfat(mfdp)=(mfCell)&mfdict[268].cfa;
  mfdp+=MFSIZE; // [,] _[JMPZ]
  mf9592F3FF(); // _MARK
  mfpush(1); // $1
  mf290C95CB(); // ,
} // IMMEDIATE COMPILE-ONLY

void mf69F37330(void) { // : ELSE
  mfat(mfdp)=(mfCell)&mfdict[267].cfa;
  mfdp+=MFSIZE; // [,] _[JMP]
  mf9592F3FF(); // _MARK
  mfpush(1); // $1
  mf290C95CB(); // ,
  mfA2DF200E(); // SWAP
  mf76D47BF1(); // _>MARK
} // IMMEDIATE COMPILE-ONLY

void mfE78A4DB6(void) { // : THEN
  mf76D47BF1(); // _>MARK
} // IMMEDIATE COMPILE-ONLY

void mfD8776DB1(void) { // : CASE
  mfpush(0); // $0
} // IMMEDIATE COMPILE-ONLY

void mf88E4BCE8(void) { // : OF
  mfat(mfdp)=(mfCell)&mfdict[15].cfa;
  mfdp+=MFSIZE; // [,] OVER
  mfat(mfdp)=(mfCell)&mfdict[52].cfa;
  mfdp+=MFSIZE; // [,] =
  mf58E8EE86(); // IF
  mfat(mfdp)=(mfCell)&mfdict[11].cfa;
  mfdp+=MFSIZE; // [,] DROP
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
} // IMMEDIATE COMPILE-ONLY

void mfB2F63B9B(void) { // : ENDOF
  mf67FCEB09(); // >R
  mf69F37330(); // ELSE
  mf130456D1(); // R>
} // IMMEDIATE COMPILE-ONLY

void mf75E9FDF6(void) { // : ENDCASE
  mfat(mfdp)=(mfCell)&mfdict[11].cfa;
  mfdp+=MFSIZE; // [,] DROP
mfBEGIN
  mf57E80646(); // DUP
mfWHILE
  mfA2DF200E(); // SWAP
  mf76D47BF1(); // _>MARK
  mf20EB3223(); // 1-
mfREPEAT
  mf52C16B0C(); // DROP
} // IMMEDIATE COMPILE-ONLY

void mf2AEDCB62(void) { // : RECURSE
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf74404CD4(); // _>CFA
  mf290C95CB(); // ,
} // IMMEDIATE COMPILE-ONLY

void mf3F126D5E(void) { // : BEGIN
  mf9592F3FF(); // _MARK
} // IMMEDIATE COMPILE-ONLY

void mf9A02B1AE(void) { // : WHILE
  mf58E8EE86(); // IF
  mfA2DF200E(); // SWAP
} // IMMEDIATE COMPILE-ONLY

void mf6588C8EA(void) { // : REPEAT
  mfat(mfdp)=(mfCell)&mfdict[267].cfa;
  mfdp+=MFSIZE; // [,] _[JMP]
  mf79E02667(); // _<MARK
  mf76D47BF1(); // _>MARK
} // IMMEDIATE COMPILE-ONLY

void mf64F9C7EF(void) { // : UNTIL
  mfat(mfdp)=(mfCell)&mfdict[268].cfa;
  mfdp+=MFSIZE; // [,] _[JMPZ]
  mf79E02667(); // _<MARK
} // IMMEDIATE COMPILE-ONLY

void mf5E7C87EF(void) { // : AGAIN
  mfat(mfdp)=(mfCell)&mfdict[267].cfa;
  mfdp+=MFSIZE; // [,] _[JMP]
  mf79E02667(); // _<MARK
} // IMMEDIATE COMPILE-ONLY

void mfDA088408(void) { // : _[LOOP]
  mfCell ofs=mftos,pr=mfrtos,po=pr+ofs;  
  mftos=!(ofs<0?(po<0)&&(pr>=0):(po>=0)&&(pr<0));  
  mfrtos=po;
}

void mfC0946685(void) { // : _[DO]
  mfA2DF200E(); // SWAP
  mf67FCEB09(); // >R
  mf7D04FDAF(); // R@
  mf280C9438(); // -
  mf67FCEB09(); // >R
  mfpush(0); // $0
}

void mfE2A5025C(void) { // : _[?DO]
  mfC0946685(); // _[DO]
  mf52C16B0C(); // DROP
  mf7D04FDAF(); // R@
  mf14ED5DD6(); // 0=
}

void mf34D794DE(void) { // : __DO
  mf9592F3FF(); // _MARK
  mfat(mfdp)=(mfCell)&mfdict[285].cfa;
  mfdp+=MFSIZE; // [,] _[LOOP]
  mf58E8EE86(); // IF
  mfA2DF200E(); // SWAP
  mfpush(0); // $0
}

void mf41CE86D4(void) { // : DO
  mfat(mfdp)=(mfCell)&mfdict[286].cfa;
  mfdp+=MFSIZE; // [,] _[DO]
  mf34D794DE(); // __DO
} // IMMEDIATE COMPILE-ONLY

void mfEC084DA3(void) { // : ?DO
  mfat(mfdp)=(mfCell)&mfdict[287].cfa;
  mfdp+=MFSIZE; // [,] _[?DO]
  mf34D794DE(); // __DO
} // IMMEDIATE COMPILE-ONLY

void mfCC0C0364(void) { // : I
  mferr(mfrin(2);mfout(1));  
  mfpush(mfrtos+mfrsec);
} // COMPILE-ONLY

void mfCF0C081D(void) { // : J
  mferr(mfrin(4);mfout(1));  
  mfpush(mfrp[-2]+mfrp[-3]);
} // COMPILE-ONLY

void mfE11A6788(void) { // : UNLOOP
  mferr(mfrin(3));  
  mfrp-=2;
} // COMPILE-ONLY

void mf354C36E0(void) { // : LEAVE
  mfpush(0); // $0
  mfBAFC44C4(); // LITERAL
  mfat(mfdp)=(mfCell)&mfdict[267].cfa;
  mfdp+=MFSIZE; // [,] _[JMP]
  mfCell *s=mfsp,a=0,f=-1;     
  while(s>mfstk){if(!*s){a=*(s-1)+MFSIZE,f=0;break;}s--;};    
  mfpush(a); mfpush(f);     
mfIF
  mfpush(-22); // $FFFFFFEA
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf79E02667(); // _<MARK
} // IMMEDIATE COMPILE-ONLY

void mfF033FF78(void) { // : +LOOP
  mf52C16B0C(); // DROP
  mf6588C8EA(); // REPEAT
  mfat(mfdp)=(mfCell)&mfdict[292].cfa;
  mfdp+=MFSIZE; // [,] UNLOOP
} // IMMEDIATE COMPILE-ONLY

void mfDBE07C6B(void) { // : LOOP
  mfpush(1); // $1
  mfBAFC44C4(); // LITERAL
  mfF033FF78(); // +LOOP
} // IMMEDIATE COMPILE-ONLY

void mfCE05F488(void) { // : BOUNDS
  mf2FE7860F(); // OVER
  mf2E0C9DAA(); // +
  mfA2DF200E(); // SWAP
}

void mf3CF98E2B(void) { // : _[VAR]
  mferr(mfout(1));  
  mfpush(mfw+1);
}

void mf04B69205(void) { // : VARIABLE
  mfpush(&mfdict[297].cfa); // ['] _[VAR]
  mf20B9677F(); // _HEADER
  mfpush(0); // $0
  mf290C95CB(); // ,
  mf3BFC9593(); // _REVEAL
}

void mf5047FCD5(void) { // : _[CONST]
  mferr(mfout(1));  
  mfpush(mfat(mfw+1));
}

void mfADA9DCA5(void) { // : CONSTANT
  mfpush(&mfdict[299].cfa); // ['] _[CONST]
  mf20B9677F(); // _HEADER
  mf290C95CB(); // ,
  mf3BFC9593(); // _REVEAL
}

void mfCD566A47(void) { // : _[BUF]
  mferr(mfout(1));  
  mfpush(mfw+2);
}

void mf86AC1293(void) { // : BUFFER:
  mfpush(&mfdict[301].cfa); // ['] _[BUF]
  mf20B9677F(); // _HEADER
  mf57E80646(); // DUP
  mf290C95CB(); // ,
  mf3FA1943F(); // ALLOT
  mfAFA183BE(); // ALIGN
  mf3BFC9593(); // _REVEAL
}

void mfCDFDC67E(void) { // : _[CREATE]
  mferr(mfout(2));  
  mfpush(mfw+2), mfpush(mfat(mfw+1));  
  mfCF77DFB8(); // EXECUTE
}

void mfC19230DD(void) { // : CREATE
  mfpush(&mfdict[303].cfa); // ['] _[CREATE]
  mf20B9677F(); // _HEADER
  mfat(mfdp)=(mfCell)&mfdict[32].cfa;
  mfdp+=MFSIZE; // [,] NOOP
  mf3BFC9593(); // _REVEAL
}

void mf4520460B(void) { // : _<DOES
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf74404CD4(); // _>CFA
  mfBB8FCA7A(); // CELL+
  mf240C8DEC(); // !
}

mfXT MFFF60370A=mfF575BA52; // IS __LDOES>

void mfFF60370A(void) { // DEFER DOES>
  (MFFF60370A)();
} // IMMEDIATE COMPILE-ONLY

void mf5E1BC1F8(void) { // : __DOES>
  mf3FC95052(); // __CSYS?
  mf04316999(); // __CSYS
  mf5F2B6B8B(); // HERE
  mfpush(4); // $4
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfBAFC44C4(); // LITERAL
  mfat(mfdp)=(mfCell)&mfdict[305].cfa;
  mfdp+=MFSIZE; // [,] _<DOES
  mfpush(0); // $0
  mf290C95CB(); // ,
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
  mf290C95CB(); // ,
}

void mf800A2691(void) { // : >BODY
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[303].cfa); // ['] _[CREATE]
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfIF
  mfBB8FCA7A(); // CELL+
mfTHEN
  mfBB8FCA7A(); // CELL+
}

void mf5E8B98AB(void) { // : RECOGNIZER
  mfC19230DD(); // CREATE
  mfpush(&MFB6918D28); // _RECLIST
mfBEGIN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf0EF30764(); // U<
mfWHILE
  mfC50BF85F(); // @
mfREPEAT
  mf5F2B6B8B(); // HERE
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
  mfpush(0); // $0
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf290C95CB(); // ,
}

void mf9F67357B(void) { // : _>V+
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
}

void mf99672C09(void) { // : _>V!
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
}

void mf38669356(void) { // : _>V@
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
}

void mf3C6699A2(void) { // : _>VD
  mfpush(4); // $4
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

void mf80B951E1(void) { // : _[VAL]
  mferr(mfout(1));  
  mfpush(mfw+4), mfw=(mfXT*)mfat(mfw+3); (*mfw)();
}

void mf24D3F916(void) { // : _(VALUE)
  mfpush(&mfdict[313].cfa); // ['] _[VAL]
  mf20B9677F(); // _HEADER
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf3BFC9593(); // _REVEAL
}

void mf2513E22A(void) { // : VALUE
  mfpush(&mfdict[101].cfa); // ['] @
  mfpush(&mfdict[102].cfa); // ['] !
  mfpush(&mfdict[62].cfa); // ['] +
  mf24D3F916(); // _(VALUE)
  mf290C95CB(); // ,
}

void mfCCCCC70B(void) { // : __?VAL
  mf220C8AC6(); // '
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[313].cfa); // ['] _[VAL]
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfNOTIF
  mfpush(-32); // $FFFFFFE0
  (MFE5B4B40F)(); // THROW
mfTHEN
}

mfXT MF21F563E4=mf07568FCC; // IS __LTO

void mf21F563E4(void) { // DEFER TO
  (MF21F563E4)();
} // IMMEDIATE 

void mf14FE71EE(void) { // : __TO
  mfCCCCC70B(); // __?VAL
  mf57E80646(); // DUP
  mf3C6699A2(); // _>VD
  mfA2DF200E(); // SWAP
  mf99672C09(); // _>V!
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfA2DF200E(); // SWAP
  mfBAFC44C4(); // LITERAL
  mf290C95CB(); // ,
mfELSE
  mfCF77DFB8(); // EXECUTE
mfTHEN
}

mfXT MF91736C8F=mfC2F806F7; // IS __L+TO

void mf91736C8F(void) { // DEFER +TO
  (MF91736C8F)();
} // IMMEDIATE 

void mf76991F71(void) { // : __+TO
  mfCCCCC70B(); // __?VAL
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf290C95CB(); // ,
  mf7D04FDAF(); // R@
  mf9F67357B(); // _>V+
  mf290C95CB(); // ,
  mf7D04FDAF(); // R@
  mf3C6699A2(); // _>VD
  mfBAFC44C4(); // LITERAL
  mf130456D1(); // R>
  mf99672C09(); // _>V!
  mf290C95CB(); // ,
mfELSE
  mfCF77DFB8(); // EXECUTE
  mf7D04FDAF(); // R@
  mf9F67357B(); // _>V+
  mfCF77DFB8(); // EXECUTE
  mf7D04FDAF(); // R@
  mf3C6699A2(); // _>VD
  mf130456D1(); // R>
  mf99672C09(); // _>V!
  mfCF77DFB8(); // EXECUTE
mfTHEN
}

void mfBA65A38C(void) { // : _[DEFER]
  mfw=(mfXT*)(mfat(mfw-2)&-4); (*mfw)();
}

void mfDC2E9701(void) { // : DEFER@
  mfC439E65E(); // _<CFA
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mfpush(-4); // $FFFFFFFC
  mf91666DC6(); // AND
}

void mf3B2F2C8E(void) { // : DEFER!
  mfC439E65E(); // _<CFA
  mf4B2037E9(); // _>PFA
  mfA2DF200E(); // SWAP
  mf57E80646(); // DUP
  mfC439E65E(); // _<CFA
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mfpush(3); // $3
  mf91666DC6(); // AND
  mf7CE4AA04(); // OR
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
}

void mfE9EDB1DB(void) { // : DEFER
  mfpush(&mfdict[318].cfa); // ['] _[DEFER]
  mf20B9677F(); // _HEADER
  mfpush(&mfdict[32].cfa); // ['] NOOP
  mf5F2B6B8B(); // HERE
  mfB58FC108(); // CELL-
  mf3B2F2C8E(); // DEFER!
  mf3BFC9593(); // _REVEAL
}

void mfCB746F0B(void) { // : __?DEF
  mf220C8AC6(); // '
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[318].cfa); // ['] _[DEFER]
  mfC50BF85F(); // @
  mf93F7201F(); // <>
mfIF
  mfpush(-32); // $FFFFFFE0
  (MFE5B4B40F)(); // THROW
mfTHEN
}

void mf55EA9727(void) { // : ACTION-OF
  mfCB746F0B(); // __?DEF
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfBAFC44C4(); // LITERAL
  mfat(mfdp)=(mfCell)&mfdict[319].cfa;
  mfdp+=MFSIZE; // [,] DEFER@
mfELSE
  mfDC2E9701(); // DEFER@
mfTHEN
} // IMMEDIATE 

void mf6DE90F95(void) { // : IS
  mfCB746F0B(); // __?DEF
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfBAFC44C4(); // LITERAL
  mfat(mfdp)=(mfCell)&mfdict[320].cfa;
  mfdp+=MFSIZE; // [,] DEFER!
mfELSE
  mf3B2F2C8E(); // DEFER!
mfTHEN
} // IMMEDIATE 

void mf55174F30(void) { // : _[MARKER]
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfB8F49A42(); // _LAST
  mf240C8DEC(); // !
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfEA08BD65(); // _LATEST
  mf240C8DEC(); // !
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfE345B847(); // _CURRENT
  mf240C8DEC(); // !
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mfC2064154(); // MOVE
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf85A4C44F(); // _WORDLISTS
mfBEGIN
  mf2FE7860F(); // OVER
  mfC50BF85F(); // @
  mf2FE7860F(); // OVER
  mf240C8DEC(); // !
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf0EF30764(); // U<
mfWHILE
  mfA2DF200E(); // SWAP
  mfBB8FCA7A(); // CELL+
  mfA2DF200E(); // SWAP
mfREPEAT
  mfEF6476DC(); // 2DROP
  mfD148A1CA(); // _DP
  mf240C8DEC(); // !
}

void mfB53F8A17(void) { // : MARKER
  mf5F2B6B8B(); // HERE
  mfB8F49A42(); // _LAST
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf82CE5579(); // _CONTEXT
  mf5F2B6B8B(); // HERE
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mf57E80646(); // DUP
  mf3FA1943F(); // ALLOT
  mfC2064154(); // MOVE
  mf85A4C44F(); // _WORDLISTS
mfBEGIN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf10F30A8A(); // U>
mfUNTIL
  mf52C16B0C(); // DROP
  mfC19230DD(); // CREATE
  mf290C95CB(); // ,
  mfpush(&mfdict[324].cfa); // ['] _[MARKER]
  mf4520460B(); // _<DOES
}

mfXT MFD09523AC=mfEBCBC8AA; // IS __TENVIRONMENT

void mfD09523AC(void) { // DEFER _ENVIRONMENT?
  (MFD09523AC)();
}

void mf70506F4E(void) { // : ___ENVIRONMENT?
  mfE0839FF6(); // 2DUP
  mfspush("/COUNTED-STRING"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(255); // $FF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("/HOLD"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(21); // $15
  mf838F7252(); // CELLS
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("/PAD"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(256); // $100
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("ADDRESS-UNIT-BITS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(8); // $8
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("FLOORED"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MFEE597878); // FALSE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-CHAR"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(255); // $FF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-D"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(-1); // $FFFFFFFF
  mfpush(INTPTR_MAX);
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-N"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(INTMAX_MAX);
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-UD"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(-1); // $FFFFFFFF
  mfpush(-1); // $FFFFFFFF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-U"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(-1); // $FFFFFFFF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("RETURN-STACK-CELLS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(mfrstsize);
  mfpush(-1); // $FFFFFFFF
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("STACK-CELLS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(mfstksize);
  mfpush(-1); // $FFFFFFFF
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("CORE"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("CORE-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfEF6476DC(); // 2DROP
  mfpush(MFEE597878); // FALSE
}

void mf304F16BF(void) { // : ENVIRONMENT?
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
mfIF
    for (int i=0; i<mftos; i++) mfbuf[i]=toupper(*(char*)(mfsec+i));  
    mfsec=(mfCell)mfbuf;  
mfTHEN
  (MFD09523AC)(); // _ENVIRONMENT?
}

mfCell MF1BDFA94F=0; // 0

void mf1BDFA94F(void) { // VARIABLE __NOLOGO
  mfpush(&MF1BDFA94F);
}

mfCell MF153EF16E=0; // 0

void mf153EF16E(void) { // VARIABLE __BOOTED
  mfpush(&MF153EF16E);
}

mfXT MF28B3832A=mf5547E6F8; // IS __SBOOT

void mf28B3832A(void) { // DEFER _BOOT
  (MF28B3832A)();
}

void mf8A8942B4(void) { // : ___BOOT
  mfinit();
}

mfXT MFF766613E=mf95F7CE78; // IS __FCSTART

void mfF766613E(void) { // DEFER _START
  (MFF766613E)();
}

void mfD6B694B8(void) { // : ___START
}

mfXT MF49997C51=mf868F97AB; // IS __FCLOGO

void mf49997C51(void) { // DEFER _LOGO
  (MF49997C51)();
}

void mf8F0754EB(void) { // : ___LOGO
  mfpush(&MF1BDFA94F); // __NOLOGO
  mfC50BF85F(); // @
mfNOTIF
  mfprint("MinForth V3.4.8"); // S"
mfTHEN
}

mfXT MFD2338EAD=mf4AA88A69; // IS __LRESETSTACKS

void mfD2338EAD(void) { // DEFER _RESET-STACKS
  (MFD2338EAD)();
}

void mf4A1971BB(void) { // : ___RESET-STACKS
  mfpush(0); // $0
  mf89C518BC(); // _SP!
  mfpush(0); // $0
  mfA14BE51B(); // _FP!
  mfpush(0); // $0
  mfE97032F9(); // _LP!
}

void mf946BA378(void) { // : _ABORT
  setjmp(mfabort);  
  mfpush(&MF153EF16E); // __BOOTED
  mfC50BF85F(); // @
mfNOTIF
  mfpush(&MF153EF16E); // __BOOTED
  mf80E4B050(); // ON
  (MFF766613E)(); // _START
  (MF49997C51)(); // _LOGO
mfTHEN
  (MFD2338EAD)(); // _RESET-STACKS
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf03D7EB73(); // _>NAME
  mfD148A1CA(); // _DP
  mf240C8DEC(); // !
mfTHEN
  mf84D9BC36(); // QUIT
}

void mf367DE7D9(void) { // : ABORT
  mfpush(-1); // $FFFFFFFF
  (MFE5B4B40F)(); // THROW
}

mfXT MFB6A8BBC3=mf54E088CC; // IS __FCBYE

void mfB6A8BBC3(void) { // DEFER BYE
  (MFB6A8BBC3)();
}

void mf3CD40A81(void) { // : __BYE
  mfprint("\nBye. "); // S"
  mfexit(), exit(0);
}
 
#define MFEXCEPTION  
 
mfCell mfxcs[19]; // exception buffer {fl,xc,w,ip,depth,6xd,rdepth,6xr,fd}  
mfCell mfbtf=1;   // backtrack display flag  
mfFlt mffxcs[5];  // {6xf}  

void mf4812015B(void) { // : __XCTRACE
  mfCell d=mfsp-mfstk-1, rd=mfrp-mfrst, fd=mffp-mffst;  
  if (mfxcs[0]==mftos) return;  
  memset(mfxcs,0,sizeof(mfxcs)), memset(mffxcs,0,sizeof(mffxcs));  
  mfxcs[0]=mfxcs[1]=mftos, mfxcs[2]=(mfCell)mfw, mfxcs[3]=(mfCell)mfip;  
  mfxcs[4]=d, mfxcs[11]=rd, mfxcs[18]=fd;  
  d=min(d,6), rd=min(rd,6), fd=min(fd,6);  
  memcpy(mfxcs+5,mfsp-d,d*MFSIZE);  
  memcpy(mfxcs+12,mfrp+1-rd,rd*MFSIZE);  
  memcpy(mffxcs,mffp+1-fd,fd*MFSIZE*MFFLTSIZE);
}
 
void mfxttrace(mfCell ofs) {  
  mfprint(" <- "), mfprint((char*)mfat(mfxt-1)+1);  
  if (ofs>0) { mfemit(':'), mfprintn(ofs); } }  

void mfCF09AB1E(void) { // : __XCBACKTRACE
  mfCell w=mfxcs[2], ip=mfxcs[3], d=mfxcs[4], rd=mfxcs[11], fd=mfxcs[18];  
  mfxcs[0]=0; mfCell ofs;  
  if (!w) return;  
  if (d||rd||fd) {   
    mfprint("\nStacks: ");   
    if (rd) { mfprint("r: ");   
      if(rd>6) mfprint(".. ");  
    for (int i=0; i<min(rd,6); i++) {  
        if (mfbtf&&(mfseekxt(mfxcs[12+i])>=0)) mfprint("^ ");     
        else { mfemit('$'), mfprintux(mfxcs[12+i]), mfemit(' '); } }  
      mfprint("| "); }  
    if (fd) { mfprint("f: ");  
      if (fd>6) mfprint(".. ");  
    for (int i=0; i<min(fd,6); i++) {  
        mfprintf(mffxcs[i]), mfemit(' '); }  
      mfprint("| "); }  
    if (d) {  
      if (d>6) mfprint(".. ");  
    for (int i=0; i<min(d,6); i++) {  
   mfprintn(mfxcs[5+i]), mfemit(' '); }  
      mfprint("-- "); } }  
  mfprint("\nBacktrace: ");  
  mfprint((char*)(mfat(w-MFSIZE)+1));  
  if (!ip) return;  
  ofs=mfseekxt(ip-MFSIZE); if (ofs<0) return;  
  mfxttrace(ofs);  
  if (!rd) return;  
  for (int i=min(rd,7)-1; i>=0; i--) {  
    ofs=mfseekxt(mfxcs[15+i]-MFSIZE); if (ofs<0) continue;   
    mfxttrace(ofs); }
}

void mfCFCC69B8(void) { // : WHERE
  mfprint("-> "); // S"
  mfpush(mfxcs[1]), mfbtf=0;
  (MF93D1E229)(); // _EXCMSG
  mfbtf=1;
}

void mf720CD026(void) { // : __XCTHROW
mfDUPIF
  if(mfsp<=mfstk) mfup,mftos=mfsec;
  mf4812015B(); // __XCTRACE
mfTHEN
  mf773B319E(); // _THROW
}

void mf4F319F25(void) { // : __XCEXCCODE
  mf2B37385B(); // ___EXCCODE
  mfCF09AB1E(); // __XCBACKTRACE
}

void mf37076D94(void) { // : __XCENVIRONMENT?
  mfE0839FF6(); // 2DUP
  mfspush("EXCEPTION"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("EXCEPTION-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf70506F4E(); // ___ENVIRONMENT?
}
 
#define MFSEARCH  

void mfC090D7CC(void) { // : SEARCH-WORDLIST
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
mfIF
    for (int i=0; i<mfsec; i++) mfbuf[i]=toupper(*(char*)(mfthd+i));  
    mfthd=(mfCell)mfbuf;  
mfTHEN
  mf4FBFA22C(); // _SEARCHNT
}

void mf346A6677(void) { // : FORTH-WORDLIST
  mf85A4C44F(); // _WORDLISTS
}

void mfC220C34B(void) { // : __EMPTYWL
  mferr(mfout(1));  
  mfpush(mfdict);
}

void mfDA547415(void) { // : __.VOC
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfA3F7B2D4(); // COUNT
mfELSE
  mfspush("-"); // S"
mfTHEN
  mf1808F0E5(); // SPACE
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mfDAF5E977(void) { // : ORDER
  mfprint("\nCONTEXT: "); // S"
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
mfIF
mfN
  mfC50BF85F(); // @
  mfDA547415(); // __.VOC
mfTHEN
mfNEXT
  mfprint("\nCURRENT: "); // S"
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mfDA547415(); // __.VOC
}

void mf52EF5230(void) { // : VOCS
  mfprint("\nWORDLISTS: "); // S"
  mf346A6677(); // FORTH-WORDLIST
mfBEGIN
  mf57E80646(); // DUP
  mfDA547415(); // __.VOC
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf10F30A8A(); // U>
mfUNTIL
  mf52C16B0C(); // DROP
}

void mfE81D9A59(void) { // : WORDLIST
  mf346A6677(); // FORTH-WORDLIST
mfBEGIN
  mf57E80646(); // DUP
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
  mf20EB3223(); // 1-
  mf5F2B6B8B(); // HERE
  mf0EF30764(); // U<
mfWHILE
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
mfREPEAT
  mf5F2B6B8B(); // HERE
  mf57E80646(); // DUP
  mf87E8362E(); // ROT
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf240C8DEC(); // !
  mfC220C34B(); // __EMPTYWL
  mf290C95CB(); // ,
  mfpush(0); // $0
  mf290C95CB(); // ,
  mfpush(0); // $0
  mf290C95CB(); // ,
}

void mf0538B17B(void) { // : _!VOC
  mf82CE5579(); // _CONTEXT
  mf240C8DEC(); // !
}

void mf4FE08CC9(void) { // : VOCABULARY
  mfC19230DD(); // CREATE
  mfE81D9A59(); // WORDLIST
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf03D7EB73(); // _>NAME
  mfA2DF200E(); // SWAP
  mfBB8FCA7A(); // CELL+
  mf240C8DEC(); // !
  mfpush(&mfdict[341].cfa); // ['] _!VOC
  mf4520460B(); // _<DOES
}

void mf1CECBE2C(void) { // : FORTH
  mf346A6677(); // FORTH-WORDLIST
  mf0538B17B(); // _!VOC
}

void mfB52F140B(void) { // : SET-CURRENT
  mfE345B847(); // _CURRENT
  mf240C8DEC(); // !
}

void mfBB3DE887(void) { // : GET-CURRENT
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
}

void mfB78902C9(void) { // : DEFINITIONS
  mf82CE5579(); // _CONTEXT
  mfC50BF85F(); // @
  mfB52F140B(); // SET-CURRENT
}

void mfB81C6B28(void) { // : PREVIOUS
  mf82CE5579(); // _CONTEXT
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf14ED5DD6(); // 0=
mfIF
  mfpush(-50); // $FFFFFFCE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf82CE5579(); // _CONTEXT
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mfA2DF200E(); // SWAP
  mfpush(7); // $7
  mf838F7252(); // CELLS
  mfC2064154(); // MOVE
}

void mfD3AAC792(void) { // : ALSO
  mf82CE5579(); // _CONTEXT
  mfpush(7); // $7
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
mfIF
  mfpush(-49); // $FFFFFFCF
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf82CE5579(); // _CONTEXT
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mfpush(7); // $7
  mf838F7252(); // CELLS
  mfC2064154(); // MOVE
}

mfCell MF85D1E1A1=0; // 0

void mf85D1E1A1(void) { // VARIABLE _ROOTWL
  mfpush(&MF85D1E1A1);
}

void mf1E4EDE85(void) { // : ROOT
  mfpush(&MF85D1E1A1); // _ROOTWL
  mfC50BF85F(); // @
  mf0538B17B(); // _!VOC
}

void mf9AF1ED37(void) { // : ONLY
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mfB7F60EB5(); // ERASE
  mf1E4EDE85(); // ROOT
}

void mf57DD8CC6(void) { // : GET-ORDER
  mfpush(0); // $0
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf662FFFF5(); // CELL
mfDOWNFOR
mfN
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
mfTHEN
mfNEXT
}

void mf02F15E02(void) { // : SET-ORDER
  mf57E80646(); // DUP
  mfpush(-1); // $FFFFFFFF
  mf390CAEFB(); // <
mfIF
  mf52C16B0C(); // DROP
  mfpush(-50); // $FFFFFFCE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf57E80646(); // DUP
  mfpush(8); // $8
  mf3B0CB221(); // >
mfIF
  mf52C16B0C(); // DROP
  mfpush(-49); // $FFFFFFCF
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf82CE5579(); // _CONTEXT
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mfB7F60EB5(); // ERASE
  mf57E80646(); // DUP
  mf15ED5F69(); // 0<
mfIF
  mf52C16B0C(); // DROP
  mf1E4EDE85(); // ROOT
mfELSE
  mf82CE5579(); // _CONTEXT
  mfA2DF200E(); // SWAP
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mf240C8DEC(); // !
mfNEXT
mfTHEN
}

void mf04FB34A4(void) { // : __SCEXCCODE
mfCASE
  mfpush(-49); // $FFFFFFCF
mfOF
  mfprint("search-order overflow"); // S"
mfEXIT
mfENDOF
  mfpush(-50); // $FFFFFFCE
mfOF
  mfprint("search-oder underflow"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf744370F3(); // ___EXCMSG
}

void mf1230EC41(void) { // : __SCBOOT
  mf8A8942B4(); // ___BOOT
  mfpush(&MFEF0255CF); // WARNING
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MFEF0255CF); // WARNING
  mf2E1505EA(); // OFF
  mfE81D9A59(); // WORDLIST
  mfpush(&MF85D1E1A1); // _ROOTWL
  mf240C8DEC(); // !
  mfD3AAC792(); // ALSO
  mf1E4EDE85(); // ROOT
  mfB78902C9(); // DEFINITIONS
  mfspush(": FORTH-WORDLIST FORTH-WORDLIST ;"); // S"
  mf319DE64A(); // EVALUATE
  mfspush(": SET-ORDER SET-ORDER ;"); // S"
  mf319DE64A(); // EVALUATE
  mfspush(": FORTH FORTH ;"); // S"
  mf319DE64A(); // EVALUATE
  mf1CECBE2C(); // FORTH
  mfB78902C9(); // DEFINITIONS
  mf130456D1(); // R>
  mfpush(&MFEF0255CF); // WARNING
  mf240C8DEC(); // !
}

void mfEAF793FE(void) { // : __SCENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("WORDLISTS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(8); // $8
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf37076D94(); // __XCENVIRONMENT?
}
 
#define MFMEMORY  

void mfE69B7462(void) { // : ALLOCATE
  mferr(mfin(1);mfout(1));  
  mfCell a=(mfCell)malloc(mftos);  
  if (a) mftos=a,mfpush(0); else mfpush(-59);
}

void mf97A522DB(void) { // : FREE
  mferr(mfin(1));  
  free((void*)mftos); // succeeds always  
  mftos=0;
}

void mfAF26F721(void) { // : RESIZE
  mferr(mfin(2));  
  mfCell a=(mfCell)realloc((void*)mfsec,mftos);  
  if (a) mfsec=a,mftos=0; else mftos=-61;
}

void mfCE7AD8ED(void) { // : __MEXCMSG
mfCASE
  mfpush(-59); // $FFFFFFC5
mfOF
  mfprint("ALLOCATE error"); // S"
mfEXIT
mfENDOF
  mfpush(-61); // $FFFFFFC3
mfOF
  mfprint("RESIZE error"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf04FB34A4(); // __SCEXCCODE
}

void mf1981A6D7(void) { // : __MENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("MEMORY-ALLOC"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfEAF793FE(); // __SCENVIRONMENT
}
 
#define MFFILE  
 
#ifdef __linux__  
# define O_TEXT 0  
# define O_BINARY 0  
# define __USE_LARGEFILE64  
#endif  
 
#ifdef __clang__  
# define lseek(x,y,z) _lseek(x,y,z)  
# define unlink(x) _unlink(x)  
# define creat(x,y) _creat(x,y)  
# define open(x,y) _open(x,y)  
# define close(x) _close(x)  
# define read(x,y,z) _read(x,y,z)  
# define write(x,y,z) _write(x,y,z)  
#endif  

void mfADF95DF3(void) { // : R/O
  mferr(mfout(1));  
  mfpush(O_RDONLY | O_TEXT);
}

void mfAE118C5C(void) { // : W/O
  mferr(mfout(1));  
  mfpush(O_WRONLY | O_TEXT);
}

void mfC5F983BB(void) { // : R/W
  mferr(mfout(1));  
  mfpush(O_RDWR | O_TEXT);
}

void mfDF81ECDE(void) { // : BIN
  mferr(mfin(1));  
  mftos &= ~O_TEXT, mftos |= O_BINARY;
}

void mfFB4621B4(void) { // : FILE-STATUS
  mferr(mfin(2));  
  struct stat fs; int u=min(MFIB,llabs(mftos)); char *a=(char*)mfsec,buf[MFIB];   
  strncpy(buf,a,u), buf[u]=0;   
  if(stat(buf,&fs)) mfsec=0,mftos=-67; else mfsec=fs.st_mode,mftos=0;
}

void mfC911533D(void) { // : EXIST-FILE
  mfFB4621B4(); // FILE-STATUS
mfNOTIF
  if (mftos&S_IWRITE) mftos=-1; else  
  if (mftos&S_IREAD)  mftos=1;  else mftos=0;  
mfTHEN
}

void mf220B8735(void) { // : FILE-POSITION
  mferr(mfin(1);mfout(2));  
  mfCell p=lseek(mftos,0,SEEK_CUR);  
  mftos=p, mfpush(0), mfpush(p==-1 ? -65 : 0);
}

void mf8CAE1B93(void) { // : FILE-SIZE
  mferr(mfin(1);mfout(2));  
  mfCell e, p=lseek(mftos,0,SEEK_CUR);  
  if (p==-1) { mfpush(0), mfpush(-66); return; }  
  e=lseek(mftos,0,SEEK_END), lseek(mftos,p,SEEK_SET);  
  mftos=e, mfpush(0), mfpush(0);
}

void mf45455D7C(void) { // : REPOSITION-FILE
  mferr(mfin(3));  
  mfCell r,h=mfpop(); mfdrop;  
  r=lseek(h,mftos,SEEK_SET);  
  mftos = (r==-1 ? -73 : 0);
}

void mf68AAA8F2(void) { // : RESIZE-FILE
  mferr(mfin(3));  
  mfCell r,h=mfpop(); mfdrop;  
#ifdef _WIN32  
  r=_chsize(h,mftos);  
#else  
  r=ftruncate(h,mftos);  
#endif  
  mftos = (r==-1 ? -74 : 0);
}

void mf0029C11C(void) { // : RENAME-FILE
  mferr(mfin(4));  
  int un=min(MFIB,llabs(mftos)), uo=min(MFIB,llabs(mfthd));  
  char *an=(char*)mfsec, *ao=(char*)mffth, buf[2*MFIB+1];  
  strncpy(buf,ao,uo), buf[uo]=0, mf2drop;  
  strncpy(buf+uo+1,an,un), buf[uo+un+1]=0, mfdrop;  
  mftos = (rename(buf,buf+uo+1) ? -72 : 0);
}

void mf207DC7E3(void) { // : DELETE-FILE
  mferr(mfin(2));  
  int u=min(MFIB,llabs(mftos)); char *a=(char*)mfsec,buf[MFIB]; mfdrop;  
  strncpy(buf,a,u), buf[u]=0;  
  mftos = (unlink(buf) ? -64 : 0);
}

void mf4D44B3FD(void) { // : STDIN
  mferr(mfout(1));  
  mfpush(0);
}

void mfD92AC866(void) { // : STDOUT
  mferr(mfout(1));  
  mfpush(1);
}

void mf4F8412B5(void) { // : STDERR
  mferr(mfout(1));  
  mfpush(2);
}

void mf3C8F801A(void) { // : OPEN-FILE
  mferr(mfin(3));  
  int fam=mfpop(), u=min(MFIB,llabs(mftos)); char *a=(char*)mfsec,buf[MFIB];  
  strncpy(buf,a,u), buf[u]=0;  
  u = open(buf,fam);  
  if (u==-1) mfsec=0,mftos=-69; else mfsec=u,mftos=0;
}

void mfD2C02CE6(void) { // : CREATE-FILE
  mferr(mfin(3));  
  int fam=mfpop(), u=min(MFIB,llabs(mftos)); char *a=(char*)mfsec,buf[MFIB];  
  strncpy(buf,a,u), buf[u]=0;  
  u = creat(buf,S_IREAD|S_IWRITE);  
  if (u==-1) { mfsec=-1, mftos=-63; return; }  
  close(u), mfsec=open(buf,fam), mftos=0;
}

void mfE7813386(void) { // : FLUSH-FILE
  mferr(mfin(1));  
#ifdef _WIN32  
  mftos = (_commit(mftos) ? -68 : 0);   
#else  
  mftos = (fsync(mftos) ? -68 : 0);  
#endif  
}

void mfB7443E2C(void) { // : CLOSE-FILE
  mferr(mfin(1));  
  mftos = (close(mftos) ? -62 : 0);
}

void mf1ED165FD(void) { // : WRITE-FILE
  mferr(mfin(3));  
  mfthd = write(mftos,(char*)mfthd,mfsec); mf2drop;  
  mftos = (mftos==-1 ? -75 : 0);
}

void mf00FC6F09(void) { // : WRITE-LINE
  mferr(mfin(3));  
  mfthd = write(mftos,(char*)mfthd,mfsec);  
  write(mftos,"\n",1); mf2drop;  
  mftos = (mftos==-1 ? -76 : 0);
}

void mf71E6784E(void) { // : READ-FILE
  mferr(mfin(3));  
  mfthd = read(mftos,(char*)mfthd,mfsec); mfdrop;  
  mftos = (mfsec==-1 ? -70 : 0);
}

void mf68B9A0A2(void) { // : READ-LINE
  mferr(mfin(3));  
  char *b=(char*)mfthd; int fid=mftos, u=mfsec, ur=0, f=-1, c=0;  
  while (ur<u) { c=read(fid,b,1);  
   if (c==-1) { mftos=-71; return; }  
   if (c==0) { f=-(ur>0); break; }  
   if (*b==10) { *b=0; break; }    
   if (*b==13) { *b=0; c=read(fid,b,1);  
     if (c==-1) { mftos=-71; return; }  
     if (c==0)  break;  
     if (*b==10) { *b=0; break; }  
     else { *b=0; lseek(fid,-1,SEEK_CUR); break; } }  
     b++,ur++; }  
  mfthd=ur, mfsec=f, mftos=0;
}

void mfB0766C12(void) { // : LIST-FILE
  mfADF95DF3(); // R/O
  mf3C8F801A(); // OPEN-FILE
  (MFE5B4B40F)(); // THROW
  mfpush(0); // $0
  mfA2DF200E(); // SWAP
mfBEGIN
  mf5F2B6B8B(); // HERE
  mf0119CBC8(); // _#IB
  mf6AB5854A(); // PLUCK
  mf68B9A0A2(); // READ-LINE
  (MFE5B4B40F)(); // THROW
mfWHILE
  mf64D9F6E0(); // CR
  mf87E8362E(); // ROT
  mf26EB3B95(); // 1+
  mf57E80646(); // DUP
  mfpush(0); // $0
  mf67D44899(); // .R
  mfprint(": "); // S"
  mfEFF28235(); // -ROT
  mf5F2B6B8B(); // HERE
  mfA2DF200E(); // SWAP
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
mfREPEAT
  mf87E8362E(); // ROT
  mfEF6476DC(); // 2DROP
  mfB7443E2C(); // CLOSE-FILE
  (MFE5B4B40F)(); // THROW
}

mfCell MF0D0C3A36=0; // 0

void mf0D0C3A36(void) { // VARIABLE __FILEWL
  mfpush(&MF0D0C3A36);
}

void mfA92D1570(void) { // : FILES
  mfpush(&MF0D0C3A36); // __FILEWL
  mfC50BF85F(); // @
  mf82CE5579(); // _CONTEXT
  mf240C8DEC(); // !
}

mfCell MF1085E39D=0; // 0

void mf1085E39D(void) { // VARIABLE __FILE
  mfpush(&MF1085E39D);
}

mfChar MF30A80A8D[3*MFSIZE]={0}; // 3

void mf30A80A8D(void) { // BUFFER _SLN
  mfpush(MF30A80A8D);
}

void mfFF1C37B3(void) { // : __POS
  mfpush(&MF30A80A8D); // _SLN
  mfBB8FCA7A(); // CELL+
}

void mf6FB85E7D(void) { // : __NAM
  mfpush(&MF30A80A8D); // _SLN
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

void mfB69116BF(void) { // : __FSRC>R
  mfpush(&MF30A80A8D); // _SLN
  mfpush(3); // $3
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
mfNEXT
}

void mfC81E32AF(void) { // : __R>FSRC
  mfpush(&MF30A80A8D); // _SLN
  mfpush(3); // $3
  mf662FFFF5(); // CELL
mfDOWNFOR
  mf130456D1(); // R>
mfN
  mf240C8DEC(); // !
mfNEXT
}

void mf9B1237DF(void) { // : FORGET-INCLUDED
  mfpush(&MF0D0C3A36); // __FILEWL
  mfC50BF85F(); // @
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfC50BF85F(); // @
mfIF
  mf74404CD4(); // _>CFA
  mfCF77DFB8(); // EXECUTE
  mfB81C6B28(); // PREVIOUS
  mfpush(-1); // $FFFFFFFF
  mf838F7252(); // CELLS
  mf3FA1943F(); // ALLOT
  mf5F2B6B8B(); // HERE
  mfC50BF85F(); // @
  mfB52F140B(); // SET-CURRENT
mfELSE
  mfpush(-300); // $FFFFFED4
  (MFE5B4B40F)(); // THROW
mfTHEN
}

void mf10326A51(void) { // : __INCLUDE
  char buf[MFIB];     
  mf600421B4(); // _SRC>R
  mfB69116BF(); // __FSRC>R
  mfpush(buf), mfpush(MFIB);
  mf5AF98C79(); // _SRC2!
  mfFD898658(); // _SRCID!
  mfDC799960(); // BLK
  mf2E1505EA(); // OFF
  mfpush(&MF30A80A8D); // _SLN
  mf2E1505EA(); // OFF
  mfpush(&MF1085E39D); // __FILE
  mfC50BF85F(); // @
  mf6FB85E7D(); // __NAM
  mf240C8DEC(); // !
mfBEGIN
  (MFC1D4E711)(); // REFILL
  mf57E80646(); // DUP
mfWHILE
  mf52C16B0C(); // DROP
  mfpush(&mfdict[216].cfa); // ['] _INTERPRET
  mfEAF28AAC(); // CATCH
  mf8003A4B3(); // ?DUP
mfIF
mfBREAK
mfTHEN
mfREPEAT
mfDUPIF
  (MF9FC8664E)(); // _EXCSRC
  mfprint("in "); // S"
  mf6FB85E7D(); // __NAM
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfC439E65E(); // _<CFA
  mf03D7EB73(); // _>NAME
  mfA3F7B2D4(); // COUNT
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
mfTHEN
  mfprint("line "); // S"
  mf48AF9A2C(); // DECIMAL
  mfpush(&MF30A80A8D); // _SLN
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
mfTHEN
  mf254113A2(); // SOURCE-ID
  mfB7443E2C(); // CLOSE-FILE
  mf52C16B0C(); // DROP
  mfC81E32AF(); // __R>FSRC
  mfD24E2A14(); // _R>SRC
  (MFE5B4B40F)(); // THROW
}

void mf5C03B764(void) { // : __ISINCLUDED?
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MFA274DA18); // CAPS
  mf2E1505EA(); // OFF
  mfE0839FF6(); // 2DUP
  mfD3AAC792(); // ALSO
  mfA92D1570(); // FILES
  (MF5AADB2E4)(); // _FIND-WORD
  mfB81C6B28(); // PREVIOUS
  mf130456D1(); // R>
  mfpush(&MFA274DA18); // CAPS
  mf240C8DEC(); // !
}

void mf0631BAC6(void) { // : __ADDINCLUDED
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MFA274DA18); // CAPS
  mf2E1505EA(); // OFF
  mfE0839FF6(); // 2DUP
  mf9DA7D846(); // NAMED
  mfBB3DE887(); // GET-CURRENT
  mfD3AAC792(); // ALSO
  mfA92D1570(); // FILES
  mfB78902C9(); // DEFINITIONS
  mf57E80646(); // DUP
  mf290C95CB(); // ,
  mfB53F8A17(); // MARKER
  mfB81C6B28(); // PREVIOUS
  mfB52F140B(); // SET-CURRENT
  mf130456D1(); // R>
  mfpush(&MFA274DA18); // CAPS
  mf240C8DEC(); // !
  mfB8F49A42(); // _LAST
  mfC50BF85F(); // @
  mf74404CD4(); // _>CFA
}

void mfE2E62798(void) { // : INCLUDE-FILE
  mfpush(&MF1085E39D); // __FILE
  mf2E1505EA(); // OFF
  mf10326A51(); // __INCLUDE
}

void mf3CC67F79(void) { // : INCLUDED
  mf5C03B764(); // __ISINCLUDED?
mfNOTIF
  mf0631BAC6(); // __ADDINCLUDED
mfTHEN
  mfpush(&MF1085E39D); // __FILE
  mf240C8DEC(); // !
  mfADF95DF3(); // R/O
  mf3C8F801A(); // OPEN-FILE
  (MFE5B4B40F)(); // THROW
  mf10326A51(); // __INCLUDE
}

void mf4A045F20(void) { // : REQUIRED
  mf5C03B764(); // __ISINCLUDED?
mfIF
  mf52C16B0C(); // DROP
  mfEF6476DC(); // 2DROP
mfEXIT
mfTHEN
  mf0631BAC6(); // __ADDINCLUDED
  mfpush(&MF1085E39D); // __FILE
  mf240C8DEC(); // !
  mfADF95DF3(); // R/O
  mf3C8F801A(); // OPEN-FILE
  (MFE5B4B40F)(); // THROW
  mf10326A51(); // __INCLUDE
}

void mf40C75207(void) { // : INCLUDE
  mfF92179F8(); // PARSE-NAME
  mf3CC67F79(); // INCLUDED
}

void mf916A1824(void) { // : REQUIRE
  mfF92179F8(); // PARSE-NAME
  mf4A045F20(); // REQUIRED
}

void mf70A53D75(void) { // : __FLREFILL
  mf254113A2(); // SOURCE-ID
  mf13ED5C43(); // 0>
mfNOTIF
  mf9715CACF(); // __REFILL
mfEXIT
mfTHEN
  mf254113A2(); // SOURCE-ID
  mf220B8735(); // FILE-POSITION
  mf52C16B0C(); // DROP
  mf52C16B0C(); // DROP
  mfFF1C37B3(); // __POS
  mf240C8DEC(); // !
  mfpush(&MF30A80A8D); // _SLN
  mf5A131C6F(); // INCR
  mfB9790298(); // SOURCE
  mf52C16B0C(); // DROP
  mf0119CBC8(); // _#IB
  mf254113A2(); // SOURCE-ID
  mf68B9A0A2(); // READ-LINE
  mf87E8362E(); // ROT
  mf7C1EEF6B(); // _SRCLEN
  mf240C8DEC(); // !
  mf14ED5DD6(); // 0=
  mf91666DC6(); // AND
  mf580B1E42(); // >IN
  mf2E1505EA(); // OFF
}

void mf202AC333(void) { // : __FL(
  mf254113A2(); // SOURCE-ID
  mf14ED5DD6(); // 0=
  mfDC799960(); // BLK
  mfC50BF85F(); // @
  mf14ED5DD6(); // 0=
  mf91666DC6(); // AND
mfIF
  mf93598951(); // __(
mfEXIT
mfTHEN
mfBEGIN
  mfpush(41); // $29
  mfD918C10C(); // PARSE
  mf2E0C9DAA(); // +
  mf76DA1336(); // C@
  mfpush(41); // $29
  mf93F7201F(); // <>
mfWHILE
  (MFC1D4E711)(); // REFILL
mfNOTIF
  mfpush(-39); // $FFFFFFD9
  (MFE5B4B40F)(); // THROW
mfTHEN
mfREPEAT
}

mfXT MF36090B18=mfC2CB1050; // IS __BL|S

void mf36090B18(void) { // DEFER |S
  (MF36090B18)();
} // IMMEDIATE 

void mf5112581A(void) { // : __|S
  mf7C1EEF6B(); // _SRCLEN
  mfC50BF85F(); // @
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mf254113A2(); // SOURCE-ID
  mf8CAE1B93(); // FILE-SIZE
  (MFE5B4B40F)(); // THROW
  mf254113A2(); // SOURCE-ID
  mf45455D7C(); // REPOSITION-FILE
  (MFE5B4B40F)(); // THROW
}

void mfA540A49C(void) { // : __FLSVINPUT
  mfpush(&MF30A80A8D); // _SLN
  mfpush(3); // $3
  mf662FFFF5(); // CELL
mfFORUP
mfN
  mfC50BF85F(); // @
mfNEXT
  mf3D67AD0F(); // __SAVE-INPUT
  mfpush(3); // $3
  mf2E0C9DAA(); // +
}

void mf38712CFA(void) { // : __FLRSTINPUT
  mfpush(8); // $8
  mf93F7201F(); // <>
  mf2FE7860F(); // OVER
  mf254113A2(); // SOURCE-ID
  mf93F7201F(); // <>
  mf7CE4AA04(); // OR
mfIF
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfpush(5); // $5
  mf97C8D2EE(); // __RESTORE-INPUT
  mf52C16B0C(); // DROP
  mfFF1C37B3(); // __POS
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MF30A80A8D); // _SLN
  mfpush(3); // $3
  mf662FFFF5(); // CELL
mfDOWNFOR
mfN
  mf240C8DEC(); // !
mfNEXT
  mfFF1C37B3(); // __POS
  mfC50BF85F(); // @
  mf130456D1(); // R>
  mf380CAD68(); // =
mfIF
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
  mfFF1C37B3(); // __POS
  mfC50BF85F(); // @
  mf16478CF0(); // S>D
  mf254113A2(); // SOURCE-ID
  mf45455D7C(); // REPOSITION-FILE
  mf52C16B0C(); // DROP
  mfpush(-1); // $FFFFFFFF
  mfDC799960(); // BLK
  mfC50BF85F(); // @
mfIF
  mfDC799960(); // BLK
mfELSE
  mfpush(&MF30A80A8D); // _SLN
mfTHEN
  mf08DC01D1(); // +!
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  (MFC1D4E711)(); // REFILL
  mfD745D921(); // INVERT
  mfA2DF200E(); // SWAP
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
}

void mf45EF8172(void) { // : __FLEXCMSG
mfCASE
  mfpush(-39); // $FFFFFFD9
mfOF
  mfprint("unexpected end of file"); // S"
mfEXIT
mfENDOF
  mfpush(-62); // $FFFFFFC2
mfOF
  mfprint("CLOSE-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-63); // $FFFFFFC1
mfOF
  mfprint("CREATE-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-64); // $FFFFFFC0
mfOF
  mfprint("DELETE-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-65); // $FFFFFFBF
mfOF
  mfprint("FILE-POSITION error"); // S"
mfEXIT
mfENDOF
  mfpush(-66); // $FFFFFFBE
mfOF
  mfprint("FILE-SIZE error"); // S"
mfEXIT
mfENDOF
  mfpush(-67); // $FFFFFFBD
mfOF
  mfprint("FILE-STATUS error"); // S"
mfEXIT
mfENDOF
  mfpush(-68); // $FFFFFFBC
mfOF
  mfprint("FLUSH-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-69); // $FFFFFFBB
mfOF
  mfprint("OPEN-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-70); // $FFFFFFBA
mfOF
  mfprint("READ-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-71); // $FFFFFFB9
mfOF
  mfprint("READ-LINE error"); // S"
mfEXIT
mfENDOF
  mfpush(-72); // $FFFFFFB8
mfOF
  mfprint("RENAME-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-73); // $FFFFFFB7
mfOF
  mfprint("REPOSITION-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-74); // $FFFFFFB6
mfOF
  mfprint("RESIZE-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-75); // $FFFFFFB5
mfOF
  mfprint("WRITE-FILE error"); // S"
mfEXIT
mfENDOF
  mfpush(-76); // $FFFFFFB4
mfOF
  mfprint("WRITE-LINE error"); // S"
mfEXIT
mfENDOF
  mfpush(-300); // $FFFFFED4
mfOF
  mfprint("INCLUDED error"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mfCE7AD8ED(); // __MEXCMSG
}

void mf03406B1E(void) { // : __FLENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("FILE"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("FILE-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf1981A6D7(); // __MENVIRONMENT
}

void mfA4959F21(void) { // : __FLBOOT
  mf1230EC41(); // __SCBOOT
  mfE81D9A59(); // WORDLIST
  mfpush(&MF0D0C3A36); // __FILEWL
  mf240C8DEC(); // !
}
 
#define MFFACILITY  

void mf4375DF0F(void) { // : (TIMER)
  mferr(mfout(1));  
  mfpush((1000*clock())/CLOCKS_PER_SEC);
}

void mf35DFBD11(void) { // : MS
  mferr(mfin(1));  
#if defined _WIN32  
  Sleep(mfpop());  
#elif defined __linux__  
  usleep(1000*mfpop());  
#else // DOS  
  mf4375DF0F(); // (TIMER)
  mf2E0C9DAA(); // +
mfBEGIN
  mf57E80646(); // DUP
  mf4375DF0F(); // (TIMER)
  mf0EF30764(); // U<
mfUNTIL
  mf52C16B0C(); // DROP
#endif  
}

mfCell MF889600AF=0; // 0

void mf889600AF(void) { // VARIABLE _TIMER
  mfpush(&MF889600AF);
}

mfCell MF382762B2=0; // 0

void mf382762B2(void) { // VARIABLE __TMFL
  mfpush(&MF382762B2);
}

void mfFAA3E0E8(void) { // : TIMER-RESET
  mfpush(&MF382762B2); // __TMFL
  mf80E4B050(); // ON
  mf4375DF0F(); // (TIMER)
  mfpush(&MF889600AF); // _TIMER
  mf240C8DEC(); // !
}

void mf2F77738D(void) { // : TIMER-STOP
  mfpush(&MF382762B2); // __TMFL
  mf2E1505EA(); // OFF
  mf4375DF0F(); // (TIMER)
  mfpush(&MF889600AF); // _TIMER
  mfC50BF85F(); // @
  mf280C9438(); // -
  mfpush(&MF889600AF); // _TIMER
  mf240C8DEC(); // !
}

void mfC3A5A6AF(void) { // : .ELAPSED
  mfpush(&MF382762B2); // __TMFL
  mfC50BF85F(); // @
mfIF
  mf2F77738D(); // TIMER-STOP
mfTHEN
  mfpush(&MF889600AF); // _TIMER
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
  mfprint("ms"); // S"
}

void mf603D5B62(void) { // : RANDOM
  mferr(mfout(1));  
  mfCell r=0; if (!r) srand(time(NULL));  
  for (int i=0;i<MFSIZE;i++) r=(r<<8)^rand();  
  mfpush(r);
}

void mf94BA29B2(void) { // : TIME&DATE
  mferr(mfout(6));  
  struct tm *ts; time_t t;  
  time(&t), ts=localtime(&t);  
  mfpush(ts->tm_sec),  mfpush(ts->tm_min),   mfpush(ts->tm_hour);  
  mfpush(ts->tm_mday), mfpush(1+ts->tm_mon), mfpush(1900+ts->tm_year);
}

void mfC1528055(void) { // : WEEKDAY
  mferr(mfout(1));  
  struct tm *ts; time_t t;  
  time(&t), ts=localtime(&t);     
  mfpush(ts->tm_wday);
}

void mfA71A54D5(void) { // : DAYLIGHTSAVING
  mferr(mfout(1));  
  struct tm *ts; time_t t;  
  time(&t), ts=localtime(&t);     
  mfpush(ts->tm_isdst);
}

void mf16954D39(void) { // : _TIME$
  mf94BA29B2(); // TIME&DATE
  mfEF6476DC(); // 2DROP
  mf52C16B0C(); // DROP
  mf87E8362E(); // ROT
  mfpush(0); // $0
  mfA6F73E08(); // <#
  mf260C9112(); // #
  mf260C9112(); // #
  mfpush(58); // $3A
  mfEBB64F78(); // HOLD
  mfEF6476DC(); // 2DROP
  mfA2DF200E(); // SWAP
  mfpush(0); // $0
  mf260C9112(); // #
  mf260C9112(); // #
  mfpush(58); // $3A
  mfEBB64F78(); // HOLD
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
  mf260C9112(); // #
  mf260C9112(); // #
  mf11C88844(); // #>
}

void mfA9FEB30C(void) { // : _WEEKDAY$
  mfspush("SunMonTueWedThuFriSat"); // S"
  mf52C16B0C(); // DROP
  mfC1528055(); // WEEKDAY
  mfpush(3); // $3
  mf2F0C9F3D(); // *
  mf2E0C9DAA(); // +
  mfpush(3); // $3
}

void mf4900DA24(void) { // : _MONTH$
  mf94BA29B2(); // TIME&DATE
  mf52C16B0C(); // DROP
  mf67FCEB09(); // >R
  mfEF6476DC(); // 2DROP
  mfEF6476DC(); // 2DROP
  mfspush("JanFebMarAprMayJunJulAugSepOctNovDec"); // S"
  mf52C16B0C(); // DROP
  mf130456D1(); // R>
  mf20EB3223(); // 1-
  mfpush(3); // $3
  mf2F0C9F3D(); // *
  mf2E0C9DAA(); // +
  mfpush(3); // $3
}

void mf36F6EBFA(void) { // : _DATE$
  mf94BA29B2(); // TIME&DATE
  mfpush(0); // $0
  mfA6F73E08(); // <#
  mf260C9112(); // #
  mf260C9112(); // #
  mf260C9112(); // #
  mf260C9112(); // #
  mfpush(46); // $2E
  mfEBB64F78(); // HOLD
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
  mf260C9112(); // #
  mf260C9112(); // #
  mfpush(46); // $2E
  mfEBB64F78(); // HOLD
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
  mf260C9112(); // #
  mf260C9112(); // #
  mf11C88844(); // #>
  mf89F60699(); // 2>R
  mfEF6476DC(); // 2DROP
  mf52C16B0C(); // DROP
  mf34FF0561(); // 2R>
}

void mf1B1FA7CA(void) { // : BEGIN-STRUCTURE
  mfC19230DD(); // CREATE
  mf5F2B6B8B(); // HERE
  mfpush(0); // $0
  mfpush(0); // $0
  mf290C95CB(); // ,
  mfpush(&mfdict[101].cfa); // ['] @
  mf4520460B(); // _<DOES
}

void mf316084C6(void) { // : END-STRUCTURE
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
}

void mfEF03F461(void) { // : _+FIELD
  mfC50BF85F(); // @
  mf2E0C9DAA(); // +
}

void mf4F90F13E(void) { // : +FIELD
  mfC19230DD(); // CREATE
  mf2FE7860F(); // OVER
  mf290C95CB(); // ,
  mf2E0C9DAA(); // +
  mfpush(&mfdict[406].cfa); // ['] _+FIELD
  mf4520460B(); // _<DOES
}

void mf3C3B6224(void) { // : CFIELD:
  mfpush(1); // $1
  mf4F90F13E(); // +FIELD
}

void mf39538B07(void) { // : FIELD:
  mf901B2AFF(); // ALIGNED
  mf662FFFF5(); // CELL
  mf4F90F13E(); // +FIELD
}

void mfD1B716C0(void) { // : EKEY?
  mferr(mfout(1));  
  mfpush(mfkeyq());
}

void mf38E5C67F(void) { // : EKEY
  uint32_t c=mfkey();  
#ifdef __linux__   
  if (c==27) { // goodenuffhash  
    while (mfkeyq()) c = (c<<6)^(mfChar)(mfkey()-32); }  
#else  
  if ((c==0)||(c==0xe0)) c |= mfkey()<<8;  
#endif  
  mfpush(c);
}

void mf9C0BB436(void) { // : EKEY>FKEY
  mferr(mfin(1);mfout(1));  
#if defined _WIN32  
  static const uint16_t ktab[]={ // scan codes  
 // norm, shift,  ctrl,   alt  
  0x3b00,0x5400,0x5e00,0x6800, // F1  
  0x3c00,0x5500,0x5f00,0x6900, // F2  
  0x3d00,0x5600,0x6000,0x6a00, // F3  
  0x3e00,0x5700,0x6100,0x6b00, // F4  
  0x3f00,0x5800,0x6200,0x6c00, // F5  
  0x4000,0x5900,0x6300,0x6d00, // F6  
  0x4100,0x5a00,0x6400,0x6e00, // F7  
  0x4200,0x5b00,0x6500,0x6f00, // F8  
  0x4300,0x5c00,0x6600,0x7000, // F9  
  0x4400,0x5d00,0x6700,0x7100, // F10  
  0x47e0,0x47e0,0x77e0,0x9700, // home  
  0x48e0,0x48e0,0x8de0,0x9800, // up  
  0x49e0,0x49e0,0x86e0,0x9900, // prior/pgup  
  0x4be0,0x4be0,0x73e0,0x9b00, // left  
  0x4de0,0x4de0,0x74e0,0x9d00, // right  
  0x4fe0,0x4fe0,0x75e0,0x9f00, // end  
  0x50e0,0x50e0,0x91e0,0xa000, // down  
  0x51e0,0x51e0,0x76e0,0xa100, // next/pgdn  
  0x52e0,0x52e0,0x92e0,0xa200, // ins  
  0x53e0,0x53e0,0x93e0,0xa300, // del  
  0x85e0,0x87e0,0x89e0,0x8be0, // F11  
  0x86e0,0x88e0,0x8ae0,0x8ce0}; // F12  
#elif defined __linux__  
  static const uint32_t ktab[]={  
 // norm,      shift,     ctrl,      alt  
  0x0001bbf0,0xfb45b4b0,0xfb45b570,0xfb45b4f0, // F1  
  0x0001bbf1,0xfb45b4b1,0xfb45b571,0xfb45b4f1, // F2  
  0x0001bbf2,0xfb45b4b2,0xfb45b572,0xfb45b4f2, // F3  
  0x0001bbf3,0xfb45b4b3,0xfb45b572,0xfb45b4f3, // F4  
  0x1bed151e,0xd155b4de,0xd155b51e,0xd155b49e, // F5  
  0x1bed159e,0xd15db4de,0xd15db51e,0xd15db49e, // F6  
  0x1bed165e,0xd161b4de,0xd161b51e,0xd161b49e, // F7  
  0x1bed161e,0xd165b4de,0xd165b51e,0xd165b49e, // F8  
  0x1bed245e,0xd241b4de,0xd241b51e,0xd241b49e, // F9  
  0x1bed241e,0xd245b4de,0xd245b51e,0xd245b49e, // F10  
  0x0001bee8,0xfb45b4a8,0xfb45b568,0xfb45b4e8, // home  
  0x0001bee1,0xfb45b4a1,0xfb45b561,0xfb45b4e1, // up  
  0x006fb51e,0xfb45b4a8,0xfb55b51e,0xfb55b49e, // prior/pgup  
  0x0001bee4,0xfb45b4a4,0xfb45b564,0xfb45b4e4, // left  
  0x0001bee3,0xfb45b4a3,0xfb45b563,0xfb45b4e3, // right  
  0x0001bee6,0xfb45b4a6,0xfb45b566,0xfb45b4e6, // end  
  0x0001bee2,0xfb45b4a2,0xfb45b562,0xfb45b4e2, // down  
  0x006fb5de,0xfb59b4de,0xfb59b51e,0xfb59b49e, // next/pgdn  
  0x006fb4de,0xfb49b4de,0xfb49b51e,0xfb49b49e, // ins  
  0x006fb49e,0xfb4db4de,0xfb4db51e,0xfb4db49e, // del  
  0x1bed249e,0xd24db4de,0xd24db51e,0xd24db49e, // F11  
  0x1bed255e,0xd251b4de,0xd251b51e,0xd251b49e}; // F12  
#else // DOS  
  static const uint16_t ktab[]={ // scan codes (depending on machine!)  
 // norm, shift,  ctrl,   alt  
  0x3b00,0x5400,0x5e00,0x6800, // F1  
  0x3c00,0x5500,0x5f00,0x6900, // F2  
  0x3d00,0x5600,0x6000,0x6a00, // F3  
  0x3e00,0x5700,0x6100,0x6b00, // F4  
  0x3f00,0x5800,0x6200,0x6c00, // F5  
  0x4000,0x5900,0x6300,0x6d00, // F6  
  0x4100,0x5a00,0x6400,0x6e00, // F7  
  0x4200,0x5b00,0x6500,0x6f00, // F8  
  0x4300,0x5c00,0x6600,0x7000, // F9  
  0x4400,0x5d00,0x6700,0x7100, // F10  
  0x4700,0x4700,0x7700,0x9700, // home  
  0x4800,0x4800,0x8d00,0x9800, // up  
  0x4900,0x4900,0x8600,0x9900, // prior/pgup  
  0x4b00,0x4b00,0x7300,0x9b00, // left  
  0x4d00,0x4d00,0x7460,0x9d00, // right  
  0x4f00,0x4f00,0x7500,0x9f00, // end  
  0x5000,0x5000,0x9100,0xa000, // down  
  0x5100,0x5100,0x7600,0xa100, // next/pgdn  
  0x5200,0x5200,0x9200,0xa200, // ins  
  0x5300,0x5300,0x9300,0xa300, // del  
  0x8500,0x8700,0x8900,0x8b00, // F11  
  0x8600,0x8800,0x8a00,0x8c00}; // F12  
#endif  
  mfCell i,row,col,x=mftos;     
  for (i=0;i<88;i++) {  
    if (x==ktab[i]) { row=i/4, col=i-row*4;  
      mftos=((row+1)<<8)|(0x10000*col);  
      mfpush(-1); return; } }  
  mfpush(0);
}

const mfCell MF4D1CE30E=65536; // 65536

void mf4D1CE30E(void) { // CONSTANT K-SHIFT-MASK
  mfpush(MF4D1CE30E);
}

const mfCell MF08D7F4BF=131072; // 131072

void mf08D7F4BF(void) { // CONSTANT K-CTRL-MASK
  mfpush(MF08D7F4BF);
}

const mfCell MF85B23637=196608; // 196608

void mf85B23637(void) { // CONSTANT K-ALT-MASK
  mfpush(MF85B23637);
}

const mfCell MF74934078=256; // 256

void mf74934078(void) { // CONSTANT K-F1
  mfpush(MF74934078);
}

const mfCell MF77934531=512; // 512

void mf77934531(void) { // CONSTANT K-F2
  mfpush(MF77934531);
}

const mfCell MF7693439E=768; // 768

void mf7693439E(void) { // CONSTANT K-F3
  mfpush(MF7693439E);
}

const mfCell MF79934857=1024; // 1024

void mf79934857(void) { // CONSTANT K-F4
  mfpush(MF79934857);
}

const mfCell MF789346C4=1280; // 1280

void mf789346C4(void) { // CONSTANT K-F5
  mfpush(MF789346C4);
}

const mfCell MF7B934B7D=1536; // 1536

void mf7B934B7D(void) { // CONSTANT K-F6
  mfpush(MF7B934B7D);
}

const mfCell MF7A9349EA=1792; // 1792

void mf7A9349EA(void) { // CONSTANT K-F7
  mfpush(MF7A9349EA);
}

const mfCell MF6D933573=2048; // 2048

void mf6D933573(void) { // CONSTANT K-F8
  mfpush(MF6D933573);
}

const mfCell MF6C9333E0=2304; // 2304

void mf6C9333E0(void) { // CONSTANT K-F9
  mfpush(MF6C9333E0);
}

const mfCell MFCBCE3158=2560; // 2560

void mfCBCE3158(void) { // CONSTANT K-F10
  mfpush(MFCBCE3158);
}

const mfCell MF0DD800EE=2816; // 2816

void mf0DD800EE(void) { // CONSTANT K-HOME
  mfpush(MF0DD800EE);
}

const mfCell MF83B3ABC0=3072; // 3072

void mf83B3ABC0(void) { // CONSTANT K-UP
  mfpush(MF83B3ABC0);
}

const mfCell MF96DF0DF7=3328; // 3328

void mf96DF0DF7(void) { // CONSTANT K-PRIOR
  mfpush(MF96DF0DF7);
}

const mfCell MF8D5A8F90=3584; // 3584

void mf8D5A8F90(void) { // CONSTANT K-LEFT
  mfpush(MF8D5A8F90);
}

const mfCell MF3280C6E5=3840; // 3840

void mf3280C6E5(void) { // CONSTANT K-RIGHT
  mfpush(MF3280C6E5);
}

const mfCell MF5C78EFEA=4096; // 4096

void mf5C78EFEA(void) { // CONSTANT K-END
  mfpush(MF5C78EFEA);
}

const mfCell MFB1D8C2F5=4352; // 4352

void mfB1D8C2F5(void) { // CONSTANT K-DOWN
  mfpush(MFB1D8C2F5);
}

const mfCell MFD2B09D08=4608; // 4608

void mfD2B09D08(void) { // CONSTANT K-NEXT
  mfpush(MFD2B09D08);
}

const mfCell MFA0546E08=4864; // 4864

void mfA0546E08(void) { // CONSTANT K-INSERT
  mfpush(MFA0546E08);
}

const mfCell MF3653A2EA=5120; // 5120

void mf3653A2EA(void) { // CONSTANT K-DELETE
  mfpush(MF3653A2EA);
}

const mfCell MFCCCE32EB=5376; // 5376

void mfCCCE32EB(void) { // CONSTANT K-F11
  mfpush(MFCCCE32EB);
}

const mfCell MFCDCE347E=5632; // 5632

void mfCDCE347E(void) { // CONSTANT K-F12
  mfpush(MFCDCE347E);
}

void mfD41B511B(void) { // : EKEY>CHAR
  mf57E80646(); // DUP
  mfpush(32); // $20
  mfpush(127); // $7F
  mf09D242EA(); // WITHIN
}

void mf1BE205F6(void) { // : EKEY>ECHAR
  mf57E80646(); // DUP
  mfpush(1); // $1
  mfpush(256); // $100
  mf09D242EA(); // WITHIN
  mf2FE7860F(); // OVER
  mfpush(224); // $E0
  mf93F7201F(); // <>
  mf91666DC6(); // AND
}

mfCell MF8AB69C40=0; // 0

void mf8AB69C40(void) { // VARIABLE __PKEY
  mfpush(&MF8AB69C40);
}

void mfF6666A89(void) { // : KEY?
mfBEGIN
  mfpush(&MF8AB69C40); // __PKEY
  mfC50BF85F(); // @
mfIF
  mfpush(MF501B0925); // TRUE
mfBREAK
mfTHEN
  mfD1B716C0(); // EKEY?
mfNOTIF
  mfpush(MFEE597878); // FALSE
mfBREAK
mfTHEN
  mf38E5C67F(); // EKEY
  mfD41B511B(); // EKEY>CHAR
mfIF
  mfpush(&MF8AB69C40); // __PKEY
  mf240C8DEC(); // !
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
mfAGAIN
}

void mf7CB31EB3(void) { // : __FCKEY
  mfpush(&MF8AB69C40); // __PKEY
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfpush(&MF8AB69C40); // __PKEY
  mf2E1505EA(); // OFF
mfEXIT
mfTHEN
mfBEGIN
  mf38E5C67F(); // EKEY
  mfD41B511B(); // EKEY>CHAR
mfIF
mfBREAK
mfTHEN
  mf52C16B0C(); // DROP
mfAGAIN
}

void mf788916EF(void) { // : EMIT?
  mferr(mfout(1));  
  mfpush(mfemitq);
}

mfCell MF78FA6A07=-1; // -1

void mf78FA6A07(void) { // VARIABLE VT
  mfpush(&MF78FA6A07);
}

void mf9267E927(void) { // : __VTSET
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf48AF9A2C(); // DECIMAL
  mfpush(1); // $1
mfFORUP
mfN
  mf76DA1336(); // C@
  mf57E80646(); // DUP
  mfpush(94); // $5E
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mfpush(27); // $1B
  mfD9BC5E8A(); // EMIT
  mfpush(91); // $5B
  mfD9BC5E8A(); // EMIT
mfELSE
  mf57E80646(); // DUP
  mfpush(126); // $7E
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mf67D44899(); // .R
mfELSE
  mfD9BC5E8A(); // EMIT
mfTHEN
mfTHEN
mfNEXT
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
}

void mfB2C838F9(void) { // : __VTCHAR
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfspush("^~m"); // S"
  mf9267E927(); // __VTSET
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
}

void mf9C5DA170(void) { // : VTNORMAL
  mfpush(0); // $0
  mfB2C838F9(); // __VTCHAR
}

void mf4B114CCB(void) { // : VTBRIGHT
  mfpush(1); // $1
  mfB2C838F9(); // __VTCHAR
}

void mf89B1A1B9(void) { // : VTUNDERLINE
  mfpush(4); // $4
  mfB2C838F9(); // __VTCHAR
}

void mf40D82043(void) { // : VTREVERSE
  mfpush(7); // $7
  mfB2C838F9(); // __VTCHAR
}

void mf74C8DEA7(void) { // : VTHIDDEN
  mfpush(8); // $8
  mfB2C838F9(); // __VTCHAR
}

void mfCAA480DE(void) { // : VTBLACK
  mfpush(30); // $1E
  mfB2C838F9(); // __VTCHAR
}

void mfA569F60E(void) { // : VTRED
  mfpush(31); // $1F
  mfB2C838F9(); // __VTCHAR
}

void mf430AE6BE(void) { // : VTGREEN
  mfpush(32); // $20
  mfB2C838F9(); // __VTCHAR
}

void mfF69B4083(void) { // : VTYELLOW
  mfpush(33); // $21
  mfB2C838F9(); // __VTCHAR
}

void mfD34E84E3(void) { // : VTBLUE
  mfpush(34); // $22
  mfB2C838F9(); // __VTCHAR
}

void mf9FE539DE(void) { // : VTMAGENTA
  mfpush(35); // $23
  mfB2C838F9(); // __VTCHAR
}

void mfAFA0318C(void) { // : VTCYAN
  mfpush(36); // $24
  mfB2C838F9(); // __VTCHAR
}

void mf3F9C8520(void) { // : VTWHITE
  mfpush(37); // $25
  mfB2C838F9(); // __VTCHAR
}

void mf6A78A9B6(void) { // : PAGE
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfNOTIF
  mfpush(-21); // $FFFFFFEB
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfspush("^2J^H"); // S"
  mf9267E927(); // __VTSET
}

void mfBEE2C2F4(void) { // : AT-XY
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfNOTIF
  mfpush(-21); // $FFFFFFEB
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mfspush("^~;~f"); // S"
  mf9267E927(); // __VTSET
}

void mfE740E281(void) { // : GET-XY
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfNOTIF
  mfpush(-21); // $FFFFFFEB
  (MFE5B4B40F)(); // THROW
mfTHEN
#if defined _WIN32  
  CONSOLE_SCREEN_BUFFER_INFO csbi; COORD cp; SMALL_RECT wp;  
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&csbi);  
  wp=csbi.srWindow, cp=csbi.dwCursorPosition;  
  mfpush(cp.X), mfpush(cp.Y-wp.Top);  
#else  
  mfpush(0); // $0
  mfpush(0); // $0
#endif  
}

void mf31B023B4(void) { // : SAVE-XY
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfprint("\033[s"); // S"
mfTHEN
}

void mf5C0DBF87(void) { // : RESTORE-XY
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfprint("\033[u"); // S"
mfTHEN
}

void mf7F99FF1B(void) { // : VTERASE
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfprint("\033[K"); // S"
mfTHEN
}

void mf2604FB32(void) { // : VTUP
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfspush("^~A"); // S"
  mf9267E927(); // __VTSET
mfTHEN
}

void mf6AB7D413(void) { // : VTDOWN
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfspush("^~B"); // S"
  mf9267E927(); // __VTSET
mfTHEN
}

void mf77661DA3(void) { // : VTRIGHT
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfspush("^~C"); // S"
  mf9267E927(); // __VTSET
mfTHEN
}

void mf54A88DAE(void) { // : VTLEFT
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfIF
  mfspush("^~D"); // S"
  mf9267E927(); // __VTSET
mfTHEN
}

void mfB81DD0EA(void) { // : PRINTF
mfBEGIN
  mf57E80646(); // DUP
mfWHILE
  mf2FE7860F(); // OVER
  mf76DA1336(); // C@
  mfEFF28235(); // -ROT
  mf2BEE4576(); // CHAR/
  mf89F60699(); // 2>R
  mf57E80646(); // DUP
  mfpush(37); // $25
  mf380CAD68(); // =
mfIF
  mf3EFF151F(); // 2R@
mfIF
  mf76DA1336(); // C@
mfCASE
  mfpush(100); // $64
mfOF
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mf67D44899(); // .R
  mfpush(0); // $0
mfENDOF
  mfpush(117); // $75
mfOF
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mfC6C18638(); // U.R
  mfpush(0); // $0
mfENDOF
  mfpush(120); // $78
mfOF
  mf52C16B0C(); // DROP
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf818F192A(); // HEX
  mfpush(0); // $0
  mf67D44899(); // .R
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
  mfpush(0); // $0
mfENDOF
  mfpush(121); // $79
mfOF
  mf52C16B0C(); // DROP
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf818F192A(); // HEX
  mfpush(0); // $0
  mfC6C18638(); // U.R
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
  mfpush(0); // $0
mfENDOF
mfENDCASE
mfIF
  mfpush(37); // $25
  mfD9BC5E8A(); // EMIT
mfELSE
  mf34FF0561(); // 2R>
  mf2BEE4576(); // CHAR/
mfCONTINUE
mfTHEN
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
mfELSE
  mf57E80646(); // DUP
  mfpush(126); // $7E
  mf380CAD68(); // =
mfIF
  mf3EFF151F(); // 2R@
mfIF
  mf76DA1336(); // C@
mfCASE
  mfpush(107); // $6B
mfOF
  mf52C16B0C(); // DROP
  mfCAA480DE(); // VTBLACK
  mfpush(0); // $0
mfENDOF
  mfpush(114); // $72
mfOF
  mf52C16B0C(); // DROP
  mfA569F60E(); // VTRED
  mfpush(0); // $0
mfENDOF
  mfpush(103); // $67
mfOF
  mf52C16B0C(); // DROP
  mf430AE6BE(); // VTGREEN
  mfpush(0); // $0
mfENDOF
  mfpush(121); // $79
mfOF
  mf52C16B0C(); // DROP
  mfF69B4083(); // VTYELLOW
  mfpush(0); // $0
mfENDOF
  mfpush(98); // $62
mfOF
  mf52C16B0C(); // DROP
  mfD34E84E3(); // VTBLUE
  mfpush(0); // $0
mfENDOF
  mfpush(109); // $6D
mfOF
  mf52C16B0C(); // DROP
  mf9FE539DE(); // VTMAGENTA
  mfpush(0); // $0
mfENDOF
  mfpush(99); // $63
mfOF
  mf52C16B0C(); // DROP
  mfAFA0318C(); // VTCYAN
  mfpush(0); // $0
mfENDOF
  mfpush(119); // $77
mfOF
  mf52C16B0C(); // DROP
  mf3F9C8520(); // VTWHITE
  mfpush(0); // $0
mfENDOF
  mfpush(110); // $6E
mfOF
  mf52C16B0C(); // DROP
  mf9C5DA170(); // VTNORMAL
  mfpush(0); // $0
mfENDOF
  mfpush(116); // $74
mfOF
  mf52C16B0C(); // DROP
  mf4B114CCB(); // VTBRIGHT
  mfpush(0); // $0
mfENDOF
  mfpush(117); // $75
mfOF
  mf52C16B0C(); // DROP
  mf89B1A1B9(); // VTUNDERLINE
  mfpush(0); // $0
mfENDOF
  mfpush(118); // $76
mfOF
  mf52C16B0C(); // DROP
  mf40D82043(); // VTREVERSE
  mfpush(0); // $0
mfENDOF
mfENDCASE
mfIF
  mfpush(126); // $7E
  mfD9BC5E8A(); // EMIT
mfELSE
  mf34FF0561(); // 2R>
  mf2BEE4576(); // CHAR/
mfCONTINUE
mfTHEN
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
mfELSE
  mfD9BC5E8A(); // EMIT
mfTHEN
mfTHEN
  mf34FF0561(); // 2R>
mfREPEAT
  mfEF6476DC(); // 2DROP
}

void mf0EFFD357(void) { // : P"
  mfpush(34); // $22
  mfF08832C0(); // _PARSE-CHAR
  mfpush(&MFE09A6F96); // STATE
  mfC50BF85F(); // @
mfIF
  mf50BE3701(); // SLITERAL
  mfat(mfdp)=(mfCell)&mfdict[466].cfa;
  mfdp+=MFSIZE; // [,] PRINTF
mfELSE
  mfB81DD0EA(); // PRINTF
mfTHEN
} // IMMEDIATE 

mfChar MFD45CF653[1024]={0}; // 1024

void mfD45CF653(void) { // BUFFER __K-HIST
  mfpush(MFD45CF653);
}

mfCell MF1244A8B2=8; // 8

void mf1244A8B2(void) { // VARIABLE __K-I
  mfpush(&MF1244A8B2);
}

mfCell MF82BDE93A=0; // 0

void mf82BDE93A(void) { // VARIABLE __K-UPD
  mfpush(&MF82BDE93A);
}

void mfC5B3D32F(void) { // : __K-LAST
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(896); // $380
  mf2E0C9DAA(); // +
}

void mf98870EED(void) { // : __K-ACT
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(&MF1244A8B2); // __K-I
  mfC50BF85F(); // @
  mfpush(128); // $80
  mf2F0C9F3D(); // *
  mf2E0C9DAA(); // +
}

void mfCE4C0FDE(void) { // : __K-RESET
  mf8003A4B3(); // ?DUP
mfIF
  mf54A88DAE(); // VTLEFT
mfTHEN
  mf8003A4B3(); // ?DUP
mfIF
  mf57E80646(); // DUP
  mf8C12EE82(); // SPACES
  mf54A88DAE(); // VTLEFT
mfTHEN
  mfpush(0); // $0
  mfpush(&MF82BDE93A); // __K-UPD
  mf2E1505EA(); // OFF
}

void mfFB2DAD09(void) { // : __K-GET
  mf98870EED(); // __K-ACT
  mfA3F7B2D4(); // COUNT
  mf7D04FDAF(); // R@
  mf0E45F4B7(); // MIN
  mfpush(1); // $1
  mf982060C8(); // RPICK
  mfA2DF200E(); // SWAP
  mfC2064154(); // MOVE
  mfCE4C0FDE(); // __K-RESET
  mf52C16B0C(); // DROP
  mf98870EED(); // __K-ACT
  mfA3F7B2D4(); // COUNT
  mf93A82DE8(); // TUCK
  mf142FE78D(); // TYPE
  mf57E80646(); // DUP
}

void mf8F16E98A(void) { // : __K-INSDEL
  mfE0839FF6(); // 2DUP
  mf280C9438(); // -
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mfpush(2); // $2
  mf982060C8(); // RPICK
  mf6AB5854A(); // PLUCK
  mf2E0C9DAA(); // +
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mf57E80646(); // DUP
  mf26EB3B95(); // 1+
  mfpush(&MF82BDE93A); // __K-UPD
  mf80E4B050(); // ON
}

void mf6A553006(void) { // : __K-INSERT
  mfEFF28235(); // -ROT
  mf8F16E98A(); // __K-INSDEL
  mf87E8362E(); // ROT
  mfC2064154(); // MOVE
  mf87E8362E(); // ROT
  mf7D04FDAF(); // R@
  mf97DA4729(); // C!
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mf130456D1(); // R>
  mf130456D1(); // R>
  mf26EB3B95(); // 1+
  mf93A82DE8(); // TUCK
  mf142FE78D(); // TYPE
  mf54A88DAE(); // VTLEFT
}

void mfEE36F1CC(void) { // : __K-DELETE
  mf8F16E98A(); // __K-INSDEL
  mfEFF28235(); // -ROT
  mfA2DF200E(); // SWAP
  mfC2064154(); // MOVE
  mfA2DF200E(); // SWAP
  mf20EB3223(); // 1-
  mfA2DF200E(); // SWAP
  mf130456D1(); // R>
  mf130456D1(); // R>
  mf20EB3223(); // 1-
  mf93A82DE8(); // TUCK
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
  mf26EB3B95(); // 1+
  mf54A88DAE(); // VTLEFT
}

void mf8BDFFCD3(void) { // : __K-FKEYS
  mf9C0BB436(); // EKEY>FKEY
mfNOTIF
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
mfCASE
  mfpush(MF8D5A8F90); // K-LEFT
mfOF
mfDUPIF
  mf20EB3223(); // 1-
  mfpush(1); // $1
  mf54A88DAE(); // VTLEFT
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MF3280C6E5); // K-RIGHT
mfOF
  mf57E80646(); // DUP
  mf6AB5854A(); // PLUCK
  mf390CAEFB(); // <
mfIF
  mf26EB3B95(); // 1+
  mfpush(1); // $1
  mf77661DA3(); // VTRIGHT
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MF0DD800EE); // K-HOME
mfOF
  mf8003A4B3(); // ?DUP
mfIF
  mf54A88DAE(); // VTLEFT
  mfpush(0); // $0
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MF5C78EFEA); // K-END
mfOF
  mfE0839FF6(); // 2DUP
  mf280C9438(); // -
  mf8003A4B3(); // ?DUP
mfIF
  mf77661DA3(); // VTRIGHT
  mf52C16B0C(); // DROP
  mf57E80646(); // DUP
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MFA0546E08); // K-INSERT
mfOF
  mfE0839FF6(); // 2DUP
  mf3B0CB221(); // >
  mf6AB5854A(); // PLUCK
  mf7D04FDAF(); // R@
  mf390CAEFB(); // <
  mf91666DC6(); // AND
mfIF
  mfpush(MF20DD5D6B); // BL
  mf6A553006(); // __K-INSERT
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MF3653A2EA); // K-DELETE
mfOF
  mfE0839FF6(); // 2DUP
  mf3B0CB221(); // >
  mf6AB5854A(); // PLUCK
  mf91666DC6(); // AND
mfIF
  mfEE36F1CC(); // __K-DELETE
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MF83B3ABC0); // K-UP
mfOF
  mfpush(&MF1244A8B2); // __K-I
  mfC50BF85F(); // @
  mf13ED5C43(); // 0>
mfIF
  mf98870EED(); // __K-ACT
  mfpush(128); // $80
  mf280C9438(); // -
  mf76DA1336(); // C@
mfIF
  mfpush(&MF1244A8B2); // __K-I
  mf7D948B73(); // DECR
  mfFB2DAD09(); // __K-GET
mfTHEN
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MFB1D8C2F5); // K-DOWN
mfOF
  mfpush(&MF1244A8B2); // __K-I
  mfC50BF85F(); // @
  mfpush(8); // $8
  mf390CAEFB(); // <
mfIF
  mfpush(&MF1244A8B2); // __K-I
  mf5A131C6F(); // INCR
  mfpush(&MF1244A8B2); // __K-I
  mfC50BF85F(); // @
  mfpush(8); // $8
  mf390CAEFB(); // <
mfIF
  mfFB2DAD09(); // __K-GET
mfELSE
  mfCE4C0FDE(); // __K-RESET
  mf57E80646(); // DUP
mfTHEN
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDOF
  mfpush(MFEE597878); // FALSE
  mf57E80646(); // DUP
mfENDCASE
}

void mfBC6EE21B(void) { // : __K-ADJ-HIST
  mfpush(1); // $1
  mf982060C8(); // RPICK
  mf2FE7860F(); // OVER
  mfspush("bye"); // S"
  mfA7AD15F7(); // STR=
  mf2FE7860F(); // OVER
  mf14ED5DD6(); // 0=
  mf7CE4AA04(); // OR
mfIF
mfEXIT
mfTHEN
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(128); // $80
  mf2E0C9DAA(); // +
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(896); // $380
  mfC2064154(); // MOVE
  mfC5B3D32F(); // __K-LAST
  mfpush(128); // $80
  mfB7F60EB5(); // ERASE
  mfpush(1); // $1
  mf982060C8(); // RPICK
  mf2FE7860F(); // OVER
  mfpush(126); // $7E
  mf0E45F4B7(); // MIN
  mfC5B3D32F(); // __K-LAST
  mf10E38971(); // _PLACE
  mfpush(&MF82BDE93A); // __K-UPD
  mfC50BF85F(); // @
mfIF
  mfpush(8); // $8
  mfpush(&MF1244A8B2); // __K-I
  mf240C8DEC(); // !
mfELSE
  mfpush(&MF1244A8B2); // __K-I
  mfC50BF85F(); // @
  mfDBAD15F5(); // 0<>
  mfpush(&MF1244A8B2); // __K-I
  mf08DC01D1(); // +!
mfTHEN
}

void mfB525B56C(void) { // : __FCACCEPT
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfNOTIF
  mfD3091947(); // __ACCEPT
mfEXIT
mfTHEN
  mf89F60699(); // 2>R
  mfpush(0); // $0
  mfpush(0); // $0
  mfpush(&MF82BDE93A); // __K-UPD
  mf2E1505EA(); // OFF
mfBEGIN
  mf38E5C67F(); // EKEY
  mf57E80646(); // DUP
  mfpush(13); // $D
  mf93F7201F(); // <>
mfWHILE
  mf8BDFFCD3(); // __K-FKEYS
mfIF
mfCONTINUE
mfTHEN
mfCASE
  mfpush(3); // $3
mfOF
  mfpush(-28); // $FFFFFFE4
  (MFE5B4B40F)(); // THROW
mfENDOF
  mfpush(27); // $1B
mfOF
  mfCE4C0FDE(); // __K-RESET
  mf0807143C(); // RDROP
  mf0807143C(); // RDROP
mfEXIT
mfENDOF
  mfpush(8); // $8
mfOF
mfDUPIF
  mf20EB3223(); // 1-
  mfpush(1); // $1
  mf54A88DAE(); // VTLEFT
  mfEE36F1CC(); // __K-DELETE
mfTHEN
mfENDOF
  mf6AB5854A(); // PLUCK
  mf7D04FDAF(); // R@
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
mfELSE
  mf6A553006(); // __K-INSERT
  mf26EB3B95(); // 1+
  mfpush(1); // $1
  mf77661DA3(); // VTRIGHT
mfTHEN
  mfpush(MF501B0925); // TRUE
mfENDCASE
mfREPEAT
  mf52C16B0C(); // DROP
  mf2FE7860F(); // OVER
  mfA2DF200E(); // SWAP
  mf280C9438(); // -
  mf77661DA3(); // VTRIGHT
  mfBC6EE21B(); // __K-ADJ-HIST
  mf57E80646(); // DUP
  mf130456D1(); // R>
  mf390CAEFB(); // <
mfIF
  mf57E80646(); // DUP
  mf130456D1(); // R>
  mf2E0C9DAA(); // +
  mfpush(0); // $0
  mfA2DF200E(); // SWAP
  mf97DA4729(); // C!
mfELSE
  mf0807143C(); // RDROP
mfTHEN
}

void mf528B5A4C(void) { // : ARGC
  mferr(mfout(1));  
  mfpush(mfargc);
}

void mf5F8B6EC3(void) { // : ARGV
  mferr(mfin(1);mfout(1));  
  mfUCell u=mftos;   
  if (u>=(mfUCell)mfargc) { mfpush(0); return; }   
  mftos=(mfCell)(mfargv[u]), mfpush(strlen(mfargv[u]));
}

void mf3FBAD1DC(void) { // : SYSTEM
  char cmd[MFIB]; int u=mfpop(); char *a=(char*)mftos;  
  u=max(0,min(u,MFIB-1)); strncpy(cmd,a,u), cmd[u]=0;  
  mf64D9F6E0(); // CR
  mftos=(system(cmd)?errno:0);
}

void mf6E19C5B4(void) { // : DIR
#if defined __linux__  
  mf64D9F6E0(); // CR
  mfspush("ls --group-directories-first"); // S"
#else  
  mfspush("dir /w /ogn"); // S"
#endif  
  mf3FBAD1DC(); // SYSTEM
  mf52C16B0C(); // DROP
}
 
#ifdef __clang__  
#define chdir(x) _chdir(x)  
#endif  

void mf987D8205(void) { // : CHDIR
  mfF92179F8(); // PARSE-NAME
  char mfib[MFIB]; int u=mfpop(); char *a=(char*)mfpop(); u=min(u,MFIB-1);  
  strncpy(mfib,a,u), mfib[u]=0;  
  chdir(mfib); ;  
}

void mfB6B69E5E(void) { // : SYSEXIT
  int xc=mftos;  
  mfexit(), exit(xc);
}

void mfDACA59F2(void) { // : __RESIZE-STACK
  mfCell *s; mfUCell d=mfsp-mfstk, u=mfpop();  
  s=realloc(mfstk,u*MFSIZE); if (!s) return;  
  mfstksize=u, mfstk=s, mfsp=s+d, mflp=s+u;
}

void mf38087488(void) { // : __RESIZE-RSTACK
  mfCell *r; mfUCell d=mfrp-mfrst, u=mfpop();  
  r=realloc(mfrst,u*MFSIZE); if (!r) return;  
  mfrstsize=u, mfrst=r, mfrp=r+d;
}

void mf450A1A9C(void) { // : __RESIZE-FPSTACK
  mfFlt *f; mfUCell d=mffp-mffst, u=mfpop();  
  f=realloc(mffst,u*MFSIZE*MFFLTSIZE); if (!f) return;  
  mffstsize=u, mffst=f, mffp=f+d;
}

mfXT MFE0018F77=mf92FE3A3D; // IS ___STACKS

void mfE0018F77(void) { // DEFER _STACKS
  (MFE0018F77)();
}

void mf92FE3A3D(void) { // : ___STACKS
  mfpush(mffstsize), mfpush(mfrstsize), mfpush(mfstksize);  
  mfspush("Stacks: d:%d / r:%d / f:%d"); // S"
  mfB81DD0EA(); // PRINTF
}

void mf62E73D2D(void) { // : __EVALCMDLINE
  mf528B5A4C(); // ARGC
mfFOR
mfN
mfNOTIF
mfCONTINUE
mfTHEN
mfN
  mf5F8B6EC3(); // ARGV
  mfE0839FF6(); // 2DUP
  mfspush("/e"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
mfPLUSN
mfN
  mf528B5A4C(); // ARGC
  mf390CAEFB(); // <
mfIF
mfN
  mf5F8B6EC3(); // ARGV
  mf319DE64A(); // EVALUATE
mfTHEN
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("/i"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
mfPLUSN
mfN
  mf528B5A4C(); // ARGC
  mf390CAEFB(); // <
mfIF
mfN
  mf5F8B6EC3(); // ARGV
  mf3CC67F79(); // INCLUDED
mfTHEN
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("/s"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
mfPLUSN
mfN
  mf528B5A4C(); // ARGC
  mf390CAEFB(); // <
mfIF
mfN
  mf5F8B6EC3(); // ARGV
  mf1BF6A5CC(); // _NUMBER?
mfIF
  mfDACA59F2(); // __RESIZE-STACK
mfELSE
  mfpush(-24); // $FFFFFFE8
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("/r"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
mfPLUSN
mfN
  mf528B5A4C(); // ARGC
  mf390CAEFB(); // <
mfIF
mfN
  mf5F8B6EC3(); // ARGV
  mf1BF6A5CC(); // _NUMBER?
mfIF
  mf38087488(); // __RESIZE-RSTACK
mfELSE
  mfpush(-24); // $FFFFFFE8
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("/f"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
mfPLUSN
mfN
  mf528B5A4C(); // ARGC
  mf390CAEFB(); // <
mfIF
mfN
  mf5F8B6EC3(); // ARGV
  mf1BF6A5CC(); // _NUMBER?
mfIF
  mf450A1A9C(); // __RESIZE-FPSTACK
mfELSE
  mfpush(-24); // $FFFFFFE8
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("/nl"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(&MF1BDFA94F); // __NOLOGO
  mf80E4B050(); // ON
mfELSE
  mfEF6476DC(); // 2DROP
  mfprint("?? invalid argument\007\n"); // S"
mfEXIT
mfTHEN
mfTHEN
mfTHEN
mfTHEN
mfTHEN
mfTHEN
mfNEXT
}

void mf95F7CE78(void) { // : __FCSTART
  mf62E73D2D(); // __EVALCMDLINE
  mfspush("autoexec.mf"); // S"
  mfE0839FF6(); // 2DUP
  mfC911533D(); // EXIST-FILE
mfIF
  mf3CC67F79(); // INCLUDED
mfELSE
  mfEF6476DC(); // 2DROP
mfTHEN
}

void mf868F97AB(void) { // : __FCLOGO
  mfpush(&MF1BDFA94F); // __NOLOGO
  mfC50BF85F(); // @
mfIF
mfEXIT
mfTHEN
  mfpush(&MF78FA6A07); // VT
  mfC50BF85F(); // @
mfNOTIF
  mf8F0754EB(); // ___LOGO
mfEXIT
mfTHEN
#if defined __DJGPP__  
  mfprint("\033[37m+--------------------------+"); // S"
  mfprint("\n| \033[31mM\033[37min\033[31mF\033[37morth V3.4.8 - "); // S"
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mf2B0C98F1(); // .
  mfprint("bit |"); // S"
  mfprint("\n+--------------------------+\n"); // S"
#else  
  mfprint("\033[97m\033(0lqqqqqqqqqqqqqqqqqqqqqqqqqqk"); // S"
  mfprint("\nx \033(B\033[91mM\033[97min\033[91mF\033[97morth V3.4.8 - "); // S"
  mfpush(8); // $8
  mf838F7252(); // CELLS
  mf2B0C98F1(); // .
  mfprint("bit \033(0x\033(B"); // S"
  mfprint("\n\033(0mqqqqqqqqqqqqqqqqqqqqqqqqqqj\033(B\n"); // S"
#endif  
  mf4B114CCB(); // VTBRIGHT
  mf430AE6BE(); // VTGREEN
  (MFE0018F77)(); // _STACKS
  mfprint("\nDataspace: "); // S"
  mfpush(MFDSPSIZE);
  mf83CFF77F(); // ,.
  mf9C5DA170(); // VTNORMAL
}

void mf5ED1E4C5(void) { // : __FCENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("FACILITY"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("FACILITY-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf03406B1E(); // __FLENVIRONMENT
}

void mf54E088CC(void) { // : __FCBYE
  mfspush("mfhist.blk"); // S"
  mfC5F983BB(); // R/W
  mfDF81ECDE(); // BIN
  mfD2C02CE6(); // CREATE-FILE
mfNOTIF
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(1024); // $400
  mf6AB5854A(); // PLUCK
  mf1ED165FD(); // WRITE-FILE
  mf52C16B0C(); // DROP
  mfB7443E2C(); // CLOSE-FILE
mfTHEN
  mf52C16B0C(); // DROP
  mf3CD40A81(); // __BYE
}

void mf82118574(void) { // : __FCBOOT
  mfspush("mfhist.blk"); // S"
  mfADF95DF3(); // R/O
  mfDF81ECDE(); // BIN
  mf3C8F801A(); // OPEN-FILE
mfNOTIF
  mfpush(&MFD45CF653); // __K-HIST
  mfpush(1024); // $400
  mf6AB5854A(); // PLUCK
  mf71E6784E(); // READ-FILE
  mfEF6476DC(); // 2DROP
  mfB7443E2C(); // CLOSE-FILE
mfTHEN
  mf52C16B0C(); // DROP
  mfA4959F21(); // __FLBOOT
}
 
#define MFDOUBLE  

void mfB49A1F9E(void) { // : 2ROT
  mfpush(5); // $5
  mf5451721E(); // ROLL
  mfpush(5); // $5
  mf5451721E(); // ROLL
}

void mfEEA51C98(void) { // : 2NIP
  mf404D123E(); // 2SWAP
  mfEF6476DC(); // 2DROP
}

void mf37C99D78(void) { // : 2TUCK
  mfE0839FF6(); // 2DUP
  mf89F60699(); // 2>R
  mf404D123E(); // 2SWAP
  mf34FF0561(); // 2R>
}

void mf1EA943CC(void) { // : D>S
  mferr(mfin(2); if (!(mftos==-1||mftos==0)) mfthrow(-24););  
  mfdrop;
}

void mf1DCE4E28(void) { // : D+
  mferr(mfin(4));  
#ifndef MFDBL  
  mfUCell d1l=mffth, d1h=mfthd, d2l=mfsec, d2h=mftos;  
  d1l+=d2l, d1h+=d2h+(d1l<d2l);  
  mf2drop, mfsec=d1l, mftos=d1h;  
#else  
  mf2drop, mfdtos+=mfdontos;  
#endif  
}

void mf23CE579A(void) { // : D-
  mferr(mfin(4));  
#ifndef MFDBL  
  mfUCell d1l=mffth, d1h=mfthd, d2l=mfsec, d2h=mftos;  
  d1h-=d2h+(d1l<d2l); d1l-=d2l;   
  mf2drop, mfsec=d1l, mftos=d1h;  
#else  
  mf2drop, mfdtos-=mfdontos;  
#endif  
}

void mf8F8BE09B(void) { // : D2*
  mferr(mfin(2));  
#ifndef MFDBL  
  mfUCell l=mfsec, h=mftos; h=(h<<1)|(l>>63), l<<=1;  
  mfsec=l, mftos=h;  
#else  
  mfdtos<<=1;  
#endif  
}

void mf928BE554(void) { // : D2/
  mferr(mfin(2));  
#ifndef MFDBL  
  mfUCell l=mfsec; mfCell h=mftos; l=(l>>1)|(h<<63), h>>=1;  
  mfsec=l, mftos=h;  
#else  
  mfdtos>>=1;  
#endif  
}

void mf1ECE4FBB(void) { // : D*
#ifndef MFDBL  
  mf6AB5854A(); // PLUCK
  mf2FE7860F(); // OVER
  mf4F46575E(); // XOR
  mf67FCEB09(); // >R
  mfE23549BD(); // DABS
  mf89F60699(); // 2>R
  mfE23549BD(); // DABS
  mf2FE7860F(); // OVER
  mf67FCEB09(); // >R
  mfpush(2); // $2
  mf982060C8(); // RPICK
  mfE30F168A(); // _MU*
  mf34FF0561(); // 2R>
  mf2F0C9F3D(); // *
  mf2E0C9DAA(); // +
  mf0807143C(); // RDROP
  mf130456D1(); // R>
  mf15ED5F69(); // 0<
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
#else  
  mferr(mfin(4));  
  mf2drop, mfdtos*=mfdontos;  
#endif  
}

void mf7ADB6C68(void) { // : D/REM
  mferr(mfin(4);mfzero(mftos||mfsec));  
#ifndef MFDBL  
  mf6AB5854A(); // PLUCK
  mf67FCEB09(); // >R
  mf6AB5854A(); // PLUCK
  mf2FE7860F(); // OVER
  mf4F46575E(); // XOR
  mf67FCEB09(); // >R
  mfE23549BD(); // DABS
  mf404D123E(); // 2SWAP
  mfE23549BD(); // DABS
  mf404D123E(); // 2SWAP
  mf57E80646(); // DUP
mfNOTIF
  mf52C16B0C(); // DROP
  mf1691D15F(); // _MU/MOD
  mfpush(0); // $0
  mfEFF28235(); // -ROT
mfELSE
  mfUCell ul=mffth, uh=mfthd, vl=mfsec, vh=mftos, q=0, m=1;  
  if ((uh==vh)&&(ul==vl)) uh=ul=0, q=1; else {  
  while(vh==uh?vl<=ul:vh<=uh)  
    vh=(vh<<1)|(vl>>63), vl<<=1, m<<=1;  
  while(m>1) {  
    vl=(vl>>1)|(vh<<63), vh>>=1, m>>=1;  
    if (uh==vh?ul>=vl:uh>=vh) { uh-=vh+(vl>ul), ul-=vl, q|=m; } } }   
  mffth=ul, mfthd=uh, mfsec=q, mftos=0;  
mfTHEN
  mf130456D1(); // R>
  mf15ED5F69(); // 0<
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
  mf130456D1(); // R>
  mf15ED5F69(); // 0<
mfIF
  mf404D123E(); // 2SWAP
  mf8B105859(); // DNEGATE
  mf404D123E(); // 2SWAP
mfTHEN
#else  
  mfDbl d1=mfdsec, d2=mfdtos, q;  
  if(d1==d2) mfdsec=0, mfdtos=1; else  
  q=d1/d2, mfdtos=q, mfdsec=d1-q*d2;  
#endif  
}

void mf581A2788(void) { // : D/MOD
  mfCell vh=mftos, vl=mfsec, s=mftos^mfthd;  
  mf7ADB6C68(); // D/REM
  if (!((mfthd||mffth)&&(s<0))) return;  
  mfrpush(vl), mfrpush(vh);  
  mfpush(1); // $1
  mfpush(0); // $0
  mf23CE579A(); // D-
  mf404D123E(); // 2SWAP
  mf34FF0561(); // 2R>
  mf1DCE4E28(); // D+
  mf404D123E(); // 2SWAP
}

void mf21CE5474(void) { // : D/
  mf7ADB6C68(); // D/REM
  mfEEA51C98(); // 2NIP
}

void mf00910FAC(void) { // : D0=
#ifndef MFDBL  
  mf7CE4AA04(); // OR
  mf14ED5DD6(); // 0=
#else  
  mferr(mfin(2));  
  mfsec=-(mfdtos==0),mfdrop;  
#endif  
}

void mf0191113F(void) { // : D0<
#ifndef MFDBL  
  mf63DECBC8(); // NIP
  mf15ED5F69(); // 0<
#else  
  mferr(mfin(2));  
  mfsec=-(mfdtos<0),mfdrop;  
#endif  
}

void mf13CE3E6A(void) { // : D=
#ifndef MFDBL  
  mf23CE579A(); // D-
  mf7CE4AA04(); // OR
  mf14ED5DD6(); // 0=
#else  
  mferr(mfin(4));  
  mf2drop,mfsec=-(mfdtos==mfdontos),mfdrop;  
#endif  
}

void mf83AE5FF9(void) { // : D<>
  mf13CE3E6A(); // D=
  mfABEE47AA(); // NOT
}

void mf14CE3FFD(void) { // : D<
 mferr(mfin(4));  
#ifndef MFDBL  
  mfCell d2h=mfpop(), d2l=mfpop(), d1h=mfpop(), d1l=mftos;  
  mftos=-(d1h==d2h?(mfUCell)d1l<(mfUCell)d2l:d1h<d2h);  
#else  
  mf2drop,mfsec=-(mfdtos<mfdontos),mfdrop;  
#endif  
}

void mf12CE3CD7(void) { // : D>
  mf404D123E(); // 2SWAP
  mf14CE3FFD(); // D<
}

void mf84A9E45E(void) { // : D>=
  mf14CE3FFD(); // D<
  mfABEE47AA(); // NOT
}

void mf80AE5B40(void) { // : D<=
  mf12CE3CD7(); // D>
  mfABEE47AA(); // NOT
}

void mf03E7820A(void) { // : DU<
  mferr(mfin(4));  
#ifndef MFDBL  
  mfUCell d2h=mfpop(), d2l=mfpop(), d1h=mfpop(), d1l=mftos;  
  mftos=-(d1h==d2h?d1l<d2l:d1h<d2h);  
#else  
  mf2drop,mfsec=-((mfUDbl)mfdtos<(mfUDbl)mfdontos),mfdrop;  
#endif  
}

void mf01E77EE4(void) { // : DU>
  mf404D123E(); // 2SWAP
  mf03E7820A(); // DU<
}

void mfD86CAF9B(void) { // : DU>=
  mf03E7820A(); // DU<
  mfABEE47AA(); // NOT
}

void mf5C71FC95(void) { // : DU<=
  mf01E77EE4(); // DU>
  mfABEE47AA(); // NOT
}

void mfA0BB6085(void) { // : DMIN
#ifndef MFDBL  
  mf8C8BC01F(); // 2OVER
  mf8C8BC01F(); // 2OVER
  mf14CE3FFD(); // D<
mfNOTIF
  mf404D123E(); // 2SWAP
mfTHEN
  mfEF6476DC(); // 2DROP
#else  
  mferr(mfin(4));  
  mf2drop,mfdtos=(mfdtos<mfdontos?mfdtos:mfdontos);  
#endif  
}

void mfEACF5CBB(void) { // : DMAX
#ifndef MFDBL  
  mf8C8BC01F(); // 2OVER
  mf8C8BC01F(); // 2OVER
  mf14CE3FFD(); // D<
mfIF
  mf404D123E(); // 2SWAP
mfTHEN
  mfEF6476DC(); // 2DROP
#else  
  mferr(mfin(4));  
  mf2drop,mfdtos=(mfdtos>mfdontos?mfdtos:mfdontos);  
#endif  
}

void mf66C18A88(void) { // : DROL
  mferr(mfin(3));  
  mfUCell p=mfpop()&(2*MFBITS-1), h=mftos, l=mfsec, ho=h, lo=l, x;  
  if (p>=MFBITS) { p-=MFBITS; x=h,ho=h=lo,lo=l=x; }  
  if (p) { lo=(l<<p)|(h>>(MFBITS-p)); ho=(h<<p)|(l>>(MFBITS-p)); }  
  mfsec=lo, mftos=ho;
}

void mf54C16E32(void) { // : DROR
  mferr(mfin(3));  
  mfUCell p=mfpop()&(2*MFBITS-1), h=mftos, l=mfsec, ho=h, lo=l, x;  
  if (p>=MFBITS) { p-=MFBITS; x=h,ho=h=lo,lo=l=x; }  
  if (p) { lo=(l>>p)|(h<<(MFBITS-p)); ho=(h>>p)|(l<<(MFBITS-p)); }  
  mfsec=lo, mftos=ho;
}

void mf1DDF9749(void) { // : M+
  mf16478CF0(); // S>D
  mf1DCE4E28(); // D+
}

void mf0CF87FDB(void) { // : M*/
  mf6AB5854A(); // PLUCK
  mf6AB5854A(); // PLUCK
  mf6AB5854A(); // PLUCK
  mf4F46575E(); // XOR
  mf4F46575E(); // XOR
  mf67FCEB09(); // >R
  mf6C84489B(); // ABS
  mf67FCEB09(); // >R
  mf6C84489B(); // ABS
  mf67FCEB09(); // >R
  mfE23549BD(); // DABS
  mf7D04FDAF(); // R@
  mfD9ACE697(); // UM*
  mf87E8362E(); // ROT
  mf130456D1(); // R>
  mfD9ACE697(); // UM*
  mfA2DF200E(); // SWAP
  mf67FCEB09(); // >R
  mfE40F181D(); // _MU+
  mf130456D1(); // R>
  mfEFF28235(); // -ROT
  mf7D04FDAF(); // R@
  mf5F2279EC(); // UM/MOD
  mfEFF28235(); // -ROT
  mf130456D1(); // R>
  mf5F2279EC(); // UM/MOD
  mfEFF28235(); // -ROT
  mf52C16B0C(); // DROP
  mf130456D1(); // R>
  mf15ED5F69(); // 0<
mfIF
  mf8B105859(); // DNEGATE
mfTHEN
}

void mf981F4C2E(void) { // : __(D.)
  mf93A82DE8(); // TUCK
  mfE23549BD(); // DABS
  mfA6F73E08(); // <#
  mf26C8A953(); // #S
  mf87E8362E(); // ROT
  mf0AADBFA4(); // SIGN
  mf11C88844(); // #>
}

void mf22CE5607(void) { // : D.
  mf981F4C2E(); // __(D.)
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mf1FD1E7CF(void) { // : D.R
  mf67FCEB09(); // >R
  mf981F4C2E(); // __(D.)
  mf130456D1(); // R>
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf8C12EE82(); // SPACES
  mf142FE78D(); // TYPE
}

void mf865D0E31(void) { // : __(UD.)
  mfA6F73E08(); // <#
  mf26C8A953(); // #S
  mf11C88844(); // #>
}

void mf73967FB6(void) { // : UD.
  mf865D0E31(); // __(UD.)
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mfD9EB53EC(void) { // : UD.R
  mf67FCEB09(); // >R
  mf865D0E31(); // __(UD.)
  mf130456D1(); // R>
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf8C12EE82(); // SPACES
  mf142FE78D(); // TYPE
}

void mfF3D61FB9(void) { // : D,.
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf22CE5607(); // D.
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mfC5143EF1(void) { // : D,.R
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf1FD1E7CF(); // D.R
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mf8DE65F1A(void) { // : UD,.
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mf73967FB6(); // UD.
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mfA9A7FE58(void) { // : UD,.R
  mfpush(&MF5389E74A); // _,SEP
  mf80E4B050(); // ON
  mfD9EB53EC(); // UD.R
  mfpush(&MF5389E74A); // _,SEP
  mf2E1505EA(); // OFF
}

void mfA1F2B8FB(void) { // : 2,
  mf290C95CB(); // ,
  mf290C95CB(); // ,
}

void mf071CC234(void) { // : 2LITERAL
  mfA2DF200E(); // SWAP
  mfBAFC44C4(); // LITERAL
  mfBAFC44C4(); // LITERAL
} // IMMEDIATE COMPILE-ONLY

void mf154B5C15(void) { // : 2CONSTANT
  mfC19230DD(); // CREATE
  mfA1F2B8FB(); // 2,
  mfpush(&mfdict[106].cfa); // ['] 2@
  mf4520460B(); // _<DOES
}

void mfEFCA0295(void) { // : 2VARIABLE
  mfC19230DD(); // CREATE
  mfpush(0); // $0
  mfpush(0); // $0
  mfA1F2B8FB(); // 2,
}

void mf5E07509A(void) { // : 2VALUE
  mfpush(&mfdict[106].cfa); // ['] 2@
  mfpush(&mfdict[107].cfa); // ['] 2!
  mfpush(&mfdict[479].cfa); // ['] D+
  mf24D3F916(); // _(VALUE)
  mfA1F2B8FB(); // 2,
}

void mf2FABFE3A(void) { // : __DENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("DOUBLE"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("DOUBLE-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf5ED1E4C5(); // __FCENVIRONMENT
}

void mfE74BDF44(void) { // : _DOUBLE?
  mfEF6476DC(); // 2DROP
  mfpush(&MFE37AEDD9); // __DPL
  mfC50BF85F(); // @
  mf15ED5F69(); // 0<
mfIF
  mfpush(MFEE597878); // FALSE
mfELSE
  mfpush(&MFDF58554B); // __DBL
  mf3DF21B8F(); // 2@
  mfpush(MF501B0925); // TRUE
mfTHEN
}

void mf71DFE06F(void) { // : DPL
  mfpush(&MFE37AEDD9); // __DPL
}

void mf249E5635(void) { // : __DBOOT
  mf82118574(); // __FCBOOT
  mfpush(&mfdict[518].cfa); // ['] _DOUBLE?
  mfpush(&mfdict[32].cfa); // ['] NOOP
  mfpush(&mfdict[514].cfa); // ['] 2LITERAL
  mfspush("REC-DOUBLE"); // S"
  mf9DA7D846(); // NAMED
  mf5E8B98AB(); // RECOGNIZER
}
 
#define MFFLOAT  

void mf017B185E(void) { // : FDEPTH
  mferr(mfout(1));  
  mfpush(mffp-mffst);
}

static inline void mfF41B2E30(void) { // : FDROP
  mferr(mffin(1));  
  mffdrop;
}

static inline void mf030EAC5C(void) { // : FPICK
  mferr(mfin(1);mffin(abs((int)mftos)+1));  
  mfFlt p=mffp[-mfpop()];  
  mffpush(p);
}

static inline void mf26F17CF2(void) { // : FDUP
  mferr(mffin(1);mffout(1));  
  mffup,mfftos=mffsec;
}

static inline void mfE3615E4B(void) { // : FOVER
  mferr(mffin(2);mffout(1));  
  mffup, mfftos=mffthd;
}

static inline void mf5B6A7C0A(void) { // : FSWAP
  mferr(mffin(2));  
  mfFlt f=mffsec; mffsec=mfftos,mfftos=f;
}

static inline void mf8ABEA64A(void) { // : FROT
  mferr(mffin(3));  
  mfFlt f=mffthd; mffthd=mffsec,mffsec=mfftos,mfftos=f;
}

static inline void mf9580290C(void) { // : FNIP
  mferr(mffin(2));  
  mffsec=mfftos, mffdrop;
}

static inline void mf430C7B9C(void) { // : FTUCK
  mferr(mffin(2);mffout(1));     
  mffup, mfftos=mffsec, mffsec=mffthd, mffthd=mfftos;
}

static inline void mfF8BB56F5(void) { // : F>R
  mferr(mffin(1);mfrout(MFFLTSIZE));  
  *(mfFlt*)(mfrp+1)=mffpop(), mfrp+=MFFLTSIZE;
}

static inline void mf3FB24223(void) { // : FR@
  mferr(mfrin(MFFLTSIZE);mffout(1));  
  mffpush(*(mfFlt*)(mfrp-(MFFLTSIZE-1)));
}

static inline void mf5DB2715D(void) { // : FR>
  mf3FB24223(); // FR@
  mfrp-=MFFLTSIZE;
}

void mf9C3B7E3D(void) { // : FLOOR
  mferr(mffin(1));  
  mfftos=floor(mfftos);
}

void mf12346AD7(void) { // : FROUND
  mferr(mffin(1));  
  mfftos=rint(mfftos);
}

void mf723ABD29(void) { // : FTRUNC
  mferr(mffin(1));  
  mfftos=trunc(mfftos);
}

void mf18479016(void) { // : S>F
  mferr(mfin(1);mffout(1));  
  mffpush(mfpop());
}

void mfF7BB5562(void) { // : F>S
  mferr(mffin(1);mfout(1));  
  mfpush(mffpop());
}

void mf2BA95843(void) { // : D>F
  mferr(mfin(2);mffout(1));  
  char s=mftos<0;  
  mfE23549BD(); // DABS
#ifdef MFDBL  
  mffpush(mfdpop());  
#else  
  mfUCell hi=mfpop(), lo=mfpop();  
#ifdef MF32  
  mffpush(ldexp((mfFlt)hi,32)+(mfFlt)lo);  
#else  
  mfFlt lf=ldexp((mfFlt)(lo>>32),32)+(mfFlt)(lo&0xFFFFFFFF);  
  mfFlt hf=ldexp((mfFlt)(hi>>32),32)+(mfFlt)(hi&0xFFFFFFFF);  
  mffpush(ldexp(hf,64)+lf);  
#endif  
#endif   
  if (s) mfftos=-mfftos;
}

void mfE2BB3453(void) { // : F>D
  mferr(mffin(1);mfout(2));  
#ifdef MFDBL  
  mfDbl d=(mfDbl)mffpop();  
  mfpush((d<<MFBITS)>>MFBITS),mfpush(d>>MFBITS);  
#else  
  mfFlt f=round(mffpop()); char s=(f<0.); f=fabs(f);  
#ifdef MF32  
  mfFlt hf=floor(ldexp(f,-32)), lf=f-ldexp(hf,32);  
  mfpush((mfUCell)lf), mfpush((mfUCell)hf);  
#else  
  mfFlt h=floor(ldexp(f,-64)), l=f-ldexp(h,64);  
  mfFlt hhf=floor(ldexp(h,-32)), hlf=h-ldexp(hhf,32);  
  mfFlt lhf=floor(ldexp(l,-32)), llf=l-ldexp(lhf,32);  
  mfpush(((mfUCell)lhf<<32)+(mfUCell)llf);  
  mfpush(((mfUCell)hhf<<32)+(mfUCell)hlf);  
#endif  
  if (s)  
  mf8B105859(); // DNEGATE
#endif  
}

void mf69C5AA87(void) { // : FNEGATE
  mferr(mffin(1));  
  mfFlt t=mfftos;  
  mfftos = (signbit(t) ? copysign(t,+1.) : copysign(t,-1.));
}

void mf155A76B7(void) { // : FABS
  mferr(mffin(1));  
  mfftos = copysign(mfftos,+1.);
}

static inline void mf1DD2CB56(void) { // : F+
  mferr(mffin(2));  
  mffsec += mfftos; mffdrop;
}

static inline void mf1FD2CE7C(void) { // : F-
  mferr(mffin(2));  
  mffsec -= mfftos; mffdrop;
}

static inline void mf1ED2CCE9(void) { // : F*
  mferr(mffin(2));  
  mffsec *= mfftos; mffdrop;
}

static inline void mf21D2D1A2(void) { // : F/
  mferr(mffin(2));  
  mffsec /= mfftos; mffdrop;
}

static inline void mf0744869D(void) { // : 1/F
  mferr(mffin(1));  
  mfftos = 1./mfftos;
}

mfXT MFE9429E04=mf0744869D; // IS 1/F

void mfE9429E04(void) { // DEFER FINV
  (MFE9429E04)();
}

void mf68C501A1(void) { // : F2*
  mferr(mffin(1));  
  mfftos = ldexp(mfftos,1);
}

void mf6BC5065A(void) { // : F2/
  mferr(mffin(1));  
  mfftos = ldexp(mfftos,-1);
}
#if defined __TINYC__ || defined __DJGPP__   
 mfFlt fma(mfFlt f, mfFlt m, mfFlt a) { return f*m+a; }  
#endif  

void mf16C95AE7(void) { // : FMA
  mferr(mffin(3));  
  mfFlt c=mffpop(), b=mffpop();  
  mfftos=fma(mfftos,b,c);
}

void mf48D856F9(void) { // : F**
  mferr(mffin(2));  
  mffsec = pow(mffsec,mfftos); mffdrop;
}

void mfD01424BA(void) { // : FALOG
  mferr(mffin(1));  
  mfftos = pow(10.,mfftos);
}

void mf21928C5D(void) { // : FSQR
  mferr(mffin(1));  
  mfftos*=mfftos;
}

void mfE2B2722B(void) { // : FSQRT
  mferr(mffin(1));  
  mfftos = sqrt(mfftos);
}

void mfB719E43C(void) { // : FEXP
  mferr(mffin(1));  
  mfftos = exp(mfftos);
}

void mfEE5E7196(void) { // : FEXPM1
  mferr(mffin(1));  
#ifdef __TINYC__  
  mfftos = exp(mfftos)-1.;  
#else  
  mfftos = expm1(mfftos);  
#endif  
}

void mf2DCBBDB3(void) { // : FLN
  mferr(mffin(1));  
  mfftos = log(mfftos);
}

void mf1DD527B8(void) { // : FLNP1
  mferr(mffin(1));  
#ifdef __TINYC__  
  mfftos = log(mfftos+1.);  
#else  
  mfftos = log1p(mfftos);  
#endif  
}

void mfEBB99625(void) { // : FLOG
  mferr(mffin(1));  
  mfftos = log10(mfftos);
}

void mf197F2C4A(void) { // : ISNAN
  mferr(mffin(1);mfout(1));  
  mfCell f=0; if (isnan(mfftos)) f=(signbit(mfftos)?-1:1);   
  mffdrop, mfpush(f);
}

void mfCE764F78(void) { // : ISINF
  mferr(mffin(1);mfout(1));  
  mfCell f=0; if (isinf(mfftos)) f=(signbit(mfftos)?-1:1);   
  mffdrop, mfpush(f);
}

void mf920371A8(void) { // : FSIGN
  mferr(mffin(1);mfout(1));  
  mfpush(signbit(mffpop())?-1:0);
}

void mfDDBFA9A2(void) { // : F0=
  mferr(mffin(1);mfout(1));  
  mfpush(-(mffpop()==0.));
}

void mfDEBFAB35(void) { // : F0<
  mferr(mffin(1);mfout(1));  
  mfFlt x=mffpop();  
  if (x==0.) mfpush(0); else mfpush(signbit(x)?-1:0);
}

void mfDCBFA80F(void) { // : F0>
  mferr(mffin(1);mfout(1));  
  mfFlt x=mffpop();  
  if (x==0.) mfpush(0); else mfpush(signbit(x)?0:-1);
}

void mfB2BA4251(void) { // : F0<>
  mfDDBFA9A2(); // F0=
  mfABEE47AA(); // NOT
}

void mfB3B5C6B6(void) { // : F0>=
  mfDEBFAB35(); // F0<
  mfABEE47AA(); // NOT
}

void mfAFBA3D98(void) { // : F0<=
  mfDCBFA80F(); // F0>
  mfABEE47AA(); // NOT
}

void mf10D2B6DF(void) { // : F<
  mferr(mffin(2);mfout(1));  
  mfFlt y=mffpop(), x=mffpop();  
  if (isnan(x)||isnan(y)) mfpush(0); else mfpush(-(x<y));
}

void mfD9BB2628(void) { // : F>=
  mf10D2B6DF(); // F<
  mfABEE47AA(); // NOT
}

void mf12D2BA05(void) { // : F>
  mf5B6A7C0A(); // FSWAP
  mf10D2B6DF(); // F<
}

void mf5DB5E5C6(void) { // : F<=
  mf12D2BA05(); // F>
  mfABEE47AA(); // NOT
}

void mf0FD2B54C(void) { // : F=
  mfFlt r2=mffpop(), r1=mffpop();  
  mfpush(-(r1==r2));
}

void mf5CB5E433(void) { // : F<>
  mf0FD2B54C(); // F=
  mfABEE47AA(); // NOT
}

void mf52D31EC5(void) { // : F~
  mferr(mffin(3);mfout(1));  
  mfFlt r3=mffpop(), r2=mffpop(), r1=mffpop();   
  if (isnan(r3)) mfpush(0);  
  else if (r3>0) {   
    mfpush(fabs(r1-r2)<r3?-1:0); }  
  else if (r3<0) {   
    mfpush(fabs(r1-r2)<-r3*(fabs(r1)+fabs(r2))?-1:0); }  
  else { // r3==0  
    if (signbit(r1)!=signbit(r2)) mfpush(0);   
    else mfpush(isnan(r1)&&(isnan(r2))?-1:-(r1==r2)); }
}

void mf47E5CB93(void) { // : FMIN
  mferr(mffin(2));  
  mfFlt r2=mffpop(); if (r2<mfftos) mfftos=r2;
}

void mf9DF9DAAD(void) { // : FMAX
  mferr(mffin(2));  
  mfFlt r2=mffpop(); if (r2>mfftos) mfftos=r2;
}

void mfA01628D6(void) { // : RAD>DEG
  mferr(mffin(1));  
  mfFlt r=mfftos*57.2957795130823208768;  
  r=fmod(r,360.); if (r<0.) r+=360.;  
  mfftos=r;
}

void mf8C3D07D6(void) { // : DEG>RAD
  mferr(mffin(1));  
  mfFlt d=mfftos*0.0174532925199432957692;  
  d=fmod(d,6.28318530717958647693); if (d<0.) d+=6.28318530717958647693;   
  mfftos=d;
}

void mf65A67F21(void) { // : FSIN
  mferr(mffin(1));  
  mfftos = sin(mfftos);
}

void mfD83F1900(void) { // : FCOS
  mferr(mffin(1));  
  mfftos = cos(mfftos);
}

void mf8BA5E8C4(void) { // : FTAN
  mferr(mffin(1));  
  mfftos = tan(mfftos);
}

void mfCEB8A782(void) { // : FASIN
  mferr(mffin(1));  
  mfftos = asin(mfftos);
}

void mfB6996E2B(void) { // : FACOS
  mferr(mffin(1));  
  mfftos = acos(mfftos);
}

void mf1D906973(void) { // : FATAN
  mferr(mffin(1));  
  mfftos = atan(mfftos);
}

void mf9F4E25E8(void) { // : FSINCOS
  mferr(mffin(1);mffout(1));  
  mfFlt x=mfftos; mfftos=sin(x), mffpush(cos(x));
}

void mf52204221(void) { // : FHYPOT
  mferr(mffin(2));  
  mfFlt b=mffpop();  
  mfftos=hypot(mfftos,b);
}

void mfCB55B153(void) { // : FATAN2
  mferr(mffin(2));  
  mfFlt y=mffpop(), x=mfftos;  
  mfftos = atan2(x,y);  
#ifdef __POCC__  
  mfFlt p=0.785398163397448309616;  
  if (isinf(x)&&isinf(y)) { if (y<0.) p*=3.;  
    mfftos=(x<0.?-p:p); }  
#endif  
}

void mf6E1A924B(void) { // : FSINH
  mferr(mffin(1));  
  mfftos = sinh(mfftos);
}

void mfB354CC58(void) { // : FCOSH
  mferr(mffin(1));  
  mfftos = cosh(mfftos);
}

void mf622D1464(void) { // : FTANH
  mferr(mffin(1));  
  mfftos = tanh(mfftos);
}

void mf36B022FE(void) { // : FASINH
  mferr(mffin(1));  
#ifdef __TINYC__  
  mfftos=log(mfftos+sqrt(mfftos*mfftos+1.));  
#else  
  mfftos = asinh(mfftos);  
#endif  
}

void mfD688C5D9(void) { // : FACOSH
  mferr(mffin(1));  
#ifdef __TINYC__  
  mfftos=log(mfftos+sqrt(mfftos*mfftos-1.));  
#else  
  mfftos = acosh(mfftos);  
#endif  
}

void mfC555A7E1(void) { // : FATANH
  mferr(mffin(1));  
#ifdef __TINYC__  
  mfftos=log((1.+mfftos)/(1.-mfftos))*0.5;  
#else  
  mfftos = atanh(mfftos);  
#endif  
}

static inline void mf27FFFAB2(void) { // : PI
  mferr(mffout(1));  
  mffpush(3.14159265358979323846);
}

static inline void mf1DD48712(void) { // : EULER
  mferr(mffout(1));  
  mffpush(2.71828182845904523536);
}

static inline void mfF7E99D5B(void) { // : FSQRT2
  mferr(mffout(1));  
  mffpush(1.4142135623730950488);
}

static inline void mf84D36D7B(void) { // : F@
  mferr(mfin(1);mffout(1));  
  mffpush(*(mfFlt*)(mfpop()));
}

static inline void mf23D2D4C8(void) { // : F!
  mferr(mfin(1);mffin(1));  
  *(mfFlt*)(mfpop()) = mffpop();
}

static inline void mf8A18CFA5(void) { // : FLOAT
  mferr(mfout(1));  
  mfpush(sizeof(mfFlt));
}

static inline void mf5B0F6042(void) { // : FLOATS
  mferr(mfin(1));  
  mftos *= sizeof(mfFlt);
}

static inline void mfF30EBC8A(void) { // : FLOAT+
  mferr(mfin(1));  
  mftos += sizeof(mfFlt);
}

void mf18766AA3(void) { // : FALIGNED
  mferr(mfin(1));  
  mftos=(mftos+sizeof(mfFlt)-1)&-sizeof(mfFlt);
}

void mf3D65DC12(void) { // : FALIGN
  mfD148A1CA(); // _DP
  mfC50BF85F(); // @
  mf18766AA3(); // FALIGNED
  mfD148A1CA(); // _DP
  mf240C8DEC(); // !
}

void mf220C821D(void) { // : DF@
  mf84D36D7B(); // F@
}

void mf810D17AA(void) { // : DF!
  mf23D2D4C8(); // F!
}

void mfF14468F4(void) { // : DFLOAT+
  mfF30EBC8A(); // FLOAT+
}

void mfF944758C(void) { // : DFLOATS
  mf5B0F6042(); // FLOATS
}

void mfA0D02C85(void) { // : DFALIGNED
  mf18766AA3(); // FALIGNED
}

void mfC001DA54(void) { // : DFALIGN
  mf3D65DC12(); // FALIGN
}

void mf4AF93744(void) { // : SF@
  mferr(mfin(1);mffout(1));  
  mffpush(*(mfSFlt*)(mfpop()));
}

void mf6BF96B37(void) { // : SF!
  mferr(mfin(1);mffin(1));  
  *(mfSFlt*)(mfpop()) = (mfSFlt)mffpop();
}

void mfE0232691(void) { // : SFLOAT+
  mferr(mfin(1));  
  mftos += sizeof(mfSFlt);
}

void mfC82300C9(void) { // : SFLOATS
  mferr(mfin(1));  
  mftos *= sizeof(mfSFlt);
}

void mf78FE0C50(void) { // : SFALIGNED
  mferr(mfin(1));  
  mftos=(mftos+sizeof(mfSFlt)-1)&-sizeof(mfSFlt);
}

void mf3C8CEB39(void) { // : SFALIGN
  mfD148A1CA(); // _DP
  mfC50BF85F(); // @
  mf78FE0C50(); // SFALIGNED
  mfD148A1CA(); // _DP
  mf240C8DEC(); // !
}

mfCell MF2F4C5F9D=6; // 6

void mf2F4C5F9D(void) { // VARIABLE __PREC
  mfpush(&MF2F4C5F9D);
}

mfCell MF0DC9BAA5=6; // 6

void mf0DC9BAA5(void) { // VARIABLE __SGNF
  mfpush(&MF0DC9BAA5);
}

void mf9FC732F7(void) { // : PRECISION
  mfpush(&MF2F4C5F9D); // __PREC
  mfC50BF85F(); // @
}

void mf469D9BEE(void) { // : SET-PRECISION
  mfpush(1); // $1
  mf1C599279(); // MAX
  mfpush(20); // $14
  mf0E45F4B7(); // MIN
  mfpush(&MF2F4C5F9D); // __PREC
  mf240C8DEC(); // !
}

mfChar MF5FD98290[20]={0}; // 20

void mf5FD98290(void) { // BUFFER __FPAD
  mfpush(MF5FD98290);
}

void mfC5CB6802(void) { // : _REPRESENT
  mferr(mfin(2);mfout(2);mffin(1));  
  mfFlt fp=mffpop(),m,ex,n; mfChar *a=(mfChar*)mfsec,c,u=mftos; int s=0,f=-1;  
  memset(a,'0',u), mfsec=1, mftos=(signbit(fp)?-1:0), fp=copysign(fp,+1.);  
  if (!isnormal(fp)) { if (fp==0.) goto lr;  
   if (isnan(fp)) s=min(3,u),memcpy(a,"nan",s); else  
   if (isinf(fp)) s=min(3,u),memcpy(a,"inf",s);  
   f=0; goto lr; }  
  m=log10(fp), ex=1.+floor(m), m=pow(10.,m-ex), n=pow(10.,u);  
  m=round(m*n);   
  if (m==n) { ex+=1., m/=10.; } if (m==0.) { ex=0.; } mfsec=(mfCell)ex;  
  for (s=u-1;s>=0;s--) { c=(mfChar)fmod(m,10.), a[s]=c+'0', m/=10.; }    
  for (s=u;s>0;s--) { if (a[s-1]!='0') break; }  
 lr: mfpush(f), mfpush(s);  
  mfpush(&MF0DC9BAA5); // __SGNF
  mf240C8DEC(); // !
}

void mfDDB6AC9B(void) { // : REPRESENT
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfpush(10); // $A
  mf93F7201F(); // <>
mfIF
  mfpush(-40); // $FFFFFFD8
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfC5CB6802(); // _REPRESENT
}

void mf6486A472(void) { // : __(FCHK)
  mfpush(&MF5FD98290); // __FPAD
  mf9FC732F7(); // PRECISION
  mfC5CB6802(); // _REPRESENT
  mfA2DF200E(); // SWAP
mfIF
  mfpush(45); // $2D
  mfD9BC5E8A(); // EMIT
mfTHEN
  mf57E80646(); // DUP
mfNOTIF
  mf63DECBC8(); // NIP
  mfpush(&MF5FD98290); // __FPAD
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf142FE78D(); // TYPE
mfTHEN
}

void mf3BF0B184(void) { // : __(MANT)
  mf89F60699(); // 2>R
  mf57E80646(); // DUP
  mf7D04FDAF(); // R@
  mf142FE78D(); // TYPE
  mfpush(46); // $2E
  mfD9BC5E8A(); // EMIT
  mf7D04FDAF(); // R@
  mf2E0C9DAA(); // +
  mf34FF0561(); // 2R>
  mf280C9438(); // -
  mf142FE78D(); // TYPE
}

void mfCB968127(void) { // : __(EXP)
  mfpush(69); // $45
  mfD9BC5E8A(); // EMIT
  mfpush(0); // $0
  mf67D44899(); // .R
}

void mf2419805E(void) { // : __FS.
  mfpush(&MF5FD98290); // __FPAD
  mfA2DF200E(); // SWAP
  mfpush(1); // $1
  mf3BF0B184(); // __(MANT)
  mf20EB3223(); // 1-
  mfCB968127(); // __(EXP)
}

void mf6BB048D0(void) { // : FS.
  mf6486A472(); // __(FCHK)
mfIF
  mf9FC732F7(); // PRECISION
  mf2419805E(); // __FS.
mfTHEN
  mf1808F0E5(); // SPACE
}

void mf61138913(void) { // : GS.
  mf6486A472(); // __(FCHK)
mfIF
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf2419805E(); // __FS.
mfTHEN
  mf1808F0E5(); // SPACE
}

void mf243C12A0(void) { // : __FE.
  mf67FCEB09(); // >R
  mf20EB3223(); // 1-
  mf16478CF0(); // S>D
  mfpush(3); // $3
  mf66F1FDC7(); // FM/MOD
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mfpush(&MF5FD98290); // __FPAD
  mf130456D1(); // R>
  mf87E8362E(); // ROT
  mf3BF0B184(); // __(MANT)
  mfpush(3); // $3
  mf2F0C9F3D(); // *
  mfCB968127(); // __(EXP)
}

void mfEBDC9EEE(void) { // : FE.
  mf6486A472(); // __(FCHK)
mfIF
  mf9FC732F7(); // PRECISION
  mf243C12A0(); // __FE.
mfTHEN
  mf1808F0E5(); // SPACE
}

void mf00E76555(void) { // : GE.
  mf6486A472(); // __(FCHK)
mfIF
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf243C12A0(); // __FE.
mfTHEN
  mf1808F0E5(); // SPACE
}

void mf33432BE2(void) { // : _F.
  mf26F17CF2(); // FDUP
  mf6486A472(); // __(FCHK)
mfNOTIF
  mfF41B2E30(); // FDROP
mfEXIT
mfTHEN
  mf57E80646(); // DUP
  mf5EE442DB(); // NEGATE
  mf9FC732F7(); // PRECISION
  mf10FC6214(); // >=
  mf2FE7860F(); // OVER
  mf9FC732F7(); // PRECISION
  mf3B0CB221(); // >
  mf7CE4AA04(); // OR
mfIF
  mfF41B2E30(); // FDROP
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf2419805E(); // __FS.
mfEXIT
mfTHEN
  mf57E80646(); // DUP
  mfD8AD113C(); // 0<=
mfIF
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf9FC732F7(); // PRECISION
  mf3B0CB221(); // >
mfIF
  mf9FC732F7(); // PRECISION
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mf2E0C9DAA(); // +
  mf469D9BEE(); // SET-PRECISION
  mf155A76B7(); // FABS
  mfpush(&MF5FD98290); // __FPAD
  mf9FC732F7(); // PRECISION
  mfC5CB6802(); // _REPRESENT
  mfEF6476DC(); // 2DROP
  mf130456D1(); // R>
  mf469D9BEE(); // SET-PRECISION
mfELSE
  mfF41B2E30(); // FDROP
mfTHEN
  mfpush(48); // $30
  mfD9BC5E8A(); // EMIT
  mfpush(46); // $2E
  mfD9BC5E8A(); // EMIT
  mf5EE442DB(); // NEGATE
mfFOR
  mfpush(48); // $30
  mfD9BC5E8A(); // EMIT
mfNEXT
  mfpush(&MF5FD98290); // __FPAD
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf142FE78D(); // TYPE
mfELSE
  mfF41B2E30(); // FDROP
  mfpush(&MF5FD98290); // __FPAD
  mfA2DF200E(); // SWAP
  mf57E80646(); // DUP
  mfpush(&MF0DC9BAA5); // __SGNF
  mfC50BF85F(); // @
  mf1C599279(); // MAX
  mfA2DF200E(); // SWAP
  mf3BF0B184(); // __(MANT)
mfTHEN
}

void mf22D2D335(void) { // : F.
  mf33432BE2(); // _F.
  mf1808F0E5(); // SPACE
}

void mf367FD819(void) { // : >FLOAT
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfpush(10); // $A
  mf93F7201F(); // <>
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
  mferr(mfin(2);mffout(1));   
  mfFlt fp=0., n=NAN, in=INFINITY; int u=mfpop(), i=u, s=0, es=1;  
  char *a=(char*)mftos, b[68]={0}, *m=b, *e, c;  
  mftos=0; if ((u<0)||(u>=68)) return; else memcpy(b,a,u);  
  while(i>0) { c=toupper(b[--i]); if (c=='D') c='E'; b[i]=c;  
    if (c!=' ') { s=1; } if (c==' ') es=0; }     
  if (s==0) { goto ok; } if (es==0) return;  
  c=*m; if ((c=='-')||(c=='+')) m++,u--; if (!*m) return;  
  if (!memcmp(m,"NAN",3)) {  
    fp = (c=='-' ? copysign(n,-1.L) : copysign(n,+1.L)); goto ok; }  
  if (!memcmp(m,"INF",3)) {  
    fp = (c=='-' ? copysign(in,-1.L) : copysign(in,+1.L)); goto ok; }  
  i=(int)strcspn(m,"E-+"), e=m+i, c=*e, s=*(e+1), es=*(e+2);  
  if (c=='E') { if (!s) *++e='0',*++e=0; else  
    if (((s=='-')||(s=='+'))&&!es) e++,*++e='0',*++e=0; } else   
  if (c=='-'||c=='+') memmove(e+1,e,u-1), *e='E';  
  fp=strtod(b,&m); if (*m) return;  
 ok: mftos=-1, mffpush(fp);
}

void mf48726737(void) { // : _[FLIT]
  mffpush(*(mfFlt*)mfip);   
  mfip+=MFFLTSIZE;
}

void mf20D2D00F(void) { // : F,
  mf5F2B6B8B(); // HERE
  mf23D2D4C8(); // F!
  mfpush(1); // $1
  mf5B0F6042(); // FLOATS
  mfD148A1CA(); // _DP
  mf08DC01D1(); // +!
}

void mf5D7A6040(void) { // : FLITERAL
  mfat(mfdp)=(mfCell)&mfdict[627].cfa;
  mfdp+=MFSIZE; // [,] _[FLIT]
  mf20D2D00F(); // F,
} // IMMEDIATE COMPILE-ONLY

void mf91346E41(void) { // : FCONSTANT
  mfC19230DD(); // CREATE
  mf20D2D00F(); // F,
  mfpush(&mfdict[597].cfa); // ['] F@
  mf4520460B(); // _<DOES
}

void mf66D780C1(void) { // : FVARIABLE
  mffpush(0); // 0.000000
  mfC19230DD(); // CREATE
  mf20D2D00F(); // F,
}

void mfA157AEE6(void) { // : FVALUE
  mfpush(&mfdict[597].cfa); // ['] F@
  mfpush(&mfdict[598].cfa); // ['] F!
  mfpush(&mfdict[541].cfa); // ['] F+
  mf24D3F916(); // _(VALUE)
  mf20D2D00F(); // F,
}

void mf05CF154B(void) { // : FFIELD:
  mf18766AA3(); // FALIGNED
  mfpush(1); // $1
  mf5B0F6042(); // FLOATS
  mf4F90F13E(); // +FIELD
}

void mf73FF7A3E(void) { // : SFFIELD:
  mf78FE0C50(); // SFALIGNED
  mfpush(1); // $1
  mfC82300C9(); // SFLOATS
  mf4F90F13E(); // +FIELD
}

void mfFF86BB11(void) { // : DFFIELD:
  mfA0D02C85(); // DFALIGNED
  mfpush(1); // $1
  mfF944758C(); // DFLOATS
  mf4F90F13E(); // +FIELD
}

void mf5A699584(void) { // : __FEXCMSG
mfCASE
  mfpush(-40); // $FFFFFFD8
mfOF
  mfprint("invalid BASE for floating point conversion"); // S"
mfEXIT
mfENDOF
  mfpush(-44); // $FFFFFFD4
mfOF
  mfprint("floating-point stack overflow"); // S"
mfEXIT
mfENDOF
  mfpush(-45); // $FFFFFFD3
mfOF
  mfprint("floating-point stack underflow"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf45EF8172(); // __FLEXCMSG
}

void mf39A3E095(void) { // : __FPROMPT
  mf017B185E(); // FDEPTH
mfIF
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf48AF9A2C(); // DECIMAL
  mfprint("f: "); // S"
  mf017B185E(); // FDEPTH
mfFOR
  mf017B185E(); // FDEPTH
  mf20EB3223(); // 1-
mfN
  mf280C9438(); // -
  mf030EAC5C(); // FPICK
  mf22D2D335(); // F.
mfNEXT
  mfprint("| "); // S"
  mf130456D1(); // R>
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
mfTHEN
  mf04CAF222(); // ___PROMPT
}

void mf51B01875(void) { // : __FENVIRONMENT?
  mfE0839FF6(); // 2DUP
  mfspush("FLOATING-STACK"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(mffstsize);
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("MAX-FLOAT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mffpush(DBL_MAX);
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("FLOATING"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("FLOATING-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf2FABFE3A(); // __DENVIRONMENT
}

void mfD0F57DA1(void) { // : _FLOAT?
  mfpush(&MFF939F00F); // _PARSED
  mf3DF21B8F(); // 2@
  mf367FD819(); // >FLOAT
}

void mf6502BC33(void) { // : __FBOOT
  mf249E5635(); // __DBOOT
  mfpush(&mfdict[626].cfa); // ['] >FLOAT
  mfpush(&mfdict[32].cfa); // ['] NOOP
  mfpush(&mfdict[629].cfa); // ['] FLITERAL
  mfspush("REC-FLOAT"); // S"
  mf9DA7D846(); // NAMED
  mf5E8B98AB(); // RECOGNIZER
}
 
#define MFCOMPLEX  

void mfEAD10741(void) { // : Z>R
  mf5B6A7C0A(); // FSWAP
  mfF8BB56F5(); // F>R
  mfF8BB56F5(); // F>R
}

void mfDFFFF6F7(void) { // : ZR@
  mf5DB2715D(); // FR>
  mf3FB24223(); // FR@
  mf5B6A7C0A(); // FSWAP
  mf26F17CF2(); // FDUP
  mfF8BB56F5(); // F>R
}

void mf46009789(void) { // : ZR>
  mf5DB2715D(); // FR>
  mf5DB2715D(); // FR>
  mf5B6A7C0A(); // FSWAP
}

void mf99159864(void) { // : ZDROP
  mfF41B2E30(); // FDROP
  mfF41B2E30(); // FDROP
}

void mf8FAE2136(void) { // : ZSWAP
  mf8ABEA64A(); // FROT
  mfF8BB56F5(); // F>R
  mf8ABEA64A(); // FROT
  mf5DB2715D(); // FR>
}

void mf10DC9380(void) { // : ZNIP
  mf8FAE2136(); // ZSWAP
  mf99159864(); // ZDROP
}

void mf40D6FBF6(void) { // : ZROT
  mfEAD10741(); // Z>R
  mf8FAE2136(); // ZSWAP
  mf46009789(); // ZR>
  mf8FAE2136(); // ZSWAP
}

void mfB28A2ABE(void) { // : ZDUP
  mfE3615E4B(); // FOVER
  mfE3615E4B(); // FOVER
}

void mfD263C767(void) { // : ZOVER
  mfEAD10741(); // Z>R
  mfB28A2ABE(); // ZDUP
  mf46009789(); // ZR>
  mf8FAE2136(); // ZSWAP
}

void mf707715E0(void) { // : ZTUCK
  mfB28A2ABE(); // ZDUP
  mfEAD10741(); // Z>R
  mf8FAE2136(); // ZSWAP
  mf46009789(); // ZR>
}

void mf8FB74C1F(void) { // : COMPLEXES
  mfA7F2C26D(); // 2*
  mf5B0F6042(); // FLOATS
}

void mf5D3C2BDF(void) { // : ZFIELD:
  mf18766AA3(); // FALIGNED
  mfpush(1); // $1
  mf8FB74C1F(); // COMPLEXES
  mf4F90F13E(); // +FIELD
}

void mf8C189D04(void) { // : Z!
  mferr(mfin(1);mffin(2));  
  mfFlt *a=(mfFlt*)mfpop();  
  *a=mffpop(), *++a=mffpop();
}

void mf2D180777(void) { // : Z@
  mferr(mfin(1);mffout(2));  
  mfFlt *a=(mfFlt*)mfpop();  
  mffpush(*++a), mffpush(*--a);
}

void mf47E99E8E(void) { // : Z0=
  mfDDBFA9A2(); // F0=
  mfDDBFA9A2(); // F0=
  mf91666DC6(); // AND
}

void mf9018A350(void) { // : Z=
  mfF8BB56F5(); // F>R
  mf8ABEA64A(); // FROT
  mf0FD2B54C(); // F=
  mf5DB2715D(); // FR>
  mf0FD2B54C(); // F=
  mf91666DC6(); // AND
}

void mf53184349(void) { // : Z~
  mf430C7B9C(); // FTUCK
  mfF8BB56F5(); // F>R
  mfF8BB56F5(); // F>R
  mf8ABEA64A(); // FROT
  mf5DB2715D(); // FR>
  mf5DB2715D(); // FR>
  mf52D31EC5(); // F~
  mf52D31EC5(); // F~
  mf91666DC6(); // AND
}

void mf1BBBF3F5(void) { // : ZREAL
  mfF41B2E30(); // FDROP
}

void mfE0A42303(void) { // : ZIMAG
  mf9580290C(); // FNIP
}

void mf0C004CEB(void) { // : ZCONJ
  mf69C5AA87(); // FNEGATE
}

void mfE6D6ED93(void) { // : ZABS
  mf52204221(); // FHYPOT
}

void mfDAFF7D1F(void) { // : ZARG
  mf5B6A7C0A(); // FSWAP
  mfCB55B153(); // FATAN2
}

void mfC89293D9(void) { // : ZSCALE
  mferr(mffin(3));  
  mfFlt p=mffpop();  
  mffsec*=p, mfftos*=p;
}

void mf1EA1F243(void) { // : Z>POLAR
  mfB28A2ABE(); // ZDUP
  mfDAFF7D1F(); // ZARG
  mfF8BB56F5(); // F>R
  mfE6D6ED93(); // ZABS
  mf5DB2715D(); // FR>
}

void mf1316E611(void) { // : Z>CARTESIAN
  mf26F17CF2(); // FDUP
  mfD83F1900(); // FCOS
  mf5B6A7C0A(); // FSWAP
  mf65A67F21(); // FSIN
  mf8ABEA64A(); // FROT
  mfC89293D9(); // ZSCALE
}

void mf3AEE0745(void) { // : Z2*
  mffpush(2); // 2.000000
  mfC89293D9(); // ZSCALE
}

void mf35EDFF66(void) { // : Z2/
  mffpush(0.5); // 0.500000
  mfC89293D9(); // ZSCALE
}

void mfB859ACF3(void) { // : ZNEGATE
  mffpush(-1); // -1.000000
  mfC89293D9(); // ZSCALE
}

void mf86189392(void) { // : Z+
  mferr(mffin(4));  
  mfFlt i2=mffpop(), r2=mffpop();  
  mffsec+=r2, mfftos+=i2;
}

void mf80188A20(void) { // : Z-
  mfB859ACF3(); // ZNEGATE
  mf86189392(); // Z+
}

void mf87189525(void) { // : Z*
  mferr(mffin(4));  
  mfFlt i2=mffpop(), r2=mffpop(), i1=mfftos, r1=mffsec, p, q;  
  p=r1*r2, q=i1*i2;  
  mffsec=p-q, mfftos=(r1+i1)*(r2+i2)-p-q;
}

void mf0B448CE9(void) { // : 1/Z
  mferr(mffin(2));  
  mfFlt x=mffsec, y=mfftos, h=1.L/(x*x+y*y);  
  mffsec*=h, mfftos*=-h;
}

mfXT MFC2848A50=mf0B448CE9; // IS 1/Z

void mfC2848A50(void) { // DEFER ZINV
  (MFC2848A50)();
}

void mf82188D46(void) { // : Z/
  mf0B448CE9(); // 1/Z
  mf87189525(); // Z*
}

void mfD122A119(void) { // : ZSQR
  mferr(mffin(2));  
  mfFlt x=mffsec, y=mfftos;  
  mffsec=x*x-y*y, mfftos=2.*x*y;
}

void mf8683EC37(void) { // : ZSQRT
  mferr(mffin(2));  
  mfFlt x=mffsec, y=mfftos, m=hypot(x,y);  
  mffsec=sqrt((m+x)*0.5L), x=sqrt((m-x)*0.5L), mfftos=copysign(x,y);
}

void mf31391A30(void) { // : ZEXP
  mf26F17CF2(); // FDUP
  mfD83F1900(); // FCOS
  mf5B6A7C0A(); // FSWAP
  mf65A67F21(); // FSIN
  mf8ABEA64A(); // FROT
  mfB719E43C(); // FEXP
  mfC89293D9(); // ZSCALE
}

void mfF5B677E7(void) { // : ZLN
  mf1EA1F243(); // Z>POLAR
  mf5B6A7C0A(); // FSWAP
  mf2DCBBDB3(); // FLN
  mf5B6A7C0A(); // FSWAP
}

void mfBAB2A69D(void) { // : Z**
  mf8FAE2136(); // ZSWAP
  mfB28A2ABE(); // ZDUP
  mf47E99E8E(); // Z0=
mfIF
  mf10DC9380(); // ZNIP
mfELSE
  mfF5B677E7(); // ZLN
  mf87189525(); // Z*
  mf31391A30(); // ZEXP
mfTHEN
}

void mfD9D0F624(void) { // : ZCOS
  mferr(mffin(2));  
  mfFlt x=mffsec, y=mfftos;  
  mffsec=cos(x)*cosh(y), mfftos=-sin(x)*sinh(y);
}

void mf8D3750C5(void) { // : ZSIN
  mferr(mffin(2));  
  mfFlt x=mffsec, y=mfftos;  
  mffsec=sin(x)*cosh(y), mfftos=cos(x)*sinh(y);
}

void mfA9869DE0(void) { // : ZTAN
  mfB28A2ABE(); // ZDUP
  mf8D3750C5(); // ZSIN
  mf8FAE2136(); // ZSWAP
  mfD9D0F624(); // ZCOS
  mf82188D46(); // Z/
}

void mfA97580B7(void) { // : ZACOS
  mfB28A2ABE(); // ZDUP
  mfB28A2ABE(); // ZDUP
  mf87189525(); // Z*
  mf5B6A7C0A(); // FSWAP
  mffpush(1); // 1.000000
  mf1FD2CE7C(); // F-
  mf5B6A7C0A(); // FSWAP
  mf8683EC37(); // ZSQRT
  mf86189392(); // Z+
  mfF5B677E7(); // ZLN
  mf5B6A7C0A(); // FSWAP
  mf69C5AA87(); // FNEGATE
}

void mf7C22396E(void) { // : ZASIN
  mfA97580B7(); // ZACOS
  mfB859ACF3(); // ZNEGATE
  mf5B6A7C0A(); // FSWAP
  mf27FFFAB2(); // PI
  mf6BC5065A(); // F2/
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
}

void mf63C543B7(void) { // : ZATAN
  mfB28A2ABE(); // ZDUP
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf8FAE2136(); // ZSWAP
  mfB859ACF3(); // ZNEGATE
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf82188D46(); // Z/
  mfF5B677E7(); // ZLN
  mf35EDFF66(); // Z2/
  mf69C5AA87(); // FNEGATE
  mf5B6A7C0A(); // FSWAP
}

void mf4FF3EC04(void) { // : ZCOSH
  mf69C5AA87(); // FNEGATE
  mf5B6A7C0A(); // FSWAP
  mfD9D0F624(); // ZCOS
}

void mfDB13CDF7(void) { // : ZSINH
  mf69C5AA87(); // FNEGATE
  mf5B6A7C0A(); // FSWAP
  mf8D3750C5(); // ZSIN
  mf5B6A7C0A(); // FSWAP
  mf69C5AA87(); // FNEGATE
}

void mf86EA2F78(void) { // : ZTANH
  mf69C5AA87(); // FNEGATE
  mf5B6A7C0A(); // FSWAP
  mfA9869DE0(); // ZTAN
  mf5B6A7C0A(); // FSWAP
  mf69C5AA87(); // FNEGATE
}

void mfC2FA116D(void) { // : ZACOSH
  mfB28A2ABE(); // ZDUP
  mfB28A2ABE(); // ZDUP
  mf5B6A7C0A(); // FSWAP
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
  mf8683EC37(); // ZSQRT
  mf8FAE2136(); // ZSWAP
  mf5B6A7C0A(); // FSWAP
  mffpush(-1); // -1.000000
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
  mf8683EC37(); // ZSQRT
  mf87189525(); // Z*
  mf86189392(); // Z+
  mfF5B677E7(); // ZLN
}

void mf8FDFF6D2(void) { // : ZASINH
  mfB28A2ABE(); // ZDUP
  mfB28A2ABE(); // ZDUP
  mf87189525(); // Z*
  mf5B6A7C0A(); // FSWAP
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
  mf8683EC37(); // ZSQRT
  mf86189392(); // Z+
  mfF5B677E7(); // ZLN
}

void mf0E8A0A6D(void) { // : ZATANH
  mfB28A2ABE(); // ZDUP
  mf5B6A7C0A(); // FSWAP
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
  mfF5B677E7(); // ZLN
  mf8FAE2136(); // ZSWAP
  mfB859ACF3(); // ZNEGATE
  mf5B6A7C0A(); // FSWAP
  mffpush(1); // 1.000000
  mf1DD2CB56(); // F+
  mf5B6A7C0A(); // FSWAP
  mfF5B677E7(); // ZLN
  mf80188A20(); // Z-
  mf35EDFF66(); // Z2/
}

void mf83188ED9(void) { // : Z.
  mf5B6A7C0A(); // FSWAP
  mf26F17CF2(); // FDUP
  mffpush(0); // 0.000000
  mffpush(0); // 0.000000
  mf52D31EC5(); // F~
mfIF
  mfF41B2E30(); // FDROP
mfELSE
  mf33432BE2(); // _F.
mfTHEN
  mfpush(signbit(mfftos));
mfIF
  mfpush(45); // $2D
mfELSE
  mfpush(43); // $2B
mfTHEN
  mfD9BC5E8A(); // EMIT
  mfpush(106); // $6A
  mfD9BC5E8A(); // EMIT
  mf155A76B7(); // FABS
  mfpush(mfftos==1.L);
mfIF
  mfF41B2E30(); // FDROP
mfELSE
  mf33432BE2(); // _F.
mfTHEN
  mf1808F0E5(); // SPACE
}

void mfF0FA4B5B(void) { // : >COMPLEX
  mferr(mfin(2);mffout(2));  
  mfChar u=(mfChar)mfpop(), *a=(mfChar*)mftos, *pj, s;   
  pj=memchr(a,'j',u), mftos=0;  
  if (!pj||(pj==a)) return;  
  s=*(pj-1); if (!((s=='+')||(s=='-'))) return;  
  mftos=(mfCell)a, mfpush(pj-a-1);  
  mf367FD819(); // >FLOAT
mfNOTIF
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
  if (++pj-a==u) mffpush(1.L); else { mfpush(pj), mfpush((a+u)-pj);  
  mf367FD819(); // >FLOAT
mfNOTIF
  mfF41B2E30(); // FDROP
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
  } mfpush(-1); if (s=='-') mfftos=-mfftos;
}

void mf2490216C(void) { // : ZLITERAL
  mf5B6A7C0A(); // FSWAP
  mf5D7A6040(); // FLITERAL
  mf5D7A6040(); // FLITERAL
} // IMMEDIATE COMPILE-ONLY

void mfA1FE94DD(void) { // : ZCONSTANT
  mfC19230DD(); // CREATE
  mf20D2D00F(); // F,
  mf20D2D00F(); // F,
  mfpush(&mfdict[650].cfa); // ['] Z@
  mf4520460B(); // _<DOES
}

void mfEC17516D(void) { // : ZVARIABLE
  mfC19230DD(); // CREATE
  mffpush(0); // 0.000000
  mf26F17CF2(); // FDUP
  mf20D2D00F(); // F,
  mf26F17CF2(); // FDUP
  mf20D2D00F(); // F,
  mf26F17CF2(); // FDUP
  mf20D2D00F(); // F,
  mf20D2D00F(); // F,
}

void mfE291D512(void) { // : ZVALUE
  mfpush(&mfdict[650].cfa); // ['] Z@
  mfpush(&mfdict[649].cfa); // ['] Z!
  mfpush(&mfdict[665].cfa); // ['] Z+
  mf24D3F916(); // _(VALUE)
  mf20D2D00F(); // F,
  mf20D2D00F(); // F,
}

void mf1BCADC89(void) { // : __CXENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("COMPLEX"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf51B01875(); // __FENVIRONMENT?
}

void mf1E1FE1D0(void) { // : __CXBOOT
  mf6502BC33(); // __FBOOT
  mfpush(&mfdict[689].cfa); // ['] >COMPLEX
  mfpush(&mfdict[32].cfa); // ['] NOOP
  mfpush(&mfdict[690].cfa); // ['] ZLITERAL
  mfspush("REC-COMPLEX"); // S"
  mf9DA7D846(); // NAMED
  mf5E8B98AB(); // RECOGNIZER
}

void mf54B9890C(void) { // : _[L:]
  mfCell ld=mfat(mfip++); mflp-=ld;  
  memset(mflp,0,MFSIZE*ld), *mflp=ld;
}

void mf2D494277(void) { // : _[;L]
  mflp+=*mflp;
}

void mfB50D5E0C(void) { // : _[L]
  mferr(mfout(1));  
  mfpush(mflp+mfat(mfip++));
}

void mfBF5EECFC(void) { // : _[LOC@]
  mferr(mfout(2));  
  mfat(mfdp)=(mfCell)&mfdict[696].cfa;
  mfdp+=MFSIZE; // [,] _[L]
  mfpush(mfw);
  mf57E80646(); // DUP
  mf3C6699A2(); // _>VD
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf38669356(); // _>V@
  mf290C95CB(); // ,
}

void mf8670E50B(void) { // : __(LOC!)
  mfat(mfdp)=(mfCell)&mfdict[696].cfa;
  mfdp+=MFSIZE; // [,] _[L]
  mf57E80646(); // DUP
  mf3C6699A2(); // _>VD
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf99672C09(); // _>V!
  mf290C95CB(); // ,
}

void mf8A0947EC(void) { // : __(LOC+!)
  mfat(mfdp)=(mfCell)&mfdict[696].cfa;
  mfdp+=MFSIZE; // [,] _[L]
  mf57E80646(); // DUP
  mf3C6699A2(); // _>VD
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mf57E80646(); // DUP
  mf38669356(); // _>V@
  mf290C95CB(); // ,
  mf57E80646(); // DUP
  mf9F67357B(); // _>V+
  mf290C95CB(); // ,
  mf8670E50B(); // __(LOC!)
}

mfCell MF904A265A=0; // 0

void mf904A265A(void) { // VARIABLE __TLOCS
  mfpush(&MF904A265A);
}

mfCell MF7A4A03B8=0; // 0

void mf7A4A03B8(void) { // VARIABLE __TLOCE
  mfpush(&MF7A4A03B8);
}

mfCell MF3B594085=0; // 0

void mf3B594085(void) { // VARIABLE __ULOCS
  mfpush(&MF3B594085);
}

mfCell MF09FAEC81=0; // 0

void mf09FAEC81(void) { // VARIABLE __ILOCS
  mfpush(&MF09FAEC81);
}

mfCell MF49D94043=0; // 0

void mf49D94043(void) { // VARIABLE __OLOCS
  mfpush(&MF49D94043);
}

mfCell MF465951D6=0; // 0

void mf465951D6(void) { // VARIABLE __ULOCF
  mfpush(&MF465951D6);
}

mfCell MF8FDB85B9=0; // 0

void mf8FDB85B9(void) { // VARIABLE __LSYNF
  mfpush(&MF8FDB85B9);
}

mfCell MF5CD08362=0; // 0

void mf5CD08362(void) { // VARIABLE __LDEPTH
  mfpush(&MF5CD08362);
}

mfCell MF1D6691F2=0; // 0

void mf1D6691F2(void) { // VARIABLE __LTYP
  mfpush(&MF1D6691F2);
}

void mfE32D4E7B(void) { // : __PREP-LOCALS
  mfpush(&MF8FDB85B9); // __LSYNF
  mfC50BF85F(); // @
  mf15ED5F69(); // 0<
mfIF
  mfpush(-321); // $FFFFFEBF
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfC220C34B(); // __EMPTYWL
  mfpush(&MF7571BB77); // _TEMPWL
  mf240C8DEC(); // !
  mf5F2B6B8B(); // HERE
  mf57E80646(); // DUP
  mfpush(&MF904A265A); // __TLOCS
  mf240C8DEC(); // !
  mfpush(&MF7A4A03B8); // __TLOCE
  mf240C8DEC(); // !
  mfpush(&MF49D94043); // __OLOCS
  mf2E1505EA(); // OFF
  mfpush(&MF09FAEC81); // __ILOCS
  mf2E1505EA(); // OFF
  mfpush(&MF3B594085); // __ULOCS
  mf2E1505EA(); // OFF
  mfpush(&MF465951D6); // __ULOCF
  mf2E1505EA(); // OFF
  mfpush(&MF1D6691F2); // __LTYP
  mf2E1505EA(); // OFF
  mfpush(&MF8FDB85B9); // __LSYNF
  mf2E1505EA(); // OFF
  mfpush(1); // $1
  mfpush(&MF5CD08362); // __LDEPTH
  mf240C8DEC(); // !
}

void mfA092C957(void) { // : __(LOCAL)
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf89F60699(); // 2>R
  mf67FCEB09(); // >R
  mf404D123E(); // 2SWAP
  mf9DA7D846(); // NAMED
  mfpush(&mfdict[697].cfa); // ['] _[LOC@]
  mf20B9677F(); // _HEADER
  mf130456D1(); // R>
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mf290C95CB(); // ,
  mfpush(&MF5CD08362); // __LDEPTH
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf240C8DEC(); // !
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mfpush(&MF7571BB77); // _TEMPWL
  mf240C8DEC(); // !
  mfD1E3DADA(); // IMMEDIATE
  mf72FB7883(); // COMPILE-ONLY
  mf34FF0561(); // 2R>
  mfEA08BD65(); // _LATEST
  mf240C8DEC(); // !
  mfpush(&MF5CD08362); // __LDEPTH
  mf08DC01D1(); // +!
  mfpush(1); // $1
  mfpush(&MF465951D6); // __ULOCF
  mfC50BF85F(); // @
mfIF
  mfpush(&MF3B594085); // __ULOCS
mfELSE
  mfpush(&MF09FAEC81); // __ILOCS
mfTHEN
  mf08DC01D1(); // +!
}

void mf3D63AA51(void) { // : __NEW-LOCAL
  mfpush(&MF1D6691F2); // __LTYP
  mfC50BF85F(); // @
mfCASE
  mfpush(0); // $0
mfOF
  mfpush(&mfdict[101].cfa); // ['] @
  mfpush(&mfdict[102].cfa); // ['] !
  mfpush(&mfdict[62].cfa); // ['] +
  mfpush(1); // $1
  mfA092C957(); // __(LOCAL)
mfENDOF
  mfpush(1); // $1
mfOF
  mfpush(&mfdict[106].cfa); // ['] 2@
  mfpush(&mfdict[107].cfa); // ['] 2!
  mfpush(&mfdict[479].cfa); // ['] D+
  mfpush(2); // $2
  mfA092C957(); // __(LOCAL)
mfENDOF
  mfpush(2); // $2
mfOF
  mfpush(&mfdict[597].cfa); // ['] F@
  mfpush(&mfdict[598].cfa); // ['] F!
  mfpush(&mfdict[541].cfa); // ['] F+
  mfpush(MFFLTSIZE);
  mfA092C957(); // __(LOCAL)
mfENDOF
  mfpush(3); // $3
mfOF
  mfpush(&mfdict[650].cfa); // ['] Z@
  mfpush(&mfdict[649].cfa); // ['] Z!
  mfpush(&mfdict[665].cfa); // ['] Z+
  mfpush(2*MFFLTSIZE);
  mfA092C957(); // __(LOCAL)
mfENDOF
mfENDCASE
}

void mfD5625221(void) { // : __LAST-LOCAL
  mfpush(&MF5CD08362); // __LDEPTH
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf380CAD68(); // =
mfIF
mfEXIT
mfTHEN
  mf5F2B6B8B(); // HERE
  mfpush(&MF7A4A03B8); // __TLOCE
  mf240C8DEC(); // !
  mfat(mfdp)=(mfCell)&mfdict[694].cfa;
  mfdp+=MFSIZE; // [,] _[L:]
  mfpush(&MF5CD08362); // __LDEPTH
  mfC50BF85F(); // @
  mf290C95CB(); // ,
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
  mfpush(&MF8FDB85B9); // __LSYNF
  mfC50BF85F(); // @
mfIF
  mfpush(&MF3B594085); // __ULOCS
  mfC50BF85F(); // @
mfFOR
  mfC50BF85F(); // @
mfNEXT
  mfpush(&MF09FAEC81); // __ILOCS
  mfC50BF85F(); // @
mfFOR
  mf57E80646(); // DUP
  mf74404CD4(); // _>CFA
  mf8670E50B(); // __(LOC!)
  mfC50BF85F(); // @
mfNEXT
  mf52C16B0C(); // DROP
mfELSE
  mfpush(&MF09FAEC81); // __ILOCS
  mfC50BF85F(); // @
mfFOR
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mfC50BF85F(); // @
mfNEXT
  mf52C16B0C(); // DROP
  mfpush(&MF09FAEC81); // __ILOCS
  mfC50BF85F(); // @
mfFOR
  mf130456D1(); // R>
  mf74404CD4(); // _>CFA
  mf8670E50B(); // __(LOC!)
mfNEXT
mfTHEN
  mfpush(-1); // $FFFFFFFF
  mfpush(&MF8FDB85B9); // __LSYNF
  mf240C8DEC(); // !
}

void mf0AD4B2AD(void) { // : (LOCAL)
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
mfNOTIF
  mfE32D4E7B(); // __PREP-LOCALS
mfTHEN
  mf8003A4B3(); // ?DUP
mfIF
  mf3D63AA51(); // __NEW-LOCAL
mfELSE
  mf52C16B0C(); // DROP
  mfD5625221(); // __LAST-LOCAL
mfTHEN
} // COMPILE-ONLY

void mf51D83708(void) { // : __(OLOCAL)
  mfpush(&MF49D94043); // __OLOCS
  mfC50BF85F(); // @
  mfpush(-8); // $FFFFFFF8
  mf390CAEFB(); // <
mfIF
  mfpush(-323); // $FFFFFEBD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfE0839FF6(); // 2DUP
  mfpush(&MF7571BB77); // _TEMPWL
  mf4FBFA22C(); // _SEARCHNT
mfIF
  mf67FCEB09(); // >R
  mfEF6476DC(); // 2DROP
  mf130456D1(); // R>
mfELSE
  mf0AD4B2AD(); // (LOCAL)
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
  mf74404CD4(); // _>CFA
mfTHEN
  mfpush(&MF49D94043); // __OLOCS
  mf7D948B73(); // DECR
  mfA2DF200E(); // SWAP
}

void mfD0F0D3E7(void) { // : LOCALS|
  mfE32D4E7B(); // __PREP-LOCALS
mfBEGIN
  mfpush(&MF09FAEC81); // __ILOCS
  mfC50BF85F(); // @
  mfpush(16); // $10
  mf3B0CB221(); // >
mfIF
  mfpush(-320); // $FFFFFEC0
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfC94E167C(); // _PARSE-WORD
  mfE0839FF6(); // 2DUP
  mfspush("|"); // S"
  mfA7AD15F7(); // STR=
mfNOTWHILE
  mf57E80646(); // DUP
mfNOTIF
  mfpush(-18); // $FFFFFFEE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf0AD4B2AD(); // (LOCAL)
mfREPEAT
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mf0AD4B2AD(); // (LOCAL)
} // IMMEDIATE COMPILE-ONLY

mfCell MFE65A0BFA=0; // 0

void mfE65A0BFA(void) { // VARIABLE __}
  mfpush(&MFE65A0BFA);
}

void mf05D84E38(void) { // : __LOCALS{
  mfE32D4E7B(); // __PREP-LOCALS
  mfpush(MF501B0925); // TRUE
mfBEGIN
  mfpush(&MF09FAEC81); // __ILOCS
  mfC50BF85F(); // @
  mfpush(&MF3B594085); // __ULOCS
  mfC50BF85F(); // @
  mf2E0C9DAA(); // +
  mfpush(16); // $10
  mf3B0CB221(); // >
mfIF
  mfpush(-320); // $FFFFFEC0
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfC94E167C(); // _PARSE-WORD
  mfE0839FF6(); // 2DUP
  mfpush(&MFE65A0BFA); // __}
  mfA3F7B2D4(); // COUNT
  mfA7AD15F7(); // STR=
mfNOTWHILE
  mf57E80646(); // DUP
mfNOTIF
  mfpush(-18); // $FFFFFFEE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf6AB5854A(); // PLUCK
mfNOTIF
  mfEF6476DC(); // 2DROP
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("--"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mf52C16B0C(); // DROP
  mfpush(MFEE597878); // FALSE
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("=="); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(&MF465951D6); // __ULOCF
  mf80E4B050(); // ON
  mfpush(&MF49D94043); // __OLOCS
  mf80E4B050(); // ON
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("|"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(&MF465951D6); // __ULOCF
  mf80E4B050(); // ON
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("N:"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(0); // $0
  mfpush(&MF1D6691F2); // __LTYP
  mf240C8DEC(); // !
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("D:"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(1); // $1
  mfpush(&MF1D6691F2); // __LTYP
  mf240C8DEC(); // !
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("F:"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(2); // $2
  mfpush(&MF1D6691F2); // __LTYP
  mf240C8DEC(); // !
mfCONTINUE
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("Z:"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(3); // $3
  mfpush(&MF1D6691F2); // __LTYP
  mf240C8DEC(); // !
mfCONTINUE
mfTHEN
  mfpush(&MF49D94043); // __OLOCS
  mfC50BF85F(); // @
mfIF
  mf51D83708(); // __(OLOCAL)
mfELSE
  mf0AD4B2AD(); // (LOCAL)
mfTHEN
mfREPEAT
  mf87E8362E(); // ROT
  mf52C16B0C(); // DROP
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mfpush(1); // $1
  mfpush(&MF8FDB85B9); // __LSYNF
  mf240C8DEC(); // !
  mf0AD4B2AD(); // (LOCAL)
}

void mf0D654860(void) { // : {:
  mfspush(":}"); // S"
  mfpush(&MFE65A0BFA); // __}
  mf10E38971(); // _PLACE
  mf05D84E38(); // __LOCALS{
} // IMMEDIATE COMPILE-ONLY

void mfFE0C521A(void) { // : {
  mfspush("}"); // S"
  mfpush(&MFE65A0BFA); // __}
  mf10E38971(); // _PLACE
  mf05D84E38(); // __LOCALS{
} // IMMEDIATE COMPILE-ONLY

void mf910625F0(void) { // : :=
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
mfIF
  mf21F563E4(); // TO
mfELSE
  mfpush(-32); // $FFFFFFE0
  (MFE5B4B40F)(); // THROW
mfTHEN
} // IMMEDIATE 

void mf14DC14B5(void) { // : +=
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
mfIF
  mf91736C8F(); // +TO
mfELSE
  mfpush(-32); // $FFFFFFE0
  (MFE5B4B40F)(); // THROW
mfTHEN
} // IMMEDIATE 

void mf07568FCC(void) { // : __LTO
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mf220C8AC6(); // '
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[697].cfa); // ['] _[LOC@]
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfIF
  mf63DECBC8(); // NIP
  mf8670E50B(); // __(LOC!)
mfEXIT
mfTHEN
  mf52C16B0C(); // DROP
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mf14FE71EE(); // __TO
}

void mfC2F806F7(void) { // : __L+TO
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mf220C8AC6(); // '
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[697].cfa); // ['] _[LOC@]
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfIF
  mf63DECBC8(); // NIP
  mf8A0947EC(); // __(LOC+!)
mfEXIT
mfTHEN
  mf52C16B0C(); // DROP
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
  mf76991F71(); // __+TO
}

void mfF0939D46(void) { // : __LFINDWORD
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
mfIF
  mfE0839FF6(); // 2DUP
  mfpush(&MF7571BB77); // _TEMPWL
  mf4FBFA22C(); // _SEARCHNT
  mf8003A4B3(); // ?DUP
mfIF
  mf404D123E(); // 2SWAP
  mfEF6476DC(); // 2DROP
mfEXIT
mfTHEN
mfTHEN
  mf824A24DA(); // ___FIND-WORD
}

void mfD2A4D0F5(void) { // : __(,OLOC)
  mfpush(&MF49D94043); // __OLOCS
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfD745D921(); // INVERT
mfFOR
  mf67FCEB09(); // >R
mfNEXT
  mfpush(&MF49D94043); // __OLOCS
  mfC50BF85F(); // @
  mfD745D921(); // INVERT
mfFOR
  mf130456D1(); // R>
  mfCF77DFB8(); // EXECUTE
mfNEXT
mfTHEN
}

void mf0EB4BDB3(void) { // : __(;LOC)
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
mfIF
  mfpush(&MF904A265A); // __TLOCS
  mfC50BF85F(); // @
  mfpush(&MF7A4A03B8); // __TLOCE
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfNOTIF
  mfD2A4D0F5(); // __(,OLOC)
  mfpush(&MF7A4A03B8); // __TLOCE
  mfC50BF85F(); // @
  mfpush(&MF904A265A); // __TLOCS
  mfC50BF85F(); // @
  mf5F2B6B8B(); // HERE
  mf6AB5854A(); // PLUCK
  mf280C9438(); // -
  mfC2064154(); // MOVE
  mfpush(&MF904A265A); // __TLOCS
  mfC50BF85F(); // @
  mfpush(&MF7A4A03B8); // __TLOCE
  mfC50BF85F(); // @
  mf280C9438(); // -
  mf3FA1943F(); // ALLOT
  mfat(mfdp)=(mfCell)&mfdict[695].cfa;
  mfdp+=MFSIZE; // [,] _[;L]
mfTHEN
  mfpush(&MF7571BB77); // _TEMPWL
  mf2E1505EA(); // OFF
  mfpush(&MF8FDB85B9); // __LSYNF
  mf2E1505EA(); // OFF
  mfpush(&MF904A265A); // __TLOCS
  mf2E1505EA(); // OFF
  mfpush(&MF7A4A03B8); // __TLOCE
  mf2E1505EA(); // OFF
mfTHEN
}

void mfE8EAA4F2(void) { // : __L;
  mf0EB4BDB3(); // __(;LOC)
  mfA0599DC8(); // __;
}

void mfF575BA52(void) { // : __LDOES>
  mf0EB4BDB3(); // __(;LOC)
  mf5E1BC1F8(); // __DOES>
}

void mf17719FDD(void) { // : __LEXIT
  mfpush(&MF49D94043); // __OLOCS
  mfC50BF85F(); // @
mfIF
  mfpush(-322); // $FFFFFEBE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfpush(&MF5CD08362); // __LDEPTH
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf3B0CB221(); // >
mfIF
  mfat(mfdp)=(mfCell)&mfdict[695].cfa;
  mfdp+=MFSIZE; // [,] _[;L]
mfTHEN
  mfA686D353(); // __EXIT
}

void mf4AA88A69(void) { // : __LRESETSTACKS
  mf4A1971BB(); // ___RESET-STACKS
  mfpush(&MF7571BB77); // _TEMPWL
  mf2E1505EA(); // OFF
  mfpush(&MF8FDB85B9); // __LSYNF
  mf2E1505EA(); // OFF
}

void mf375A2BDE(void) { // : __LEXCMSG
mfCASE
  mfpush(-320); // $FFFFFEC0
mfOF
  mfprint("too many locals"); // S"
mfEXIT
mfENDOF
  mfpush(-321); // $FFFFFEBF
mfOF
  mfprint("repeated locals declaration"); // S"
mfEXIT
mfENDOF
  mfpush(-322); // $FFFFFEBE
mfOF
  mfprint("EXIT not allowed with output locals"); // S"
mfEXIT
mfENDOF
  mfpush(-323); // $FFFFFEBD
mfOF
  mfprint("too many output locals"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf5A699584(); // __FEXCMSG
}

void mf39170642(void) { // : __LENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("#LOCALS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(16); // $10
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("LOCALS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("LOCALS-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf1BCADC89(); // __CXENVIRONMENT
}
 
#define MFSTRING  

void mf4C05BF94(void) { // : COMPARE
  mferr(mfin(4));  
  char *a1,*a2; unsigned int um,u1,u2;  
  u2=mfpop(),a2=(char*)mfpop(),u1=mfpop(),a1=(char*)mftos,um=min(u1,u2);  
  for (unsigned int i=0;i<um;i++) {  
    if (a1[i]!=a2[i]) { mftos=(a1[i]<a2[i]?-1:1); return; } }  
  if (u1==u2) mftos=0; else mftos=(u1<u2?-1:1);
}

void mf36D11E29(void) { // : SEARCH
  mferr(mfin(4));  
  char *a1,*a2; unsigned int u1,u2,i;  
  u2=mfpop(), a2=(char*)mftos, u1=mfsec, a1=(char*)mfthd, mftos=0;  
  if (u1<u2) return;  
  for (i=0;i<=u1-u2;a1++,i++)  
    if (!memcmp(a1,a2,u2))  
    { mfthd=(mfCell)a1,mfsec-=i,mftos=-1; break; }
}

void mfFC534FAF(void) { // : CMOVE
  mf87E8362E(); // ROT
  mfA2DF200E(); // SWAP
  mfpush(1); // $1
mfFORUP
mfN
  mf76DA1336(); // C@
  mf2FE7860F(); // OVER
  mf97DA4729(); // C!
  mf26EB3B95(); // 1+
mfNEXT
  mf52C16B0C(); // DROP
}

void mfC8264143(void) { // : CMOVE>
  mf93A82DE8(); // TUCK
  mf2E0C9DAA(); // +
  mfEFF28235(); // -ROT
  mfpush(1); // $1
mfDOWNFOR
  mf20EB3223(); // 1-
mfN
  mf76DA1336(); // C@
  mf2FE7860F(); // OVER
  mf97DA4729(); // C!
mfNEXT
  mf52C16B0C(); // DROP
}

void mfE6D53A44(void) { // : -TRAILING
  mfE0839FF6(); // 2DUP
  mfpush(1); // $1
mfDOWNFOR
mfN
  mf76DA1336(); // C@
  mfpush(MF20DD5D6B); // BL
  mf93F7201F(); // <>
mfIF
mfBREAK
mfTHEN
  mf20EB3223(); // 1-
mfNEXT
}

void mf80363E61(void) { // : BLANK
  mfpush(MF20DD5D6B); // BL
  mfAF3DC588(); // FILL
}

void mfA4420196(void) { // : PARSE-STRING
  mferr(mfin(2);mfout(2));  
  mfChar *a=(mfChar*)mfsec,*ap; mfUCell u=mftos;  
  while (u) { if (*a>32) break; else a++,u--; } ap=a;  
  while (u) { if (*a<=32) break; else a++,u--; }  
  mfsec=(mfCell)a, mftos=u, mfpush(ap), mfpush(a-ap);
}

mfCell MF0E66217D=0; // 0

void mf0E66217D(void) { // VARIABLE __REPWL
  mfpush(&MF0E66217D);
}

void mf42101DD0(void) { // : REPLACES
  mf57E80646(); // DUP
mfNOTIF
  mfEF6476DC(); // 2DROP
  mfEF6476DC(); // 2DROP
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfpush(&MF0E66217D); // __REPWL
  mfC50BF85F(); // @
  mf4FBFA22C(); // _SEARCHNT
mfIF
  mf67FCEB09(); // >R
  mf8C8BC01F(); // 2OVER
  mf130456D1(); // R>
  mfCF77DFB8(); // EXECUTE
  mf4C05BF94(); // COMPARE
mfNOTIF
  mfpush(-79); // $FFFFFFB1
  (MFE5B4B40F)(); // THROW
mfTHEN
mfTHEN
  mfBB3DE887(); // GET-CURRENT
  mf67FCEB09(); // >R
  mfpush(&MF0E66217D); // __REPWL
  mfC50BF85F(); // @
  mfB52F140B(); // SET-CURRENT
  mfpush(&MFA274DA18); // CAPS
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MFA274DA18); // CAPS
  mf2E1505EA(); // OFF
  mf9DA7D846(); // NAMED
  mfC19230DD(); // CREATE
  mf93A82DE8(); // TUCK
  mf5F2B6B8B(); // HERE
  mf10E38971(); // _PLACE
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf3FA1943F(); // ALLOT
  mfAFA183BE(); // ALIGN
  mf130456D1(); // R>
  mfpush(&MFA274DA18); // CAPS
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mfB52F140B(); // SET-CURRENT
  mfpush(&mfdict[108].cfa); // ['] COUNT
  mf4520460B(); // _<DOES
}

void mfFF0E38ED(void) { // : UNESCAPE
  mf57E80646(); // DUP
  mf404D123E(); // 2SWAP
  mfpush(1); // $1
mfFORUP
mfN
  mf76DA1336(); // C@
  mf57E80646(); // DUP
  mfpush(37); // $25
  mf380CAD68(); // =
mfIF
  mf2FE7860F(); // OVER
  mf97DA4729(); // C!
  mf2FEE4BC2(); // CHAR+
  mfpush(37); // $25
mfTHEN
  mf2FE7860F(); // OVER
  mf97DA4729(); // C!
  mf2FEE4BC2(); // CHAR+
mfNEXT
  mf2FE7860F(); // OVER
  mf280C9438(); // -
}

void mf1C4B40F1(void) { // : SUBSTITUTE
  mferr(mfin(4);mfout(1));  
  int u2=mfpop(), u1=mfsec, u, ub=0, n=0, ur;  
  char *b2=(char*)mftos, *a1=(char*)mfthd, c, *as, *ap, *ar;  
  mftos=-78; if (a1==b2) return;  
  for (u=0; u<u1; u++) { c=a1[u];  
    if (ub>=u2) return;  
    if (c=='%') { as=a1+u+1, ap=memchr(as,'%',u1-u-1);  
      if (!ap) goto nx; // single %  
      if (ap==as) { u++; goto nx; } // empty %%  
      mfpush(as), mfpush(ap-as);  
  mfpush(&MF0E66217D); // __REPWL
  mfC50BF85F(); // @
  mf4FBFA22C(); // _SEARCHNT
      if (!mfpop()) goto nx;  
  mfCF77DFB8(); // EXECUTE
      ur=mfpop(), ar=(char*)mfpop();  
      if (ur<=u2-ub) memcpy(b2+ub,ar,ur); else return; // overflow  
      n++, ub+=ur, u=ap-a1; continue; }  
 nx: b2[ub++]=c; }  
  mfthd=(mfCell)b2, mfsec=ub, mftos=n;
}

void mf1F1F79B7(void) { // : __SEXCMSG
mfCASE
  mfpush(-78); // $FFFFFFB2
mfOF
  mfprint("SUBSTITUTE error"); // S"
mfEXIT
mfENDOF
  mfpush(-79); // $FFFFFFB1
mfOF
  mfprint("REPLACES error"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf375A2BDE(); // __LEXCMSG
}

void mf5547E6F8(void) { // : __SBOOT
  mf1E1FE1D0(); // __CXBOOT
  mfE81D9A59(); // WORDLIST
  mfpush(&MF0E66217D); // __REPWL
  mf240C8DEC(); // !
}
 
#define MFBLOCK  

mfChar MFA5C7BBD2[2*MFSIZE]={0}; // 2

void mfA5C7BBD2(void) { // BUFFER _BFILE
  mfpush(MFA5C7BBD2);
}

void mf1BFC78FE(void) { // : __BID
  mfpush(&MFA5C7BBD2); // _BFILE
  mfC50BF85F(); // @
}

void mfAB77EF55(void) { // : __BIBS
  mfpush(&MFA5C7BBD2); // _BFILE
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
}

void mf200FB32D(void) { // : __#BIB
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mfpush(1024); // $400
  mf2E0C9DAA(); // +
}

mfCell MFD0BA2FD1=0; // 0

void mfD0BA2FD1(void) { // VARIABLE _CURBIB
  mfpush(&MFD0BA2FD1);
}

void mf03DC3CB2(void) { // : __ALLOCBIBS
  mfpush(&MFA5C7BBD2); // _BFILE
  mf240C8DEC(); // !
  mf57E80646(); // DUP
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf200FB32D(); // __#BIB
  mfA7F2C26D(); // 2*
  mf2E0C9DAA(); // +
  mfE69B7462(); // ALLOCATE
  (MFE5B4B40F)(); // THROW
  mf57E80646(); // DUP
  mfpush(&MFA5C7BBD2); // _BFILE
  mfBB8FCA7A(); // CELL+
  mf240C8DEC(); // !
  mf57E80646(); // DUP
  mfpush(&MFD0BA2FD1); // _CURBIB
  mf240C8DEC(); // !
  mfpush(0); // $0
  mfpush(0); // $0
  mf6AB5854A(); // PLUCK
  mf9CF2B11C(); // 2!
  mf200FB32D(); // __#BIB
  mf2E0C9DAA(); // +
  mfpush(0); // $0
  mfpush(0); // $0
  mf6AB5854A(); // PLUCK
  mf9CF2B11C(); // 2!
  mf200FB32D(); // __#BIB
  mf2E0C9DAA(); // +
  mf10E38971(); // _PLACE
}

void mf52AA6F21(void) { // : CLOSE-BLOCKFILE
  mf1BFC78FE(); // __BID
  mf8003A4B3(); // ?DUP
mfIF
  mfB7443E2C(); // CLOSE-FILE
  (MFE5B4B40F)(); // THROW
  mfAB77EF55(); // __BIBS
  mf97A522DB(); // FREE
  (MFE5B4B40F)(); // THROW
  mfpush(0); // $0
  mfpush(0); // $0
  mfpush(&MFA5C7BBD2); // _BFILE
  mf9CF2B11C(); // 2!
mfTHEN
  mfpush(&MFD0BA2FD1); // _CURBIB
  mf2E1505EA(); // OFF
}

void mfB64C9D63(void) { // : OPEN-BLOCKFILE
  mf52AA6F21(); // CLOSE-BLOCKFILE
  mfE0839FF6(); // 2DUP
  mfC5F983BB(); // R/W
  mfDF81ECDE(); // BIN
  mf3C8F801A(); // OPEN-FILE
  (MFE5B4B40F)(); // THROW
  mf03DC3CB2(); // __ALLOCBIBS
}

void mf0420D2C7(void) { // : CREATE-BLOCKFILE
  mf52AA6F21(); // CLOSE-BLOCKFILE
  mfE0839FF6(); // 2DUP
  mfC5F983BB(); // R/W
  mfDF81ECDE(); // BIN
  mfD2C02CE6(); // CREATE-FILE
  (MFE5B4B40F)(); // THROW
  mf5F2B6B8B(); // HERE
  mfpush(64); // $40
  mfpush(MF20DD5D6B); // BL
  mfAF3DC588(); // FILL
  mfpush(16); // $10
  mfpush(40); // $28
  mf2F0C9F3D(); // *
mfFOR
  mf5F2B6B8B(); // HERE
  mfpush(64); // $40
  mf6AB5854A(); // PLUCK
  mf1ED165FD(); // WRITE-FILE
  (MFE5B4B40F)(); // THROW
mfNEXT
  mf03DC3CB2(); // __ALLOCBIBS
}

void mfD5DFF5E4(void) { // : __?BFILE
  mf1BFC78FE(); // __BID
mfNOTIF
  mfspush("mfblocks.blk"); // S"
  mfE0839FF6(); // 2DUP
  mfFB4621B4(); // FILE-STATUS
  mf63DECBC8(); // NIP
mfIF
  mf0420D2C7(); // CREATE-BLOCKFILE
mfELSE
  mfB64C9D63(); // OPEN-BLOCKFILE
mfTHEN
mfTHEN
}

void mf66E765AF(void) { // : __?BID
  mfD5DFF5E4(); // __?BFILE
  mf1BFC78FE(); // __BID
}

void mfB2409D2E(void) { // : __?BIBS
  mfD5DFF5E4(); // __?BFILE
  mfAB77EF55(); // __BIBS
}

void mf50FACB30(void) { // : BLOCKFILE-NAME
  mfB2409D2E(); // __?BIBS
  mf200FB32D(); // __#BIB
  mfA7F2C26D(); // 2*
  mf2E0C9DAA(); // +
  mfA3F7B2D4(); // COUNT
}

void mfC8C9F96A(void) { // : BLOCKFILE-SIZE
  mf66E765AF(); // __?BID
  mf8CAE1B93(); // FILE-SIZE
  (MFE5B4B40F)(); // THROW
  mfpush(1024); // $400
  mf5F2279EC(); // UM/MOD
  mfA2DF200E(); // SWAP
mfIF
  mf26EB3B95(); // 1+
mfTHEN
}

void mf5538243B(void) { // : RESIZE-BLOCKFILE
  mf57E80646(); // DUP
  mfpush(1); // $1
  mfpush(2048); // $800
  mf09D242EA(); // WITHIN
mfNOTIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfpush(1024); // $400
  mfD9ACE697(); // UM*
  mf66E765AF(); // __?BID
  mf68AAA8F2(); // RESIZE-FILE
  (MFE5B4B40F)(); // THROW
  mf1BFC78FE(); // __BID
  mfE7813386(); // FLUSH-FILE
  (MFE5B4B40F)(); // THROW
}

void mfFC2520DF(void) { // : __BSEEK
  mfpush(1024); // $400
  mfD9ACE697(); // UM*
  mf66E765AF(); // __?BID
  mf45455D7C(); // REPOSITION-FILE
  (MFE5B4B40F)(); // THROW
}

void mf1ED475DD(void) { // : BLOCK-READ
  mf57E80646(); // DUP
  mfC8C9F96A(); // BLOCKFILE-SIZE
  mf0EF30764(); // U<
mfNOTIF
  mfpush(-33); // $FFFFFFDF
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfFC2520DF(); // __BSEEK
  mf57E80646(); // DUP
  mfpush(1024); // $400
  mf1BFC78FE(); // __BID
  mf71E6784E(); // READ-FILE
  (MFE5B4B40F)(); // THROW
  mfpush(1024); // $400
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf67FCEB09(); // >R
  mf2E0C9DAA(); // +
  mf130456D1(); // R>
  mfpush(MF20DD5D6B); // BL
  mfAF3DC588(); // FILL
}

void mf848FBD34(void) { // : BLOCK-WRITE
  mf57E80646(); // DUP
  mfpush(0); // $0
  mfpush(2048); // $800
  mf09D242EA(); // WITHIN
mfNOTIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfFC2520DF(); // __BSEEK
  mfpush(1024); // $400
  mf1BFC78FE(); // __BID
  mf1ED165FD(); // WRITE-FILE
mfIF
  mfpush(-34); // $FFFFFFDE
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf1BFC78FE(); // __BID
  mfE7813386(); // FLUSH-FILE
  (MFE5B4B40F)(); // THROW
}

void mf06E88970(void) { // : BLOCK-FILL
  mf2FE7860F(); // OVER
  mfpush(0); // $0
  mfpush(2048); // $800
  mf09D242EA(); // WITHIN
mfNOTIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf5F2B6B8B(); // HERE
  mfpush(64); // $40
  mf87E8362E(); // ROT
  mfAF3DC588(); // FILL
  mfFC2520DF(); // __BSEEK
  mfpush(16); // $10
mfFOR
  mf5F2B6B8B(); // HERE
  mfpush(64); // $40
  mf1BFC78FE(); // __BID
  mf1ED165FD(); // WRITE-FILE
  (MFE5B4B40F)(); // THROW
mfNEXT
  mf1BFC78FE(); // __BID
  mfE7813386(); // FLUSH-FILE
  (MFE5B4B40F)(); // THROW
}

void mf33F278BC(void) { // : __FORBIBS
  mfB2409D2E(); // __?BIBS
  mfpush(2); // $2
  mf200FB32D(); // __#BIB
}

void mf4CE18DB4(void) { // : EMPTY-BUFFERS
  mf33F278BC(); // __FORBIBS
mfFORUP
  mfpush(0); // $0
  mfpush(0); // $0
mfN
  mf9CF2B11C(); // 2!
mfNEXT
}

void mfDB44F5B0(void) { // : __FLUSHBIB
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf15ED5F69(); // 0<
mfIF
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mfBB8FCA7A(); // CELL+
  mfA2DF200E(); // SWAP
  mf848FBD34(); // BLOCK-WRITE
  mfpush(1); // $1
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
}

void mfAECB85D2(void) { // : SAVE-BUFFERS
  mf33F278BC(); // __FORBIBS
mfFORUP
mfN
  mfDB44F5B0(); // __FLUSHBIB
mfNEXT
}

void mf95A90CFD(void) { // : FLUSH
  mfAECB85D2(); // SAVE-BUFFERS
  mf4CE18DB4(); // EMPTY-BUFFERS
}

void mf1C3385B4(void) { // : UPDATE
  mfpush(&MFD0BA2FD1); // _CURBIB
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mf80E4B050(); // ON
mfTHEN
}

void mf0E37B939(void) { // : __!CURBIB
  mf57E80646(); // DUP
  mfpush(&MFD0BA2FD1); // _CURBIB
  mf240C8DEC(); // !
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
}

void mfFFB24B3B(void) { // : BUFFER
  mf33F278BC(); // __FORBIBS
mfFORUP
mfN
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf2FE7860F(); // OVER
  mf380CAD68(); // =
mfIF
  mf52C16B0C(); // DROP
mfN
  mf0E37B939(); // __!CURBIB
mfEXIT
mfTHEN
mfNEXT
  mf33F278BC(); // __FORBIBS
mfFORUP
mfN
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
mfNOTIF
  mfpush(0); // $0
mfN
  mf9CF2B11C(); // 2!
mfN
  mf0E37B939(); // __!CURBIB
mfEXIT
mfTHEN
mfNEXT
  mfAB77EF55(); // __BIBS
  mfpush(&MFD0BA2FD1); // _CURBIB
  mfC50BF85F(); // @
  mf2FE7860F(); // OVER
  mf380CAD68(); // =
mfIF
  mf200FB32D(); // __#BIB
  mf2E0C9DAA(); // +
mfTHEN
  mf57E80646(); // DUP
  mfDB44F5B0(); // __FLUSHBIB
  mfA2DF200E(); // SWAP
  mfpush(0); // $0
  mf6AB5854A(); // PLUCK
  mf9CF2B11C(); // 2!
  mf0E37B939(); // __!CURBIB
}

mfCell MFDB64ED68=0; // 0

void mfDB64ED68(void) { // VARIABLE __CURBUF
  mfpush(&MFDB64ED68);
}

mfCell MF6CF7569E=0; // 0

void mf6CF7569E(void) { // VARIABLE __CURSIZE
  mfpush(&MF6CF7569E);
}

void mfFAF8D8C2(void) { // : BLOCK
  mfC8C9F96A(); // BLOCKFILE-SIZE
  mfE0839FF6(); // 2DUP
  mf0EF30764(); // U<
mfNOTIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mfpush(&MF6CF7569E); // __CURSIZE
  mf240C8DEC(); // !
  mfFFB24B3B(); // BUFFER
  mfpush(&MFD0BA2FD1); // _CURBIB
  mfC50BF85F(); // @
  mfC50BF85F(); // @
mfNOTIF
  mfpush(&MFD0BA2FD1); // _CURBIB
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf6AB5854A(); // PLUCK
  mfA2DF200E(); // SWAP
  mf1ED475DD(); // BLOCK-READ
  mfpush(1); // $1
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
mfTHEN
  mf57E80646(); // DUP
  mfpush(&MFDB64ED68); // __CURBUF
  mf240C8DEC(); // !
}

mfCell MF46F27533=0; // 0

void mf46F27533(void) { // VARIABLE SCR
  mfpush(&MF46F27533);
}

void mf0A4EBBC1(void) { // : LIST
  mf57E80646(); // DUP
  mfpush(0); // $0
  mfC8C9F96A(); // BLOCKFILE-SIZE
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mf09D242EA(); // WITHIN
mfNOTIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf57E80646(); // DUP
  mfpush(&MF46F27533); // SCR
  mf240C8DEC(); // !
  mf57E80646(); // DUP
  mf64D9F6E0(); // CR
  mfprint("--- BLOCK # "); // S"
  mf2B0C98F1(); // .
  mfprint("of "); // S"
  mf130456D1(); // R>
  mf2B0C98F1(); // .
  mfprint("in "); // S"
  mf50FACB30(); // BLOCKFILE-NAME
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
  mfFAF8D8C2(); // BLOCK
  mfpush(16); // $10
mfFOR
  mf64D9F6E0(); // CR
mfN
  mf26EB3B95(); // 1+
  mfpush(2); // $2
  mf67D44899(); // .R
  mfpush(58); // $3A
  mfD9BC5E8A(); // EMIT
  mf1808F0E5(); // SPACE
  mf57E80646(); // DUP
  mfpush(64); // $40
  mf142FE78D(); // TYPE
  mfpush(64); // $40
  mf2E0C9DAA(); // +
  mf1808F0E5(); // SPACE
  mfpush(58); // $3A
  mfD9BC5E8A(); // EMIT
mfNEXT
  mf52C16B0C(); // DROP
}

void mf70B4A90B(void) { // : TRIAD
  mfpush(3); // $3
mfFOR
mfN
  mf2FE7860F(); // OVER
  mf2E0C9DAA(); // +
  mf0A4EBBC1(); // LIST
mfNEXT
  mf52C16B0C(); // DROP
}

void mfE3F88DE9(void) { // : LOAD
  mf57E80646(); // DUP
  mfpush(1); // $1
  mf390CAEFB(); // <
mfIF
  mfpush(-35); // $FFFFFFDD
  (MFE5B4B40F)(); // THROW
mfTHEN
  mf600421B4(); // _SRC>R
  mfB69116BF(); // __FSRC>R
  mf1BFC78FE(); // __BID
  mfFD898658(); // _SRCID!
  mf57E80646(); // DUP
  mfDC799960(); // BLK
  mf240C8DEC(); // !
  mfFAF8D8C2(); // BLOCK
  mfpush(64); // $40
  mf5AF98C79(); // _SRC2!
  mfpush(&MF30A80A8D); // _SLN
  mf2E1505EA(); // OFF
mfBEGIN
  mfpush(&MF30A80A8D); // _SLN
  mfC50BF85F(); // @
  mfpush(16); // $10
  mf390CAEFB(); // <
  mf57E80646(); // DUP
mfWHILE
  mf52C16B0C(); // DROP
  mfpush(&MF30A80A8D); // _SLN
  mf5A131C6F(); // INCR
  mf580B1E42(); // >IN
  mf2E1505EA(); // OFF
  mfpush(&mfdict[216].cfa); // ['] _INTERPRET
  mfEAF28AAC(); // CATCH
  mf8003A4B3(); // ?DUP
mfIF
mfBREAK
mfTHEN
  mfpush(64); // $40
  mf7A91D589(); // _SRCADR
  mf08DC01D1(); // +!
mfREPEAT
mfDUPIF
  (MF9FC8664E)(); // _EXCSRC
  mfprint("in "); // S"
  mf50FACB30(); // BLOCKFILE-NAME
  mf142FE78D(); // TYPE
  mfprint(" in BLOCK "); // S"
  mfDC799960(); // BLK
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
  mfprint("line "); // S"
  mfpush(&MF30A80A8D); // _SLN
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
mfTHEN
  mfC81E32AF(); // __R>FSRC
  mfD24E2A14(); // _R>SRC
  mfDC799960(); // BLK
  mfC50BF85F(); // @
  mf8003A4B3(); // ?DUP
mfIF
  mfFAF8D8C2(); // BLOCK
  mfpush(64); // $40
  mf5AF98C79(); // _SRC2!
mfTHEN
  (MFE5B4B40F)(); // THROW
}

void mfDE60F184(void) { // : THRU
  mf2FE7860F(); // OVER
  mf280C9438(); // -
  mf26EB3B95(); // 1+
  mfpush(1); // $1
mfFORUP
mfN
  mfE3F88DE9(); // LOAD
mfNEXT
}

void mfD3E4F423(void) { // : -->
  (MFC1D4E711)(); // REFILL
  mf52C16B0C(); // DROP
} // IMMEDIATE 

void mf42A996C6(void) { // : __BLKREFILL
  mfDC799960(); // BLK
  mfC50BF85F(); // @
mfNOTIF
  mf70A53D75(); // __FLREFILL
mfEXIT
mfTHEN
  mfDC799960(); // BLK
  mfC50BF85F(); // @
  mfC8C9F96A(); // BLOCKFILE-SIZE
  mf20EB3223(); // 1-
  mf390CAEFB(); // <
mfNOTIF
  mfpush(MFEE597878); // FALSE
mfEXIT
mfTHEN
  mfDC799960(); // BLK
  mf5A131C6F(); // INCR
  mfDC799960(); // BLK
  mfC50BF85F(); // @
  mfFAF8D8C2(); // BLOCK
  mf7A91D589(); // _SRCADR
  mf240C8DEC(); // !
  mf580B1E42(); // >IN
  mf2E1505EA(); // OFF
  mfpush(MF501B0925); // TRUE
}

void mf62082023(void) { // : __BL|
  mfDC799960(); // BLK
  mfC50BF85F(); // @
mfNOTIF
  mf075A3FED(); // __|
mfEXIT
mfTHEN
  mfpush(64); // $40
  mf580B1E42(); // >IN
  mfC50BF85F(); // @
  mfpush(64); // $40
  mf6453F3A3(); // MOD
  mf280C9438(); // -
  mf580B1E42(); // >IN
  mf08DC01D1(); // +!
}

void mfC2CB1050(void) { // : __BL|S
  mfDC799960(); // BLK
  mfC50BF85F(); // @
mfNOTIF
  mf5112581A(); // __|S
mfEXIT
mfTHEN
  mfpush(1024); // $400
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
}

void mf8187DB0E(void) { // : __BLEXCMSG
mfCASE
  mfpush(-33); // $FFFFFFDF
mfOF
  mfprint("block read exception"); // S"
mfEXIT
mfENDOF
  mfpush(-34); // $FFFFFFDE
mfOF
  mfprint("block write exception"); // S"
mfEXIT
mfENDOF
  mfpush(-35); // $FFFFFFDD
mfOF
  mfprint("invalid block number"); // S"
mfEXIT
mfENDOF
  mfpush(-260); // $FFFFFEFC
mfOF
  mfprint("invalid block-file"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf1F1F79B7(); // __SEXCMSG
}

void mf567914F7(void) { // : __BLENVIRONMENT?
  mfE0839FF6(); // 2DUP
  mfspush("BLOCK"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("BLOCK-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf39170642(); // __LENVIRONMENT
}
 
#define MFTOOLS  

mfXT MFA22AC7EB=mfE67669F8; // IS PICK

void mfA22AC7EB(void) { // DEFER CS-PICK
  (MFA22AC7EB)();
}

mfXT MF70256A75=mf5451721E; // IS ROLL

void mf70256A75(void) { // DEFER CS-ROLL
  (MF70256A75)();
}

void mfB0B6FFBD(void) { // : N>R
  mf57E80646(); // DUP
mfFOR
  mfA2DF200E(); // SWAP
  mf67FCEB09(); // >R
mfNEXT
  mf67FCEB09(); // >R
}

void mf43AABE05(void) { // : NR>
  mf130456D1(); // R>
  mf57E80646(); // DUP
mfFOR
  mf130456D1(); // R>
  mfA2DF200E(); // SWAP
mfNEXT
}

void mf3A0CB08E(void) { // : ?
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
}

void mf3560A2EE(void) { // : AHEAD
  mfat(mfdp)=(mfCell)&mfdict[267].cfa;
  mfdp+=MFSIZE; // [,] _[JMP]
  mf9592F3FF(); // _MARK
  mfpush(1); // $1
  mf290C95CB(); // ,
} // IMMEDIATE COMPILE-ONLY

void mf0D159680(void) { // : [:
  mfpush(&MF904A265A); // __TLOCS
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MF7A4A03B8); // __TLOCE
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MF7571BB77); // _TEMPWL
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mfpush(&MF8FDB85B9); // __LSYNF
  mf2E1505EA(); // OFF
  mfEA08BD65(); // _LATEST
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf3560A2EE(); // AHEAD
  mf67FCEB09(); // >R
  mfF0A95069(); // :NONAME
} // IMMEDIATE COMPILE-ONLY

void mf35035685(void) { // : ;]
  mf3E0CB6DA(); // ;
  mfD80C1648(); // ]
  mf130456D1(); // R>
  mfE78A4DB6(); // THEN
  mfBAFC44C4(); // LITERAL
  mf130456D1(); // R>
  mfEA08BD65(); // _LATEST
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mfpush(&MF7571BB77); // _TEMPWL
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mfpush(&MF7A4A03B8); // __TLOCE
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mfpush(&MF904A265A); // __TLOCS
  mf240C8DEC(); // !
  mfpush(&MF904A265A); // __TLOCS
  mfC50BF85F(); // @
  mfpush(&MF7A4A03B8); // __TLOCE
  mfC50BF85F(); // @
  mf280C9438(); // -
  mf5F2B6B8B(); // HERE
  mfB58FC108(); // CELL-
  mf08DC01D1(); // +!
} // IMMEDIATE COMPILE-ONLY

void mfCC9D3437(void) { // : ALIAS
  mfE9EDB1DB(); // DEFER
  mf5F2B6B8B(); // HERE
  mfB58FC108(); // CELL-
  mf3B2F2C8E(); // DEFER!
}

void mfEA57B3EA(void) { // : SYNONYM
  mfE9EDB1DB(); // DEFER
  mf220C8AC6(); // '
  mf5F2B6B8B(); // HERE
  mfB58FC108(); // CELL-
  mf3B2F2C8E(); // DEFER!
}

void mfC499B67A(void) { // : [DEFINED]
  mfpush(MF20DD5D6B); // BL
  mf6D01E13D(); // WORD
  mfFB42BA5A(); // FIND
  mf63DECBC8(); // NIP
  mfDBAD15F5(); // 0<>
} // IMMEDIATE 

void mf3FBA9B29(void) { // : [UNDEFINED]
  mfC499B67A(); // [DEFINED]
  mf14ED5DD6(); // 0=
} // IMMEDIATE 

void mf47F43EC6(void) { // : [ELSE]
  mfpush(1); // $1
mfBEGIN
mfBEGIN
  mfpush(MF20DD5D6B); // BL
  mf6D01E13D(); // WORD
  mfA3F7B2D4(); // COUNT
  mf57E80646(); // DUP
mfWHILE
  mfE0839FF6(); // 2DUP
  mfspush("[IF]"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mf26EB3B95(); // 1+
mfELSE
  mfE0839FF6(); // 2DUP
  mfspush("[ELSE]"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mf20EB3223(); // 1-
  mf57E80646(); // DUP
mfIF
  mf26EB3B95(); // 1+
mfTHEN
mfELSE
  mfspush("[THEN]"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mf20EB3223(); // 1-
mfTHEN
mfTHEN
mfTHEN
  mf8003A4B3(); // ?DUP
mfNOTIF
mfEXIT
mfTHEN
mfREPEAT
  mfEF6476DC(); // 2DROP
  (MFC1D4E711)(); // REFILL
mfNOTIF
  mfpush(-39); // $FFFFFFD9
  (MFE5B4B40F)(); // THROW
mfTHEN
mfREPEAT
  mf52C16B0C(); // DROP
} // IMMEDIATE 

void mf1DE32B80(void) { // : [IF]
  mf14ED5DD6(); // 0=
mfIF
  mf47F43EC6(); // [ELSE]
mfTHEN
} // IMMEDIATE 

void mf633F5F98(void) { // : [THEN]
} // IMMEDIATE 

const mfCell MFAF4978BE=346; // 346

void mfAF4978BE(void) { // CONSTANT MINFORTH
  mfpush(MFAF4978BE);
}

void mf2A138099(void) { // : _NAME.
  mfC439E65E(); // _<CFA
  mf03D7EB73(); // _>NAME
  mfA3F7B2D4(); // COUNT
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
}

void mf68A478E2(void) { // : TRAVERSE-WORDLIST
  mf89F60699(); // 2>R
mfBEGIN
  mf130456D1(); // R>
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mfC50BF85F(); // @
mfWHILE
  mf7D04FDAF(); // R@
  mfpush(1); // $1
  mf982060C8(); // RPICK
  mfCF77DFB8(); // EXECUTE
mfNOTUNTIL
  mf34FF0561(); // 2R>
  mfEF6476DC(); // 2DROP
}

void mfD92BB8B1(void) { // : NAME>STRING
  mf03D7EB73(); // _>NAME
  mfA3F7B2D4(); // COUNT
}

void mf57EEA72D(void) { // : NAME>INTERPRET
  mf57E80646(); // DUP
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mfpush(2); // $2
  mf91666DC6(); // AND
mfIF
  mf52C16B0C(); // DROP
  mfpush(0); // $0
mfELSE
  mf74404CD4(); // _>CFA
mfTHEN
}

void mf96E72E3D(void) { // : NAME>COMPILE
  mf57E80646(); // DUP
  mf74404CD4(); // _>CFA
  mfA2DF200E(); // SWAP
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf91666DC6(); // AND
mfNOTIF
  mfpush(&mfdict[250].cfa); // ['] COMPILE,
mfTHEN
}

void mf07F5E02A(void) { // : WORDS
  mf64D9F6E0(); // CR
  mfpush(0); // $0
  mf82CE5579(); // _CONTEXT
  mfC50BF85F(); // @
  mfC50BF85F(); // @
mfBEGIN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
mfWHILE
  mf57E80646(); // DUP
  mfD92BB8B1(); // NAME>STRING
  mf142FE78D(); // TYPE
  mf1808F0E5(); // SPACE
  mf1808F0E5(); // SPACE
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mf26EB3B95(); // 1+
  mf57E80646(); // DUP
  mfpush(100); // $64
  mf380CAD68(); // =
mfIF
  mf64D9F6E0(); // CR
  mfprint("-- press SPACE to continue "); // S"
  (MFACCAE4CC)(); // KEY
  mfpush(32); // $20
  mf93F7201F(); // <>
mfIF
mfBREAK
mfTHEN
  mf52C16B0C(); // DROP
  mfpush(0); // $0
  mf64D9F6E0(); // CR
mfTHEN
  mfA2DF200E(); // SWAP
mfREPEAT
  mfEF6476DC(); // 2DROP
}

void mfDF63F90A(void) { // : SHOW-RECOGNIZERS
  mf64D9F6E0(); // CR
  mfprint("Recognizers:"); // S"
  mfpush(&MFB6918D28); // _RECLIST
  mfC50BF85F(); // @
  mf57E80646(); // DUP
mfNOTIF
  mf52C16B0C(); // DROP
mfEXIT
mfTHEN
mfBEGIN
  mf57E80646(); // DUP
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf280C9438(); // -
  mf64D9F6E0(); // CR
  mf2A138099(); // _NAME.
  mfprint(": "); // S"
  mf57E80646(); // DUP
  mfpush(3); // $3
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf2A138099(); // _NAME.
  mf1808F0E5(); // SPACE
  mfB58FC108(); // CELL-
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf2A138099(); // _NAME.
  mf1808F0E5(); // SPACE
  mfB58FC108(); // CELL-
  mfC50BF85F(); // @
  mf2A138099(); // _NAME.
  mfC50BF85F(); // @
  mf5F2B6B8B(); // HERE
  mf2FE7860F(); // OVER
  mf20EB3223(); // 1-
  mf0EF30764(); // U<
mfUNTIL
  mf52C16B0C(); // DROP
}

void mfB9B294E7(void) { // : SWAP-RECOGNIZER
  mf220C8AC6(); // '
  mf800A2691(); // >BODY
  mf67FCEB09(); // >R
  mfpush(&MFB6918D28); // _RECLIST
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf57E80646(); // DUP
mfNOTIF
  goto rs;
mfTHEN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
mfNOTIF
  rs:
  mf0807143C(); // RDROP
  mfpush(-21); // $FFFFFFEB
  (MFE5B4B40F)(); // THROW
mfTHEN
mfBEGIN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf7D04FDAF(); // R@
  mf380CAD68(); // =
mfIF
  mf130456D1(); // R>
  mf87E8362E(); // ROT
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf67FCEB09(); // >R
  mf87E8362E(); // ROT
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf87E8362E(); // ROT
  mf240C8DEC(); // !
  mf2FE7860F(); // OVER
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
  mf130456D1(); // R>
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
mfEXIT
mfTHEN
  mf57E80646(); // DUP
  mfC50BF85F(); // @
mfDUPWHILE
  mf87E8362E(); // ROT
  mf52C16B0C(); // DROP
mfREPEAT
  mfEF6476DC(); // 2DROP
  mf0807143C(); // RDROP
}

void mf7CD8E2E8(void) { // : <IN
  mf7A91D589(); // _SRCADR
  mfC50BF85F(); // @
  mfpush(&MFF939F00F); // _PARSED
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf280C9438(); // -
  mf580B1E42(); // >IN
  mf240C8DEC(); // !
}

void mfA3D4A70D(void) { // : ..
  (MFD2338EAD)(); // _RESET-STACKS
}

void mf66D44706(void) { // : .S
  mfCE61558A(); // DEPTH
mfFOR
  mfprintn(mfstk[fn+1]);
  mf1808F0E5(); // SPACE
mfNEXT
}

void mf3D2E95FE(void) { // : .RS
  mf3EC47269(); // _RDEPTH
mfFOR
  mfprintx(mfrst[fn+1]);
  mf1808F0E5(); // SPACE
mfNEXT
}

void mf35602632(void) { // : .FS
  mf017B185E(); // FDEPTH
mfFOR
  mfprintf(mffst[fn+1]);
  mf1808F0E5(); // SPACE
mfNEXT
}

void mfC6897287(void) { // : DUMP
  mf4B114CCB(); // VTBRIGHT
  mf430AE6BE(); // VTGREEN
  mfpush(4095); // $FFF
  mf91666DC6(); // AND
  mfpush(&MFE972DB58); // BASE
  mfC50BF85F(); // @
  mfEFF28235(); // -ROT
  mf818F192A(); // HEX
  mf2FE7860F(); // OVER
  mf2E0C9DAA(); // +
  mf2FE7860F(); // OVER
  mfpush(-16); // $FFFFFFF0
  mf91666DC6(); // AND
  mf64D9F6E0(); // CR
  mfprint("    Address:   "); // S"
  mfpush(16); // $10
mfFOR
mfN
  mf20F323BA(); // U.
  mf1808F0E5(); // SPACE
mfNEXT
  mfprint("0123456789ABCDEF"); // S"
mfBEGIN
  mfE0839FF6(); // 2DUP
  mf10F30A8A(); // U>
  mf4B114CCB(); // VTBRIGHT
  mf430AE6BE(); // VTGREEN
mfWHILE
  mf64D9F6E0(); // CR
  mf57E80646(); // DUP
  mfpush(12); // $C
  mfC6C18638(); // U.R
  mf1808F0E5(); // SPACE
  mf9C5DA170(); // VTNORMAL
  mfpush(124); // $7C
  mfD9BC5E8A(); // EMIT
  mf57E80646(); // DUP
  mf67FCEB09(); // >R
  mfpush(16); // $10
mfBEGIN
  mfA2DF200E(); // SWAP
  mf8C8BC01F(); // 2OVER
  mf6AB5854A(); // PLUCK
  mfEFF28235(); // -ROT
  mf09D242EA(); // WITHIN
mfIF
  mf57E80646(); // DUP
  mf76DA1336(); // C@
  mfpush(0); // $0
  mfA6F73E08(); // <#
  mf260C9112(); // #
  mf260C9112(); // #
  mf11C88844(); // #>
mfELSE
  mfspush("  "); // S"
mfTHEN
  mf142FE78D(); // TYPE
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mf20EB3223(); // 1-
  mf57E80646(); // DUP
  mfpush(4); // $4
  mf6453F3A3(); // MOD
mfIF
  mfpush(MF20DD5D6B); // BL
mfELSE
  mfpush(124); // $7C
mfTHEN
  mfD9BC5E8A(); // EMIT
  mf57E80646(); // DUP
mfNOTUNTIL
  mfEF6476DC(); // 2DROP
  mf1808F0E5(); // SPACE
  mf130456D1(); // R>
  mf4B114CCB(); // VTBRIGHT
  mfAFA0318C(); // VTCYAN
  mfpush(16); // $10
mfBEGIN
  mfA2DF200E(); // SWAP
  mf8C8BC01F(); // 2OVER
  mf6AB5854A(); // PLUCK
  mfEFF28235(); // -ROT
  mf09D242EA(); // WITHIN
mfIF
  mf57E80646(); // DUP
  mf76DA1336(); // C@
  mf57E80646(); // DUP
  mfpush(MF20DD5D6B); // BL
  mfpush(128); // $80
  mf09D242EA(); // WITHIN
  mf14ED5DD6(); // 0=
mfIF
  mf52C16B0C(); // DROP
  mfpush(46); // $2E
mfTHEN
  mfD9BC5E8A(); // EMIT
mfELSE
  mf1808F0E5(); // SPACE
mfTHEN
  mf26EB3B95(); // 1+
  mfA2DF200E(); // SWAP
  mf20EB3223(); // 1-
  mf57E80646(); // DUP
mfNOTUNTIL
  mf52C16B0C(); // DROP
mfREPEAT
  mfEF6476DC(); // 2DROP
  mf52C16B0C(); // DROP
  mfpush(&MFE972DB58); // BASE
  mf240C8DEC(); // !
  mf9C5DA170(); // VTNORMAL
}

void mf27EBD594(void) { // : __SEE-PAR
  mf7D04FDAF(); // R@
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mfpush(0); // $0
  mf67D44899(); // .R
}

void mf23815188(void) { // : __SEE-COLON
mfBEGIN
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mfC50BF85F(); // @
mfWHILE
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mf2A138099(); // _NAME.
  mfC50BF85F(); // @
mfCASE
  mfpush(&mfdict[211].cfa); // ['] _[LIT]
  mfC50BF85F(); // @
mfOF
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf3A0CB08E(); // ?
mfENDOF
  mfpush(&mfdict[696].cfa); // ['] _[L]
  mfC50BF85F(); // @
mfOF
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf3A0CB08E(); // ?
mfENDOF
  mfpush(&mfdict[694].cfa); // ['] _[L:]
  mfC50BF85F(); // @
mfOF
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf3A0CB08E(); // ?
mfENDOF
  mfpush(&mfdict[627].cfa); // ['] _[FLIT]
  mfC50BF85F(); // @
mfOF
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mf84D36D7B(); // F@
  mf22D2D335(); // F.
  mfF30EBC8A(); // FLOAT+
mfENDOF
  mfpush(&mfdict[267].cfa); // ['] _[JMP]
  mfC50BF85F(); // @
mfOF
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf3A0CB08E(); // ?
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mf13ED5C43(); // 0>
  mf2FE7860F(); // OVER
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf14ED5DD6(); // 0=
  mf91666DC6(); // AND
mfIF
  mfprint("[: "); // S"
  mfpush(5); // $5
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf23815188(); // __SEE-COLON
  mfup;
  mfprint(";] "); // S"
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
mfTHEN
mfENDOF
  mfpush(&mfdict[268].cfa); // ['] _[JMPZ]
  mfC50BF85F(); // @
mfOF
  mfBB8FCA7A(); // CELL+
  mf57E80646(); // DUP
  mf3A0CB08E(); // ?
mfENDOF
  mfpush(&mfdict[257].cfa); // ['] _[SLIT]
  mfC50BF85F(); // @
mfOF
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mfA3F7B2D4(); // COUNT
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
  mf142FE78D(); // TYPE
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
  mf1808F0E5(); // SPACE
  mf57E80646(); // DUP
  mfBB8FCA7A(); // CELL+
  mf76DA1336(); // C@
  mfpush(2); // $2
  mf2E0C9DAA(); // +
  mf901B2AFF(); // ALIGNED
  mf2E0C9DAA(); // +
mfENDOF
  mfpush(&mfdict[305].cfa); // ['] _<DOES
  mfC50BF85F(); // @
mfOF
  mfprint("; : "); // S"
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
mfENDOF
mfENDCASE
mfREPEAT
  mf52C16B0C(); // DROP
}

void mf6B7D8387(void) { // : XT-SEE
  mf67FCEB09(); // >R
  mf64D9F6E0(); // CR
  mf7D04FDAF(); // R@
  mf12E2D898(); // _ORIGIN
  mf0EF30764(); // U<
mfIF
  mfprint("C "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
mfELSE
  mf7D04FDAF(); // R@
  mfC50BF85F(); // @
mfCASE
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
mfOF
  mfprint(": "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mf7D04FDAF(); // R@
  mf23815188(); // __SEE-COLON
  mfprint("; "); // S"
mfENDOF
  mfpush(&mfdict[303].cfa); // ['] _[CREATE]
  mfC50BF85F(); // @
mfOF
  mfprint("CREATE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mfprint("( "); // S"
  mf7D04FDAF(); // R@
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf2B0C98F1(); // .
  mfprint("<DOES "); // S"
  mf7D04FDAF(); // R@
  mfBB8FCA7A(); // CELL+
  mfC50BF85F(); // @
  mf23815188(); // __SEE-COLON
  mfprint(") "); // S"
mfENDOF
  mfpush(&mfdict[297].cfa); // ['] _[VAR]
  mfC50BF85F(); // @
mfOF
  mfprint("VARIABLE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mfpush(91); // $5B
  mfD9BC5E8A(); // EMIT
  mf27EBD594(); // __SEE-PAR
  mfpush(93); // $5D
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(&mfdict[301].cfa); // ['] _[BUF]
  mfC50BF85F(); // @
mfOF
  mf27EBD594(); // __SEE-PAR
  mfprint(" BUFFER: "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
mfENDOF
  mfpush(&mfdict[299].cfa); // ['] _[CONST]
  mfC50BF85F(); // @
mfOF
  mf27EBD594(); // __SEE-PAR
  mfprint(" CONSTANT "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
mfENDOF
  mfpush(&mfdict[318].cfa); // ['] _[DEFER]
  mfC50BF85F(); // @
mfOF
  mfprint("DEFER "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mfprint("IS "); // S"
  mf7D04FDAF(); // R@
  mfC439E65E(); // _<CFA
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mfpush(-4); // $FFFFFFFC
  mf91666DC6(); // AND
  mf2A138099(); // _NAME.
mfENDOF
  mfpush(&mfdict[313].cfa); // ['] _[VAL]
  mfC50BF85F(); // @
mfOF
  mf7D04FDAF(); // R@
  mfpush(4); // $4
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mf7D04FDAF(); // R@
  mfpush(2); // $2
  mf838F7252(); // CELLS
  mf2E0C9DAA(); // +
  mfC50BF85F(); // @
mfCASE
  mfpush(&mfdict[102].cfa); // ['] !
mfOF
  mfprint("VALUE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mfC50BF85F(); // @
  mfpush(91); // $5B
  mfD9BC5E8A(); // EMIT
  mfpush(0); // $0
  mf67D44899(); // .R
  mfpush(93); // $5D
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(&mfdict[107].cfa); // ['] 2!
mfOF
  mfprint("2VALUE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mf3DF21B8F(); // 2@
  mfpush(91); // $5B
  mfD9BC5E8A(); // EMIT
  mfpush(0); // $0
  mf1FD1E7CF(); // D.R
  mfpush(93); // $5D
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(&mfdict[598].cfa); // ['] F!
mfOF
  mfprint("FVALUE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mf84D36D7B(); // F@
  mfprint("[ "); // S"
  mf22D2D335(); // F.
  mfpush(93); // $5D
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(&mfdict[649].cfa); // ['] Z!
mfOF
  mfprint("ZVALUE "); // S"
  mf7D04FDAF(); // R@
  mf2A138099(); // _NAME.
  mf57E80646(); // DUP
  mf84D36D7B(); // F@
  mfF30EBC8A(); // FLOAT+
  mf84D36D7B(); // F@
  mfprint("[ "); // S"
  mf22D2D335(); // F.
  mf22D2D335(); // F.
  mfpush(93); // $5D
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(-342); // $FFFFFEAA
  (MFE5B4B40F)(); // THROW
mfENDCASE
mfENDOF
  mfpush(-340); // $FFFFFEAC
  (MFE5B4B40F)(); // THROW
mfENDCASE
mfTHEN
  mf130456D1(); // R>
  mfC439E65E(); // _<CFA
  mf4B2037E9(); // _>PFA
  mfC50BF85F(); // @
  mf57E80646(); // DUP
  mfpush(1); // $1
  mf91666DC6(); // AND
mfIF
  mfprint(" IMMEDIATE"); // S"
mfTHEN
  mfpush(2); // $2
  mf91666DC6(); // AND
mfIF
  mfprint(" COMPILE-ONLY"); // S"
mfTHEN
}

void mf38016820(void) { // : SEE
  mf220C8AC6(); // '
  mf6B7D8387(); // XT-SEE
}

mfCell MF571B6828=0; // 0

void mf571B6828(void) { // VARIABLE __DEBFLAG
  mfpush(&MF571B6828);
}

mfCell MF1510CB2A=0; // 0

void mf1510CB2A(void) { // VARIABLE __DEBXT
  mfpush(&MF1510CB2A);
}

void mfD375B113(void) { // : __DEBLIT
  mfprintn(mfat(mfip));
}

void mf4C847914(void) { // : __DEBSTEP
  static int xf=0, rf=0;  
 deb:  
  mfpush(&MF571B6828); // __DEBFLAG
  mfC50BF85F(); // @
mfNOTIF
mfEXIT
mfTHEN
  mf64D9F6E0(); // CR
  mfemit('$'), mfprintux((mfCell)(mfip-1)), mfprint(": "), mfStacks(xf,rf);  
  mfprint(xf<0?"deb$ ":"deb# ");  
  mfpush(mfat(mfip-1));
mfDUPIF
  mf57E80646(); // DUP
  mf2A138099(); // _NAME.
mfELSE
  mf52C16B0C(); // DROP
mfEXIT
mfTHEN
mfCASE
  mfpush(&mfdict[211].cfa); // ['] _[LIT]
mfOF
  mfD375B113(); // __DEBLIT
mfENDOF
  mfpush(&mfdict[267].cfa); // ['] _[JMP]
mfOF
  mfD375B113(); // __DEBLIT
mfENDOF
  mfpush(&mfdict[268].cfa); // ['] _[JMPZ]
mfOF
  mfD375B113(); // __DEBLIT
mfENDOF
  mfpush(&mfdict[257].cfa); // ['] _[SLIT]
mfOF
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
  mfprint((char*)mfip+1);
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
mfENDOF
  mfpush(&mfdict[627].cfa); // ['] _[FLIT]
mfOF
  mfprintf(mffat(mfip));
mfENDOF
  mfpush(&mfdict[696].cfa); // ['] _[L]
mfOF
  mfD375B113(); // __DEBLIT
mfENDOF
  mfpush(&mfdict[694].cfa); // ['] _[L:]
mfOF
  mfD375B113(); // __DEBLIT
mfENDOF
mfENDCASE
  mf2345CC3A(); // __KEY
  mf1808F0E5(); // SPACE
mfCASE
  mfpush(100); // $64
mfOF
  mfprint("<decimal>"); // S"
  xf=0; goto deb;
mfENDOF
  mfpush(120); // $78
mfOF
  mfprint("<hex>"); // S"
  xf=-1; goto deb;
mfENDOF
  mfpush(114); // $72
mfOF
  mfprint("<r: on/off>"); // S"
  rf^=-1; goto deb;
mfENDOF
  mfpush(116); // $74
mfOF
  mfprint("<type>"); // S"
  mf1808F0E5(); // SPACE
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
  mftype(mfsec,mftos&127);
  mfpush(34); // $22
  mfD9BC5E8A(); // EMIT
  goto deb;
mfENDOF
  mfpush(113); // $71
mfOF
  mfprint("<quit>"); // S"
  mfpush(&MF571B6828); // __DEBFLAG
  mf2E1505EA(); // OFF
mfENDOF
  mfpush(101); // $65
mfOF
  mfprint("<exit> "); // S"
  mfpush(&MF571B6828); // __DEBFLAG
  mf2E1505EA(); // OFF
  mfw=0;
mfENDOF
  mfpush(117); // $75
mfOF
  mfprint("<unbug> "); // S"
  mfpush(&MF571B6828); // __DEBFLAG
  mf2E1505EA(); // OFF
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
  mfpush(&MF1510CB2A); // __DEBXT
  mfC50BF85F(); // @
  mf240C8DEC(); // !
mfENDOF
  mfpush(104); // $68
mfOF
  mfprint("<Help Decimal heX Type Rstack Quit Exit Unbug"); // S"
  goto deb;
mfENDOF
  mfpush(27); // $1B
mfOF
  mfprint("<esc>"); // S"
  mfpush(&MF571B6828); // __DEBFLAG
  mf2E1505EA(); // OFF
mfENDOF
mfENDCASE
}

void mfFBBF5FA7(void) { // : _[DEB:]
  mferr(mfrout(1));  
  mfrpush(mfip); mfip=(mfXT**)mfw+1;  
  mfpush(&MF571B6828); // __DEBFLAG
  mf80E4B050(); // ON
  mfpush(mfw);
  mfpush(&MF1510CB2A); // __DEBXT
  mf240C8DEC(); // !
  while(mfw=*mfip++,mfw) {  
  mf4C847914(); // __DEBSTEP
  (*mfw)(); } // MinForth VM  
  mfip=(mfXT**)mfrpop();
}

void mf0EE95A7D(void) { // : _UNBUG
  mf57E80646(); // DUP
  mf74404CD4(); // _>CFA
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[769].cfa); // ['] _[DEB:]
  mfC50BF85F(); // @
  mf380CAD68(); // =
mfIF
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
mfELSE
  mf52C16B0C(); // DROP
mfTHEN
}

void mf4C2C9E72(void) { // : UNBUG-ALL
  mfpush(&mfdict[770].cfa); // ['] _UNBUG
  mfE345B847(); // _CURRENT
  mfC50BF85F(); // @
  mf68A478E2(); // TRAVERSE-WORDLIST
}

void mf7E05BCA0(void) { // : UNBUG
  mf220C8AC6(); // '
  mfC439E65E(); // _<CFA
  mf0EE95A7D(); // _UNBUG
  mf52C16B0C(); // DROP
}

void mf685108F8(void) { // : DEBUG
  mf220C8AC6(); // '
  mf57E80646(); // DUP
  mfC50BF85F(); // @
  mfpush(&mfdict[245].cfa); // ['] _[:]
  mfC50BF85F(); // @
  mf93F7201F(); // <>
mfIF
  mf52C16B0C(); // DROP
  mfpush(-341); // $FFFFFEAB
  (MFE5B4B40F)(); // THROW
mfEXIT
mfTHEN
  mfpush(&mfdict[769].cfa); // ['] _[DEB:]
  mfC50BF85F(); // @
  mfA2DF200E(); // SWAP
  mf240C8DEC(); // !
}

void mf5E9C0268(void) { // : __TEXCCODE
mfCASE
  mfpush(-340); // $FFFFFEAC
mfOF
  mfprint("unknown execution token"); // S"
mfEXIT
mfENDOF
  mfpush(-341); // $FFFFFEAB
mfOF
  mfprint("no colon definition"); // S"
mfEXIT
mfENDOF
  mfpush(-342); // $FFFFFEAA
mfOF
  mfprint("unknown value type"); // S"
mfEXIT
mfENDOF
  mf57E80646(); // DUP
mfENDCASE
  mf8187DB0E(); // __BLEXCMSG
}

void mfEBCBC8AA(void) { // : __TENVIRONMENT
  mfE0839FF6(); // 2DUP
  mfspush("TOOLS"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MF501B0925); // TRUE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mfE0839FF6(); // 2DUP
  mfspush("TOOLS-EXT"); // S"
  mfA7AD15F7(); // STR=
mfIF
  mfEF6476DC(); // 2DROP
  mfpush(MFEE597878); // FALSE
  mfpush(MF501B0925); // TRUE
mfEXIT
mfTHEN
  mf567914F7(); // __BLENVIRONMENT?
}

mfCell MFDD0C1E27=5; // 5

void mfDD0C1E27(void) { // VARIABLE X
  mfpush(&MFDD0C1E27);
}

const mfCell MFF0EB79A1=5; // 5

void mfF0EB79A1(void) { // CONSTANT FIRST
  mfpush(MFF0EB79A1);
}

void mfA7E14EE4(void) { // : RESULT
  mfprint("Result: "); // S"
  mf2B0C98F1(); // .
  mf64D9F6E0(); // CR
}

void mf9B986251(void) { // : CALC_SUM_PLUS_5_5
  mf2E0C9DAA(); // +
  mfpush(&MFDD0C1E27); // X
  mfC50BF85F(); // @
  mf2E0C9DAA(); // +
  mfpush(MFF0EB79A1); // FIRST
  mf2E0C9DAA(); // +
  mfA7E14EE4(); // RESULT
}

void mfE4FB099E(void) { // : INCREMENT
  mfpush(1); // $1
  mf2E0C9DAA(); // +
}

void mf9AF12F6E(void) { // : CHECK_LARGER_THAN_20
  mf57E80646(); // DUP
  mfpush(20); // $14
  mf3B0CB221(); // >
mfIF
  mf2B0C98F1(); // .
  mfprint("Larger than 20"); // S"
  mf64D9F6E0(); // CR
mfELSE
  mf2B0C98F1(); // .
  mfprint("Not larger than 20"); // S"
  mf64D9F6E0(); // CR
mfTHEN
}

mfCell MF04D308C3=0; // 0

void mf04D308C3(void) { // VARIABLE COUNTER
  mfpush(&MF04D308C3);
}

void mfB186312A(void) { // : WHILE_LOOP_TEST
  mf57E80646(); // DUP
  mfpush(&MF04D308C3); // COUNTER
  mf240C8DEC(); // !
  mfprint("Starting while loop with: "); // S"
  mfpush(&MF04D308C3); // COUNTER
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
  mf64D9F6E0(); // CR
mfBEGIN
  mfpush(&MF04D308C3); // COUNTER
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf93F7201F(); // <>
mfWHILE
  mfpush(&MF04D308C3); // COUNTER
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
  mf64D9F6E0(); // CR
  mfpush(&MF04D308C3); // COUNTER
  mfC50BF85F(); // @
  mfpush(1); // $1
  mf280C9438(); // -
  mfpush(&MF04D308C3); // COUNTER
  mf240C8DEC(); // !
mfREPEAT
  mfprint("Done"); // S"
  mf64D9F6E0(); // CR
  mfpush(&MF04D308C3); // COUNTER
  mfC50BF85F(); // @
}

mfCell MF1CAF194F=0; // 0

void mf1CAF194F(void) { // VARIABLE RESULT1
  mfpush(&MF1CAF194F);
}

void mf22CA2F63(void) { // : INIT-SYSTEM
  mfprint("Initializing system..."); // S"
  mf64D9F6E0(); // CR
}

void mf79F2F113(void) { // : CLEANUP
  mfprint("Cleaning up..."); // S"
  mf64D9F6E0(); // CR
}

void mf96272888(void) { // : MAIN
  mf22CA2F63(); // INIT-SYSTEM
  mfpush(5); // $5
  mfE4FB099E(); // INCREMENT
  mfpush(&MF1CAF194F); // RESULT1
  mf240C8DEC(); // !
  mfpush(22); // $16
  mfE4FB099E(); // INCREMENT
  mf9AF12F6E(); // CHECK_LARGER_THAN_20
  mfpush(22); // $16
  mfB186312A(); // WHILE_LOOP_TEST
  mfpush(&MF1CAF194F); // RESULT1
  mf240C8DEC(); // !
  mfpush(&MF1CAF194F); // RESULT1
  mfC50BF85F(); // @
  mf2B0C98F1(); // .
  mfprint("Result from while loop"); // S"
  mf64D9F6E0(); // CR
  mfpush(5); // $5
  mfpush(5); // $5
  mf9B986251(); // CALC_SUM_PLUS_5_5
  mf79F2F113(); // CLEANUP
  (MFB6A8BBC3)(); // BYE
}

// --- C Main ---
int main(int argc, char *argv[]) {
    /* alloc stacks, pass args */
    mfstk = malloc((1+mfstksize)*MFSIZE); mfsp = mfstk;
    mflp  = mfstk + mfstksize;
    mfrst = malloc((1+mfrstsize)*MFSIZE); mfrp = mfrst;
    mffst = malloc((1+mffstsize)*MFSIZE*MFFLTSIZE); mffp = mffst;
    mfargc = argc; mfargv = argv;
    mfinit();               // init the Forth VM
    if (setjmp(mfabort)==0) {
        mf96272888(); // MAIN
    }
    mfexit();      // tidy up once
    return 0;
}

// --- End of generated C ---
