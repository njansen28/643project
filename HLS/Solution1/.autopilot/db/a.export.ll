; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str1 = private unnamed_addr constant [4 x i8] c"COL\00", align 1
@p_str3 = private unnamed_addr constant [5 x i8] c"bram\00", align 1
@p_str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str5 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str6 = private unnamed_addr constant [4 x i8] c"ROW\00", align 1
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00"

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define i20 @needlemanWunsch([25 x i8]* %read_r, i8* %ref_genome) {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %read_r), !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %ref_genome), !map !21
  call void (...)* @_ssdm_op_SpecBitsMap(i20 0) nounwind, !map !42
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch_str) nounwind
  %score1 = alloca [100 x i8], align 16
  %score2 = alloca [100 x i8], align 16
  %orig1 = alloca [100 x i20], align 16
  %orig2 = alloca [100 x i20], align 16
  call void (...)* @_ssdm_op_SpecInterface([25 x i8]* %read_r, [5 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str4, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i8* %ref_genome, [5 x i8]* @p_str5, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %1

; <label>:1                                       ; preds = %doRow.exit, %0
  %prev_orig_out_1 = phi i20 [ 1, %0 ], [ %i, %doRow.exit ]
  %max_orig = phi i20 [ 0, %0 ], [ %max_orig_2, %doRow.exit ]
  %max_score = phi i32 [ -100, %0 ], [ %max_score_2, %doRow.exit ]
  %tmp = icmp ult i20 %prev_orig_out_1, -48575
  br i1 %tmp, label %._crit_edge, label %4

._crit_edge:                                      ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 500000, i64 500000, i64 500000) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str6) nounwind
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str6) nounwind
  %prev_orig_out = add i20 -1, %prev_orig_out_1
  %ref_genome_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %ref_genome)
  %tmp_22 = trunc i20 %prev_orig_out to i2
  %tmp_4 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_22, i1 false)
  %tmp_9 = or i3 %tmp_4, 1
  %tmp_23 = icmp ugt i3 %tmp_4, %tmp_9
  %tmp_25 = zext i3 %tmp_4 to i4
  %tmp_28 = zext i3 %tmp_9 to i4
  %tmp_37 = call i8 @llvm.part.select.i8(i8 %ref_genome_read, i32 7, i32 0)
  %tmp_40 = sub i4 %tmp_25, %tmp_28
  %tmp_46 = xor i4 %tmp_25, 7
  %tmp_47 = sub i4 %tmp_28, %tmp_25
  %tmp_48 = select i1 %tmp_23, i4 %tmp_40, i4 %tmp_47
  %tmp_49 = select i1 %tmp_23, i8 %tmp_37, i8 %ref_genome_read
  %tmp_50 = select i1 %tmp_23, i4 %tmp_46, i4 %tmp_25
  %tmp_51 = sub i4 7, %tmp_48
  %tmp_52 = zext i4 %tmp_50 to i8
  %tmp_53 = zext i4 %tmp_51 to i8
  %tmp_54 = lshr i8 %tmp_49, %tmp_52
  %tmp_55 = lshr i8 -1, %tmp_53
  %tmp_56 = and i8 %tmp_54, %tmp_55
  %tmp_57 = trunc i8 %tmp_56 to i2
  %tmp_5 = icmp eq i20 %prev_orig_out_1, 1
  %sel_tmp1 = xor i1 %tmp_5, true
  br label %2

; <label>:2                                       ; preds = %_ifconv, %._crit_edge
  %j_0_i2 = phi i7 [ 1, %._crit_edge ], [ %j, %_ifconv ]
  %score_out1 = phi i8 [ 0, %._crit_edge ], [ %prev_score_out_3, %_ifconv ]
  %prev_orig_out_12 = phi i20 [ %prev_orig_out, %._crit_edge ], [ %prev_orig_out_7, %_ifconv ]
  %exitcond_i5 = icmp eq i7 %j_0_i2, -27
  br i1 %exitcond_i5, label %doRow.exit27, label %_ifconv

_ifconv:                                          ; preds = %2
  %j_0_i2_cast = zext i7 %j_0_i2 to i8
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind
  %tmp_s = sub i8 1, %j_0_i2_cast
  %tmp_6 = icmp eq i7 %j_0_i2, 1
  %tmp_11 = add i8 -2, %j_0_i2_cast
  %tmp_11_cast = sext i8 %tmp_11 to i32
  %tmp_12 = zext i32 %tmp_11_cast to i64
  %score1_addr = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_12
  %score1_load = load i8* %score1_addr, align 1
  %sel_tmp = select i1 %tmp_5, i8 %tmp_s, i8 %score1_load
  %sel_tmp2 = and i1 %tmp_6, %sel_tmp1
  %diag = select i1 %sel_tmp2, i8 0, i8 %sel_tmp
  %tmp_13 = sub i8 0, %j_0_i2_cast
  %tmp_14 = add i7 -1, %j_0_i2
  %tmp_18 = zext i7 %tmp_14 to i64
  %score1_addr_1 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_18
  %score1_load_1 = load i8* %score1_addr_1, align 1
  %up = select i1 %tmp_5, i8 %tmp_13, i8 %score1_load_1
  %brmerge_i1 = or i1 %tmp_5, %tmp_6
  %orig1_addr = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_12
  %orig1_load = load i20* %orig1_addr, align 4
  %prev_orig_out_13 = select i1 %brmerge_i1, i20 %prev_orig_out, i20 %orig1_load
  %orig1_addr_2 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_18
  %orig1_load_1 = load i20* %orig1_addr_2, align 4
  %up_orig = select i1 %tmp_5, i20 0, i20 %orig1_load_1
  %tmp_21 = call i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7 %tmp_14, i32 2, i32 6)
  %tmp_24 = zext i5 %tmp_21 to i64
  %read_addr_1 = getelementptr [25 x i8]* %read_r, i64 0, i64 %tmp_24
  %read_load_1 = load i8* %read_addr_1, align 1
  %tmp_76 = trunc i7 %tmp_14 to i2
  %tmp_26 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_76, i1 false)
  %tmp_27 = or i3 %tmp_26, 1
  %tmp_77 = icmp ugt i3 %tmp_26, %tmp_27
  %tmp_78 = zext i3 %tmp_26 to i4
  %tmp_79 = zext i3 %tmp_27 to i4
  %tmp_80 = call i8 @llvm.part.select.i8(i8 %read_load_1, i32 7, i32 0)
  %tmp_81 = sub i4 %tmp_78, %tmp_79
  %tmp_82 = xor i4 %tmp_78, 7
  %tmp_83 = sub i4 %tmp_79, %tmp_78
  %tmp_84 = select i1 %tmp_77, i4 %tmp_81, i4 %tmp_83
  %tmp_85 = select i1 %tmp_77, i8 %tmp_80, i8 %read_load_1
  %tmp_86 = select i1 %tmp_77, i4 %tmp_82, i4 %tmp_78
  %tmp_87 = sub i4 7, %tmp_84
  %tmp_88 = zext i4 %tmp_86 to i8
  %tmp_89 = zext i4 %tmp_87 to i8
  %tmp_90 = lshr i8 %tmp_85, %tmp_88
  %tmp_91 = lshr i8 -1, %tmp_89
  %tmp_92 = and i8 %tmp_90, %tmp_91
  %tmp_93 = trunc i8 %tmp_92 to i2
  %tmp_29 = icmp eq i2 %tmp_93, %tmp_57
  %diag_score_0_v_i1_cast_cast = select i1 %tmp_29, i8 1, i8 -1
  %prev_score_out_8 = add i8 %diag_score_0_v_i1_cast_cast, %diag
  %prev_score_out_0_op_i1 = add i8 -1, %score_out1
  %prev_score_out_9 = select i1 %tmp_6, i8 -1, i8 %prev_score_out_0_op_i1
  %up_score = add i8 -1, %up
  %tmp_30 = icmp slt i8 %prev_score_out_8, %prev_score_out_9
  %tmp_32 = icmp slt i8 %prev_score_out_8, %up_score
  %or_cond_i1 = or i1 %tmp_30, %tmp_32
  %tmp_33 = icmp slt i8 %prev_score_out_9, %prev_score_out_8
  %tmp_34 = icmp slt i8 %prev_score_out_9, %up_score
  %or_cond1_i1 = or i1 %tmp_33, %tmp_34
  %prev_score_out_1 = select i1 %or_cond1_i1, i8 %up_score, i8 %prev_score_out_9
  %prev_orig_out_5 = select i1 %or_cond1_i1, i20 %up_orig, i20 %prev_orig_out_12
  %prev_score_out_3 = select i1 %or_cond_i1, i8 %prev_score_out_1, i8 %prev_score_out_8
  %prev_orig_out_7 = select i1 %or_cond_i1, i20 %prev_orig_out_5, i20 %prev_orig_out_13
  %score2_addr_2 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_18
  store i8 %prev_score_out_3, i8* %score2_addr_2, align 1
  %orig2_addr_2 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_18
  store i20 %prev_orig_out_7, i20* %orig2_addr_2, align 4
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_1) nounwind
  %j = add i7 1, %j_0_i2
  br label %2

doRow.exit27:                                     ; preds = %2
  %max_score_3 = sext i8 %score_out1 to i32
  %tmp_7 = icmp sgt i32 %max_score_3, %max_score
  %max_orig_1 = select i1 %tmp_7, i20 %prev_orig_out_12, i20 %max_orig
  %max_score_1 = select i1 %tmp_7, i32 %max_score_3, i32 %max_score
  %ref_genome_read_1 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %ref_genome)
  %tmp_58 = trunc i20 %prev_orig_out_1 to i2
  %tmp_3 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_58, i1 false)
  %tmp_8 = or i3 %tmp_3, 1
  %tmp_59 = icmp ugt i3 %tmp_3, %tmp_8
  %tmp_60 = zext i3 %tmp_3 to i4
  %tmp_61 = zext i3 %tmp_8 to i4
  %tmp_62 = call i8 @llvm.part.select.i8(i8 %ref_genome_read_1, i32 7, i32 0)
  %tmp_63 = sub i4 %tmp_60, %tmp_61
  %tmp_64 = xor i4 %tmp_60, 7
  %tmp_65 = sub i4 %tmp_61, %tmp_60
  %tmp_66 = select i1 %tmp_59, i4 %tmp_63, i4 %tmp_65
  %tmp_67 = select i1 %tmp_59, i8 %tmp_62, i8 %ref_genome_read_1
  %tmp_68 = select i1 %tmp_59, i4 %tmp_64, i4 %tmp_60
  %tmp_69 = sub i4 7, %tmp_66
  %tmp_70 = zext i4 %tmp_68 to i8
  %tmp_71 = zext i4 %tmp_69 to i8
  %tmp_72 = lshr i8 %tmp_67, %tmp_70
  %tmp_73 = lshr i8 -1, %tmp_71
  %tmp_74 = and i8 %tmp_72, %tmp_73
  %tmp_75 = trunc i8 %tmp_74 to i2
  br label %3

; <label>:3                                       ; preds = %._crit_edge.i_ifconv, %doRow.exit27
  %j_0_i = phi i7 [ 1, %doRow.exit27 ], [ %j_1, %._crit_edge.i_ifconv ]
  %score_out2 = phi i8 [ 0, %doRow.exit27 ], [ %prev_score_out_7, %._crit_edge.i_ifconv ]
  %prev_orig_out_14 = phi i20 [ %prev_orig_out_1, %doRow.exit27 ], [ %prev_orig_out_11, %._crit_edge.i_ifconv ]
  %exitcond_i = icmp eq i7 %j_0_i, -27
  br i1 %exitcond_i, label %doRow.exit, label %._crit_edge.i_ifconv

._crit_edge.i_ifconv:                             ; preds = %3
  %j_0_i_cast = zext i7 %j_0_i to i8
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind
  %tmp_31 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind
  %tmp_15 = add i7 -1, %j_0_i
  %tmp_16 = zext i7 %tmp_15 to i64
  %score2_addr = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_16
  %score2_load = load i8* %score2_addr, align 1
  %orig2_addr = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_16
  %up_orig_1 = load i20* %orig2_addr, align 4
  %tmp_17 = icmp eq i7 %j_0_i, 1
  %tmp_19 = add i8 -2, %j_0_i_cast
  %tmp_19_cast = sext i8 %tmp_19 to i32
  %tmp_20 = zext i32 %tmp_19_cast to i64
  %score2_addr_1 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_20
  %score2_load_1 = load i8* %score2_addr_1, align 1
  %diag_1 = select i1 %tmp_17, i8 0, i8 %score2_load_1
  %up_score_1 = add i8 -1, %score2_load
  %orig2_addr_1 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_20
  %orig2_load_1 = load i20* %orig2_addr_1, align 4
  %prev_orig_out_15 = select i1 %tmp_17, i20 %prev_orig_out_1, i20 %orig2_load_1
  %tmp_35 = call i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7 %tmp_15, i32 2, i32 6)
  %tmp_36 = zext i5 %tmp_35 to i64
  %read_addr = getelementptr [25 x i8]* %read_r, i64 0, i64 %tmp_36
  %read_load = load i8* %read_addr, align 1
  %tmp_94 = trunc i7 %tmp_15 to i2
  %tmp_38 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_94, i1 false)
  %tmp_39 = or i3 %tmp_38, 1
  %tmp_95 = icmp ugt i3 %tmp_38, %tmp_39
  %tmp_96 = zext i3 %tmp_38 to i4
  %tmp_97 = zext i3 %tmp_39 to i4
  %tmp_98 = call i8 @llvm.part.select.i8(i8 %read_load, i32 7, i32 0)
  %tmp_99 = sub i4 %tmp_96, %tmp_97
  %tmp_100 = xor i4 %tmp_96, 7
  %tmp_101 = sub i4 %tmp_97, %tmp_96
  %tmp_102 = select i1 %tmp_95, i4 %tmp_99, i4 %tmp_101
  %tmp_103 = select i1 %tmp_95, i8 %tmp_98, i8 %read_load
  %tmp_104 = select i1 %tmp_95, i4 %tmp_100, i4 %tmp_96
  %tmp_105 = sub i4 7, %tmp_102
  %tmp_106 = zext i4 %tmp_104 to i8
  %tmp_107 = zext i4 %tmp_105 to i8
  %tmp_108 = lshr i8 %tmp_103, %tmp_106
  %tmp_109 = lshr i8 -1, %tmp_107
  %tmp_110 = and i8 %tmp_108, %tmp_109
  %tmp_111 = trunc i8 %tmp_110 to i2
  %tmp_41 = icmp eq i2 %tmp_111, %tmp_75
  %diag_score_0_v_i_cast_cast = select i1 %tmp_41, i8 1, i8 -1
  %prev_score_out = add i8 %diag_score_0_v_i_cast_cast, %diag_1
  %prev_score_out_0_op_i = add i8 -1, %score_out2
  %prev_score_out_10 = select i1 %tmp_17, i8 -1, i8 %prev_score_out_0_op_i
  %tmp_42 = icmp slt i8 %prev_score_out, %prev_score_out_10
  %tmp_43 = icmp slt i8 %prev_score_out, %up_score_1
  %or_cond_i = or i1 %tmp_42, %tmp_43
  %tmp_44 = icmp slt i8 %prev_score_out_10, %prev_score_out
  %tmp_45 = icmp slt i8 %prev_score_out_10, %up_score_1
  %or_cond1_i = or i1 %tmp_44, %tmp_45
  %prev_score_out_2 = select i1 %or_cond1_i, i8 %up_score_1, i8 %prev_score_out_10
  %prev_orig_out_6 = select i1 %or_cond1_i, i20 %up_orig_1, i20 %prev_orig_out_14
  %prev_score_out_7 = select i1 %or_cond_i, i8 %prev_score_out_2, i8 %prev_score_out
  %prev_orig_out_11 = select i1 %or_cond_i, i20 %prev_orig_out_6, i20 %prev_orig_out_15
  %score1_addr_2 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_16
  store i8 %prev_score_out_7, i8* %score1_addr_2, align 1
  %orig1_addr_1 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_16
  store i20 %prev_orig_out_11, i20* %orig1_addr_1, align 4
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_31) nounwind
  %j_1 = add i7 1, %j_0_i
  br label %3

doRow.exit:                                       ; preds = %3
  %max_score_4 = sext i8 %score_out2 to i32
  %tmp_10 = icmp sgt i32 %max_score_4, %max_score_1
  %max_orig_2 = select i1 %tmp_10, i20 %prev_orig_out_14, i20 %max_orig_1
  %max_score_2 = select i1 %tmp_10, i32 %max_score_4, i32 %max_score_1
  %empty_11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str6, i32 %tmp_2) nounwind
  %i = add i20 %prev_orig_out_1, 2
  br label %1

; <label>:4                                       ; preds = %1
  ret i20 %max_orig
}

define weak i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone {
entry:
  %empty = zext i2 %0 to i3
  %empty_12 = zext i1 %1 to i3
  %empty_13 = shl i3 %empty, 1
  %empty_14 = or i3 %empty_13, %empty_12
  ret i3 %empty_14
}

define weak i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2)
  %empty_15 = trunc i7 %empty to i5
  ret i5 %empty_15
}

define weak i8 @_ssdm_op_Read.axis.volatile.i8P(i8*) {
entry:
  %empty = load i8* %0
  ret i8 %empty
}

declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i20.i32.i32(i20, i32, i32) nounwind readnone

declare i2 @_ssdm_op_PartSelect.i2.i7.i32.i32(i7, i32, i32) nounwind readnone

!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{metadata !1, metadata !6, metadata !11, metadata !16}
!1 = metadata !{i32 0, i32 1, metadata !2}
!2 = metadata !{metadata !3}
!3 = metadata !{metadata !"read", metadata !4, metadata !"uint2", i32 0, i32 1}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 0, i32 96, i32 4}
!6 = metadata !{i32 2, i32 3, metadata !7}
!7 = metadata !{metadata !8}
!8 = metadata !{metadata !"read", metadata !9, metadata !"uint2", i32 0, i32 1}
!9 = metadata !{metadata !10}
!10 = metadata !{i32 1, i32 97, i32 4}
!11 = metadata !{i32 4, i32 5, metadata !12}
!12 = metadata !{metadata !13}
!13 = metadata !{metadata !"read", metadata !14, metadata !"uint2", i32 0, i32 1}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 2, i32 98, i32 4}
!16 = metadata !{i32 6, i32 7, metadata !17}
!17 = metadata !{metadata !18}
!18 = metadata !{metadata !"read", metadata !19, metadata !"uint2", i32 0, i32 1}
!19 = metadata !{metadata !20}
!20 = metadata !{i32 3, i32 99, i32 4}
!21 = metadata !{metadata !22, metadata !27, metadata !32, metadata !37}
!22 = metadata !{i32 0, i32 1, metadata !23}
!23 = metadata !{metadata !24}
!24 = metadata !{metadata !"ref_genome", metadata !25, metadata !"uint2", i32 0, i32 1}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 999996, i32 4}
!27 = metadata !{i32 2, i32 3, metadata !28}
!28 = metadata !{metadata !29}
!29 = metadata !{metadata !"ref_genome", metadata !30, metadata !"uint2", i32 0, i32 1}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 1, i32 999997, i32 4}
!32 = metadata !{i32 4, i32 5, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"ref_genome", metadata !35, metadata !"uint2", i32 0, i32 1}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 2, i32 999998, i32 4}
!37 = metadata !{i32 6, i32 7, metadata !38}
!38 = metadata !{metadata !39}
!39 = metadata !{metadata !"ref_genome", metadata !40, metadata !"uint2", i32 0, i32 1}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 3, i32 999999, i32 4}
!42 = metadata !{metadata !43}
!43 = metadata !{i32 0, i32 19, metadata !44}
!44 = metadata !{metadata !45}
!45 = metadata !{metadata !"return", metadata !46, metadata !"orig_t", i32 0, i32 19}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 0, i32 1, i32 0}
