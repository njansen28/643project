; ModuleID = 'C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@nw_matrix_score = external global [2054441 x i8]
@nw_matrix_orig = external global [2054441 x i32]
@best_fits = common global [100 x i32] zeroinitializer, align 16
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00"

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define i32 @needlemanWunsch([100 x i8]* %reads, [20340 x i8]* %ref_genome) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([100 x i8]* %reads) nounwind, !map !22
  call void (...)* @_ssdm_op_SpecBitsMap([20340 x i8]* %ref_genome) nounwind, !map !26
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !32
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch_str) nounwind
  br label %1

; <label>:1                                       ; preds = %._crit_edge, %0
  %max_1 = phi i15 [ 1, %0 ], [ %i, %._crit_edge ]
  %max = phi i32 [ 0, %0 ], [ %max_2_max, %._crit_edge ]
  %max_score = phi i32 [ -100, %0 ], [ %max_score_2_max_score, %._crit_edge ]
  %max_1_cast2 = zext i15 %max_1 to i32
  %max_1_cast2_cast = zext i15 %max_1 to i22
  %exitcond1 = icmp eq i15 %max_1, -12427
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 20340, i64 20340, i64 20340) nounwind
  br i1 %exitcond1, label %9, label %.preheader.preheader

.preheader.preheader:                             ; preds = %1
  %tmp_1 = add i15 %max_1, -1
  %tmp_2 = zext i15 %tmp_1 to i64
  %ref_genome_addr = getelementptr [20340 x i8]* %ref_genome, i64 0, i64 %tmp_2
  %tmp_2_trn_cast = zext i15 %tmp_1 to i22
  %nw_matrix_score_addr3 = mul i22 %tmp_2_trn_cast, 101
  %nw_matrix_score_addr4 = mul i22 %max_1_cast2_cast, 101
  br label %.preheader

.preheader:                                       ; preds = %8, %.preheader.preheader
  %j = phi i7 [ %j_1, %8 ], [ 1, %.preheader.preheader ]
  %exitcond = icmp eq i7 %j, -27
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind
  br i1 %exitcond, label %._crit_edge, label %2

; <label>:2                                       ; preds = %.preheader
  %tmp_6_trn_cast = zext i7 %j to i22
  %nw_matrix_score_addr6 = add i22 %tmp_6_trn_cast, %nw_matrix_score_addr3
  %tmp_6 = zext i22 %nw_matrix_score_addr6 to i64
  %nw_matrix_score_addr_1 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_6
  %nw_matrix_score_load_1 = load i8* %nw_matrix_score_addr_1, align 1
  %up_cast = sext i8 %nw_matrix_score_load_1 to i9
  %tmp_7 = add i7 %j, -1
  %tmp_8 = zext i7 %tmp_7 to i64
  %tmp_8_trn_cast = zext i7 %tmp_7 to i22
  %nw_matrix_score_addr7 = add i22 %tmp_8_trn_cast, %nw_matrix_score_addr4
  %tmp_12 = zext i22 %nw_matrix_score_addr7 to i64
  %nw_matrix_score_addr_2 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_12
  %nw_matrix_score_load_2 = load i8* %nw_matrix_score_addr_2, align 1
  %left_cast = sext i8 %nw_matrix_score_load_2 to i9
  %nw_matrix_score_addr8 = add i22 %tmp_8_trn_cast, %nw_matrix_score_addr3
  %tmp_13 = zext i22 %nw_matrix_score_addr8 to i64
  %nw_matrix_score_addr_3 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_13
  %nw_matrix_score_load_3 = load i8* %nw_matrix_score_addr_3, align 1
  %diag_cast = sext i8 %nw_matrix_score_load_3 to i9
  %ref_genome_load = load i8* %ref_genome_addr, align 1
  %reads_addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp_8
  %reads_load = load i8* %reads_addr, align 1
  %tmp_9 = icmp eq i8 %ref_genome_load, %reads_load
  %diag_score_0_v_cast_cast = select i1 %tmp_9, i9 1, i9 -1
  %diag_score = add i9 %diag_score_0_v_cast_cast, %diag_cast
  %left_score = add i9 %left_cast, -1
  %up_score = add i9 %up_cast, -1
  %tmp_s = icmp slt i9 %diag_score, %left_score
  %tmp_4 = icmp slt i9 %diag_score, %up_score
  %or_cond = or i1 %tmp_s, %tmp_4
  br i1 %or_cond, label %4, label %3

; <label>:3                                       ; preds = %2
  %tmp_14 = trunc i9 %diag_score to i8
  %nw_matrix_score_addr10 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast
  %tmp_15 = zext i22 %nw_matrix_score_addr10 to i64
  %nw_matrix_score_addr_4 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_15
  store i8 %tmp_14, i8* %nw_matrix_score_addr_4, align 1
  %nw_matrix_orig_addr_1 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_13
  %nw_matrix_orig_load_1 = load i32* %nw_matrix_orig_addr_1, align 4
  %nw_matrix_orig_addr_2 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_15
  store i32 %nw_matrix_orig_load_1, i32* %nw_matrix_orig_addr_2, align 4
  br label %8

; <label>:4                                       ; preds = %2
  %tmp_10 = icmp slt i9 %left_score, %diag_score
  %tmp_11 = icmp slt i9 %left_score, %up_score
  %or_cond2 = or i1 %tmp_10, %tmp_11
  br i1 %or_cond2, label %6, label %5

; <label>:5                                       ; preds = %4
  %tmp_18 = trunc i9 %left_score to i8
  %nw_matrix_score_addr9 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast
  %tmp_19 = zext i22 %nw_matrix_score_addr9 to i64
  %nw_matrix_score_addr_6 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_19
  store i8 %tmp_18, i8* %nw_matrix_score_addr_6, align 1
  %nw_matrix_orig_addr_5 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_12
  %nw_matrix_orig_load_3 = load i32* %nw_matrix_orig_addr_5, align 4
  %nw_matrix_orig_addr_6 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_19
  store i32 %nw_matrix_orig_load_3, i32* %nw_matrix_orig_addr_6, align 4
  br label %7

; <label>:6                                       ; preds = %4
  %tmp_16 = trunc i9 %up_score to i8
  %nw_matrix_score_addr5 = add i22 %nw_matrix_score_addr4, %tmp_6_trn_cast
  %tmp_17 = zext i22 %nw_matrix_score_addr5 to i64
  %nw_matrix_score_addr_5 = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_17
  store i8 %tmp_16, i8* %nw_matrix_score_addr_5, align 1
  %nw_matrix_orig_addr_3 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_6
  %nw_matrix_orig_load_2 = load i32* %nw_matrix_orig_addr_3, align 4
  %nw_matrix_orig_addr_4 = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp_17
  store i32 %nw_matrix_orig_load_2, i32* %nw_matrix_orig_addr_4, align 4
  br label %7

; <label>:7                                       ; preds = %6, %5
  br label %8

; <label>:8                                       ; preds = %7, %3
  %j_1 = add i7 %j, 1
  br label %.preheader

._crit_edge:                                      ; preds = %.preheader
  %nw_matrix_score_addr2 = add i22 %nw_matrix_score_addr4, 100
  %tmp_3 = zext i22 %nw_matrix_score_addr2 to i64
  %nw_matrix_score_addr = getelementptr [2054441 x i8]* @nw_matrix_score, i64 0, i64 %tmp_3
  %nw_matrix_score_load = load i8* %nw_matrix_score_addr, align 1
  %max_score_1 = sext i8 %nw_matrix_score_load to i32
  %tmp_5 = icmp sgt i32 %max_score_1, %max_score
  %max_2_max = select i1 %tmp_5, i32 %max_1_cast2, i32 %max
  %max_score_2_max_score = select i1 %tmp_5, i32 %max_score_1, i32 %max_score
  %i = add i15 %max_1, 1
  br label %1

; <label>:9                                       ; preds = %1
  %nw_matrix_orig_addr1 = mul i32 %max, 101
  %nw_matrix_orig_addr2 = add i32 %nw_matrix_orig_addr1, 100
  %tmp = sext i32 %nw_matrix_orig_addr2 to i64
  %nw_matrix_orig_addr = getelementptr [2054441 x i32]* @nw_matrix_orig, i64 0, i64 %tmp
  %nw_matrix_orig_load = load i32* %nw_matrix_orig_addr, align 4
  ret i32 %nw_matrix_orig_load
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

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
