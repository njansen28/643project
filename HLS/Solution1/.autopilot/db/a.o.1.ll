; ModuleID = 'C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

%struct.NW_matrix.0 = type { [20341 x [101 x i8]], [20341 x [101 x i32]] }

@nw_matrix = external global %struct.NW_matrix.0  ; [#uses=14 type=%struct.NW_matrix.0*]
@best_fits = common global [100 x i32] zeroinitializer, align 16 ; [#uses=0 type=[100 x i32]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=0]
define i32 @needlemanWunsch(i8* %reads, i8* %ref_genome) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !40
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  call void @llvm.dbg.value(metadata !{i8* %reads}, i64 0, metadata !46), !dbg !47 ; [debug line = 3:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{i8* %ref_genome}, i64 0, metadata !48), !dbg !49 ; [debug line = 3:75] [debug variable = ref_genome]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %ref_genome, i32 20340), !dbg !50 ; [debug line = 3:125]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %reads, i32 100), !dbg !52 ; [debug line = 3:166]
  br label %1, !dbg !53                           ; [debug line = 15:7]

; <label>:1                                       ; preds = %._crit_edge, %0
  %max.2 = phi i32 [ 1, %0 ], [ %i, %._crit_edge ] ; [#uses=5 type=i32]
  %max = phi i32 [ 0, %0 ], [ %max.1, %._crit_edge ] ; [#uses=2 type=i32]
  %max_score = phi i32 [ -100, %0 ], [ %max_score.1, %._crit_edge ] ; [#uses=2 type=i32]
  %exitcond1 = icmp eq i32 %max.2, 20341, !dbg !53 ; [#uses=1 type=i1] [debug line = 15:7]
  br i1 %exitcond1, label %11, label %.preheader.preheader, !dbg !53 ; [debug line = 15:7]

.preheader.preheader:                             ; preds = %1
  %tmp.1 = add i32 %max.2, -1, !dbg !55           ; [#uses=1 type=i32] [debug line = 20:4]
  %tmp.2 = zext i32 %tmp.1 to i64, !dbg !55       ; [#uses=5 type=i64] [debug line = 20:4]
  %tmp.3 = zext i32 %max.2 to i64, !dbg !59       ; [#uses=9 type=i64] [debug line = 21:4]
  %ref_genome.addr = getelementptr inbounds i8* %ref_genome, i64 %tmp.2, !dbg !60 ; [#uses=1 type=i8*] [debug line = 25:4]
  br label %.preheader, !dbg !61                  ; [debug line = 18:8]

.preheader:                                       ; preds = %8, %.preheader.preheader
  %j = phi i32 [ %j.1, %8 ], [ 1, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %j, 101, !dbg !61       ; [#uses=1 type=i1] [debug line = 18:8]
  br i1 %exitcond, label %9, label %2, !dbg !61   ; [debug line = 18:8]

; <label>:2                                       ; preds = %.preheader
  %tmp.6 = zext i32 %j to i64, !dbg !55           ; [#uses=8 type=i64] [debug line = 20:4]
  %nw_matrix.addr.2 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.2, i64 %tmp.6, !dbg !55 ; [#uses=1 type=i8*] [debug line = 20:4]
  %nw_matrix.load.2 = load i8* %nw_matrix.addr.2, align 1, !dbg !55 ; [#uses=2 type=i8] [debug line = 20:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %nw_matrix.load.2) nounwind
  %up = sext i8 %nw_matrix.load.2 to i32, !dbg !55 ; [#uses=1 type=i32] [debug line = 20:4]
  call void @llvm.dbg.value(metadata !{i32 %up}, i64 0, metadata !62), !dbg !55 ; [debug line = 20:4] [debug variable = up]
  %tmp.7 = add i32 %j, -1, !dbg !59               ; [#uses=1 type=i32] [debug line = 21:4]
  %tmp.8 = zext i32 %tmp.7 to i64, !dbg !59       ; [#uses=5 type=i64] [debug line = 21:4]
  %nw_matrix.addr.3 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.3, i64 %tmp.8, !dbg !59 ; [#uses=1 type=i8*] [debug line = 21:4]
  %nw_matrix.load.3 = load i8* %nw_matrix.addr.3, align 1, !dbg !59 ; [#uses=2 type=i8] [debug line = 21:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %nw_matrix.load.3) nounwind
  %left = sext i8 %nw_matrix.load.3 to i32, !dbg !59 ; [#uses=1 type=i32] [debug line = 21:4]
  call void @llvm.dbg.value(metadata !{i32 %left}, i64 0, metadata !63), !dbg !59 ; [debug line = 21:4] [debug variable = left]
  %nw_matrix.addr.4 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.2, i64 %tmp.8, !dbg !64 ; [#uses=1 type=i8*] [debug line = 22:4]
  %nw_matrix.load.4 = load i8* %nw_matrix.addr.4, align 1, !dbg !64 ; [#uses=2 type=i8] [debug line = 22:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %nw_matrix.load.4) nounwind
  %diag = sext i8 %nw_matrix.load.4 to i32, !dbg !64 ; [#uses=1 type=i32] [debug line = 22:4]
  call void @llvm.dbg.value(metadata !{i32 %diag}, i64 0, metadata !65), !dbg !64 ; [debug line = 22:4] [debug variable = diag]
  %ref_genome.load = load i8* %ref_genome.addr, align 1, !dbg !60 ; [#uses=2 type=i8] [debug line = 25:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %ref_genome.load) nounwind
  %reads.addr = getelementptr inbounds i8* %reads, i64 %tmp.8, !dbg !60 ; [#uses=1 type=i8*] [debug line = 25:4]
  %reads.load = load i8* %reads.addr, align 1, !dbg !60 ; [#uses=2 type=i8] [debug line = 25:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %reads.load) nounwind
  %tmp.9 = icmp eq i8 %ref_genome.load, %reads.load, !dbg !60 ; [#uses=1 type=i1] [debug line = 25:4]
  %diag_score.0.v = select i1 %tmp.9, i32 1, i32 -1, !dbg !66 ; [#uses=1 type=i32] [debug line = 26:4]
  %diag_score = add i32 %diag_score.0.v, %diag, !dbg !66 ; [#uses=4 type=i32] [debug line = 26:4]
  call void @llvm.dbg.value(metadata !{i32 %diag_score}, i64 0, metadata !67), !dbg !66 ; [debug line = 26:4] [debug variable = diag_score]
  %left_score = add nsw i32 %left, -1, !dbg !68   ; [#uses=4 type=i32] [debug line = 29:4]
  call void @llvm.dbg.value(metadata !{i32 %left_score}, i64 0, metadata !69), !dbg !68 ; [debug line = 29:4] [debug variable = left_score]
  %up_score = add nsw i32 %up, -1, !dbg !70       ; [#uses=3 type=i32] [debug line = 30:4]
  call void @llvm.dbg.value(metadata !{i32 %up_score}, i64 0, metadata !71), !dbg !70 ; [debug line = 30:4] [debug variable = up_score]
  %tmp.10 = icmp slt i32 %diag_score, %left_score, !dbg !72 ; [#uses=1 type=i1] [debug line = 33:4]
  %tmp.11 = icmp slt i32 %diag_score, %up_score, !dbg !72 ; [#uses=1 type=i1] [debug line = 33:4]
  %or.cond = or i1 %tmp.10, %tmp.11, !dbg !72     ; [#uses=1 type=i1] [debug line = 33:4]
  br i1 %or.cond, label %4, label %3, !dbg !72    ; [debug line = 33:4]

; <label>:3                                       ; preds = %2
  %tmp.15 = trunc i32 %diag_score to i8, !dbg !73 ; [#uses=1 type=i8] [debug line = 34:5]
  %nw_matrix.addr.5 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.3, i64 %tmp.6, !dbg !73 ; [#uses=1 type=i8*] [debug line = 34:5]
  store i8 %tmp.15, i8* %nw_matrix.addr.5, align 1, !dbg !73 ; [debug line = 34:5]
  %nw_matrix.addr.6 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.2, i64 %tmp.8, !dbg !75 ; [#uses=1 type=i32*] [debug line = 35:5]
  %nw_matrix.load.5 = load i32* %nw_matrix.addr.6, align 4, !dbg !75 ; [#uses=2 type=i32] [debug line = 35:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %nw_matrix.load.5) nounwind
  %nw_matrix.addr.7 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.3, i64 %tmp.6, !dbg !75 ; [#uses=1 type=i32*] [debug line = 35:5]
  store i32 %nw_matrix.load.5, i32* %nw_matrix.addr.7, align 4, !dbg !75 ; [debug line = 35:5]
  br label %8, !dbg !76                           ; [debug line = 36:4]

; <label>:4                                       ; preds = %2
  %tmp.13 = icmp slt i32 %left_score, %diag_score, !dbg !77 ; [#uses=1 type=i1] [debug line = 37:9]
  %tmp.14 = icmp slt i32 %left_score, %up_score, !dbg !77 ; [#uses=1 type=i1] [debug line = 37:9]
  %or.cond2 = or i1 %tmp.13, %tmp.14, !dbg !77    ; [#uses=1 type=i1] [debug line = 37:9]
  br i1 %or.cond2, label %6, label %5, !dbg !77   ; [debug line = 37:9]

; <label>:5                                       ; preds = %4
  %tmp.17 = trunc i32 %left_score to i8, !dbg !78 ; [#uses=1 type=i8] [debug line = 38:5]
  %nw_matrix.addr.11 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.3, i64 %tmp.6, !dbg !78 ; [#uses=1 type=i8*] [debug line = 38:5]
  store i8 %tmp.17, i8* %nw_matrix.addr.11, align 1, !dbg !78 ; [debug line = 38:5]
  %nw_matrix.addr.12 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.3, i64 %tmp.8, !dbg !80 ; [#uses=1 type=i32*] [debug line = 39:5]
  %nw_matrix.load.7 = load i32* %nw_matrix.addr.12, align 4, !dbg !80 ; [#uses=2 type=i32] [debug line = 39:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %nw_matrix.load.7) nounwind
  %nw_matrix.addr.13 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.3, i64 %tmp.6, !dbg !80 ; [#uses=1 type=i32*] [debug line = 39:5]
  store i32 %nw_matrix.load.7, i32* %nw_matrix.addr.13, align 4, !dbg !80 ; [debug line = 39:5]
  br label %7, !dbg !81                           ; [debug line = 40:4]

; <label>:6                                       ; preds = %4
  %tmp.16 = trunc i32 %up_score to i8, !dbg !82   ; [#uses=1 type=i8] [debug line = 42:5]
  %nw_matrix.addr.8 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.3, i64 %tmp.6, !dbg !82 ; [#uses=1 type=i8*] [debug line = 42:5]
  store i8 %tmp.16, i8* %nw_matrix.addr.8, align 1, !dbg !82 ; [debug line = 42:5]
  %nw_matrix.addr.9 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.2, i64 %tmp.6, !dbg !84 ; [#uses=1 type=i32*] [debug line = 43:5]
  %nw_matrix.load.6 = load i32* %nw_matrix.addr.9, align 4, !dbg !84 ; [#uses=2 type=i32] [debug line = 43:5]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %nw_matrix.load.6) nounwind
  %nw_matrix.addr.10 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp.3, i64 %tmp.6, !dbg !84 ; [#uses=1 type=i32*] [debug line = 43:5]
  store i32 %nw_matrix.load.6, i32* %nw_matrix.addr.10, align 4, !dbg !84 ; [debug line = 43:5]
  br label %7

; <label>:7                                       ; preds = %6, %5
  br label %8

; <label>:8                                       ; preds = %7, %3
  %j.1 = add i32 %j, 1, !dbg !85                  ; [#uses=1 type=i32] [debug line = 18:45]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !86), !dbg !85 ; [debug line = 18:45] [debug variable = j]
  br label %.preheader, !dbg !85                  ; [debug line = 18:45]

; <label>:9                                       ; preds = %.preheader
  %nw_matrix.addr.1 = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 0, i64 %tmp.3, i64 100, !dbg !87 ; [#uses=1 type=i8*] [debug line = 48:3]
  %nw_matrix.load.1 = load i8* %nw_matrix.addr.1, align 1, !dbg !87 ; [#uses=3 type=i8] [debug line = 48:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %nw_matrix.load.1) nounwind
  %max_score.2 = sext i8 %nw_matrix.load.1 to i32, !dbg !87 ; [#uses=2 type=i32] [debug line = 48:3]
  %tmp.5 = icmp sgt i32 %max_score.2, %max_score, !dbg !87 ; [#uses=1 type=i1] [debug line = 48:3]
  br i1 %tmp.5, label %10, label %._crit_edge, !dbg !87 ; [debug line = 48:3]

; <label>:10                                      ; preds = %9
  call void @llvm.dbg.value(metadata !{i32 %max.2}, i64 0, metadata !88), !dbg !89 ; [debug line = 49:4] [debug variable = max]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %nw_matrix.load.1) nounwind
  call void @llvm.dbg.value(metadata !{i32 %max_score.2}, i64 0, metadata !91), !dbg !92 ; [debug line = 50:4] [debug variable = max_score]
  br label %._crit_edge, !dbg !93                 ; [debug line = 51:3]

._crit_edge:                                      ; preds = %10, %9
  %max.1 = phi i32 [ %max.2, %10 ], [ %max, %9 ]  ; [#uses=1 type=i32]
  %max_score.1 = phi i32 [ %max_score.2, %10 ], [ %max_score, %9 ] ; [#uses=1 type=i32]
  %i = add i32 %max.2, 1, !dbg !94                ; [#uses=1 type=i32] [debug line = 15:53]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !95), !dbg !94 ; [debug line = 15:53] [debug variable = i]
  br label %1, !dbg !94                           ; [debug line = 15:53]

; <label>:11                                      ; preds = %1
  %max.0.lcssa = phi i32 [ %max, %1 ]             ; [#uses=1 type=i32]
  %tmp = zext i32 %max.0.lcssa to i64, !dbg !96   ; [#uses=1 type=i64] [debug line = 53:2]
  %nw_matrix.addr = getelementptr inbounds %struct.NW_matrix.0* @nw_matrix, i64 0, i32 1, i64 %tmp, i64 100, !dbg !96 ; [#uses=1 type=i32*] [debug line = 53:2]
  %nw_matrix.load = load i32* %nw_matrix.addr, align 4, !dbg !96 ; [#uses=2 type=i32] [debug line = 53:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %nw_matrix.load) nounwind
  ret i32 %nw_matrix.load, !dbg !96               ; [debug line = 53:2]
}

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=12]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=11]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel2/643_PE/solution1/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel2", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !14} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i8*, i8*)* @needlemanWunsch, null, null, metadata !12, i32 3} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"643_PE/week3.c", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !10, metadata !10}
!9 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!10 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!11 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!12 = metadata !{metadata !13}
!13 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!14 = metadata !{metadata !15}
!15 = metadata !{metadata !16, metadata !21, metadata !24, metadata !25, metadata !27, metadata !29}
!16 = metadata !{i32 786484, i32 0, null, metadata !"best_fits", metadata !"best_fits", metadata !"", metadata !17, i32 28, metadata !18, i32 0, i32 1, [100 x i32]* @best_fits} ; [ DW_TAG_variable ]
!17 = metadata !{i32 786473, metadata !"643_PE/week3.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!18 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3200, i64 32, i32 0, i32 0, metadata !9, metadata !19, i32 0, i32 0} ; [ DW_TAG_array_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!21 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !22, i32 103, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!22 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!23 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!24 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !22, i32 250, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!25 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !26, i32 157, metadata !23, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!26 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!27 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !28, i32 53, metadata !9, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!28 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!29 = metadata !{i32 786484, i32 0, null, metadata !"nw_matrix", metadata !"nw_matrix", metadata !"", metadata !17, i32 25, metadata !30, i32 0, i32 1, %struct.NW_matrix.0* @nw_matrix} ; [ DW_TAG_variable ]
!30 = metadata !{i32 786454, null, metadata !"NW_matrix", metadata !17, i32 23, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_typedef ]
!31 = metadata !{i32 786451, null, metadata !"", metadata !17, i32 20, i64 82177664, i64 32, i32 0, i32 0, null, metadata !32, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!32 = metadata !{metadata !33, metadata !38}
!33 = metadata !{i32 786445, metadata !31, metadata !"score", metadata !17, i32 21, i64 16435528, i64 8, i64 0, i32 0, metadata !34} ; [ DW_TAG_member ]
!34 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 16435528, i64 8, i32 0, i32 0, metadata !11, metadata !35, i32 0, i32 0} ; [ DW_TAG_array_type ]
!35 = metadata !{metadata !36, metadata !37}
!36 = metadata !{i32 786465, i64 0, i64 20340}    ; [ DW_TAG_subrange_type ]
!37 = metadata !{i32 786465, i64 0, i64 100}      ; [ DW_TAG_subrange_type ]
!38 = metadata !{i32 786445, metadata !31, metadata !"orig", metadata !17, i32 22, i64 65742112, i64 32, i64 16435552, i32 0, metadata !39} ; [ DW_TAG_member ]
!39 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 65742112, i64 32, i32 0, i32 0, metadata !9, metadata !35, i32 0, i32 0} ; [ DW_TAG_array_type ]
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 31, metadata !42}
!42 = metadata !{metadata !43}
!43 = metadata !{metadata !"return", metadata !44, metadata !"unsigned int", i32 0, i32 31}
!44 = metadata !{metadata !45}
!45 = metadata !{i32 0, i32 1, i32 0}
!46 = metadata !{i32 786689, metadata !5, metadata !"reads", metadata !6, i32 16777219, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!47 = metadata !{i32 3, i32 35, metadata !5, null}
!48 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 33554435, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!49 = metadata !{i32 3, i32 75, metadata !5, null}
!50 = metadata !{i32 3, i32 125, metadata !51, null}
!51 = metadata !{i32 786443, metadata !5, i32 3, i32 124, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 3, i32 166, metadata !51, null}
!53 = metadata !{i32 15, i32 7, metadata !54, null}
!54 = metadata !{i32 786443, metadata !51, i32 15, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 20, i32 4, metadata !56, null}
!56 = metadata !{i32 786443, metadata !57, i32 18, i32 50, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 786443, metadata !58, i32 18, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 786443, metadata !54, i32 15, i32 58, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 21, i32 4, metadata !56, null}
!60 = metadata !{i32 25, i32 4, metadata !56, null}
!61 = metadata !{i32 18, i32 8, metadata !57, null}
!62 = metadata !{i32 786688, metadata !51, metadata !"up", metadata !6, i32 6, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!63 = metadata !{i32 786688, metadata !51, metadata !"left", metadata !6, i32 6, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!64 = metadata !{i32 22, i32 4, metadata !56, null}
!65 = metadata !{i32 786688, metadata !51, metadata !"diag", metadata !6, i32 6, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!66 = metadata !{i32 26, i32 4, metadata !56, null}
!67 = metadata !{i32 786688, metadata !51, metadata !"diag_score", metadata !6, i32 7, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 29, i32 4, metadata !56, null}
!69 = metadata !{i32 786688, metadata !51, metadata !"left_score", metadata !6, i32 7, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 30, i32 4, metadata !56, null}
!71 = metadata !{i32 786688, metadata !51, metadata !"up_score", metadata !6, i32 7, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!72 = metadata !{i32 33, i32 4, metadata !56, null}
!73 = metadata !{i32 34, i32 5, metadata !74, null}
!74 = metadata !{i32 786443, metadata !56, i32 33, i32 60, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 35, i32 5, metadata !74, null}
!76 = metadata !{i32 36, i32 4, metadata !74, null}
!77 = metadata !{i32 37, i32 9, metadata !56, null}
!78 = metadata !{i32 38, i32 5, metadata !79, null}
!79 = metadata !{i32 786443, metadata !56, i32 37, i32 65, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 39, i32 5, metadata !79, null}
!81 = metadata !{i32 40, i32 4, metadata !79, null}
!82 = metadata !{i32 42, i32 5, metadata !83, null}
!83 = metadata !{i32 786443, metadata !56, i32 41, i32 9, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!84 = metadata !{i32 43, i32 5, metadata !83, null}
!85 = metadata !{i32 18, i32 45, metadata !57, null}
!86 = metadata !{i32 786688, metadata !51, metadata !"j", metadata !6, i32 5, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!87 = metadata !{i32 48, i32 3, metadata !58, null}
!88 = metadata !{i32 786688, metadata !51, metadata !"max", metadata !6, i32 9, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!89 = metadata !{i32 49, i32 4, metadata !90, null}
!90 = metadata !{i32 786443, metadata !58, i32 48, i32 67, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!91 = metadata !{i32 786688, metadata !51, metadata !"max_score", metadata !6, i32 10, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!92 = metadata !{i32 50, i32 4, metadata !90, null}
!93 = metadata !{i32 51, i32 3, metadata !90, null}
!94 = metadata !{i32 15, i32 53, metadata !54, null}
!95 = metadata !{i32 786688, metadata !51, metadata !"i", metadata !6, i32 5, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!96 = metadata !{i32 53, i32 2, metadata !51, null}
