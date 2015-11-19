/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */
extern  char *genome_file;
extern  char *read_file;
extern  char reads[10][101];
extern  char ref_genome[1000001];
extern signed long long best_fits[10];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void copy_base_pairs( char *llvm_cbe_dest,  char *llvm_cbe_src, signed int llvm_cbe_len);
void init(void);
signed int main(void);
signed int needlemanWunsch();


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str1[30] = "../../../long_sequences.fastq";
 char *read_file = ((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]));
static  char aesl_internal__OC_str[30] = "../../../long_reference.fasta";
 char *genome_file = ((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]));
static  char aesl_internal__OC_str2[26] = "Unrecognized character %c";
 char ref_genome[1000001] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str3[2] = "r";
static  char aesl_internal__OC_str4[30] = "Could not open read file, %d\n";
 char reads[10][101] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str5[29] = "Could not open ref file, %d\n";
static  char aesl_internal__OC_str6[62] = "Input file too big!, i=%d, index=%lld, strlen(ref_line)=%lld\n";
signed long long best_fits[10] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str7[33] = "READ #%d - Best fit at index %d\n";


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void copy_base_pairs( char *llvm_cbe_dest,  char *llvm_cbe_src, signed int llvm_cbe_len) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned char llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
   char *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @copy_base_pairs\n");
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__11;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__11:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 0, %%0 ], [ %%19, %%18  for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__10);
}
  if ((((signed int )llvm_cbe_storemerge) < ((signed int )llvm_cbe_len))) {
    goto llvm_cbe_tmp__12;
  } else {
    goto llvm_cbe_tmp__13;
  }

llvm_cbe_tmp__14:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%storemerge, 1, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__10 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__10&4294967295ull)));
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__10;   /* for PHI node */
  goto llvm_cbe_tmp__11;

llvm_cbe_tmp__15:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i2* %%dest, i64 %%4, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__5 = ( char *)(&llvm_cbe_dest[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i2 0, i2* %%9, align 1, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_29_count);
  *llvm_cbe_tmp__5 = ((((unsigned char )0)) & 3ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
  goto llvm_cbe_tmp__14;

llvm_cbe_tmp__12:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge to i64, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%src, i64 %%4, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__2 = ( char *)(&llvm_cbe_src[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__3 = (unsigned char )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i8 %%6 to i32, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__4 = (unsigned int )((signed int )( char )llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
  switch (((unsigned int )(llvm_cbe_tmp__4&4294967295ull))) {
  default:
    goto llvm_cbe_tmp__16;
;
  case ((unsigned int )(65u&4294967295ull)):
    goto llvm_cbe_tmp__15;
    break;
  case ((unsigned int )(71u&4294967295ull)):
    goto llvm_cbe_tmp__17;
  case ((unsigned int )(67u&4294967295ull)):
    goto llvm_cbe_tmp__18;
  case ((unsigned int )(84u&4294967295ull)):
    goto llvm_cbe_tmp__19;
  }
llvm_cbe_tmp__17:
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i2* %%dest, i64 %%4, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__6 = ( char *)(&llvm_cbe_dest[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i2 1, i2* %%11, align 1, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_32_count);
  *llvm_cbe_tmp__6 = ((((unsigned char )1)) & 3ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )1));
  goto llvm_cbe_tmp__14;

llvm_cbe_tmp__18:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i2* %%dest, i64 %%4, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__7 = ( char *)(&llvm_cbe_dest[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i2 -2, i2* %%13, align 1, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_35_count);
  *llvm_cbe_tmp__7 = ((((unsigned char )2u)) & 3ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )2u));
  goto llvm_cbe_tmp__14;

llvm_cbe_tmp__19:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i2* %%dest, i64 %%4, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__8 = ( char *)(&llvm_cbe_dest[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i2 -1, i2* %%15, align 1, !dbg !6 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_38_count);
  *llvm_cbe_tmp__8 = ((((unsigned char )-1)) & 3ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )-1));
  goto llvm_cbe_tmp__14;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__16:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([26 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32 %%7) nounwind, !dbg !7 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_40_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 26
#endif
])), llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__4);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @exit(i32 1) noreturn nounwind, !dbg !8 for 0x%I64xth hint within @copy_base_pairs  --> \n", ++aesl_llvm_cbe_41_count);
   /*tail*/ exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
llvm_cbe_tmp__13:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @copy_base_pairs}\n");
  return;
}


void init(void) {
  static  unsigned long long aesl_llvm_cbe_read_line_count = 0;
   char llvm_cbe_read_line[200];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ref_line_count = 0;
   char llvm_cbe_ref_line[200];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  signed int *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
   char *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge5_count = 0;
  unsigned int llvm_cbe_storemerge5;
  unsigned int llvm_cbe_storemerge5__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
   char *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned char llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned char llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
   char *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  signed int *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
   char *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  signed int *llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  unsigned long long llvm_cbe_tmp__43__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
   char *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned long long llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  unsigned long long llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned long long llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
   char *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @init\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i32* @_errno() nounwind, !dbg !6 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__20 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%1, align 4, !dbg !6 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_50_count);
  *llvm_cbe_tmp__20 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8** @read_file, align 8, !dbg !6 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__21 = ( char *)*(&read_file);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call %%struct._iobuf* @fopen(i8* %%2, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str3, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__22 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__21, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__22);
}
  if (((llvm_cbe_tmp__22) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__57;
  } else {
    goto llvm_cbe__2e_preheader4;
  }

llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [200 x i8]* %%read_line, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__23 = ( char *)(&llvm_cbe_read_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 200
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__58;

llvm_cbe_tmp__57:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32* @_errno() nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__24 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i32* %%7, align 4, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__25 = (unsigned int )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 %%8) nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_75_count);
  printf(( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_76_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__58:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge5 = phi i32 [ 0, %%.preheader4 ], [ %%20, %%._crit_edge  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge5_count);
  llvm_cbe_storemerge5 = (unsigned int )llvm_cbe_storemerge5__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge5 = 0x%X",llvm_cbe_storemerge5);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !8 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_78_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__23, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__27);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 200)) fprintf(stderr, "%s:%d: warning: Read access out of array 'read_line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%5, align 16, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__28 = (unsigned char )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
  if (((llvm_cbe_tmp__28&255U) == (((unsigned char )64)&255U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !8 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_86_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__23, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__31);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%storemerge5 to i64, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__32 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [10 x [101 x i2]]* @reads, i64 0, i64 %%18, i64 0, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__33 = ( char *)(&reads[(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @copy_base_pairs(i2* %%19, i8* %%5, i32 100), !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_89_count);
  copy_base_pairs(( char *)llvm_cbe_tmp__33, ( char *)llvm_cbe_tmp__23, 100u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",100u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge5, 1, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__34 = (unsigned int )((unsigned int )(llvm_cbe_storemerge5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__34&4294967295ull)));
  if (((llvm_cbe_tmp__34&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__59;
  } else {
    llvm_cbe_storemerge5__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__34;   /* for PHI node */
    goto llvm_cbe_tmp__58;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !8 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_82_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__23, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__29);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 200)) fprintf(stderr, "%s:%d: warning: Read access out of array 'read_line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%5, align 16, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__30 = (unsigned char )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
  if (((llvm_cbe_tmp__30&255U) == (((unsigned char )64)&255U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__59:
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 @fclose(%%struct._iobuf* %%3) nounwind, !dbg !8 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_100_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i32* @_errno() nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__36 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%23, align 4, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_102_count);
  *llvm_cbe_tmp__36 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8** @genome_file, align 8, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__37 = ( char *)*(&genome_file);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = call %%struct._iobuf* @fopen(i8* %%24, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str3, i64 0, i64 0)) nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__38 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__37, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__38);
}
  if (((llvm_cbe_tmp__38) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__60;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [200 x i8]* %%ref_line, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_ref_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 200
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_tmp__43__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__61;

llvm_cbe_tmp__60:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = call i32* @_errno() nounwind, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__40 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i32* %%29, align 4, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__41 = (unsigned int )*llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_.str5, i64 0, i64 0), i32 %%30) nounwind, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_120_count);
  printf(( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__41);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__42);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_121_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__61:
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = phi i64 [ %%49, %%45 ], [ 0, %%.preheader  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__43 = (unsigned long long )llvm_cbe_tmp__43__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__43);
printf("\n = 0x%I64X",llvm_cbe_tmp__54);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ %%50, %%45 ], [ 0, %%.preheader  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",llvm_cbe_tmp__55);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge1) < ((signed int )10000u))) {
    goto llvm_cbe_tmp__62;
  } else {
    goto llvm_cbe_tmp__63;
  }

llvm_cbe_tmp__64:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = mul nsw i32 %%storemerge1, 100, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__51 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(100u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__51&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = sext i32 %%46 to i64, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__52 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [1000001 x i2]* @ref_genome, i64 0, i64 %%47, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__53 = ( char *)(&ref_genome[(((signed long long )llvm_cbe_tmp__52))
#ifdef AESL_BC_SIM
 % 1000001
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__52));
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @copy_base_pairs(i2* %%48, i8* %%27, i32 100), !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_147_count);
  copy_base_pairs(( char *)llvm_cbe_tmp__53, ( char *)llvm_cbe_tmp__39, 100u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",100u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add i64 %%33, 100, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__54 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__43&18446744073709551615ull)) + ((unsigned long long )(100ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__54&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
  llvm_cbe_tmp__43__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__54;   /* for PHI node */
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__55;   /* for PHI node */
  goto llvm_cbe_tmp__61;

llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = call i8* @fgets(i8* %%27, i32 200, %%struct._iobuf* %%25) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_133_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__39, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__44);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i32 @strlen(i8* %%27) nounwind readonly, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__45 = (unsigned int )strlen(( char *)llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__45);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = zext i32 %%37 to i64, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__46 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__45&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add i64 %%33, -1, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__47 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__43&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__47&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i64 %%39, %%38, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__48 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__47&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__46&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__48&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__48&18446744073709551615ULL) > ((unsigned long long )1000000ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__65;
  } else {
    goto llvm_cbe_tmp__64;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__65:
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add i32 %%37, -1, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__49 = (unsigned int )((unsigned int )(llvm_cbe_tmp__45&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__49&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([62 x i8]* @aesl_internal_.str6, i64 0, i64 0), i32 %%storemerge1, i64 %%33, i32 %%43) nounwind, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_141_count);
  printf(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 62
#endif
])), llvm_cbe_storemerge1, llvm_cbe_tmp__43, llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__43);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__49);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_142_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
llvm_cbe_tmp__63:
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = call i32 @fclose(%%struct._iobuf* %%25) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_156_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__56);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @init}\n");
  return;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned int llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  unsigned long long llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned long long llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned long long llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  unsigned long long llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned long long llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @init(), !dbg !5 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
   /*tail*/ init();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 0, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__66 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__66);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%1 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__67 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%2, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 0), align 16, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_168_count);
  *((&best_fits[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 0, i64 %%2) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_169_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 0u, llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__67);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 1, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__69 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__69);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%4 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__70 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%5, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 1), align 8, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_179_count);
  *((&best_fits[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 1, i64 %%5) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_180_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 1u, llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__70);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__71);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 2, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__72 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__73 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%8, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 2), align 16, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_190_count);
  *((&best_fits[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 2, i64 %%8) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_191_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 2u, llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__73);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__74);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 3, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__75 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%10 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__76 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%11, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 3), align 8, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_201_count);
  *((&best_fits[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 3, i64 %%11) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_202_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 3u, llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__76);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 4, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__78 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__78);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__79 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%14, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 4), align 16, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_212_count);
  *((&best_fits[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__79;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 4, i64 %%14) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_213_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 4u, llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__79);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 5, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__81 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__81);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = sext i32 %%16 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__82 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%17, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 5), align 8, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_223_count);
  *((&best_fits[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 5, i64 %%17) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_224_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 5u, llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",5u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__82);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__83);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 6, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__84 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__84);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = sext i32 %%19 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__85 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%20, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 6), align 16, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_234_count);
  *((&best_fits[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 6, i64 %%20) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_235_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 6u, llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",6u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__85);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__86);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 7, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_243_count);
  llvm_cbe_tmp__87 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__87);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = sext i32 %%22 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__88 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%23, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 7), align 8, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_245_count);
  *((&best_fits[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 7, i64 %%23) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_246_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 7u, llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",7u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__88);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 8, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__90 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__91 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%26, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 8), align 16, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_256_count);
  *((&best_fits[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 8, i64 %%26) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_257_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 8u, llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",8u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__91);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__92);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i2*, i2*)*)(i2* getelementptr inbounds ([10 x [101 x i2]]* @reads, i64 0, i64 9, i64 0), i2* getelementptr inbounds ([1000001 x i2]* @ref_genome, i64 0, i64 0)) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__93 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)((&reads[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
])), ( char *)((&ref_genome[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1000001
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__93);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i32 %%28 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__94 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%29, i64* getelementptr inbounds ([10 x i64]* @best_fits, i64 0, i64 9), align 8, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_267_count);
  *((&best_fits[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])) = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str7, i64 0, i64 0), i32 9, i64 %%29) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_268_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 9u, llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",9u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__94);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__95);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}

