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
typedef struct l_struct_OC_NW_matrix l_struct_OC_NW_matrix;
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC_NW_matrix {
   char field0[1000001][101];
  signed int field1[1000001][101];
};

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
extern l_struct_OC_NW_matrix nw_matrix;
extern signed int best_fits[10];

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void init(void);
void print_matrix(signed int llvm_cbe_read_num);
signed int main(void);
signed int needlemanWunsch();


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[30] = "../../../long_reference.fasta";
 char *genome_file = ((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]));
static  char aesl_internal__OC_str1[30] = "../../../long_sequences.fastq";
 char *read_file = ((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
]));
static  char aesl_internal__OC_str2[2] = "r";
l_struct_OC_NW_matrix nw_matrix __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str3[30] = "Could not open read file, %d\n";
 char reads[10][101] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str9[5] = "    ";
static  char aesl_internal__OC_str4[29] = "Could not open ref file, %d\n";
static  char aesl_internal__OC_str5[62] = "Input file too big!, i=%d, index=%lld, strlen(ref_line)=%lld\n";
 char ref_genome[1000001] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str6[11] = "matrix.txt";
static  char aesl_internal__OC_str7[2] = "w";
static  char aesl_internal__OC_str8[2] = "a";
static  char aesl_internal__OC_str10[4] = "   ";
static  char aesl_internal__OC_str14[4] = "%3d";
static  char aesl_internal__OC_str15[5] = "\n\n\n\n";
signed int best_fits[10] __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str16[33] = "READ #%d - Best fit at index %d\n";


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

void init(void) {
  static  unsigned long long aesl_llvm_cbe_read_line_count = 0;
   char llvm_cbe_read_line[200];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ref_line_count = 0;
   char llvm_cbe_ref_line[200];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  signed int *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__3;
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
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  signed int *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge10_count = 0;
  unsigned int llvm_cbe_storemerge10;
  unsigned int llvm_cbe_storemerge10__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned char llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
   char *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
   char *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned int llvm_cbe_tmp__16;
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
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  signed int *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  signed int *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  unsigned long long llvm_cbe_tmp__25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
   char *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
   char *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  signed int *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned int llvm_cbe_storemerge34;
  unsigned int llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned int llvm_cbe_tmp__41;
  unsigned int llvm_cbe_tmp__41__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned char llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
   char *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  signed int *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @init\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i32* @_errno() nounwind, !dbg !7 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_3_count);
  llvm_cbe_tmp__1 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__1);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%1, align 4, !dbg !7 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_4_count);
  *llvm_cbe_tmp__1 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8** @read_file, align 8, !dbg !7 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__2 = ( char *)*(&read_file);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call %%struct._iobuf* @fopen(i8* %%2, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str2, i64 0, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__3 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__2, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__3);
}
  if (((llvm_cbe_tmp__3) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__50;
  } else {
    goto llvm_cbe__2e_preheader9;
  }

llvm_cbe__2e_preheader9:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [200 x i8]* %%read_line, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_read_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 200
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32* @_errno() nounwind, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__5 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i32* %%7, align 4, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__6 = (unsigned int )*llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str3, i64 0, i64 0), i32 %%8) nounwind, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_38_count);
  printf(( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__6);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_39_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge10 = phi i32 [ 0, %%.preheader9 ], [ %%21, %%._crit_edge  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge10_count);
  llvm_cbe_storemerge10 = (unsigned int )llvm_cbe_storemerge10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge10 = 0x%X",llvm_cbe_storemerge10);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_41_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__4, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 200)) fprintf(stderr, "%s:%d: warning: Read access out of array 'read_line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%5, align 16, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__9 = (unsigned char )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
  if (((llvm_cbe_tmp__9&255U) == (((unsigned char )64)&255U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_49_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__4, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%storemerge10 to i64, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge10);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [10 x [101 x i8]]* @reads, i64 0, i64 %%18, i64 0, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__14 = ( char *)(&reads[(((signed long long )llvm_cbe_tmp__13))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = call i8* @strncpy(i8* %%19, i8* %%5, i64 100) nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_52_count);
  ( char *)strncpy(( char *)llvm_cbe_tmp__14, ( char *)llvm_cbe_tmp__4, 100ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",100ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__15);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%storemerge10, 1, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__16&4294967295ull)));
  if (((llvm_cbe_tmp__16&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__52;
  } else {
    llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__16;   /* for PHI node */
    goto llvm_cbe_tmp__51;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call i8* @fgets(i8* %%5, i32 200, %%struct._iobuf* %%3) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_45_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__4, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 200)) fprintf(stderr, "%s:%d: warning: Read access out of array 'read_line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%5, align 16, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__11 = (unsigned char )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
  if (((llvm_cbe_tmp__11&255U) == (((unsigned char )64)&255U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__52:
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i32 @fclose(%%struct._iobuf* %%3) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_71_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i32* @_errno() nounwind, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__18 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%24, align 4, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_73_count);
  *llvm_cbe_tmp__18 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i8** @genome_file, align 8, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__19 = ( char *)*(&genome_file);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call %%struct._iobuf* @fopen(i8* %%25, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str2, i64 0, i64 0)) nounwind, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__20 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__19, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__20);
}
  if (((llvm_cbe_tmp__20) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__53;
  } else {
    goto llvm_cbe__2e_preheader6;
  }

llvm_cbe__2e_preheader6:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [200 x i8]* %%ref_line, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_ref_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 200
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_tmp__25__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__54;

llvm_cbe_tmp__53:
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = call i32* @_errno() nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__22 = (signed int *)_errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i32* %%30, align 4, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__23 = (unsigned int )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 %%31) nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_92_count);
  printf(( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_93_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = phi i64 [ %%48, %%45 ], [ 0, %%.preheader6  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__25 = (unsigned long long )llvm_cbe_tmp__25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__25);
printf("\n = 0x%I64X",llvm_cbe_tmp__34);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ %%49, %%45 ], [ 0, %%.preheader6  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",llvm_cbe_tmp__35);
printf("\n = 0x%X",0u);
}
  if ((((signed int )llvm_cbe_storemerge1) < ((signed int )10000u))) {
    goto llvm_cbe_tmp__55;
  } else {
    goto llvm_cbe_tmp__56;
  }

llvm_cbe_tmp__57:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [1000001 x i8]* @ref_genome, i64 0, i64 %%34, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__32 = ( char *)(&ref_genome[(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 1000001
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = call i8* @strncpy(i8* %%46, i8* %%28, i64 100) nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_124_count);
  ( char *)strncpy(( char *)llvm_cbe_tmp__32, ( char *)llvm_cbe_tmp__21, 100ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",100ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add i64 %%34, 100, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__25&18446744073709551615ull)) + ((unsigned long long )(100ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add nsw i32 %%storemerge1, 1, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__35&4294967295ull)));
  llvm_cbe_tmp__25__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__34;   /* for PHI node */
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__35;   /* for PHI node */
  goto llvm_cbe_tmp__54;

llvm_cbe_tmp__55:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i8* @fgets(i8* %%28, i32 200, %%struct._iobuf* %%26) nounwind, !dbg !9 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_113_count);
  ( char *)fgets(( char *)llvm_cbe_tmp__21, 200u, (l_struct_OC__iobuf *)llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",200u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = call i64 @strlen(i8* %%28) nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__27 = (unsigned long long )strlen(( char *)llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add i64 %%34, -1, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__28 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__25&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__28&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i64 %%39, %%38, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__29 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__28&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_tmp__27&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__29&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__29&18446744073709551615ULL) > ((unsigned long long )1000000ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__58;
  } else {
    goto llvm_cbe_tmp__57;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__58:
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = add i64 %%38, -1, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__30 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__27&18446744073709551615ull)) + ((unsigned long long )(18446744073709551615ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__30&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([62 x i8]* @aesl_internal_.str5, i64 0, i64 0), i32 %%storemerge1, i64 %%34, i64 %%43) nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_120_count);
  printf(( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 62
#endif
])), llvm_cbe_storemerge1, llvm_cbe_tmp__25, llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__25);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__30);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__31);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @exit(i32 1) noreturn nounwind, !dbg !13 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_121_count);
  exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
llvm_cbe_tmp__56:
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = call i32 @fclose(%%struct._iobuf* %%26) nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_134_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__59;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__59:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ 0, %%50 ], [ %%56, %%52  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sext i32 %%storemerge25 to i64, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__37 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 0, i64 %%53, i64 0, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__38 = ( char *)(&nw_matrix.field0[(((signed long long )llvm_cbe_tmp__37))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%54, align 1, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_154_count);
  *llvm_cbe_tmp__38 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 1, i64 %%53, i64 0, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__39 = (signed int *)(&nw_matrix.field1[(((signed long long )llvm_cbe_tmp__37))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%storemerge25, i32* %%55, align 4, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_156_count);
  *llvm_cbe_tmp__39 = llvm_cbe_storemerge25;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge25 = 0x%X\n", llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add nsw i32 %%storemerge25, 1, !dbg !11 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__40 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__40&4294967295ull)));
  if (((llvm_cbe_tmp__40&4294967295U) == (1000001u&4294967295U))) {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__40;   /* for PHI node */
    goto llvm_cbe_tmp__59;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i32 [ %%63, %%.preheader ], [ 0, %%52  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned int )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%X",llvm_cbe_storemerge34);
printf("\n = 0x%X",llvm_cbe_tmp__47);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = phi i32 [ %%62, %%.preheader ], [ 0, %%52  for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__41 = (unsigned int )llvm_cbe_tmp__41__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__41);
printf("\n = 0x%X",llvm_cbe_tmp__46);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = trunc i32 %%57 to i8, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__42 = (unsigned char )((unsigned char )llvm_cbe_tmp__41&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = sext i32 %%storemerge34 to i64, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__43 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 0, i64 0, i64 %%59, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__44 = ( char *)(&nw_matrix.field0[(((signed long long )0ull))][(((signed long long )llvm_cbe_tmp__43))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%58, i8* %%60, align 1, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_179_count);
  *llvm_cbe_tmp__44 = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 1, i64 0, i64 %%59, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__45 = (signed int *)(&nw_matrix.field1[(((signed long long )0ull))][(((signed long long )llvm_cbe_tmp__43))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%61, align 4, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_181_count);
  *llvm_cbe_tmp__45 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = add nsw i32 %%57, -1, !dbg !14 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(llvm_cbe_tmp__41&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = add nsw i32 %%storemerge34, 1, !dbg !12 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__47 = (unsigned int )((unsigned int )(llvm_cbe_storemerge34&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__47&4294967295ull)));
  if (((llvm_cbe_tmp__47&4294967295U) == (101u&4294967295U))) {
    goto llvm_cbe_tmp__60;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__47;   /* for PHI node */
    llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__46;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__60:
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = call %%struct._iobuf* @fopen(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_.str6, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str7, i64 0, i64 0)) nounwind, !dbg !14 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__48 = (l_struct_OC__iobuf *)aesl_fopen(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])), ( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__48);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = call i32 @fclose(%%struct._iobuf* %%65) nounwind, !dbg !10 for 0x%I64xth hint within @init  --> \n", ++aesl_llvm_cbe_215_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__49);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @init}\n");
  return;
}


void print_matrix(signed int llvm_cbe_read_num) {
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  signed int *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  signed int *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  unsigned long long llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge16_count = 0;
  unsigned int llvm_cbe_storemerge16;
  unsigned int llvm_cbe_storemerge16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned long long llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned long long llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
   char *llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned char llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_fputc_count = 0;
  unsigned int llvm_cbe_fputc;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond18_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc3_count = 0;
  unsigned int llvm_cbe_fputc3;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge115_count = 0;
  unsigned int llvm_cbe_storemerge115;
  unsigned int llvm_cbe_storemerge115__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc6_count = 0;
  unsigned int llvm_cbe_fputc6;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned int llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  unsigned long long llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
   char *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned char llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_fputc7_count = 0;
  unsigned int llvm_cbe_fputc7;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge214_count = 0;
  unsigned int llvm_cbe_storemerge214;
  unsigned int llvm_cbe_storemerge214__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_fputc10_count = 0;
  unsigned int llvm_cbe_fputc10;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  unsigned long long llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
   char *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  unsigned char llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc13_count = 0;
  unsigned int llvm_cbe_fputc13;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @print_matrix\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = tail call i32* @_errno() nounwind, !dbg !7 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__61 = (signed int *) /*tail*/ _errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__61);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%1, align 4, !dbg !7 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_220_count);
  *llvm_cbe_tmp__61 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = tail call %%struct._iobuf* @fopen(i8* getelementptr inbounds ([11 x i8]* @aesl_internal_.str6, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str8, i64 0, i64 0)) nounwind, !dbg !7 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__62 = (l_struct_OC__iobuf *) /*tail*/ aesl_fopen(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])), ( char *)((&aesl_internal__OC_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__62);
}
  if (((llvm_cbe_tmp__62) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__89;
  } else {
    goto llvm_cbe_tmp__90;
  }

llvm_cbe_tmp__89:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32* @_errno() nounwind, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__63 = (signed int *) /*tail*/ _errno();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__63);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* %%5, align 4, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__64 = (unsigned int )*llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 %%6) nounwind, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_239_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__64);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @exit(i32 1) noreturn nounwind, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_240_count);
   /*tail*/ exit(1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
  /*UNREACHABLE*/;
llvm_cbe_tmp__90:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = tail call i64 @fwrite(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str9, i64 0, i64 0), i64 4, i64 1, %%struct._iobuf* %%2), !dbg !8 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_242_count);
   /*tail*/ fwrite(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), 4ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__66);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%read_num to i64, !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__67 = (unsigned long long )((signed long long )(signed int )llvm_cbe_read_num);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
  llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__91;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__91:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge16 = phi i32 [ 0, %%8 ], [ %%17, %%11  for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_storemerge16_count);
  llvm_cbe_storemerge16 = (unsigned int )llvm_cbe_storemerge16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge16 = 0x%X",llvm_cbe_storemerge16);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call i64 @fwrite(i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str10, i64 0, i64 0), i64 3, i64 1, %%struct._iobuf* %%2), !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_254_count);
   /*tail*/ fwrite(( char *)((&aesl_internal__OC_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), 3ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",3ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__68);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%storemerge16 to i64, !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__69 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge16);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [10 x [101 x i8]]* @reads, i64 0, i64 %%10, i64 %%13, !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__70 = ( char *)(&reads[(((signed long long )llvm_cbe_tmp__67))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )llvm_cbe_tmp__69))
#ifdef AESL_BC_SIM
 % 101
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__67));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__69));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__67) < 10)) fprintf(stderr, "%s:%d: warning: Read access out of array 'reads' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__69) < 101)) fprintf(stderr, "%s:%d: warning: Read access out of array 'reads' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%14, align 1, !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__71 = (unsigned char )*llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i8 %%15 to i32, !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__72 = (unsigned int )((signed int )( char )llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc = tail call i32 @fputc(i32 %%16, %%struct._iobuf* %%2), !dbg !6 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc_count);
   /*tail*/ fputc(llvm_cbe_tmp__72, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__72);
printf("\nReturn fputc = 0x%X",llvm_cbe_fputc);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge16, 1, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge16&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if (((llvm_cbe_tmp__73&4294967295U) == (100u&4294967295U))) {
    goto llvm_cbe_tmp__92;
  } else {
    llvm_cbe_storemerge16__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    goto llvm_cbe_tmp__91;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__92:
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc3 = tail call i32 @fputc(i32 10, %%struct._iobuf* %%2), !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc3_count);
   /*tail*/ fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc3 = 0x%X",llvm_cbe_fputc3);
}
  llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__93;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__93:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge115 = phi i32 [ 0, %%18 ], [ %%38, %%37  for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_storemerge115_count);
  llvm_cbe_storemerge115 = (unsigned int )llvm_cbe_storemerge115__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge115 = 0x%X",llvm_cbe_storemerge115);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__86);
}
  if (((llvm_cbe_storemerge115&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__94;
  } else {
    goto llvm_cbe_tmp__95;
  }

llvm_cbe_tmp__96:
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc13 = tail call i32 @fputc(i32 10, %%struct._iobuf* %%2), !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc13_count);
   /*tail*/ fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc13 = 0x%X",llvm_cbe_fputc13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add nsw i32 %%storemerge115, 1, !dbg !11 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__86 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__86&4294967295ull)));
  if (((llvm_cbe_tmp__86&4294967295U) == (1000001u&4294967295U))) {
    goto llvm_cbe_tmp__97;
  } else {
    llvm_cbe_storemerge115__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__86;   /* for PHI node */
    goto llvm_cbe_tmp__93;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__98:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge214 = phi i32 [ 0, %%28 ], [ %%36, %%30  for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_storemerge214_count);
  llvm_cbe_storemerge214 = (unsigned int )llvm_cbe_storemerge214__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge214 = 0x%X",llvm_cbe_storemerge214);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__85);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc10 = tail call i32 @fputc(i32 32, %%struct._iobuf* %%2), !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc10_count);
   /*tail*/ fputc(32u, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",32u);
printf("\nReturn fputc10 = 0x%X",llvm_cbe_fputc10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%storemerge214 to i64, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_295_count);
  llvm_cbe_tmp__80 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge214);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 0, i64 %%29, i64 %%31, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__81 = ( char *)(&nw_matrix.field0[(((signed long long )llvm_cbe_tmp__79))][(((signed long long )llvm_cbe_tmp__80))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__80));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i8* %%32, align 1, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__82 = (unsigned char )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i8 %%33 to i32, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__83 = (unsigned int )((signed int )( char )llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%2, i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str14, i64 0, i64 0), i32 %%34) nounwind, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_299_count);
   /*tail*/ fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__62, ( char *)((&aesl_internal__OC_str14[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__83);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__84);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add nsw i32 %%storemerge214, 1, !dbg !11 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__85 = (unsigned int )((unsigned int )(llvm_cbe_storemerge214&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__85&4294967295ull)));
  if (((llvm_cbe_tmp__85&4294967295U) == (101u&4294967295U))) {
    goto llvm_cbe_tmp__96;
  } else {
    llvm_cbe_storemerge214__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__85;   /* for PHI node */
    goto llvm_cbe_tmp__98;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__99:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i32 %%storemerge115 to i64, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__79 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge115);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
  llvm_cbe_storemerge214__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__98;

llvm_cbe_tmp__94:
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc6 = tail call i32 @fputc(i32 32, %%struct._iobuf* %%2), !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc6_count);
   /*tail*/ fputc(32u, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",32u);
printf("\nReturn fputc6 = 0x%X",llvm_cbe_fputc6);
}
  goto llvm_cbe_tmp__99;

llvm_cbe_tmp__95:
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add nsw i32 %%storemerge115, -1, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__74 = (unsigned int )((unsigned int )(llvm_cbe_storemerge115&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__74&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = sext i32 %%23 to i64, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__75 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [1000001 x i8]* @ref_genome, i64 0, i64 %%24, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__76 = ( char *)(&ref_genome[(((signed long long )llvm_cbe_tmp__75))
#ifdef AESL_BC_SIM
 % 1000001
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__75));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__75) < 1000001)) fprintf(stderr, "%s:%d: warning: Read access out of array 'ref_genome' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i8* %%25, align 1, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__77 = (unsigned char )*llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = sext i8 %%26 to i32, !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__78 = (unsigned int )((signed int )( char )llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc7 = tail call i32 @fputc(i32 %%27, %%struct._iobuf* %%2), !dbg !9 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_fputc7_count);
   /*tail*/ fputc(llvm_cbe_tmp__78, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__78);
printf("\nReturn fputc7 = 0x%X",llvm_cbe_fputc7);
}
  goto llvm_cbe_tmp__99;

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__97:
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = tail call i64 @fwrite(i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str15, i64 0, i64 0), i64 4, i64 1, %%struct._iobuf* %%2), !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_317_count);
   /*tail*/ fwrite(( char *)((&aesl_internal__OC_str15[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), 4ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",4ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__87);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = tail call i32 @fclose(%%struct._iobuf* %%2) nounwind, !dbg !10 for 0x%I64xth hint within @print_matrix  --> \n", ++aesl_llvm_cbe_318_count);
   /*tail*/ fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @print_matrix}\n");
  return;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge6_count = 0;
  unsigned int llvm_cbe_storemerge6;
  unsigned int llvm_cbe_storemerge6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  unsigned long long llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
   char *llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  signed int *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  unsigned int llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  unsigned int llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  unsigned int llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  unsigned int llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  unsigned int llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned int llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  unsigned int llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  unsigned int llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  unsigned int llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  unsigned long long llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
   char *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  unsigned char llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  unsigned int llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  signed int *llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  unsigned long long llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  signed int *llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
   char *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
   char *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  unsigned int llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @init(), !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_320_count);
   /*tail*/ init();
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader4;

  do {     /* Syntactic loop '.preheader4' to make GCC happy */
llvm_cbe__2e_preheader4:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge6 = phi i32 [ 0, %%0 ], [ %%38, %%37  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge6_count);
  llvm_cbe_storemerge6 = (unsigned int )llvm_cbe_storemerge6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge6 = 0x%X",llvm_cbe_storemerge6);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__135);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = zext i32 %%storemerge6 to i64, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__100 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge6&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [10 x [101 x i8]]* @reads, i64 0, i64 %%1, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__101 = ( char *)(&reads[(((signed long long )llvm_cbe_tmp__100))
#ifdef AESL_BC_SIM
 % 10
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 101
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__100));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [10 x i32]* @best_fits, i64 0, i64 %%1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__102 = (signed int *)(&best_fits[(((signed long long )llvm_cbe_tmp__100))
#ifdef AESL_BC_SIM
 % 10
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__100));
}
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__136;

llvm_cbe_tmp__137:
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i32 %%storemerge6, 1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__135 = (unsigned int )((unsigned int )(llvm_cbe_storemerge6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__135&4294967295ull)));
  if (((llvm_cbe_tmp__135&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__135;   /* for PHI node */
    goto llvm_cbe__2e_preheader4;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__136:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ 1, %%.preheader4 ], [ %%36, %%24  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__134);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add i32 %%storemerge25, -1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_506_count);
  llvm_cbe_tmp__123 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__123&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = zext i32 %%25 to i64, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__124 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__123&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [1000001 x i8]* @ref_genome, i64 0, i64 %%26, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_508_count);
  llvm_cbe_tmp__125 = ( char *)(&ref_genome[(((signed long long )llvm_cbe_tmp__124))
#ifdef AESL_BC_SIM
 % 1000001
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__124) < 1000001)) fprintf(stderr, "%s:%d: warning: Read access out of array 'ref_genome' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i8* %%27, align 1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_509_count);
  llvm_cbe_tmp__126 = (unsigned char )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i8 %%28 to i32, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_510_count);
  llvm_cbe_tmp__127 = (unsigned int )((signed int )( char )llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 1, i64 %%26, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_511_count);
  llvm_cbe_tmp__128 = (signed int *)(&nw_matrix.field1[(((signed long long )llvm_cbe_tmp__124))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = zext i32 %%storemerge25 to i64, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_512_count);
  llvm_cbe_tmp__129 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge25&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 1, i64 %%31, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__130 = (signed int *)(&nw_matrix.field1[(((signed long long )llvm_cbe_tmp__129))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__129));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 0, i64 %%26, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__131 = ( char *)(&nw_matrix.field0[(((signed long long )llvm_cbe_tmp__124))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__124));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.NW_matrix* @nw_matrix, i64 0, i32 0, i64 %%31, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_515_count);
  llvm_cbe_tmp__132 = ( char *)(&nw_matrix.field0[(((signed long long )llvm_cbe_tmp__129))][(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__129));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = tail call i32 bitcast (i32 (...)* @needlemanWunsch to i32 (i8*, i32, i32*, i32*, i8*, i8*, i32)*)(i8* %%2, i32 %%29, i32* %%30, i32* %%32, i8* %%33, i8* %%34, i32 %%storemerge25) nounwind, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_516_count);
  llvm_cbe_tmp__133 = (unsigned int ) /*tail*/ needlemanWunsch(( char *)llvm_cbe_tmp__101, llvm_cbe_tmp__127, (signed int *)llvm_cbe_tmp__128, (signed int *)llvm_cbe_tmp__130, ( char *)llvm_cbe_tmp__131, ( char *)llvm_cbe_tmp__132, llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__127);
printf("\nArgument storemerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__133);
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__100) < 10 && "Write access out of array 'best_fits' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%35, i32* %%3, align 4, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_517_count);
  *llvm_cbe_tmp__102 = llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add i32 %%storemerge25, 1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_518_count);
  llvm_cbe_tmp__134 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__134&4294967295ull)));
  if (((llvm_cbe_tmp__134&4294967295U) == (1000001u&4294967295U))) {
    goto llvm_cbe_tmp__137;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__134;   /* for PHI node */
    goto llvm_cbe_tmp__136;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader4' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 0), align 16, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__103 = (unsigned int )*((&best_fits[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 0, i32 %%4) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_356_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 0u, llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__103);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__104);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 1), align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__105 = (unsigned int )*((&best_fits[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 1, i32 %%6) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_371_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 1u, llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__105);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__106);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 2), align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__107 = (unsigned int )*((&best_fits[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 2, i32 %%8) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_386_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 2u, llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",2u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__107);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__108);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 3), align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__109 = (unsigned int )*((&best_fits[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 3, i32 %%10) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_401_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 3u, llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",3u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__109);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__110);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 4), align 16, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__111 = (unsigned int )*((&best_fits[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 4, i32 %%12) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_416_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 4u, llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",4u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__111);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__112);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 5), align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__113 = (unsigned int )*((&best_fits[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 5, i32 %%14) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_431_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 5u, llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",5u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__113);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__114);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 6), align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_445_count);
  llvm_cbe_tmp__115 = (unsigned int )*((&best_fits[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 6, i32 %%16) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_446_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 6u, llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",6u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__115);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__116);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 7), align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__117 = (unsigned int )*((&best_fits[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 7, i32 %%18) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_461_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 7u, llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",7u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__117);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__118);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 8), align 16, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__119 = (unsigned int )*((&best_fits[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 8, i32 %%20) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_476_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 8u, llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",8u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__119);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__120);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i32* getelementptr inbounds ([10 x i32]* @best_fits, i64 0, i64 9), align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__121 = (unsigned int )*((&best_fits[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @aesl_internal_.str16, i64 0, i64 0), i32 9, i32 %%22) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_491_count);
   /*tail*/ printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 33
#endif
])), 9u, llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",9u);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__121);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__122);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}

