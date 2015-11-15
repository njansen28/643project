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

/* External Global Variable Declarations */
extern unsigned int max_orig;
extern unsigned int max_score;
extern signed int best_fits[10];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int needlemanWunsch( char *llvm_cbe_reads,  char llvm_cbe_ref_genome, signed int *llvm_cbe_orig_in, signed int *llvm_cbe_orig_out,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed int llvm_cbe_i);


/* Global Variable Definitions and Initialization */
unsigned int max_orig __ATTRIBUTE_WEAK__;
unsigned int max_score __ATTRIBUTE_WEAK__;
signed int best_fits[10] __ATTRIBUTE_WEAK__;


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

signed int needlemanWunsch( char *llvm_cbe_reads,  char llvm_cbe_ref_genome, signed int *llvm_cbe_orig_in, signed int *llvm_cbe_orig_out,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed int llvm_cbe_i) {
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
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
   char *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  unsigned char llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned long long llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned char llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
   char *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  unsigned char llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_v_count = 0;
  unsigned int llvm_cbe_storemerge1_2e_v;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned char llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
   char *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  signed int *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  signed int *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond2_count = 0;
  bool llvm_cbe_or_2e_cond2;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned char llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
   char *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  signed int *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned char llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
   char *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  signed int *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  signed int *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned char llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  signed int *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @needlemanWunsch\n");
  if (((llvm_cbe_i&4294967295U) == (1u&4294967295U))) {
    goto llvm_cbe_tmp__40;
  } else {
    goto llvm_cbe_tmp__41;
  }

llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* @max_orig, align 4, !dbg !8 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_28_count);
  *(&max_orig) = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 -100, i32* @max_score, align 4, !dbg !8 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_29_count);
  *(&max_score) = 4294967196u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 4294967196u);
  goto llvm_cbe_tmp__41;

llvm_cbe_tmp__41:
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__42;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__42:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 1, %%3 ], [ %%47, %%46  for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__32);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i32 %%storemerge3, -1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__1 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i32 %%5 to i64, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__2 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%score_in, i64 %%6, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__3 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__4 = (unsigned char )*llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i8 %%8 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__5 = (unsigned int )((signed int )( char )llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i32 %%storemerge3 to i64, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__6 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge3&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%score_in, i64 %%10, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__7 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__8 = (unsigned char )*llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i8 %%12 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__9 = (unsigned int )((signed int )( char )llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%score_out, i64 %%6, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__10 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%14, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__11 = (unsigned char )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i8 %%15 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__12 = (unsigned int )((signed int )( char )llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds i8* %%reads, i64 %%6, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__13 = ( char *)(&llvm_cbe_reads[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%17, align 1, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__14 = (unsigned char )*llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.v = select i1 %%19, i32 1, i32 -1, !dbg !10 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_storemerge1_2e_v_count);
  llvm_cbe_storemerge1_2e_v = (unsigned int )((((llvm_cbe_tmp__14&255U) == (llvm_cbe_ref_genome&255U))) ? ((unsigned int )1u) : ((unsigned int )4294967295u));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.v = 0x%X\n", llvm_cbe_storemerge1_2e_v);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = add i32 %%storemerge1.v, %%9, !dbg !10 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1_2e_v&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__5&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%X\n", ((unsigned int )(llvm_cbe_storemerge1&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%16, -1, !dbg !9 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%13, -1, !dbg !9 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(llvm_cbe_tmp__9&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__16&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%22, %%23, !dbg !10 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_storemerge1) < ((signed int )llvm_cbe_tmp__15)) | (((signed int )llvm_cbe_storemerge1) < ((signed int )llvm_cbe_tmp__16)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__43;
  } else {
    goto llvm_cbe_tmp__44;
  }

llvm_cbe_tmp__45:
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add i32 %%storemerge3, 1, !dbg !9 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
  if (((llvm_cbe_tmp__32&4294967295U) == (101u&4294967295U))) {
    goto llvm_cbe_tmp__46;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__32;   /* for PHI node */
    goto llvm_cbe_tmp__42;
  }

llvm_cbe_tmp__44:
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = trunc i32 %%storemerge1 to i8, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__17 = (unsigned char )((unsigned char )llvm_cbe_storemerge1&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%score_out, i64 %%10, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__18 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%25, i8* %%26, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_92_count);
  *llvm_cbe_tmp__18 = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds i32* %%orig_in, i64 %%6, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__19 = (signed int *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i32* %%27, align 4, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__20 = (unsigned int )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds i32* %%orig_out, i64 %%10, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__21 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%28, i32* %%29, align 4, !dbg !5 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_96_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
  goto llvm_cbe_tmp__45;

llvm_cbe_tmp__47:
  goto llvm_cbe_tmp__45;

llvm_cbe_tmp__48:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = trunc i32 %%20 to i8, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__22 = (unsigned char )((unsigned char )llvm_cbe_tmp__15&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds i8* %%score_out, i64 %%10, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__23 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%34, i8* %%35, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_103_count);
  *llvm_cbe_tmp__23 = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i32* %%orig_out, i64 %%6, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__24 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i32* %%36, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__25 = (unsigned int )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i32* %%orig_out, i64 %%10, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__26 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%37, i32* %%38, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_107_count);
  *llvm_cbe_tmp__26 = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
  goto llvm_cbe_tmp__47;

llvm_cbe_tmp__43:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond2 = or i1 %%31, %%32, !dbg !10 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_or_2e_cond2_count);
  llvm_cbe_or_2e_cond2 = (bool )(((((signed int )llvm_cbe_tmp__15) < ((signed int )llvm_cbe_storemerge1)) | (((signed int )llvm_cbe_tmp__15) < ((signed int )llvm_cbe_tmp__16)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond2 = 0x%X\n", llvm_cbe_or_2e_cond2);
  if (llvm_cbe_or_2e_cond2) {
    goto llvm_cbe_tmp__49;
  } else {
    goto llvm_cbe_tmp__48;
  }

llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = trunc i32 %%21 to i8, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__27 = (unsigned char )((unsigned char )llvm_cbe_tmp__16&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i8* %%score_out, i64 %%10, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__28 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%40, i8* %%41, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_111_count);
  *llvm_cbe_tmp__28 = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds i32* %%orig_in, i64 %%10, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__29 = (signed int *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i32* %%42, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__30 = (unsigned int )*llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds i32* %%orig_out, i64 %%10, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__31 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__6))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__6));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%43, i32* %%44, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_115_count);
  *llvm_cbe_tmp__31 = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
  goto llvm_cbe_tmp__47;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__46:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds i8* %%score_out, i64 100, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__33 = ( char *)(&llvm_cbe_score_out[(((signed long long )100ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load i8* %%49, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__34 = (unsigned char )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = sext i8 %%50 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__35 = (unsigned int )((signed int )( char )llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load i32* @max_score, align 4, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__36 = (unsigned int )*(&max_score);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
  if ((((signed int )llvm_cbe_tmp__35) > ((signed int )llvm_cbe_tmp__36))) {
    goto llvm_cbe_tmp__50;
  } else {
    goto llvm_cbe_tmp__51;
  }

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%51, i32* @max_score, align 4, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_142_count);
  *(&max_score) = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds i32* %%orig_out, i64 100, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__37 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )100ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i32* %%55, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__38 = (unsigned int )*llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%56, i32* @max_orig, align 4, !dbg !6 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_145_count);
  *(&max_orig) = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load i32* @max_orig, align 4, !dbg !10 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__39 = (unsigned int )*(&max_orig);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @needlemanWunsch}\n");
  return llvm_cbe_tmp__39;
}

