; ModuleID = 'C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@nw_matrix_score = external global [2054441 x i8] ; [#uses=7 type=[2054441 x i8]*]
@nw_matrix_orig = external global [2054441 x i32] ; [#uses=7 type=[2054441 x i32]*]
@best_fits = common global [100 x i32] zeroinitializer, align 16 ; [#uses=0 type=[100 x i32]*]
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=9]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=0]
define i32 @needlemanWunsch([100 x i8]* %reads, [20340 x i8]* %ref_genome) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([100 x i8]* %reads) nounwind, !map !22
  call void (...)* @_ssdm_op_SpecBitsMap([20340 x i8]* %ref_genome) nounwind, !map !26
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !32
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch_str) nounwind
  call void @llvm.dbg.value(metadata !{[100 x i8]* %reads}, i64 0, metadata !38), !dbg !51 ; [debug line = 3:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{[20340 x i8]* %ref_genome}, i64 0, metadata !52), !dbg !56 ; [debug line = 3:75] [debug variable = ref_genome]
  br label %1, !dbg !57                           ; [debug line = 15:7]

; <label>:1                                       ; preds = %._crit_edge, %0
  %max_1 = phi i15 [ 1, %0 ], [ %i, %._crit_edge ] ; [#uses=5 type=i15]
  %max = phi i32 [ 0, %0 ], [ %max_2_max, %._crit_edge ] ; [#uses=2 type=i32]
  %max_score = phi i32 [ -100, %0 ], [ %max_score_2_max_score, %._crit_edge ] ; [#uses=2 type=i32]
  %max_1_cast2 = zext i15 %max_1 to i32, !dbg !60 ; [#uses=1 type=i32] [debug line = 49:4]
  %max_1_cast2_cast = zext i15 %max_1 to i22, !dbg !63 ; [#uses=1 type=i22] [debug line = 21:4]
  call void @llvm.dbg.value(metadata !{i15 %max_1}, i64 0, metadata !66), !dbg !60 ; [debug line = 49:4] [debug variable = max]
  %exitcond1 = icmp eq i15 %max_1, -12427, !dbg !57 ; [#uses=1 type=i1] [debug line = 15:7]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 20340, i64 20340, i64 20340) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %9, label %.preheader.preheader, !dbg !57 ; [debug line = 15:7]

.preheader.preheader:                             ; preds = %1
  %tmp_1 = add i15 %max_1, -1, !dbg !67           ; [#uses=2 type=i15] [debug line = 20:4]
  %tmp_2 = zext i15 %tmp_1 to i64, !dbg !67       ; [#uses=1 type=i64] [debug line = 20:4]
  %ref_genome_addr = getelementptr [20340 x i8]* %ref_genome, i64 0, i64 %tmp_2, !dbg !68 ; [#uses=1 type=i8*] [debug line = 25:4]
  %tmp_2_trn_cast = zext i15 %tmp_1 to i22, !dbg !67 ; [#uses=1 type=i22] [debug line = 20:4]
  %nw_matrix_score_addr3 = mul i22 %tmp_2_trn_cast, 101, !dbg !67 ; [#uses=2 type=i22] [debug line = 20:4]
  %nw_matrix_score_addr4 = mul i22 %max_1_cast2_cast, 101, !dbg !63 ; [#uses=5 type=i22] [debug line = 21:4]
  br label %.preheader, !dbg !69                  ; [debug line = 18:8]

.preheader:                                       ; preds = %8, %.preheader.preheader
  %j = phi i7 [ %j_1, %8 ], [ 1, %.preheader.preheader ] ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %j, -27, !dbg !69        ; [#uses=1 type=i1] [debug line = 18:8]
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %._crit_edge, label %2, !dbg !69 ; [debug line = 18:8]

; <label>:2                                       ; preds = %.preheader
  %tmp_6_trn_cast = zext i7 %j to i22, !dbg !67   ; [#uses=4 type=i22] [debug line = 20:4]
  %nw_matrix_score_addr6 = add i22 %tmp_6_trn_cast, %nw_matrix_score_addr3, !dbg !67 ; [#uses=1 type=i22] [debug line = 20:4]
  %tmp_6 = zext i22 %nw_matrix_score_addr6 to i64, !dbg !67 ; [#uses=2 type=i64] [debug line = 20:4]
  %nw_matrix_score_addr_1 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_6, !dbg !67 ; [#uses=1 type=i8*] [debug line = 20:4]
  %nw_matrix_score_load_1 = load i8* %nw_matrix_score_addr_1, align 1, !dbg !67 ; [#uses=1 type=i8] [debug line = 20:4]
  %up_cast = sext i8 %nw_matrix_score_load_1 to i9, !dbg !67 ; [#uses=1 type=i9] [debug line = 20:4]
  %tmp_7 = add i7 %j, -1, !dbg !63                ; [#uses=2 type=i7] [debug line = 21:4]
  %tmp_8 = zext i7 %tmp_7 to i64, !dbg !63        ; [#uses=1 type=i64] [debug line = 21:4]
  %tmp_8_trn_cast = zext i7 %tmp_7 to i22, !dbg !63 ; [#uses=2 type=i22] [debug line = 21:4]
  %nw_matrix_score_addr7 = add i22 %tmp_8_trn_cast, %nw_matrix_score_addr4, !dbg !63 ; [#uses=1 type=i22] [debug line = 21:4]
  %tmp_12 = zext i22 %nw_matrix_score_addr7 to i64, !dbg !63 ; [#uses=2 type=i64] [debug line = 21:4]
  %nw_matrix_score_addr_2 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_12, !dbg !63 ; [#uses=1 type=i8*] [debug line = 21:4]
  %nw_matrix_score_load_2 = load i8* %nw_matrix_score_addr_2, align 1, !dbg !63 ; [#uses=1 type=i8] [debug line = 21:4]
  %left_cast = sext i8 %nw_matrix_score_load_2 to i9, !dbg !63 ; [#uses=1 type=i9] [debug line = 21:4]
  %nw_matrix_score_addr8 = add i22 %tmp_8_trn_cast, %nw_matrix_score_addr3, !dbg !70 ; [#uses=1 type=i22] [debug line = 22:4]
  %tmp_13 = zext i22 %nw_matrix_score_addr8 to i64, !dbg !70 ; [#uses=2 type=i64] [debug line = 22:4]
  %nw_matrix_score_addr_3 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_13, !dbg !70 ; [#uses=1 type=i8*] [debug line = 22:4]
  %nw_matrix_score_load_3 = load i8* %nw_matrix_score_addr_3, align 1, !dbg !70 ; [#uses=1 type=i8] [debug line = 22:4]
  %diag_cast = sext i8 %nw_matrix_score_load_3 to i9, !dbg !70 ; [#uses=1 type=i9] [debug line = 22:4]
  %ref_genome_load = load i8* %ref_genome_addr, align 1, !dbg !68 ; [#uses=1 type=i8] [debug line = 25:4]
  %reads_addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp_8, !dbg !68 ; [#uses=1 type=i8*] [debug line = 25:4]
  %reads_load = load i8* %reads_addr, align 1, !dbg !68 ; [#uses=1 type=i8] [debug line = 25:4]
  %tmp_9 = icmp eq i8 %ref_genome_load, %reads_load, !dbg !68 ; [#uses=1 type=i1] [debug line = 25:4]
  %diag_score_0_v_cast_cast = select i1 %tmp_9, i9 1, i9 -1, !dbg !71 ; [#uses=1 type=i9] [debug line = 26:4]
  %diag_score = add i9 %diag_score_0_v_cast_cast, %diag_cast, !dbg !71 ; [#uses=4 type=i9] [debug line = 26:4]
  call void @llvm.dbg.value(metadata !{i9 %diag_score}, i64 0, metadata !72), !dbg !71 ; [debug line = 26:4] [debug variable = diag_score]
  %left_score = add i9 %left_cast, -1, !dbg !74   ; [#uses=4 type=i9] [debug line = 29:4]
  call void @llvm.dbg.value(metadata !{i9 %left_score}, i64 0, metadata !75), !dbg !74 ; [debug line = 29:4] [debug variable = left_score]
  %up_score = add i9 %up_cast, -1, !dbg !76       ; [#uses=3 type=i9] [debug line = 30:4]
  call void @llvm.dbg.value(metadata !{i9 %up_score}, i64 0, metadata !77), !dbg !76 ; [debug line = 30:4] [debug variable = up_score]
  %tmp_s = icmp slt i9 %diag_score, %left_score, !dbg !78 ; [#uses=1 type=i1] [debug line = 33:4]
  %tmp_4 = icmp slt i9 %diag_score, %up_score, !dbg !78 ; [#uses=1 type=i1] [debug line = 33:4]
  %or_cond = or i1 %tmp_s, %tmp_4, !dbg !78       ; [#uses=1 type=i1] [debug line = 33:4]
  br i1 %or_cond, label %4, label %3, !dbg !78    ; [debug line = 33:4]

; <label>:3                                       ; preds = %2
  %tmp_14 = trunc i9 %diag_score to i8, !dbg !79  ; [#uses=1 type=i8] [debug line = 34:5]
  %nw_matrix_score_addr10 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast, !dbg !79 ; [#uses=1 type=i22] [debug line = 34:5]
  %tmp_15 = zext i22 %nw_matrix_score_addr10 to i64, !dbg !79 ; [#uses=2 type=i64] [debug line = 34:5]
  %nw_matrix_score_addr_4 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_15, !dbg !79 ; [#uses=1 type=i8*] [debug line = 34:5]
  store i8 %tmp_14, i8* %nw_matrix_score_addr_4, align 1, !dbg !79 ; [debug line = 34:5]
  %nw_matrix_orig_addr_1 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_13, !dbg !81 ; [#uses=1 type=i32*] [debug line = 35:5]
  %nw_matrix_orig_load_1 = load i32* %nw_matrix_orig_addr_1, align 4, !dbg !81 ; [#uses=1 type=i32] [debug line = 35:5]
  %nw_matrix_orig_addr_2 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_15, !dbg !81 ; [#uses=1 type=i32*] [debug line = 35:5]
  store i32 %nw_matrix_orig_load_1, i32* %nw_matrix_orig_addr_2, align 4, !dbg !81 ; [debug line = 35:5]
  br label %8, !dbg !82                           ; [debug line = 36:4]

; <label>:4                                       ; preds = %2
  %tmp_10 = icmp slt i9 %left_score, %diag_score, !dbg !83 ; [#uses=1 type=i1] [debug line = 37:9]
  %tmp_11 = icmp slt i9 %left_score, %up_score, !dbg !83 ; [#uses=1 type=i1] [debug line = 37:9]
  %or_cond2 = or i1 %tmp_10, %tmp_11, !dbg !83    ; [#uses=1 type=i1] [debug line = 37:9]
  br i1 %or_cond2, label %6, label %5, !dbg !83   ; [debug line = 37:9]

; <label>:5                                       ; preds = %4
  %tmp_18 = trunc i9 %left_score to i8, !dbg !84  ; [#uses=1 type=i8] [debug line = 38:5]
  %nw_matrix_score_addr9 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast, !dbg !84 ; [#uses=1 type=i22] [debug line = 38:5]
  %tmp_19 = zext i22 %nw_matrix_score_addr9 to i64, !dbg !84 ; [#uses=2 type=i64] [debug line = 38:5]
  %nw_matrix_score_addr_6 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_19, !dbg !84 ; [#uses=1 type=i8*] [debug line = 38:5]
  store i8 %tmp_18, i8* %nw_matrix_score_addr_6, align 1, !dbg !84 ; [debug line = 38:5]
  %nw_matrix_orig_addr_5 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_12, !dbg !86 ; [#uses=1 type=i32*] [debug line = 39:5]
  %nw_matrix_orig_load_3 = load i32* %nw_matrix_orig_addr_5, align 4, !dbg !86 ; [#uses=1 type=i32] [debug line = 39:5]
  %nw_matrix_orig_addr_6 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_19, !dbg !86 ; [#uses=1 type=i32*] [debug line = 39:5]
  store i32 %nw_matrix_orig_load_3, i32* %nw_matrix_orig_addr_6, align 4, !dbg !86 ; [debug line = 39:5]
  br label %7, !dbg !87                           ; [debug line = 40:4]

; <label>:6                                       ; preds = %4
  %tmp_16 = trunc i9 %up_score to i8, !dbg !88    ; [#uses=1 type=i8] [debug line = 42:5]
  %nw_matrix_score_addr5 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast, !dbg !88 ; [#uses=1 type=i22] [debug line = 42:5]
  %tmp_17 = zext i22 %nw_matrix_score_addr5 to i64, !dbg !88 ; [#uses=2 type=i64] [debug line = 42:5]
  %nw_matrix_score_addr_5 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_17, !dbg !88 ; [#uses=1 type=i8*] [debug line = 42:5]
  store i8 %tmp_16, i8* %nw_matrix_score_addr_5, align 1, !dbg !88 ; [debug line = 42:5]
  %nw_matrix_orig_addr_3 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_6, !dbg !90 ; [#uses=1 type=i32*] [debug line = 43:5]
  %nw_matrix_orig_load_2 = load i32* %nw_matrix_orig_addr_3, align 4, !dbg !90 ; [#uses=1 type=i32] [debug line = 43:5]
  %nw_matrix_orig_addr_4 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_17, !dbg !90 ; [#uses=1 type=i32*] [debug line = 43:5]
  store i32 %nw_matrix_orig_load_2, i32* %nw_matrix_orig_addr_4, align 4, !dbg !90 ; [debug line = 43:5]
  br label %7

; <label>:7                                       ; preds = %6, %5
  br label %8

; <label>:8                                       ; preds = %7, %3
  %j_1 = add i7 %j, 1, !dbg !91                   ; [#uses=1 type=i7] [debug line = 18:45]
  call void @llvm.dbg.value(metadata !{i7 %j_1}, i64 0, metadata !92), !dbg !91 ; [debug line = 18:45] [debug variable = j]
  br label %.preheader, !dbg !91                  ; [debug line = 18:45]

._crit_edge:                                      ; preds = %.preheader
  %nw_matrix_score_addr2 = add i22 %nw_matrix_score_addr4, 100, !dbg !93 ; [#uses=1 type=i22] [debug line = 48:3]
  %tmp_3 = zext i22 %nw_matrix_score_addr2 to i64, !dbg !93 ; [#uses=1 type=i64] [debug line = 48:3]
  %nw_matrix_score_addr = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_3, !dbg !93 ; [#uses=1 type=i8*] [debug line = 48:3]
  %nw_matrix_score_load = load i8* %nw_matrix_score_addr, align 1, !dbg !93 ; [#uses=1 type=i8] [debug line = 48:3]
  %max_score_1 = sext i8 %nw_matrix_score_load to i32, !dbg !93 ; [#uses=2 type=i32] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score_1}, i64 0, metadata !94), !dbg !95 ; [debug line = 50:4] [debug variable = max_score]
  %tmp_5 = icmp sgt i32 %max_score_1, %max_score, !dbg !93 ; [#uses=2 type=i1] [debug line = 48:3]
  %max_2_max = select i1 %tmp_5, i32 %max_1_cast2, i32 %max, !dbg !93 ; [#uses=1 type=i32] [debug line = 48:3]
  %max_score_2_max_score = select i1 %tmp_5, i32 %max_score_1, i32 %max_score, !dbg !93 ; [#uses=1 type=i32] [debug line = 48:3]
  %i = add i15 %max_1, 1, !dbg !96                ; [#uses=1 type=i15] [debug line = 15:53]
  call void @llvm.dbg.value(metadata !{i15 %i}, i64 0, metadata !97), !dbg !96 ; [debug line = 15:53] [debug variable = i]
  br label %1, !dbg !96                           ; [debug line = 15:53]

; <label>:9                                       ; preds = %1
  %nw_matrix_orig_addr1 = mul i32 %max, 101, !dbg !98 ; [#uses=1 type=i32] [debug line = 53:2]
  %nw_matrix_orig_addr2 = add i32 %nw_matrix_orig_addr1, 100, !dbg !98 ; [#uses=1 type=i32] [debug line = 53:2]
  %tmp = sext i32 %nw_matrix_orig_addr2 to i64, !dbg !98 ; [#uses=1 type=i64] [debug line = 53:2]
  %nw_matrix_orig_addr = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp, !dbg !98 ; [#uses=1 type=i32*] [debug line = 53:2]
  %nw_matrix_orig_load = load i32* %nw_matrix_orig_addr, align 4, !dbg !98 ; [#uses=1 type=i32] [debug line = 53:2]
  ret i32 %nw_matrix_orig_load, !dbg !98          ; [debug line = 53:2]
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=0]
declare i8 @_ssdm_op_PartSelect.i8.i9.i32.i32(i9, i32, i32) nounwind readnone

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0, !8, !13, !20, !21}

!0 = metadata !{metadata !1, null}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 7, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"nw_matrix.score", metadata !5, metadata !"char", i32 0, i32 7}
!5 = metadata !{metadata !6, metadata !7}
!6 = metadata !{i32 0, i32 20340, i32 1}
!7 = metadata !{i32 0, i32 100, i32 1}
!8 = metadata !{metadata !9, null}
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
!20 = metadata !{metadata !1, [2054441 x i8]* @nw_matrix_score}
!21 = metadata !{metadata !9, [2054441 x i32]* @nw_matrix_orig}
!22 = metadata !{metadata !23}
!23 = metadata !{i32 0, i32 7, metadata !24}
!24 = metadata !{metadata !25}
!25 = metadata !{metadata !"reads", metadata !18, metadata !"char", i32 0, i32 7}
!26 = metadata !{metadata !27}
!27 = metadata !{i32 0, i32 7, metadata !28}
!28 = metadata !{metadata !29}
!29 = metadata !{metadata !"ref_genome", metadata !30, metadata !"char", i32 0, i32 7}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 20339, i32 1}
!32 = metadata !{metadata !33}
!33 = metadata !{i32 0, i32 31, metadata !34}
!34 = metadata !{metadata !35}
!35 = metadata !{metadata !"return", metadata !36, metadata !"unsigned int", i32 0, i32 31}
!36 = metadata !{metadata !37}
!37 = metadata !{i32 0, i32 1, i32 0}
!38 = metadata !{i32 786689, metadata !39, metadata !"reads", null, i32 3, metadata !48, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!39 = metadata !{i32 786478, i32 0, metadata !40, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !40, i32 3, metadata !41, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !46, i32 3} ; [ DW_TAG_subprogram ]
!40 = metadata !{i32 786473, metadata !"643_PE/week3.c", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!41 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !42, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!42 = metadata !{metadata !43, metadata !44, metadata !44}
!43 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!44 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !45} ; [ DW_TAG_pointer_type ]
!45 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!46 = metadata !{metadata !47}
!47 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!48 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !45, metadata !49, i32 0, i32 0} ; [ DW_TAG_array_type ]
!49 = metadata !{metadata !50}
!50 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!51 = metadata !{i32 3, i32 35, metadata !39, null}
!52 = metadata !{i32 786689, metadata !39, metadata !"ref_genome", null, i32 3, metadata !53, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 162720, i64 8, i32 0, i32 0, metadata !45, metadata !54, i32 0, i32 0} ; [ DW_TAG_array_type ]
!54 = metadata !{metadata !55}
!55 = metadata !{i32 786465, i64 0, i64 20339}    ; [ DW_TAG_subrange_type ]
!56 = metadata !{i32 3, i32 75, metadata !39, null}
!57 = metadata !{i32 15, i32 7, metadata !58, null}
!58 = metadata !{i32 786443, metadata !59, i32 15, i32 2, metadata !40, i32 1} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 786443, metadata !39, i32 3, i32 124, metadata !40, i32 0} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 49, i32 4, metadata !61, null}
!61 = metadata !{i32 786443, metadata !62, i32 48, i32 67, metadata !40, i32 8} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 786443, metadata !58, i32 15, i32 58, metadata !40, i32 2} ; [ DW_TAG_lexical_block ]
!63 = metadata !{i32 21, i32 4, metadata !64, null}
!64 = metadata !{i32 786443, metadata !65, i32 18, i32 50, metadata !40, i32 4} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 786443, metadata !62, i32 18, i32 3, metadata !40, i32 3} ; [ DW_TAG_lexical_block ]
!66 = metadata !{i32 786688, metadata !59, metadata !"max", metadata !40, i32 9, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!67 = metadata !{i32 20, i32 4, metadata !64, null}
!68 = metadata !{i32 25, i32 4, metadata !64, null}
!69 = metadata !{i32 18, i32 8, metadata !65, null}
!70 = metadata !{i32 22, i32 4, metadata !64, null}
!71 = metadata !{i32 26, i32 4, metadata !64, null}
!72 = metadata !{i32 786688, metadata !59, metadata !"diag_score", metadata !40, i32 7, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!73 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!74 = metadata !{i32 29, i32 4, metadata !64, null}
!75 = metadata !{i32 786688, metadata !59, metadata !"left_score", metadata !40, i32 7, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!76 = metadata !{i32 30, i32 4, metadata !64, null}
!77 = metadata !{i32 786688, metadata !59, metadata !"up_score", metadata !40, i32 7, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 33, i32 4, metadata !64, null}
!79 = metadata !{i32 34, i32 5, metadata !80, null}
!80 = metadata !{i32 786443, metadata !64, i32 33, i32 60, metadata !40, i32 5} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 35, i32 5, metadata !80, null}
!82 = metadata !{i32 36, i32 4, metadata !80, null}
!83 = metadata !{i32 37, i32 9, metadata !64, null}
!84 = metadata !{i32 38, i32 5, metadata !85, null}
!85 = metadata !{i32 786443, metadata !64, i32 37, i32 65, metadata !40, i32 6} ; [ DW_TAG_lexical_block ]
!86 = metadata !{i32 39, i32 5, metadata !85, null}
!87 = metadata !{i32 40, i32 4, metadata !85, null}
!88 = metadata !{i32 42, i32 5, metadata !89, null}
!89 = metadata !{i32 786443, metadata !64, i32 41, i32 9, metadata !40, i32 7} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 43, i32 5, metadata !89, null}
!91 = metadata !{i32 18, i32 45, metadata !65, null}
!92 = metadata !{i32 786688, metadata !59, metadata !"j", metadata !40, i32 5, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!93 = metadata !{i32 48, i32 3, metadata !62, null}
!94 = metadata !{i32 786688, metadata !59, metadata !"max_score", metadata !40, i32 10, metadata !73, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!95 = metadata !{i32 50, i32 4, metadata !61, null}
!96 = metadata !{i32 15, i32 53, metadata !58, null}
!97 = metadata !{i32 786688, metadata !59, metadata !"i", metadata !40, i32 5, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 53, i32 2, metadata !59, null}
