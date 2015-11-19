; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=11 type=[1 x i8]*]
@p_str1 = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=6 type=[4 x i8]*]
@p_str3 = private unnamed_addr constant [5 x i8] c"bram\00", align 1 ; [#uses=1 type=[5 x i8]*]
@p_str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@p_str5 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=1 type=[5 x i8]*]
@p_str6 = private unnamed_addr constant [4 x i8] c"ROW\00", align 1 ; [#uses=3 type=[4 x i8]*]
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=3]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=59]
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

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=0]
define i20 @needlemanWunsch([25 x i8]* %read, i8* %ref_genome) {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %read), !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %ref_genome), !map !21
  call void (...)* @_ssdm_op_SpecBitsMap(i20 0) nounwind, !map !42
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch_str) nounwind
  %score1 = alloca [100 x i8], align 16           ; [#uses=3 type=[100 x i8]*]
  %score2 = alloca [100 x i8], align 16           ; [#uses=3 type=[100 x i8]*]
  %orig1 = alloca [100 x i20], align 16           ; [#uses=3 type=[100 x i20]*]
  %orig2 = alloca [100 x i20], align 16           ; [#uses=3 type=[100 x i20]*]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !48), !dbg !65 ; [debug line = 74:35] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i8* %ref_genome}, i64 0, metadata !66), !dbg !70 ; [debug line = 74:80] [debug variable = ref_genome]
  call void (...)* @_ssdm_op_SpecInterface([25 x i8]* %read, [5 x i8]* @p_str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str4, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind, !dbg !71 ; [debug line = 75:1]
  call void (...)* @_ssdm_op_SpecInterface(i8* %ref_genome, [5 x i8]* @p_str5, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score1}, metadata !73), !dbg !78 ; [debug line = 80:10] [debug variable = score1]
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score2}, metadata !79), !dbg !80 ; [debug line = 81:10] [debug variable = score2]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig1}, metadata !81), !dbg !83 ; [debug line = 82:9] [debug variable = orig1]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig2}, metadata !84), !dbg !85 ; [debug line = 83:9] [debug variable = orig2]
  br label %1, !dbg !86                           ; [debug line = 91:12]

; <label>:1                                       ; preds = %doRow.exit, %0
  %prev_orig_out_1 = phi i20 [ 1, %0 ], [ %i, %doRow.exit ] ; [#uses=7 type=i20]
  %max_orig = phi i20 [ 0, %0 ], [ %max_orig_2, %doRow.exit ] ; [#uses=2 type=i20]
  %max_score = phi i32 [ -100, %0 ], [ %max_score_2, %doRow.exit ] ; [#uses=2 type=i32]
  %tmp = icmp ult i20 %prev_orig_out_1, -48575, !dbg !86 ; [#uses=1 type=i1] [debug line = 91:12]
  br i1 %tmp, label %._crit_edge, label %4, !dbg !86 ; [debug line = 91:12]

._crit_edge:                                      ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 500000, i64 500000, i64 500000) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str6) nounwind, !dbg !88 ; [debug line = 91:66]
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str6) nounwind, !dbg !88 ; [#uses=1 type=i32] [debug line = 91:66]
  %prev_orig_out = add i20 -1, %prev_orig_out_1, !dbg !90 ; [#uses=3 type=i20] [debug line = 92:15]
  %ref_genome_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %ref_genome), !dbg !90 ; [#uses=2 type=i8] [debug line = 92:15]
  %tmp_22 = trunc i20 %prev_orig_out to i2        ; [#uses=1 type=i2]
  %tmp_4 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_22, i1 false) ; [#uses=3 type=i3]
  %tmp_9 = or i3 %tmp_4, 1                        ; [#uses=2 type=i3]
  %tmp_23 = icmp ugt i3 %tmp_4, %tmp_9            ; [#uses=3 type=i1]
  %tmp_25 = zext i3 %tmp_4 to i4, !dbg !90        ; [#uses=4 type=i4] [debug line = 92:15]
  %tmp_28 = zext i3 %tmp_9 to i4, !dbg !90        ; [#uses=2 type=i4] [debug line = 92:15]
  %tmp_37 = call i8 @llvm.part.select.i8(i8 %ref_genome_read, i32 7, i32 0), !dbg !90 ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp_40 = sub i4 %tmp_25, %tmp_28, !dbg !90     ; [#uses=1 type=i4] [debug line = 92:15]
  %tmp_46 = xor i4 %tmp_25, 7, !dbg !90           ; [#uses=1 type=i4] [debug line = 92:15]
  %tmp_47 = sub i4 %tmp_28, %tmp_25, !dbg !90     ; [#uses=1 type=i4] [debug line = 92:15]
  %tmp_48 = select i1 %tmp_23, i4 %tmp_40, i4 %tmp_47, !dbg !90 ; [#uses=1 type=i4] [debug line = 92:15]
  %tmp_49 = select i1 %tmp_23, i8 %tmp_37, i8 %ref_genome_read ; [#uses=1 type=i8]
  %tmp_50 = select i1 %tmp_23, i4 %tmp_46, i4 %tmp_25 ; [#uses=1 type=i4]
  %tmp_51 = sub i4 7, %tmp_48                     ; [#uses=1 type=i4]
  %tmp_52 = zext i4 %tmp_50 to i8, !dbg !90       ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp_53 = zext i4 %tmp_51 to i8, !dbg !90       ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp_54 = lshr i8 %tmp_49, %tmp_52, !dbg !90    ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp_55 = lshr i8 -1, %tmp_53, !dbg !90         ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp_56 = and i8 %tmp_54, %tmp_55               ; [#uses=1 type=i8]
  %tmp_57 = trunc i8 %tmp_56 to i2, !dbg !90      ; [#uses=1 type=i2] [debug line = 92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_1}, i64 0, metadata !91) nounwind, !dbg !98 ; [debug line = 3:18@92:15] [debug variable = i]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !99), !dbg !100 ; [debug line = 3:32@92:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %tmp_57}, i64 0, metadata !101) nounwind, !dbg !102 ; [debug line = 3:77@92:15] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out}, i64 0, metadata !103) nounwind, !dbg !105 ; [debug line = 14:28@92:15] [debug variable = prev_orig_out]
  %tmp_5 = icmp eq i20 %prev_orig_out_1, 1, !dbg !106 ; [#uses=5 type=i1] [debug line = 24:3@92:15]
  %sel_tmp1 = xor i1 %tmp_5, true, !dbg !106      ; [#uses=1 type=i1] [debug line = 24:3@92:15]
  br label %2, !dbg !109                          ; [debug line = 22:12@92:15]

; <label>:2                                       ; preds = %_ifconv, %._crit_edge
  %j_0_i2 = phi i7 [ 1, %._crit_edge ], [ %j, %_ifconv ] ; [#uses=5 type=i7]
  %score_out1 = phi i8 [ 0, %._crit_edge ], [ %prev_score_out_3, %_ifconv ] ; [#uses=2 type=i8]
  %prev_orig_out_12 = phi i20 [ %prev_orig_out, %._crit_edge ], [ %prev_orig_out_7, %_ifconv ] ; [#uses=2 type=i20]
  %exitcond_i5 = icmp eq i7 %j_0_i2, -27, !dbg !109 ; [#uses=1 type=i1] [debug line = 22:12@92:15]
  br i1 %exitcond_i5, label %doRow.exit27, label %_ifconv, !dbg !109 ; [debug line = 22:12@92:15]

_ifconv:                                          ; preds = %2
  %j_0_i2_cast = zext i7 %j_0_i2 to i8, !dbg !110 ; [#uses=3 type=i8] [debug line = 60:4@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_12}, i64 0, metadata !103) nounwind, !dbg !110 ; [debug line = 60:4@92:15] [debug variable = prev_orig_out]
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind, !dbg !112 ; [debug line = 22:55@92:15]
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind, !dbg !112 ; [#uses=1 type=i32] [debug line = 22:55@92:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !113 ; [debug line = 23:1@92:15]
  %tmp_s = sub i8 1, %j_0_i2_cast, !dbg !114      ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %tmp_6 = icmp eq i7 %j_0_i2, 1, !dbg !114       ; [#uses=3 type=i1] [debug line = 35:3@92:15]
  %tmp_11 = add i8 -2, %j_0_i2_cast, !dbg !114    ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %tmp_11_cast = sext i8 %tmp_11 to i32, !dbg !114 ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  %tmp_12 = zext i32 %tmp_11_cast to i64, !dbg !114 ; [#uses=2 type=i64] [debug line = 35:3@92:15]
  %score1_addr = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_12, !dbg !114 ; [#uses=1 type=i8*] [debug line = 35:3@92:15]
  %score1_load = load i8* %score1_addr, align 1, !dbg !114 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %sel_tmp = select i1 %tmp_5, i8 %tmp_s, i8 %score1_load, !dbg !114 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %sel_tmp2 = and i1 %tmp_6, %sel_tmp1            ; [#uses=1 type=i1]
  %diag = select i1 %sel_tmp2, i8 0, i8 %sel_tmp, !dbg !114 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %diag}, i64 0, metadata !115) nounwind, !dbg !114 ; [debug line = 35:3@92:15] [debug variable = diag]
  %tmp_13 = sub i8 0, %j_0_i2_cast, !dbg !116     ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  %tmp_14 = add i7 -1, %j_0_i2, !dbg !116         ; [#uses=3 type=i7] [debug line = 36:3@92:15]
  %tmp_18 = zext i7 %tmp_14 to i64, !dbg !116     ; [#uses=4 type=i64] [debug line = 36:3@92:15]
  %score1_addr_1 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_18, !dbg !116 ; [#uses=1 type=i8*] [debug line = 36:3@92:15]
  %score1_load_1 = load i8* %score1_addr_1, align 1, !dbg !116 ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  %up = select i1 %tmp_5, i8 %tmp_13, i8 %score1_load_1, !dbg !116 ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up}, i64 0, metadata !117) nounwind, !dbg !116 ; [debug line = 36:3@92:15] [debug variable = up]
  %brmerge_i1 = or i1 %tmp_5, %tmp_6, !dbg !118   ; [#uses=1 type=i1] [debug line = 41:3@92:15]
  %orig1_addr = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_12, !dbg !118 ; [#uses=1 type=i20*] [debug line = 41:3@92:15]
  %orig1_load = load i20* %orig1_addr, align 4, !dbg !118 ; [#uses=1 type=i20] [debug line = 41:3@92:15]
  %prev_orig_out_13 = select i1 %brmerge_i1, i20 %prev_orig_out, i20 %orig1_load, !dbg !118 ; [#uses=1 type=i20] [debug line = 41:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_13}, i64 0, metadata !103) nounwind, !dbg !119 ; [debug line = 56:4@92:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_13}, i64 0, metadata !121) nounwind, !dbg !118 ; [debug line = 41:3@92:15] [debug variable = diag_orig]
  %orig1_addr_2 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_18, !dbg !122 ; [#uses=1 type=i20*] [debug line = 42:3@92:15]
  %orig1_load_1 = load i20* %orig1_addr_2, align 4, !dbg !122 ; [#uses=1 type=i20] [debug line = 42:3@92:15]
  %up_orig = select i1 %tmp_5, i20 0, i20 %orig1_load_1, !dbg !122 ; [#uses=1 type=i20] [debug line = 42:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !123) nounwind, !dbg !122 ; [debug line = 42:3@92:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_12}, i64 0, metadata !124) nounwind, !dbg !125 ; [debug line = 43:3@92:15] [debug variable = left_orig]
  %tmp_21 = call i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7 %tmp_14, i32 2, i32 6), !dbg !126 ; [#uses=1 type=i5] [debug line = 46:3@92:15]
  %tmp_24 = zext i5 %tmp_21 to i64, !dbg !126     ; [#uses=1 type=i64] [debug line = 46:3@92:15]
  %read_addr_1 = getelementptr [25 x i8]* %read, i64 0, i64 %tmp_24, !dbg !126 ; [#uses=1 type=i8*] [debug line = 46:3@92:15]
  %read_load_1 = load i8* %read_addr_1, align 1, !dbg !126 ; [#uses=2 type=i8] [debug line = 46:3@92:15]
  %tmp_76 = trunc i7 %tmp_14 to i2                ; [#uses=1 type=i2]
  %tmp_26 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_76, i1 false) ; [#uses=3 type=i3]
  %tmp_27 = or i3 %tmp_26, 1                      ; [#uses=2 type=i3]
  %tmp_77 = icmp ugt i3 %tmp_26, %tmp_27          ; [#uses=3 type=i1]
  %tmp_78 = zext i3 %tmp_26 to i4, !dbg !126      ; [#uses=4 type=i4] [debug line = 46:3@92:15]
  %tmp_79 = zext i3 %tmp_27 to i4, !dbg !126      ; [#uses=2 type=i4] [debug line = 46:3@92:15]
  %tmp_80 = call i8 @llvm.part.select.i8(i8 %read_load_1, i32 7, i32 0), !dbg !126 ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp_81 = sub i4 %tmp_78, %tmp_79, !dbg !126    ; [#uses=1 type=i4] [debug line = 46:3@92:15]
  %tmp_82 = xor i4 %tmp_78, 7, !dbg !126          ; [#uses=1 type=i4] [debug line = 46:3@92:15]
  %tmp_83 = sub i4 %tmp_79, %tmp_78, !dbg !126    ; [#uses=1 type=i4] [debug line = 46:3@92:15]
  %tmp_84 = select i1 %tmp_77, i4 %tmp_81, i4 %tmp_83, !dbg !126 ; [#uses=1 type=i4] [debug line = 46:3@92:15]
  %tmp_85 = select i1 %tmp_77, i8 %tmp_80, i8 %read_load_1 ; [#uses=1 type=i8]
  %tmp_86 = select i1 %tmp_77, i4 %tmp_82, i4 %tmp_78 ; [#uses=1 type=i4]
  %tmp_87 = sub i4 7, %tmp_84                     ; [#uses=1 type=i4]
  %tmp_88 = zext i4 %tmp_86 to i8, !dbg !126      ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp_89 = zext i4 %tmp_87 to i8, !dbg !126      ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp_90 = lshr i8 %tmp_85, %tmp_88, !dbg !126   ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp_91 = lshr i8 -1, %tmp_89, !dbg !126        ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp_92 = and i8 %tmp_90, %tmp_91               ; [#uses=1 type=i8]
  %tmp_93 = trunc i8 %tmp_92 to i2, !dbg !126     ; [#uses=1 type=i2] [debug line = 46:3@92:15]
  %tmp_29 = icmp eq i2 %tmp_93, %tmp_57, !dbg !126 ; [#uses=1 type=i1] [debug line = 46:3@92:15]
  %diag_score_0_v_i1_cast_cast = select i1 %tmp_29, i8 1, i8 -1, !dbg !127 ; [#uses=1 type=i8] [debug line = 47:3@92:15]
  %prev_score_out_8 = add i8 %diag_score_0_v_i1_cast_cast, %diag, !dbg !127 ; [#uses=4 type=i8] [debug line = 47:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_8}, i64 0, metadata !128) nounwind, !dbg !129 ; [debug line = 55:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_8}, i64 0, metadata !130) nounwind, !dbg !127 ; [debug line = 47:3@92:15] [debug variable = diag_score]
  %prev_score_out_0_op_i1 = add i8 -1, %score_out1, !dbg !131 ; [#uses=1 type=i8] [debug line = 50:3@92:15]
  %prev_score_out_9 = select i1 %tmp_6, i8 -1, i8 %prev_score_out_0_op_i1, !dbg !131 ; [#uses=4 type=i8] [debug line = 50:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_9}, i64 0, metadata !128) nounwind, !dbg !132 ; [debug line = 59:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_9}, i64 0, metadata !133) nounwind, !dbg !131 ; [debug line = 50:3@92:15] [debug variable = left_score]
  %up_score = add i8 -1, %up, !dbg !134           ; [#uses=3 type=i8] [debug line = 51:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !135) nounwind, !dbg !134 ; [debug line = 51:3@92:15] [debug variable = up_score]
  %tmp_30 = icmp slt i8 %prev_score_out_8, %prev_score_out_9, !dbg !136 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %tmp_32 = icmp slt i8 %prev_score_out_8, %up_score, !dbg !136 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %or_cond_i1 = or i1 %tmp_30, %tmp_32, !dbg !136 ; [#uses=2 type=i1] [debug line = 54:3@92:15]
  %tmp_33 = icmp slt i8 %prev_score_out_9, %prev_score_out_8, !dbg !137 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %tmp_34 = icmp slt i8 %prev_score_out_9, %up_score, !dbg !137 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %or_cond1_i1 = or i1 %tmp_33, %tmp_34, !dbg !137 ; [#uses=2 type=i1] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !128) nounwind, !dbg !138 ; [debug line = 63:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !103) nounwind, !dbg !140 ; [debug line = 64:4@92:15] [debug variable = prev_orig_out]
  %prev_score_out_1 = select i1 %or_cond1_i1, i8 %up_score, i8 %prev_score_out_9, !dbg !137 ; [#uses=1 type=i8] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_1}, i64 0, metadata !128) nounwind, !dbg !137 ; [debug line = 58:8@92:15] [debug variable = prev_score_out]
  %prev_orig_out_5 = select i1 %or_cond1_i1, i20 %up_orig, i20 %prev_orig_out_12, !dbg !137 ; [#uses=1 type=i20] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_5}, i64 0, metadata !103) nounwind, !dbg !137 ; [debug line = 58:8@92:15] [debug variable = prev_orig_out]
  %prev_score_out_3 = select i1 %or_cond_i1, i8 %prev_score_out_1, i8 %prev_score_out_8 ; [#uses=2 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_3}, i64 0, metadata !128) nounwind, !dbg !129 ; [debug line = 55:4@92:15] [debug variable = prev_score_out]
  %prev_orig_out_7 = select i1 %or_cond_i1, i20 %prev_orig_out_5, i20 %prev_orig_out_13 ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_7}, i64 0, metadata !103) nounwind, !dbg !119 ; [debug line = 56:4@92:15] [debug variable = prev_orig_out]
  %score2_addr_2 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_18, !dbg !141 ; [#uses=1 type=i8*] [debug line = 66:3@92:15]
  store i8 %prev_score_out_3, i8* %score2_addr_2, align 1, !dbg !141 ; [debug line = 66:3@92:15]
  %orig2_addr_2 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_18, !dbg !142 ; [#uses=1 type=i20*] [debug line = 67:3@92:15]
  store i20 %prev_orig_out_7, i20* %orig2_addr_2, align 4, !dbg !142 ; [debug line = 67:3@92:15]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_1) nounwind, !dbg !143 ; [#uses=0 type=i32] [debug line = 68:2@92:15]
  %j = add i7 1, %j_0_i2, !dbg !144               ; [#uses=1 type=i7] [debug line = 22:49@92:15]
  call void @llvm.dbg.value(metadata !{i7 %j}, i64 0, metadata !145) nounwind, !dbg !144 ; [debug line = 22:49@92:15] [debug variable = j]
  br label %2, !dbg !144                          ; [debug line = 22:49@92:15]

doRow.exit27:                                     ; preds = %2
  call void @llvm.dbg.value(metadata !{i8 %score_out1}, i64 0, metadata !146), !dbg !147 ; [debug line = 70:2@92:15] [debug variable = score_out1]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_12}, i64 0, metadata !148), !dbg !90 ; [debug line = 92:15] [debug variable = orig_out1]
  %max_score_3 = sext i8 %score_out1 to i32, !dbg !149 ; [#uses=2 type=i32] [debug line = 95:3]
  %tmp_7 = icmp sgt i32 %max_score_3, %max_score, !dbg !149 ; [#uses=2 type=i1] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score_3}, i64 0, metadata !150), !dbg !151 ; [debug line = 97:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_12}, i64 0, metadata !153), !dbg !154 ; [debug line = 98:4] [debug variable = max_orig]
  %max_orig_1 = select i1 %tmp_7, i20 %prev_orig_out_12, i20 %max_orig, !dbg !149 ; [#uses=1 type=i20] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig_1}, i64 0, metadata !153), !dbg !149 ; [debug line = 95:3] [debug variable = max_orig]
  %max_score_1 = select i1 %tmp_7, i32 %max_score_3, i32 %max_score, !dbg !149 ; [#uses=2 type=i32] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score_1}, i64 0, metadata !150), !dbg !149 ; [debug line = 95:3] [debug variable = max_score]
  %ref_genome_read_1 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %ref_genome), !dbg !155 ; [#uses=2 type=i8] [debug line = 104:15]
  %tmp_58 = trunc i20 %prev_orig_out_1 to i2      ; [#uses=1 type=i2]
  %tmp_3 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_58, i1 false) ; [#uses=3 type=i3]
  %tmp_8 = or i3 %tmp_3, 1                        ; [#uses=2 type=i3]
  %tmp_59 = icmp ugt i3 %tmp_3, %tmp_8            ; [#uses=3 type=i1]
  %tmp_60 = zext i3 %tmp_3 to i4, !dbg !155       ; [#uses=4 type=i4] [debug line = 104:15]
  %tmp_61 = zext i3 %tmp_8 to i4, !dbg !155       ; [#uses=2 type=i4] [debug line = 104:15]
  %tmp_62 = call i8 @llvm.part.select.i8(i8 %ref_genome_read_1, i32 7, i32 0), !dbg !155 ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp_63 = sub i4 %tmp_60, %tmp_61, !dbg !155    ; [#uses=1 type=i4] [debug line = 104:15]
  %tmp_64 = xor i4 %tmp_60, 7, !dbg !155          ; [#uses=1 type=i4] [debug line = 104:15]
  %tmp_65 = sub i4 %tmp_61, %tmp_60, !dbg !155    ; [#uses=1 type=i4] [debug line = 104:15]
  %tmp_66 = select i1 %tmp_59, i4 %tmp_63, i4 %tmp_65, !dbg !155 ; [#uses=1 type=i4] [debug line = 104:15]
  %tmp_67 = select i1 %tmp_59, i8 %tmp_62, i8 %ref_genome_read_1 ; [#uses=1 type=i8]
  %tmp_68 = select i1 %tmp_59, i4 %tmp_64, i4 %tmp_60 ; [#uses=1 type=i4]
  %tmp_69 = sub i4 7, %tmp_66                     ; [#uses=1 type=i4]
  %tmp_70 = zext i4 %tmp_68 to i8, !dbg !155      ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp_71 = zext i4 %tmp_69 to i8, !dbg !155      ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp_72 = lshr i8 %tmp_67, %tmp_70, !dbg !155   ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp_73 = lshr i8 -1, %tmp_71, !dbg !155        ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp_74 = and i8 %tmp_72, %tmp_73               ; [#uses=1 type=i8]
  %tmp_75 = trunc i8 %tmp_74 to i2, !dbg !155     ; [#uses=1 type=i2] [debug line = 104:15]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !99), !dbg !156 ; [debug line = 3:32@104:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %tmp_75}, i64 0, metadata !157) nounwind, !dbg !158 ; [debug line = 3:77@104:15] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_1}, i64 0, metadata !159) nounwind, !dbg !160 ; [debug line = 14:28@104:15] [debug variable = prev_orig_out]
  br label %3, !dbg !161                          ; [debug line = 22:12@104:15]

; <label>:3                                       ; preds = %._crit_edge.i_ifconv, %doRow.exit27
  %j_0_i = phi i7 [ 1, %doRow.exit27 ], [ %j_1, %._crit_edge.i_ifconv ] ; [#uses=5 type=i7]
  %score_out2 = phi i8 [ 0, %doRow.exit27 ], [ %prev_score_out_7, %._crit_edge.i_ifconv ] ; [#uses=2 type=i8]
  %prev_orig_out_14 = phi i20 [ %prev_orig_out_1, %doRow.exit27 ], [ %prev_orig_out_11, %._crit_edge.i_ifconv ] ; [#uses=2 type=i20]
  %exitcond_i = icmp eq i7 %j_0_i, -27, !dbg !161 ; [#uses=1 type=i1] [debug line = 22:12@104:15]
  br i1 %exitcond_i, label %doRow.exit, label %._crit_edge.i_ifconv, !dbg !161 ; [debug line = 22:12@104:15]

._crit_edge.i_ifconv:                             ; preds = %3
  %j_0_i_cast = zext i7 %j_0_i to i8, !dbg !162   ; [#uses=1 type=i8] [debug line = 60:4@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_14}, i64 0, metadata !159) nounwind, !dbg !162 ; [debug line = 60:4@104:15] [debug variable = prev_orig_out]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str1) nounwind, !dbg !163 ; [debug line = 22:55@104:15]
  %tmp_31 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str1) nounwind, !dbg !163 ; [#uses=1 type=i32] [debug line = 22:55@104:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !164 ; [debug line = 23:1@104:15]
  %tmp_15 = add i7 -1, %j_0_i, !dbg !165          ; [#uses=3 type=i7] [debug line = 24:3@104:15]
  %tmp_16 = zext i7 %tmp_15 to i64, !dbg !165     ; [#uses=4 type=i64] [debug line = 24:3@104:15]
  %score2_addr = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_16, !dbg !165 ; [#uses=1 type=i8*] [debug line = 24:3@104:15]
  %score2_load = load i8* %score2_addr, align 1, !dbg !165 ; [#uses=1 type=i8] [debug line = 24:3@104:15]
  %orig2_addr = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_16, !dbg !166 ; [#uses=1 type=i20*] [debug line = 26:3@104:15]
  %up_orig_1 = load i20* %orig2_addr, align 4, !dbg !166 ; [#uses=1 type=i20] [debug line = 26:3@104:15]
  %tmp_17 = icmp eq i7 %j_0_i, 1, !dbg !167       ; [#uses=3 type=i1] [debug line = 35:3@104:15]
  %tmp_19 = add i8 -2, %j_0_i_cast, !dbg !167     ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  %tmp_19_cast = sext i8 %tmp_19 to i32, !dbg !167 ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  %tmp_20 = zext i32 %tmp_19_cast to i64, !dbg !167 ; [#uses=2 type=i64] [debug line = 35:3@104:15]
  %score2_addr_1 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp_20, !dbg !167 ; [#uses=1 type=i8*] [debug line = 35:3@104:15]
  %score2_load_1 = load i8* %score2_addr_1, align 1, !dbg !167 ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  %diag_1 = select i1 %tmp_17, i8 0, i8 %score2_load_1, !dbg !167 ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %diag_1}, i64 0, metadata !168) nounwind, !dbg !167 ; [debug line = 35:3@104:15] [debug variable = diag]
  %up_score_1 = add i8 -1, %score2_load, !dbg !169 ; [#uses=3 type=i8] [debug line = 36:3@104:15]
  %orig2_addr_1 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp_20, !dbg !170 ; [#uses=1 type=i20*] [debug line = 41:3@104:15]
  %orig2_load_1 = load i20* %orig2_addr_1, align 4, !dbg !170 ; [#uses=1 type=i20] [debug line = 41:3@104:15]
  %prev_orig_out_15 = select i1 %tmp_17, i20 %prev_orig_out_1, i20 %orig2_load_1, !dbg !170 ; [#uses=1 type=i20] [debug line = 41:3@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_15}, i64 0, metadata !159) nounwind, !dbg !171 ; [debug line = 56:4@104:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_15}, i64 0, metadata !172) nounwind, !dbg !170 ; [debug line = 41:3@104:15] [debug variable = diag_orig]
  call void @llvm.dbg.value(metadata !{i20 %up_orig_1}, i64 0, metadata !173) nounwind, !dbg !174 ; [debug line = 42:3@104:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_14}, i64 0, metadata !175) nounwind, !dbg !176 ; [debug line = 43:3@104:15] [debug variable = left_orig]
  %tmp_35 = call i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7 %tmp_15, i32 2, i32 6), !dbg !177 ; [#uses=1 type=i5] [debug line = 46:3@104:15]
  %tmp_36 = zext i5 %tmp_35 to i64, !dbg !177     ; [#uses=1 type=i64] [debug line = 46:3@104:15]
  %read_addr = getelementptr [25 x i8]* %read, i64 0, i64 %tmp_36, !dbg !177 ; [#uses=1 type=i8*] [debug line = 46:3@104:15]
  %read_load = load i8* %read_addr, align 1, !dbg !177 ; [#uses=2 type=i8] [debug line = 46:3@104:15]
  %tmp_94 = trunc i7 %tmp_15 to i2                ; [#uses=1 type=i2]
  %tmp_38 = call i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2 %tmp_94, i1 false) ; [#uses=3 type=i3]
  %tmp_39 = or i3 %tmp_38, 1                      ; [#uses=2 type=i3]
  %tmp_95 = icmp ugt i3 %tmp_38, %tmp_39          ; [#uses=3 type=i1]
  %tmp_96 = zext i3 %tmp_38 to i4, !dbg !177      ; [#uses=4 type=i4] [debug line = 46:3@104:15]
  %tmp_97 = zext i3 %tmp_39 to i4, !dbg !177      ; [#uses=2 type=i4] [debug line = 46:3@104:15]
  %tmp_98 = call i8 @llvm.part.select.i8(i8 %read_load, i32 7, i32 0), !dbg !177 ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp_99 = sub i4 %tmp_96, %tmp_97, !dbg !177    ; [#uses=1 type=i4] [debug line = 46:3@104:15]
  %tmp_100 = xor i4 %tmp_96, 7, !dbg !177         ; [#uses=1 type=i4] [debug line = 46:3@104:15]
  %tmp_101 = sub i4 %tmp_97, %tmp_96, !dbg !177   ; [#uses=1 type=i4] [debug line = 46:3@104:15]
  %tmp_102 = select i1 %tmp_95, i4 %tmp_99, i4 %tmp_101, !dbg !177 ; [#uses=1 type=i4] [debug line = 46:3@104:15]
  %tmp_103 = select i1 %tmp_95, i8 %tmp_98, i8 %read_load ; [#uses=1 type=i8]
  %tmp_104 = select i1 %tmp_95, i4 %tmp_100, i4 %tmp_96 ; [#uses=1 type=i4]
  %tmp_105 = sub i4 7, %tmp_102                   ; [#uses=1 type=i4]
  %tmp_106 = zext i4 %tmp_104 to i8, !dbg !177    ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp_107 = zext i4 %tmp_105 to i8, !dbg !177    ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp_108 = lshr i8 %tmp_103, %tmp_106, !dbg !177 ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp_109 = lshr i8 -1, %tmp_107, !dbg !177      ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp_110 = and i8 %tmp_108, %tmp_109            ; [#uses=1 type=i8]
  %tmp_111 = trunc i8 %tmp_110 to i2, !dbg !177   ; [#uses=1 type=i2] [debug line = 46:3@104:15]
  %tmp_41 = icmp eq i2 %tmp_111, %tmp_75, !dbg !177 ; [#uses=1 type=i1] [debug line = 46:3@104:15]
  %diag_score_0_v_i_cast_cast = select i1 %tmp_41, i8 1, i8 -1, !dbg !178 ; [#uses=1 type=i8] [debug line = 47:3@104:15]
  %prev_score_out = add i8 %diag_score_0_v_i_cast_cast, %diag_1, !dbg !178 ; [#uses=4 type=i8] [debug line = 47:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !179) nounwind, !dbg !180 ; [debug line = 55:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !181) nounwind, !dbg !178 ; [debug line = 47:3@104:15] [debug variable = diag_score]
  %prev_score_out_0_op_i = add i8 -1, %score_out2, !dbg !182 ; [#uses=1 type=i8] [debug line = 50:3@104:15]
  %prev_score_out_10 = select i1 %tmp_17, i8 -1, i8 %prev_score_out_0_op_i, !dbg !182 ; [#uses=4 type=i8] [debug line = 50:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_10}, i64 0, metadata !179) nounwind, !dbg !183 ; [debug line = 59:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_10}, i64 0, metadata !184) nounwind, !dbg !182 ; [debug line = 50:3@104:15] [debug variable = left_score]
  call void @llvm.dbg.value(metadata !{i8 %up_score_1}, i64 0, metadata !185) nounwind, !dbg !186 ; [debug line = 51:3@104:15] [debug variable = up_score]
  %tmp_42 = icmp slt i8 %prev_score_out, %prev_score_out_10, !dbg !187 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %tmp_43 = icmp slt i8 %prev_score_out, %up_score_1, !dbg !187 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %or_cond_i = or i1 %tmp_42, %tmp_43, !dbg !187  ; [#uses=2 type=i1] [debug line = 54:3@104:15]
  %tmp_44 = icmp slt i8 %prev_score_out_10, %prev_score_out, !dbg !188 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %tmp_45 = icmp slt i8 %prev_score_out_10, %up_score_1, !dbg !188 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %or_cond1_i = or i1 %tmp_44, %tmp_45, !dbg !188 ; [#uses=2 type=i1] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score_1}, i64 0, metadata !179) nounwind, !dbg !189 ; [debug line = 63:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig_1}, i64 0, metadata !159) nounwind, !dbg !190 ; [debug line = 64:4@104:15] [debug variable = prev_orig_out]
  %prev_score_out_2 = select i1 %or_cond1_i, i8 %up_score_1, i8 %prev_score_out_10, !dbg !188 ; [#uses=1 type=i8] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_2}, i64 0, metadata !179) nounwind, !dbg !188 ; [debug line = 58:8@104:15] [debug variable = prev_score_out]
  %prev_orig_out_6 = select i1 %or_cond1_i, i20 %up_orig_1, i20 %prev_orig_out_14, !dbg !188 ; [#uses=1 type=i20] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_6}, i64 0, metadata !159) nounwind, !dbg !188 ; [debug line = 58:8@104:15] [debug variable = prev_orig_out]
  %prev_score_out_7 = select i1 %or_cond_i, i8 %prev_score_out_2, i8 %prev_score_out ; [#uses=2 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out_7}, i64 0, metadata !179) nounwind, !dbg !180 ; [debug line = 55:4@104:15] [debug variable = prev_score_out]
  %prev_orig_out_11 = select i1 %or_cond_i, i20 %prev_orig_out_6, i20 %prev_orig_out_15 ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_11}, i64 0, metadata !159) nounwind, !dbg !171 ; [debug line = 56:4@104:15] [debug variable = prev_orig_out]
  %score1_addr_2 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp_16, !dbg !191 ; [#uses=1 type=i8*] [debug line = 66:3@104:15]
  store i8 %prev_score_out_7, i8* %score1_addr_2, align 1, !dbg !191 ; [debug line = 66:3@104:15]
  %orig1_addr_1 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp_16, !dbg !192 ; [#uses=1 type=i20*] [debug line = 67:3@104:15]
  store i20 %prev_orig_out_11, i20* %orig1_addr_1, align 4, !dbg !192 ; [debug line = 67:3@104:15]
  %empty_10 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str1, i32 %tmp_31) nounwind, !dbg !193 ; [#uses=0 type=i32] [debug line = 68:2@104:15]
  %j_1 = add i7 1, %j_0_i, !dbg !194              ; [#uses=1 type=i7] [debug line = 22:49@104:15]
  call void @llvm.dbg.value(metadata !{i7 %j_1}, i64 0, metadata !195) nounwind, !dbg !194 ; [debug line = 22:49@104:15] [debug variable = j]
  br label %3, !dbg !194                          ; [debug line = 22:49@104:15]

doRow.exit:                                       ; preds = %3
  call void @llvm.dbg.value(metadata !{i8 %score_out2}, i64 0, metadata !196), !dbg !197 ; [debug line = 70:2@104:15] [debug variable = score_out2]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_14}, i64 0, metadata !198), !dbg !155 ; [debug line = 104:15] [debug variable = orig_out2]
  %max_score_4 = sext i8 %score_out2 to i32, !dbg !199 ; [#uses=2 type=i32] [debug line = 107:3]
  %tmp_10 = icmp sgt i32 %max_score_4, %max_score_1, !dbg !199 ; [#uses=2 type=i1] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score_4}, i64 0, metadata !150), !dbg !200 ; [debug line = 109:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out_14}, i64 0, metadata !153), !dbg !202 ; [debug line = 110:4] [debug variable = max_orig]
  %max_orig_2 = select i1 %tmp_10, i20 %prev_orig_out_14, i20 %max_orig_1, !dbg !199 ; [#uses=1 type=i20] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig_2}, i64 0, metadata !153), !dbg !199 ; [debug line = 107:3] [debug variable = max_orig]
  %max_score_2 = select i1 %tmp_10, i32 %max_score_4, i32 %max_score_1, !dbg !199 ; [#uses=1 type=i32] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score_2}, i64 0, metadata !150), !dbg !199 ; [debug line = 107:3] [debug variable = max_score]
  %empty_11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str6, i32 %tmp_2) nounwind, !dbg !203 ; [#uses=0 type=i32] [debug line = 113:2]
  %i = add i20 %prev_orig_out_1, 2, !dbg !204     ; [#uses=1 type=i20] [debug line = 91:60]
  call void @llvm.dbg.value(metadata !{i20 %i}, i64 0, metadata !205), !dbg !204 ; [debug line = 91:60] [debug variable = i]
  br label %1, !dbg !204                          ; [debug line = 91:60]

; <label>:4                                       ; preds = %1
  ret i20 %max_orig, !dbg !207                    ; [debug line = 115:2]
}

; [#uses=4]
define weak i3 @_ssdm_op_BitConcatenate.i3.i2.i1(i2, i1) nounwind readnone {
entry:
  %empty = zext i2 %0 to i3                       ; [#uses=1 type=i3]
  %empty_12 = zext i1 %1 to i3                    ; [#uses=1 type=i3]
  %empty_13 = shl i3 %empty, 1                    ; [#uses=1 type=i3]
  %empty_14 = or i3 %empty_13, %empty_12          ; [#uses=1 type=i3]
  ret i3 %empty_14
}

; [#uses=2]
define weak i5 @_ssdm_op_PartSelect.i5.i7.i32.i32(i7, i32, i32) nounwind readnone {
entry:
  %empty = call i7 @llvm.part.select.i7(i7 %0, i32 %1, i32 %2) ; [#uses=1 type=i7]
  %empty_15 = trunc i7 %empty to i5               ; [#uses=1 type=i5]
  ret i5 %empty_15
}

; [#uses=2]
define weak i8 @_ssdm_op_Read.axis.volatile.i8P(i8*) {
entry:
  %empty = load i8* %0                            ; [#uses=1 type=i8]
  ret i8 %empty
}

; [#uses=4]
declare i8 @llvm.part.select.i8(i8, i32, i32) nounwind readnone

; [#uses=1]
declare i7 @llvm.part.select.i7(i7, i32, i32) nounwind readnone

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i8.i32.i32(i8, i32, i32) nounwind readnone

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i20.i32.i32(i20, i32, i32) nounwind readnone

; [#uses=0]
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
!48 = metadata !{i32 786689, metadata !49, metadata !"read", null, i32 74, metadata !62, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!49 = metadata !{i32 786478, i32 0, metadata !50, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !50, i32 74, metadata !51, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !60, i32 74} ; [ DW_TAG_subprogram ]
!50 = metadata !{i32 786473, metadata !"643_PE/week3.c", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!51 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !52, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!52 = metadata !{metadata !53, metadata !56, metadata !56}
!53 = metadata !{i32 786454, null, metadata !"orig_t", metadata !50, i32 22, i64 0, i64 0, i64 0, i32 0, metadata !54} ; [ DW_TAG_typedef ]
!54 = metadata !{i32 786454, null, metadata !"uint20", metadata !50, i32 22, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_typedef ]
!55 = metadata !{i32 786468, null, metadata !"uint20", null, i32 0, i64 20, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!56 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !57} ; [ DW_TAG_pointer_type ]
!57 = metadata !{i32 786454, null, metadata !"basepair_t", metadata !50, i32 20, i64 0, i64 0, i64 0, i32 0, metadata !58} ; [ DW_TAG_typedef ]
!58 = metadata !{i32 786454, null, metadata !"uint2", metadata !50, i32 4, i64 0, i64 0, i64 0, i32 0, metadata !59} ; [ DW_TAG_typedef ]
!59 = metadata !{i32 786468, null, metadata !"uint2", null, i32 0, i64 2, i64 2, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!60 = metadata !{metadata !61}
!61 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!62 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !57, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!63 = metadata !{metadata !64}
!64 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!65 = metadata !{i32 74, i32 35, metadata !49, null}
!66 = metadata !{i32 786689, metadata !49, metadata !"ref_genome", null, i32 74, metadata !67, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !57, metadata !68, i32 0, i32 0} ; [ DW_TAG_array_type ]
!68 = metadata !{metadata !69}
!69 = metadata !{i32 786465, i64 0, i64 999999}   ; [ DW_TAG_subrange_type ]
!70 = metadata !{i32 74, i32 80, metadata !49, null}
!71 = metadata !{i32 75, i32 1, metadata !72, null}
!72 = metadata !{i32 786443, metadata !49, i32 74, i32 131, metadata !50, i32 6} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 786688, metadata !72, metadata !"score1", metadata !50, i32 80, metadata !74, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !75, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!75 = metadata !{i32 786454, null, metadata !"score_t", metadata !50, i32 21, i64 0, i64 0, i64 0, i32 0, metadata !76} ; [ DW_TAG_typedef ]
!76 = metadata !{i32 786454, null, metadata !"int8", metadata !50, i32 10, i64 0, i64 0, i64 0, i32 0, metadata !77} ; [ DW_TAG_typedef ]
!77 = metadata !{i32 786468, null, metadata !"int8", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!78 = metadata !{i32 80, i32 10, metadata !72, null}
!79 = metadata !{i32 786688, metadata !72, metadata !"score2", metadata !50, i32 81, metadata !74, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!80 = metadata !{i32 81, i32 10, metadata !72, null}
!81 = metadata !{i32 786688, metadata !72, metadata !"orig1", metadata !50, i32 82, metadata !82, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3200, i64 32, i32 0, i32 0, metadata !53, metadata !63, i32 0, i32 0} ; [ DW_TAG_array_type ]
!83 = metadata !{i32 82, i32 9, metadata !72, null}
!84 = metadata !{i32 786688, metadata !72, metadata !"orig2", metadata !50, i32 83, metadata !82, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!85 = metadata !{i32 83, i32 9, metadata !72, null}
!86 = metadata !{i32 91, i32 12, metadata !87, null}
!87 = metadata !{i32 786443, metadata !72, i32 91, i32 7, metadata !50, i32 7} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 91, i32 66, metadata !89, null}
!89 = metadata !{i32 786443, metadata !87, i32 91, i32 65, metadata !50, i32 8} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 92, i32 15, metadata !89, null}
!91 = metadata !{i32 786689, metadata !92, metadata !"i", metadata !50, i32 16777219, metadata !95, i32 0, metadata !90} ; [ DW_TAG_arg_variable ]
!92 = metadata !{i32 786478, i32 0, metadata !50, metadata !"doRow", metadata !"doRow", metadata !"", metadata !50, i32 3, metadata !93, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !60, i32 5} ; [ DW_TAG_subprogram ]
!93 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !94, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!94 = metadata !{metadata !53, metadata !95, metadata !56, metadata !57, metadata !96, metadata !96, metadata !97, metadata !97, metadata !96}
!95 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!96 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !75} ; [ DW_TAG_pointer_type ]
!97 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !53} ; [ DW_TAG_pointer_type ]
!98 = metadata !{i32 3, i32 18, metadata !92, metadata !90}
!99 = metadata !{i32 786689, metadata !92, metadata !"read", null, i32 3, metadata !62, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!100 = metadata !{i32 3, i32 32, metadata !92, metadata !90}
!101 = metadata !{i32 786689, metadata !92, metadata !"ref_genome", metadata !50, i32 50331651, metadata !57, i32 0, metadata !90} ; [ DW_TAG_arg_variable ]
!102 = metadata !{i32 3, i32 77, metadata !92, metadata !90}
!103 = metadata !{i32 786688, metadata !104, metadata !"prev_orig_out", metadata !50, i32 14, metadata !53, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!104 = metadata !{i32 786443, metadata !92, i32 5, i32 118, metadata !50, i32 0} ; [ DW_TAG_lexical_block ]
!105 = metadata !{i32 14, i32 28, metadata !104, metadata !90}
!106 = metadata !{i32 24, i32 3, metadata !107, metadata !90}
!107 = metadata !{i32 786443, metadata !108, i32 22, i32 54, metadata !50, i32 2} ; [ DW_TAG_lexical_block ]
!108 = metadata !{i32 786443, metadata !104, i32 22, i32 7, metadata !50, i32 1} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 22, i32 12, metadata !108, metadata !90}
!110 = metadata !{i32 60, i32 4, metadata !111, metadata !90}
!111 = metadata !{i32 786443, metadata !107, i32 58, i32 64, metadata !50, i32 4} ; [ DW_TAG_lexical_block ]
!112 = metadata !{i32 22, i32 55, metadata !107, metadata !90}
!113 = metadata !{i32 23, i32 1, metadata !107, metadata !90}
!114 = metadata !{i32 35, i32 3, metadata !107, metadata !90}
!115 = metadata !{i32 786688, metadata !104, metadata !"diag", metadata !50, i32 8, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!116 = metadata !{i32 36, i32 3, metadata !107, metadata !90}
!117 = metadata !{i32 786688, metadata !104, metadata !"up", metadata !50, i32 8, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!118 = metadata !{i32 41, i32 3, metadata !107, metadata !90}
!119 = metadata !{i32 56, i32 4, metadata !120, metadata !90}
!120 = metadata !{i32 786443, metadata !107, i32 54, i32 59, metadata !50, i32 3} ; [ DW_TAG_lexical_block ]
!121 = metadata !{i32 786688, metadata !104, metadata !"diag_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!122 = metadata !{i32 42, i32 3, metadata !107, metadata !90}
!123 = metadata !{i32 786688, metadata !104, metadata !"up_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!124 = metadata !{i32 786688, metadata !104, metadata !"left_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 43, i32 3, metadata !107, metadata !90}
!126 = metadata !{i32 46, i32 3, metadata !107, metadata !90}
!127 = metadata !{i32 47, i32 3, metadata !107, metadata !90}
!128 = metadata !{i32 786688, metadata !104, metadata !"prev_score_out", metadata !50, i32 11, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!129 = metadata !{i32 55, i32 4, metadata !120, metadata !90}
!130 = metadata !{i32 786688, metadata !104, metadata !"diag_score", metadata !50, i32 9, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!131 = metadata !{i32 50, i32 3, metadata !107, metadata !90}
!132 = metadata !{i32 59, i32 4, metadata !111, metadata !90}
!133 = metadata !{i32 786688, metadata !104, metadata !"left_score", metadata !50, i32 9, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!134 = metadata !{i32 51, i32 3, metadata !107, metadata !90}
!135 = metadata !{i32 786688, metadata !104, metadata !"up_score", metadata !50, i32 9, metadata !75, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!136 = metadata !{i32 54, i32 3, metadata !107, metadata !90}
!137 = metadata !{i32 58, i32 8, metadata !107, metadata !90}
!138 = metadata !{i32 63, i32 4, metadata !139, metadata !90}
!139 = metadata !{i32 786443, metadata !107, i32 62, i32 8, metadata !50, i32 5} ; [ DW_TAG_lexical_block ]
!140 = metadata !{i32 64, i32 4, metadata !139, metadata !90}
!141 = metadata !{i32 66, i32 3, metadata !107, metadata !90}
!142 = metadata !{i32 67, i32 3, metadata !107, metadata !90}
!143 = metadata !{i32 68, i32 2, metadata !107, metadata !90}
!144 = metadata !{i32 22, i32 49, metadata !108, metadata !90}
!145 = metadata !{i32 786688, metadata !104, metadata !"j", metadata !50, i32 6, metadata !95, i32 0, metadata !90} ; [ DW_TAG_auto_variable ]
!146 = metadata !{i32 786688, metadata !72, metadata !"score_out1", metadata !50, i32 86, metadata !75, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!147 = metadata !{i32 70, i32 2, metadata !104, metadata !90}
!148 = metadata !{i32 786688, metadata !72, metadata !"orig_out1", metadata !50, i32 85, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!149 = metadata !{i32 95, i32 3, metadata !89, null}
!150 = metadata !{i32 786688, metadata !72, metadata !"max_score", metadata !50, i32 78, metadata !95, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!151 = metadata !{i32 97, i32 4, metadata !152, null}
!152 = metadata !{i32 786443, metadata !89, i32 95, i32 31, metadata !50, i32 9} ; [ DW_TAG_lexical_block ]
!153 = metadata !{i32 786688, metadata !72, metadata !"max_orig", metadata !50, i32 77, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!154 = metadata !{i32 98, i32 4, metadata !152, null}
!155 = metadata !{i32 104, i32 15, metadata !89, null}
!156 = metadata !{i32 3, i32 32, metadata !92, metadata !155}
!157 = metadata !{i32 786689, metadata !92, metadata !"ref_genome", metadata !50, i32 50331651, metadata !57, i32 0, metadata !155} ; [ DW_TAG_arg_variable ]
!158 = metadata !{i32 3, i32 77, metadata !92, metadata !155}
!159 = metadata !{i32 786688, metadata !104, metadata !"prev_orig_out", metadata !50, i32 14, metadata !53, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!160 = metadata !{i32 14, i32 28, metadata !104, metadata !155}
!161 = metadata !{i32 22, i32 12, metadata !108, metadata !155}
!162 = metadata !{i32 60, i32 4, metadata !111, metadata !155}
!163 = metadata !{i32 22, i32 55, metadata !107, metadata !155}
!164 = metadata !{i32 23, i32 1, metadata !107, metadata !155}
!165 = metadata !{i32 24, i32 3, metadata !107, metadata !155}
!166 = metadata !{i32 26, i32 3, metadata !107, metadata !155}
!167 = metadata !{i32 35, i32 3, metadata !107, metadata !155}
!168 = metadata !{i32 786688, metadata !104, metadata !"diag", metadata !50, i32 8, metadata !75, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!169 = metadata !{i32 36, i32 3, metadata !107, metadata !155}
!170 = metadata !{i32 41, i32 3, metadata !107, metadata !155}
!171 = metadata !{i32 56, i32 4, metadata !120, metadata !155}
!172 = metadata !{i32 786688, metadata !104, metadata !"diag_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!173 = metadata !{i32 786688, metadata !104, metadata !"up_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!174 = metadata !{i32 42, i32 3, metadata !107, metadata !155}
!175 = metadata !{i32 786688, metadata !104, metadata !"left_orig", metadata !50, i32 10, metadata !53, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!176 = metadata !{i32 43, i32 3, metadata !107, metadata !155}
!177 = metadata !{i32 46, i32 3, metadata !107, metadata !155}
!178 = metadata !{i32 47, i32 3, metadata !107, metadata !155}
!179 = metadata !{i32 786688, metadata !104, metadata !"prev_score_out", metadata !50, i32 11, metadata !75, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!180 = metadata !{i32 55, i32 4, metadata !120, metadata !155}
!181 = metadata !{i32 786688, metadata !104, metadata !"diag_score", metadata !50, i32 9, metadata !75, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!182 = metadata !{i32 50, i32 3, metadata !107, metadata !155}
!183 = metadata !{i32 59, i32 4, metadata !111, metadata !155}
!184 = metadata !{i32 786688, metadata !104, metadata !"left_score", metadata !50, i32 9, metadata !75, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!185 = metadata !{i32 786688, metadata !104, metadata !"up_score", metadata !50, i32 9, metadata !75, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!186 = metadata !{i32 51, i32 3, metadata !107, metadata !155}
!187 = metadata !{i32 54, i32 3, metadata !107, metadata !155}
!188 = metadata !{i32 58, i32 8, metadata !107, metadata !155}
!189 = metadata !{i32 63, i32 4, metadata !139, metadata !155}
!190 = metadata !{i32 64, i32 4, metadata !139, metadata !155}
!191 = metadata !{i32 66, i32 3, metadata !107, metadata !155}
!192 = metadata !{i32 67, i32 3, metadata !107, metadata !155}
!193 = metadata !{i32 68, i32 2, metadata !107, metadata !155}
!194 = metadata !{i32 22, i32 49, metadata !108, metadata !155}
!195 = metadata !{i32 786688, metadata !104, metadata !"j", metadata !50, i32 6, metadata !95, i32 0, metadata !155} ; [ DW_TAG_auto_variable ]
!196 = metadata !{i32 786688, metadata !72, metadata !"score_out2", metadata !50, i32 86, metadata !75, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!197 = metadata !{i32 70, i32 2, metadata !104, metadata !155}
!198 = metadata !{i32 786688, metadata !72, metadata !"orig_out2", metadata !50, i32 85, metadata !53, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!199 = metadata !{i32 107, i32 3, metadata !89, null}
!200 = metadata !{i32 109, i32 4, metadata !201, null}
!201 = metadata !{i32 786443, metadata !89, i32 107, i32 31, metadata !50, i32 10} ; [ DW_TAG_lexical_block ]
!202 = metadata !{i32 110, i32 4, metadata !201, null}
!203 = metadata !{i32 113, i32 2, metadata !89, null}
!204 = metadata !{i32 91, i32 60, metadata !87, null}
!205 = metadata !{i32 786688, metadata !72, metadata !"i", metadata !50, i32 76, metadata !206, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!206 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!207 = metadata !{i32 115, i32 2, metadata !72, null}
