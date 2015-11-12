; ModuleID = 'C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@nw_matrix.score = external global [20341 x [101 x i8]] ; [#uses=7 type=[20341 x [101 x i8]]*]
@nw_matrix.orig = external global [20341 x [101 x i32]] ; [#uses=7 type=[20341 x [101 x i32]]*]
@best_fits = common global [100 x i32] zeroinitializer, align 16 ; [#uses=0 type=[100 x i32]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=0]
define i32 @needlemanWunsch([100 x i8]* %reads, [20340 x i8]* %ref_genome) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([100 x i8]* %reads) nounwind, !map !55
  call void (...)* @_ssdm_op_SpecBitsMap([20340 x i8]* %ref_genome) nounwind, !map !59
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !65
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  call void @llvm.dbg.value(metadata !{[100 x i8]* %reads}, i64 0, metadata !71), !dbg !80 ; [debug line = 3:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{[20340 x i8]* %ref_genome}, i64 0, metadata !81), !dbg !85 ; [debug line = 3:75] [debug variable = ref_genome]
  br label %1, !dbg !86                           ; [debug line = 15:7]

; <label>:1                                       ; preds = %._crit_edge, %0
  %max.1 = phi i15 [ 1, %0 ], [ %i, %._crit_edge ] ; [#uses=5 type=i15]
  %max = phi i32 [ 0, %0 ], [ %max.2.max, %._crit_edge ] ; [#uses=2 type=i32]
  %max_score = phi i32 [ -100, %0 ], [ %max_score.2.max_score, %._crit_edge ] ; [#uses=2 type=i32]
  %max.1.cast2 = zext i15 %max.1 to i32, !dbg !89 ; [#uses=1 type=i32] [debug line = 49:4]
  call void @llvm.dbg.value(metadata !{i15 %max.1}, i64 0, metadata !92), !dbg !89 ; [debug line = 49:4] [debug variable = max]
  %exitcond1 = icmp eq i15 %max.1, -12427, !dbg !86 ; [#uses=1 type=i1] [debug line = 15:7]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 20340, i64 20340, i64 20340) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %11, label %.preheader.preheader, !dbg !86 ; [debug line = 15:7]

.preheader.preheader:                             ; preds = %1
  %tmp.1 = add i15 %max.1, -1, !dbg !93           ; [#uses=1 type=i15] [debug line = 20:4]
  %tmp.2 = zext i15 %tmp.1 to i64, !dbg !93       ; [#uses=5 type=i64] [debug line = 20:4]
  %tmp.3 = zext i15 %max.1 to i64, !dbg !96       ; [#uses=9 type=i64] [debug line = 21:4]
  %ref_genome.addr = getelementptr [20340 x i8]* %ref_genome, i64 0, i64 %tmp.2, !dbg !97 ; [#uses=1 type=i8*] [debug line = 25:4]
  br label %.preheader, !dbg !98                  ; [debug line = 18:8]

.preheader:                                       ; preds = %10, %.preheader.preheader
  %j = phi i7 [ %j.1, %10 ], [ 1, %.preheader.preheader ] ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %j, -27, !dbg !98        ; [#uses=1 type=i1] [debug line = 18:8]
  %3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %._crit_edge, label %4, !dbg !98 ; [debug line = 18:8]

; <label>:4                                       ; preds = %.preheader
  %tmp.6 = zext i7 %j to i64, !dbg !93            ; [#uses=8 type=i64] [debug line = 20:4]
  %nw_matrix.score.addr.1 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.2, i64 %tmp.6, !dbg !93 ; [#uses=1 type=i8*] [debug line = 20:4]
  %nw_matrix.score.load.1 = load i8* %nw_matrix.score.addr.1, align 1, !dbg !93 ; [#uses=1 type=i8] [debug line = 20:4]
  %up.cast = sext i8 %nw_matrix.score.load.1 to i9, !dbg !93 ; [#uses=1 type=i9] [debug line = 20:4]
  %tmp.7 = add i7 %j, -1, !dbg !96                ; [#uses=1 type=i7] [debug line = 21:4]
  %tmp.8 = zext i7 %tmp.7 to i64, !dbg !96        ; [#uses=5 type=i64] [debug line = 21:4]
  %nw_matrix.score.addr.2 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.3, i64 %tmp.8, !dbg !96 ; [#uses=1 type=i8*] [debug line = 21:4]
  %nw_matrix.score.load.2 = load i8* %nw_matrix.score.addr.2, align 1, !dbg !96 ; [#uses=1 type=i8] [debug line = 21:4]
  %left.cast = sext i8 %nw_matrix.score.load.2 to i9, !dbg !96 ; [#uses=1 type=i9] [debug line = 21:4]
  %nw_matrix.score.addr.3 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.2, i64 %tmp.8, !dbg !99 ; [#uses=1 type=i8*] [debug line = 22:4]
  %nw_matrix.score.load.3 = load i8* %nw_matrix.score.addr.3, align 1, !dbg !99 ; [#uses=1 type=i8] [debug line = 22:4]
  %diag.cast = sext i8 %nw_matrix.score.load.3 to i9, !dbg !99 ; [#uses=1 type=i9] [debug line = 22:4]
  %ref_genome.load = load i8* %ref_genome.addr, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 25:4]
  %reads.addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp.8, !dbg !97 ; [#uses=1 type=i8*] [debug line = 25:4]
  %reads.load = load i8* %reads.addr, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 25:4]
  %tmp.9 = icmp eq i8 %ref_genome.load, %reads.load, !dbg !97 ; [#uses=1 type=i1] [debug line = 25:4]
  %diag_score.0.v.cast = select i1 %tmp.9, i9 1, i9 -1, !dbg !100 ; [#uses=1 type=i9] [debug line = 26:4]
  %diag_score = add i9 %diag.cast, %diag_score.0.v.cast, !dbg !100 ; [#uses=4 type=i9] [debug line = 26:4]
  call void @llvm.dbg.value(metadata !{i9 %diag_score}, i64 0, metadata !101), !dbg !100 ; [debug line = 26:4] [debug variable = diag_score]
  %left_score = add i9 %left.cast, -1, !dbg !102  ; [#uses=4 type=i9] [debug line = 29:4]
  call void @llvm.dbg.value(metadata !{i9 %left_score}, i64 0, metadata !103), !dbg !102 ; [debug line = 29:4] [debug variable = left_score]
  %up_score = add i9 %up.cast, -1, !dbg !104      ; [#uses=3 type=i9] [debug line = 30:4]
  call void @llvm.dbg.value(metadata !{i9 %up_score}, i64 0, metadata !105), !dbg !104 ; [debug line = 30:4] [debug variable = up_score]
  %tmp. = icmp slt i9 %diag_score, %left_score, !dbg !106 ; [#uses=1 type=i1] [debug line = 33:4]
  %tmp.4 = icmp slt i9 %diag_score, %up_score, !dbg !106 ; [#uses=1 type=i1] [debug line = 33:4]
  %or.cond = or i1 %tmp., %tmp.4, !dbg !106       ; [#uses=1 type=i1] [debug line = 33:4]
  br i1 %or.cond, label %6, label %5, !dbg !106   ; [debug line = 33:4]

; <label>:5                                       ; preds = %4
  %tmp.12 = trunc i9 %diag_score to i8, !dbg !107 ; [#uses=1 type=i8] [debug line = 34:5]
  %nw_matrix.score.addr.4 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !107 ; [#uses=1 type=i8*] [debug line = 34:5]
  store i8 %tmp.12, i8* %nw_matrix.score.addr.4, align 1, !dbg !107 ; [debug line = 34:5]
  %nw_matrix.orig.addr.1 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.2, i64 %tmp.8, !dbg !109 ; [#uses=1 type=i32*] [debug line = 35:5]
  %nw_matrix.orig.load.1 = load i32* %nw_matrix.orig.addr.1, align 4, !dbg !109 ; [#uses=1 type=i32] [debug line = 35:5]
  %nw_matrix.orig.addr.2 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !109 ; [#uses=1 type=i32*] [debug line = 35:5]
  store i32 %nw_matrix.orig.load.1, i32* %nw_matrix.orig.addr.2, align 4, !dbg !109 ; [debug line = 35:5]
  br label %10, !dbg !110                         ; [debug line = 36:4]

; <label>:6                                       ; preds = %4
  %tmp.10 = icmp slt i9 %left_score, %diag_score, !dbg !111 ; [#uses=1 type=i1] [debug line = 37:9]
  %tmp.11 = icmp slt i9 %left_score, %up_score, !dbg !111 ; [#uses=1 type=i1] [debug line = 37:9]
  %or.cond2 = or i1 %tmp.10, %tmp.11, !dbg !111   ; [#uses=1 type=i1] [debug line = 37:9]
  br i1 %or.cond2, label %8, label %7, !dbg !111  ; [debug line = 37:9]

; <label>:7                                       ; preds = %6
  %tmp.14 = trunc i9 %left_score to i8, !dbg !112 ; [#uses=1 type=i8] [debug line = 38:5]
  %nw_matrix.score.addr.6 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !112 ; [#uses=1 type=i8*] [debug line = 38:5]
  store i8 %tmp.14, i8* %nw_matrix.score.addr.6, align 1, !dbg !112 ; [debug line = 38:5]
  %nw_matrix.orig.addr.5 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.3, i64 %tmp.8, !dbg !114 ; [#uses=1 type=i32*] [debug line = 39:5]
  %nw_matrix.orig.load.3 = load i32* %nw_matrix.orig.addr.5, align 4, !dbg !114 ; [#uses=1 type=i32] [debug line = 39:5]
  %nw_matrix.orig.addr.6 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !114 ; [#uses=1 type=i32*] [debug line = 39:5]
  store i32 %nw_matrix.orig.load.3, i32* %nw_matrix.orig.addr.6, align 4, !dbg !114 ; [debug line = 39:5]
  br label %9, !dbg !115                          ; [debug line = 40:4]

; <label>:8                                       ; preds = %6
  %tmp.13 = trunc i9 %up_score to i8, !dbg !116   ; [#uses=1 type=i8] [debug line = 42:5]
  %nw_matrix.score.addr.5 = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !116 ; [#uses=1 type=i8*] [debug line = 42:5]
  store i8 %tmp.13, i8* %nw_matrix.score.addr.5, align 1, !dbg !116 ; [debug line = 42:5]
  %nw_matrix.orig.addr.3 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.2, i64 %tmp.6, !dbg !118 ; [#uses=1 type=i32*] [debug line = 43:5]
  %nw_matrix.orig.load.2 = load i32* %nw_matrix.orig.addr.3, align 4, !dbg !118 ; [#uses=1 type=i32] [debug line = 43:5]
  %nw_matrix.orig.addr.4 = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp.3, i64 %tmp.6, !dbg !118 ; [#uses=1 type=i32*] [debug line = 43:5]
  store i32 %nw_matrix.orig.load.2, i32* %nw_matrix.orig.addr.4, align 4, !dbg !118 ; [debug line = 43:5]
  br label %9

; <label>:9                                       ; preds = %8, %7
  br label %10

; <label>:10                                      ; preds = %9, %5
  %j.1 = add i7 %j, 1, !dbg !119                  ; [#uses=1 type=i7] [debug line = 18:45]
  call void @llvm.dbg.value(metadata !{i7 %j.1}, i64 0, metadata !120), !dbg !119 ; [debug line = 18:45] [debug variable = j]
  br label %.preheader, !dbg !119                 ; [debug line = 18:45]

._crit_edge:                                      ; preds = %.preheader
  %nw_matrix.score.addr = getelementptr [20341 x [101 x i8]]* @nw_matrix.score, i64 0, i64 %tmp.3, i64 100, !dbg !121 ; [#uses=1 type=i8*] [debug line = 48:3]
  %nw_matrix.score.load = load i8* %nw_matrix.score.addr, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 48:3]
  %max_score.1 = sext i8 %nw_matrix.score.load to i32, !dbg !121 ; [#uses=2 type=i32] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.1}, i64 0, metadata !122), !dbg !123 ; [debug line = 50:4] [debug variable = max_score]
  %tmp.5 = icmp sgt i32 %max_score.1, %max_score, !dbg !121 ; [#uses=2 type=i1] [debug line = 48:3]
  %max.2.max = select i1 %tmp.5, i32 %max.1.cast2, i32 %max, !dbg !121 ; [#uses=1 type=i32] [debug line = 48:3]
  %max_score.2.max_score = select i1 %tmp.5, i32 %max_score.1, i32 %max_score, !dbg !121 ; [#uses=1 type=i32] [debug line = 48:3]
  %i = add i15 %max.1, 1, !dbg !124               ; [#uses=1 type=i15] [debug line = 15:53]
  call void @llvm.dbg.value(metadata !{i15 %i}, i64 0, metadata !125), !dbg !124 ; [debug line = 15:53] [debug variable = i]
  br label %1, !dbg !124                          ; [debug line = 15:53]

; <label>:11                                      ; preds = %1
  %max.lcssa = phi i32 [ %max, %1 ]               ; [#uses=1 type=i32]
  %tmp = zext i32 %max.lcssa to i64, !dbg !126    ; [#uses=1 type=i64] [debug line = 53:2]
  %nw_matrix.orig.addr = getelementptr [20341 x [101 x i32]]* @nw_matrix.orig, i64 0, i64 %tmp, i64 100, !dbg !126 ; [#uses=1 type=i32*] [debug line = 53:2]
  %nw_matrix.orig.load = load i32* %nw_matrix.orig.addr, align 4, !dbg !126 ; [#uses=1 type=i32] [debug line = 53:2]
  ret i32 %nw_matrix.orig.load, !dbg !126         ; [debug line = 53:2]
}

; [#uses=2]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0, !8, !13}
!llvm.dbg.cu = !{!20}

!0 = metadata !{metadata !1, [20341 x [101 x i8]]* @nw_matrix.score}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 7, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"nw_matrix.score", metadata !5, metadata !"char", i32 0, i32 7}
!5 = metadata !{metadata !6, metadata !7}
!6 = metadata !{i32 0, i32 20340, i32 1}
!7 = metadata !{i32 0, i32 100, i32 1}
!8 = metadata !{metadata !9, [20341 x [101 x i32]]* @nw_matrix.orig}
!9 = metadata !{metadata !10}
!10 = metadata !{i32 0, i32 31, metadata !11}
!11 = metadata !{metadata !12}
!12 = metadata !{metadata !"nw_matrix.orig", metadata !5, metadata !"unsigned int", i32 0, i32 31}
!13 = metadata !{metadata !14, [100 x i32]* @best_fits}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 0, i32 31, metadata !16}
!16 = metadata !{metadata !17}
!17 = metadata !{metadata !"best_fits", metadata !18, metadata !"unsigned int", i32 0, i32 31}
!18 = metadata !{metadata !19}
!19 = metadata !{i32 0, i32 99, i32 1}
!20 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel2", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, null, null, null, metadata !21} ; [ DW_TAG_compile_unit ]
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !23, metadata !29, metadata !42, metadata !45, metadata !48, metadata !49, metadata !51, metadata !53}
!23 = metadata !{i32 786484, i32 0, null, metadata !"best_fits", metadata !"best_fits", metadata !"", metadata !24, i32 28, metadata !25, i32 0, i32 1, [100 x i32]* @best_fits} ; [ DW_TAG_variable ]
!24 = metadata !{i32 786473, metadata !"643_PE/week3.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!25 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3200, i64 32, i32 0, i32 0, metadata !26, metadata !27, i32 0, i32 0} ; [ DW_TAG_array_type ]
!26 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!27 = metadata !{metadata !28}
!28 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!29 = metadata !{i32 790546, i32 0, null, metadata !"nw_matrix.score", metadata !"nw_matrix.score", metadata !"nw_matrix.score", metadata !24, i32 25, metadata !30, i32 0, i32 1, [20341 x [101 x i8]]* @nw_matrix.score} ; [ DW_TAG_variable_field ]
!30 = metadata !{i32 786452, null, metadata !"", metadata !24, i32 20, i64 16435528, i64 32, i32 0, i32 0, null, metadata !31, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!31 = metadata !{metadata !32}
!32 = metadata !{i32 786445, metadata !33, metadata !"score", metadata !24, i32 21, i64 16435528, i64 8, i64 0, i32 0, metadata !40} ; [ DW_TAG_member ]
!33 = metadata !{i32 786451, null, metadata !"", metadata !24, i32 20, i64 82177664, i64 32, i32 0, i32 0, null, metadata !34, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!34 = metadata !{metadata !32, metadata !35}
!35 = metadata !{i32 786445, metadata !33, metadata !"orig", metadata !24, i32 22, i64 65742112, i64 32, i64 16435552, i32 0, metadata !36} ; [ DW_TAG_member ]
!36 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 65742112, i64 32, i32 0, i32 0, metadata !26, metadata !37, i32 0, i32 0} ; [ DW_TAG_array_type ]
!37 = metadata !{metadata !38, metadata !39}
!38 = metadata !{i32 786465, i64 0, i64 20340}    ; [ DW_TAG_subrange_type ]
!39 = metadata !{i32 786465, i64 0, i64 100}      ; [ DW_TAG_subrange_type ]
!40 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 16435528, i64 8, i32 0, i32 0, metadata !41, metadata !37, i32 0, i32 0} ; [ DW_TAG_array_type ]
!41 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!42 = metadata !{i32 790546, i32 0, null, metadata !"nw_matrix.orig", metadata !"nw_matrix.orig", metadata !"nw_matrix.orig", metadata !24, i32 25, metadata !43, i32 0, i32 1, [20341 x [101 x i32]]* @nw_matrix.orig} ; [ DW_TAG_variable_field ]
!43 = metadata !{i32 786452, null, metadata !"", metadata !24, i32 20, i64 65742112, i64 32, i32 0, i32 0, null, metadata !44, i32 0, i32 0} ; [ DW_TAG_structure_field_type ]
!44 = metadata !{metadata !35}
!45 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !46, i32 103, metadata !47, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!46 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!47 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!48 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !46, i32 250, metadata !47, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!49 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !50, i32 157, metadata !47, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!50 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!51 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !52, i32 53, metadata !26, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!52 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!53 = metadata !{i32 786484, i32 0, null, metadata !"nw_matrix", metadata !"nw_matrix", metadata !"", metadata !24, i32 25, metadata !54, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!54 = metadata !{i32 786454, null, metadata !"NW_matrix", metadata !24, i32 23, i64 0, i64 0, i64 0, i32 0, metadata !33} ; [ DW_TAG_typedef ]
!55 = metadata !{metadata !56}
!56 = metadata !{i32 0, i32 7, metadata !57}
!57 = metadata !{metadata !58}
!58 = metadata !{metadata !"reads", metadata !18, metadata !"char", i32 0, i32 7}
!59 = metadata !{metadata !60}
!60 = metadata !{i32 0, i32 7, metadata !61}
!61 = metadata !{metadata !62}
!62 = metadata !{metadata !"ref_genome", metadata !63, metadata !"char", i32 0, i32 7}
!63 = metadata !{metadata !64}
!64 = metadata !{i32 0, i32 20339, i32 1}
!65 = metadata !{metadata !66}
!66 = metadata !{i32 0, i32 31, metadata !67}
!67 = metadata !{metadata !68}
!68 = metadata !{metadata !"return", metadata !69, metadata !"unsigned int", i32 0, i32 31}
!69 = metadata !{metadata !70}
!70 = metadata !{i32 0, i32 1, i32 0}
!71 = metadata !{i32 786689, metadata !72, metadata !"reads", null, i32 3, metadata !79, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!72 = metadata !{i32 786478, i32 0, metadata !73, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !73, i32 3, metadata !74, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !77, i32 3} ; [ DW_TAG_subprogram ]
!73 = metadata !{i32 786473, metadata !"643_PE/week3.c", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{metadata !26, metadata !76, metadata !76}
!76 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !41} ; [ DW_TAG_pointer_type ]
!77 = metadata !{metadata !78}
!78 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!79 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !41, metadata !27, i32 0, i32 0} ; [ DW_TAG_array_type ]
!80 = metadata !{i32 3, i32 35, metadata !72, null}
!81 = metadata !{i32 786689, metadata !72, metadata !"ref_genome", null, i32 3, metadata !82, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!82 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 162720, i64 8, i32 0, i32 0, metadata !41, metadata !83, i32 0, i32 0} ; [ DW_TAG_array_type ]
!83 = metadata !{metadata !84}
!84 = metadata !{i32 786465, i64 0, i64 20339}    ; [ DW_TAG_subrange_type ]
!85 = metadata !{i32 3, i32 75, metadata !72, null}
!86 = metadata !{i32 15, i32 7, metadata !87, null}
!87 = metadata !{i32 786443, metadata !88, i32 15, i32 2, metadata !73, i32 1} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 786443, metadata !72, i32 3, i32 124, metadata !73, i32 0} ; [ DW_TAG_lexical_block ]
!89 = metadata !{i32 49, i32 4, metadata !90, null}
!90 = metadata !{i32 786443, metadata !91, i32 48, i32 67, metadata !73, i32 8} ; [ DW_TAG_lexical_block ]
!91 = metadata !{i32 786443, metadata !87, i32 15, i32 58, metadata !73, i32 2} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 786688, metadata !88, metadata !"max", metadata !73, i32 9, metadata !26, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!93 = metadata !{i32 20, i32 4, metadata !94, null}
!94 = metadata !{i32 786443, metadata !95, i32 18, i32 50, metadata !73, i32 4} ; [ DW_TAG_lexical_block ]
!95 = metadata !{i32 786443, metadata !91, i32 18, i32 3, metadata !73, i32 3} ; [ DW_TAG_lexical_block ]
!96 = metadata !{i32 21, i32 4, metadata !94, null}
!97 = metadata !{i32 25, i32 4, metadata !94, null}
!98 = metadata !{i32 18, i32 8, metadata !95, null}
!99 = metadata !{i32 22, i32 4, metadata !94, null}
!100 = metadata !{i32 26, i32 4, metadata !94, null}
!101 = metadata !{i32 786688, metadata !88, metadata !"diag_score", metadata !73, i32 7, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!102 = metadata !{i32 29, i32 4, metadata !94, null}
!103 = metadata !{i32 786688, metadata !88, metadata !"left_score", metadata !73, i32 7, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!104 = metadata !{i32 30, i32 4, metadata !94, null}
!105 = metadata !{i32 786688, metadata !88, metadata !"up_score", metadata !73, i32 7, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 33, i32 4, metadata !94, null}
!107 = metadata !{i32 34, i32 5, metadata !108, null}
!108 = metadata !{i32 786443, metadata !94, i32 33, i32 60, metadata !73, i32 5} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 35, i32 5, metadata !108, null}
!110 = metadata !{i32 36, i32 4, metadata !108, null}
!111 = metadata !{i32 37, i32 9, metadata !94, null}
!112 = metadata !{i32 38, i32 5, metadata !113, null}
!113 = metadata !{i32 786443, metadata !94, i32 37, i32 65, metadata !73, i32 6} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 39, i32 5, metadata !113, null}
!115 = metadata !{i32 40, i32 4, metadata !113, null}
!116 = metadata !{i32 42, i32 5, metadata !117, null}
!117 = metadata !{i32 786443, metadata !94, i32 41, i32 9, metadata !73, i32 7} ; [ DW_TAG_lexical_block ]
!118 = metadata !{i32 43, i32 5, metadata !117, null}
!119 = metadata !{i32 18, i32 45, metadata !95, null}
!120 = metadata !{i32 786688, metadata !88, metadata !"j", metadata !73, i32 5, metadata !26, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 48, i32 3, metadata !91, null}
!122 = metadata !{i32 786688, metadata !88, metadata !"max_score", metadata !73, i32 10, metadata !47, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 50, i32 4, metadata !90, null}
!124 = metadata !{i32 15, i32 53, metadata !87, null}
!125 = metadata !{i32 786688, metadata !88, metadata !"i", metadata !73, i32 5, metadata !26, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!126 = metadata !{i32 53, i32 2, metadata !88, null}
