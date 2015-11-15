// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="needlemanWunsch,hls_ip_2015_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.513750,HLS_SYN_LAT=210,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=181,HLS_SYN_LUT=239}" *)

module needlemanWunsch (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        reads_address0,
        reads_ce0,
        reads_q0,
        ref_genome,
        orig_in_address0,
        orig_in_ce0,
        orig_in_q0,
        orig_out_address0,
        orig_out_ce0,
        orig_out_we0,
        orig_out_d0,
        orig_out_q0,
        score_in_address0,
        score_in_ce0,
        score_in_q0,
        score_in_address1,
        score_in_ce1,
        score_in_q1,
        score_out_address0,
        score_out_ce0,
        score_out_we0,
        score_out_d0,
        score_out_q0,
        i,
        ap_return
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 8'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 8'b10;
parameter    ap_ST_pp0_stg1_fsm_2 = 8'b100;
parameter    ap_ST_st9_fsm_3 = 8'b1000;
parameter    ap_ST_st10_fsm_4 = 8'b10000;
parameter    ap_ST_st11_fsm_5 = 8'b100000;
parameter    ap_ST_st12_fsm_6 = 8'b1000000;
parameter    ap_ST_st13_fsm_7 = 8'b10000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_3 = 32'b11;
parameter    ap_const_lv32_4 = 32'b100;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv7_1 = 7'b1;
parameter    ap_const_lv64_64 = 64'b1100100;
parameter    ap_const_lv32_6 = 32'b110;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv32_FFFFFF9C = 32'b11111111111111111111111110011100;
parameter    ap_const_lv7_65 = 7'b1100101;
parameter    ap_const_lv7_7F = 7'b1111111;
parameter    ap_const_lv9_1 = 9'b1;
parameter    ap_const_lv9_1FF = 9'b111111111;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [6:0] reads_address0;
output   reads_ce0;
input  [7:0] reads_q0;
input  [7:0] ref_genome;
output  [6:0] orig_in_address0;
output   orig_in_ce0;
input  [31:0] orig_in_q0;
output  [6:0] orig_out_address0;
output   orig_out_ce0;
output   orig_out_we0;
output  [31:0] orig_out_d0;
input  [31:0] orig_out_q0;
output  [6:0] score_in_address0;
output   score_in_ce0;
input  [7:0] score_in_q0;
output  [6:0] score_in_address1;
output   score_in_ce1;
input  [7:0] score_in_q1;
output  [6:0] score_out_address0;
output   score_out_ce0;
output   score_out_we0;
output  [7:0] score_out_d0;
input  [7:0] score_out_q0;
input  [31:0] i;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg reads_ce0;
reg[6:0] orig_in_address0;
reg orig_in_ce0;
reg[6:0] orig_out_address0;
reg orig_out_ce0;
reg orig_out_we0;
reg[31:0] orig_out_d0;
reg score_in_ce0;
reg score_in_ce1;
reg[6:0] score_out_address0;
reg score_out_ce0;
reg score_out_we0;
reg[7:0] score_out_d0;
(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm = 8'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_24;
reg   [31:0] max_orig = 32'b00000000000000000000000000000000;
reg   [31:0] max_score = 32'b00000000000000000000000000000000;
reg   [6:0] j_reg_220;
reg   [31:0] reg_232;
reg    ap_sig_cseq_ST_pp0_stg1_fsm_2;
reg    ap_sig_bdd_81;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
reg   [0:0] or_cond_reg_478;
reg   [0:0] or_cond1_reg_487;
wire   [0:0] exitcond_fu_255_p2;
reg   [0:0] exitcond_reg_405;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_112;
reg    ap_reg_ppiten_pp0_it3 = 1'b0;
wire   [63:0] tmp_4_fu_267_p1;
reg   [63:0] tmp_4_reg_409;
reg   [63:0] ap_reg_ppstg_tmp_4_reg_409_pp0_it1;
reg   [63:0] ap_reg_ppstg_tmp_4_reg_409_pp0_it2;
reg   [7:0] reads_load_reg_422;
wire   [6:0] j_1_fu_272_p2;
reg   [6:0] j_1_reg_427;
wire   [63:0] tmp_5_fu_278_p1;
reg   [63:0] tmp_5_reg_437;
reg   [63:0] ap_reg_ppstg_tmp_5_reg_437_pp0_it2;
wire   [0:0] tmp_6_fu_283_p2;
reg   [0:0] tmp_6_reg_453;
wire  signed [8:0] diag_score_fu_302_p2;
reg  signed [8:0] diag_score_reg_463;
wire  signed [8:0] up_score_fu_308_p2;
reg  signed [8:0] up_score_reg_471;
wire   [0:0] or_cond_fu_333_p2;
wire   [0:0] or_cond1_fu_353_p2;
reg    ap_sig_cseq_ST_st9_fsm_3;
reg    ap_sig_bdd_176;
reg   [7:0] score_out_load_reg_506;
reg    ap_sig_cseq_ST_st10_fsm_4;
reg    ap_sig_bdd_184;
reg    ap_sig_cseq_ST_st11_fsm_5;
reg    ap_sig_bdd_193;
wire   [0:0] tmp_2_fu_375_p2;
reg   [6:0] j_phi_fu_224_p4;
wire   [6:0] score_out_addr_4_gep_fu_141_p3;
wire   [6:0] score_out_addr_3_gep_fu_149_p3;
wire   [6:0] orig_out_addr_4_gep_fu_185_p3;
wire   [6:0] orig_out_addr_2_gep_fu_194_p3;
wire   [0:0] tmp_fu_237_p2;
reg    ap_sig_cseq_ST_st12_fsm_6;
reg    ap_sig_bdd_238;
reg    ap_sig_cseq_ST_st13_fsm_7;
reg    ap_sig_bdd_247;
wire  signed [31:0] tmp_1_fu_368_p1;
wire   [7:0] tmp_11_fu_339_p1;
wire   [7:0] tmp_13_fu_359_p1;
wire   [7:0] tmp_12_fu_364_p1;
wire  signed [6:0] tmp_3_fu_261_p2;
wire  signed [8:0] diag_cast_fu_287_p1;
wire   [8:0] diag_score_0_v_cast_cast_fu_295_p3;
wire  signed [8:0] up_cast_fu_291_p1;
wire  signed [8:0] left_cast_fu_314_p1;
wire  signed [8:0] left_score_fu_318_p2;
wire   [0:0] tmp_7_fu_324_p2;
wire   [0:0] tmp_8_fu_329_p2;
wire   [0:0] tmp_9_fu_343_p2;
wire   [0:0] tmp_s_fu_348_p2;
reg   [7:0] ap_NS_fsm;
reg    ap_sig_bdd_164;
reg    ap_sig_bdd_213;
reg    ap_sig_bdd_216;




/// the current state (ap_CS_fsm) of the state machine. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

/// ap_reg_ppiten_pp0_it0 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == exitcond_fu_255_p2))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

/// ap_reg_ppiten_pp0_it1 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_lv1_0 == exitcond_reg_405))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & ~(ap_const_lv1_0 == exitcond_reg_405)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

/// ap_reg_ppiten_pp0_it2 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2)) begin
            ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
        end
    end
end

/// ap_reg_ppiten_pp0_it3 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it3
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it3 <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2)) begin
            ap_reg_ppiten_pp0_it3 <= ap_reg_ppiten_pp0_it2;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
            ap_reg_ppiten_pp0_it3 <= ap_const_logic_0;
        end
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == exitcond_reg_405))) begin
        j_reg_220 <= j_1_reg_427;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        j_reg_220 <= ap_const_lv7_1;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st12_fsm_6)) begin
        max_orig <= orig_out_q0;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0) & ~(ap_const_lv1_0 == tmp_fu_237_p2))) begin
        max_orig <= ap_const_lv32_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st11_fsm_5) & ~(ap_const_lv1_0 == tmp_2_fu_375_p2))) begin
        max_score <= tmp_1_fu_368_p1;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0) & ~(ap_const_lv1_0 == tmp_fu_237_p2))) begin
        max_score <= ap_const_lv32_FFFFFF9C;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1)) begin
        ap_reg_ppstg_tmp_4_reg_409_pp0_it1[6 : 0] <= tmp_4_reg_409[6 : 0];
        ap_reg_ppstg_tmp_4_reg_409_pp0_it2[6 : 0] <= ap_reg_ppstg_tmp_4_reg_409_pp0_it1[6 : 0];
        ap_reg_ppstg_tmp_5_reg_437_pp0_it2[6 : 0] <= tmp_5_reg_437[6 : 0];
        exitcond_reg_405 <= exitcond_fu_255_p2;
        or_cond_reg_478 <= or_cond_fu_333_p2;
        tmp_5_reg_437[6 : 0] <= tmp_5_fu_278_p1[6 : 0];
        tmp_6_reg_453 <= tmp_6_fu_283_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2)) begin
        diag_score_reg_463 <= diag_score_fu_302_p2;
        up_score_reg_471 <= up_score_fu_308_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_lv1_0 == exitcond_reg_405))) begin
        j_1_reg_427 <= j_1_fu_272_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2))) begin
        or_cond1_reg_487 <= or_cond1_fu_353_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_lv1_0 == exitcond_reg_405))) begin
        reads_load_reg_422 <= reads_q0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (or_cond_reg_478 == ap_const_lv1_0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & ~(or_cond_reg_478 == ap_const_lv1_0) & ~(ap_const_lv1_0 == or_cond1_reg_487)))) begin
        reg_232 <= orig_in_q0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st10_fsm_4)) begin
        score_out_load_reg_506 <= score_out_q0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == exitcond_fu_255_p2))) begin
        tmp_4_reg_409[6 : 0] <= tmp_4_fu_267_p1[6 : 0];
    end
end

/// ap_done assign process. ///
always @ (ap_sig_cseq_ST_st13_fsm_7)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_7)) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

/// ap_idle assign process. ///
always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0)
begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_ready assign process. ///
always @ (ap_sig_cseq_ST_st13_fsm_7)
begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st13_fsm_7)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_pp0_stg0_fsm_1 assign process. ///
always @ (ap_sig_bdd_112)
begin
    if (ap_sig_bdd_112) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_pp0_stg1_fsm_2 assign process. ///
always @ (ap_sig_bdd_81)
begin
    if (ap_sig_bdd_81) begin
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st10_fsm_4 assign process. ///
always @ (ap_sig_bdd_184)
begin
    if (ap_sig_bdd_184) begin
        ap_sig_cseq_ST_st10_fsm_4 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st10_fsm_4 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st11_fsm_5 assign process. ///
always @ (ap_sig_bdd_193)
begin
    if (ap_sig_bdd_193) begin
        ap_sig_cseq_ST_st11_fsm_5 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st11_fsm_5 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st12_fsm_6 assign process. ///
always @ (ap_sig_bdd_238)
begin
    if (ap_sig_bdd_238) begin
        ap_sig_cseq_ST_st12_fsm_6 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st12_fsm_6 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st13_fsm_7 assign process. ///
always @ (ap_sig_bdd_247)
begin
    if (ap_sig_bdd_247) begin
        ap_sig_cseq_ST_st13_fsm_7 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st13_fsm_7 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st1_fsm_0 assign process. ///
always @ (ap_sig_bdd_24)
begin
    if (ap_sig_bdd_24) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

/// ap_sig_cseq_ST_st9_fsm_3 assign process. ///
always @ (ap_sig_bdd_176)
begin
    if (ap_sig_bdd_176) begin
        ap_sig_cseq_ST_st9_fsm_3 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st9_fsm_3 = ap_const_logic_0;
    end
end

/// j_phi_fu_224_p4 assign process. ///
always @ (j_reg_220 or ap_reg_ppiten_pp0_it1 or exitcond_reg_405 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or j_1_reg_427)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == exitcond_reg_405))) begin
        j_phi_fu_224_p4 = j_1_reg_427;
    end else begin
        j_phi_fu_224_p4 = j_reg_220;
    end
end

/// orig_in_address0 assign process. ///
always @ (ap_reg_ppstg_tmp_4_reg_409_pp0_it1 or tmp_5_reg_437 or or_cond_fu_333_p2 or ap_sig_bdd_164 or ap_sig_bdd_213)
begin
    if (ap_sig_bdd_213) begin
        if (ap_sig_bdd_164) begin
            orig_in_address0 = tmp_5_reg_437;
        end else if ((ap_const_lv1_0 == or_cond_fu_333_p2)) begin
            orig_in_address0 = ap_reg_ppstg_tmp_4_reg_409_pp0_it1;
        end else begin
            orig_in_address0 = 'bx;
        end
    end else begin
        orig_in_address0 = 'bx;
    end
end

/// orig_in_ce0 assign process. ///
always @ (ap_reg_ppiten_pp0_it2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or or_cond_fu_333_p2 or or_cond1_fu_353_p2)
begin
    if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == or_cond_fu_333_p2)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & ~(ap_const_lv1_0 == or_cond1_fu_353_p2)))) begin
        orig_in_ce0 = ap_const_logic_1;
    end else begin
        orig_in_ce0 = ap_const_logic_0;
    end
end

/// orig_out_address0 assign process. ///
always @ (ap_sig_cseq_ST_pp0_stg1_fsm_2 or ap_reg_ppiten_pp0_it2 or or_cond_reg_478 or or_cond1_reg_487 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it3 or ap_reg_ppstg_tmp_4_reg_409_pp0_it2 or ap_reg_ppstg_tmp_5_reg_437_pp0_it2 or ap_sig_cseq_ST_st11_fsm_5 or orig_out_addr_4_gep_fu_185_p3 or orig_out_addr_2_gep_fu_194_p3)
begin
    if ((~(or_cond_reg_478 == ap_const_lv1_0) & ~(ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3))) begin
        orig_out_address0 = orig_out_addr_2_gep_fu_194_p3;
    end else if ((~(or_cond_reg_478 == ap_const_lv1_0) & (ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3))) begin
        orig_out_address0 = orig_out_addr_4_gep_fu_185_p3;
    end else if (((or_cond_reg_478 == ap_const_lv1_0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3))) begin
        orig_out_address0 = ap_reg_ppstg_tmp_5_reg_437_pp0_it2;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st11_fsm_5)) begin
        orig_out_address0 = ap_const_lv64_64;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) begin
        orig_out_address0 = ap_reg_ppstg_tmp_4_reg_409_pp0_it2;
    end else begin
        orig_out_address0 = 'bx;
    end
end

/// orig_out_ce0 assign process. ///
always @ (ap_sig_cseq_ST_pp0_stg1_fsm_2 or ap_reg_ppiten_pp0_it2 or or_cond_reg_478 or or_cond1_reg_487 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it3 or ap_sig_cseq_ST_st11_fsm_5)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st11_fsm_5) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) | ((or_cond_reg_478 == ap_const_lv1_0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)) | (~(or_cond_reg_478 == ap_const_lv1_0) & (ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)) | (~(or_cond_reg_478 == ap_const_lv1_0) & ~(ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)))) begin
        orig_out_ce0 = ap_const_logic_1;
    end else begin
        orig_out_ce0 = ap_const_logic_0;
    end
end

/// orig_out_d0 assign process. ///
always @ (orig_out_q0 or reg_232 or or_cond_reg_478 or or_cond1_reg_487 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it3)
begin
    if ((~(or_cond_reg_478 == ap_const_lv1_0) & (ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3))) begin
        orig_out_d0 = orig_out_q0;
    end else if ((((or_cond_reg_478 == ap_const_lv1_0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)) | (~(or_cond_reg_478 == ap_const_lv1_0) & ~(ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)))) begin
        orig_out_d0 = reg_232;
    end else begin
        orig_out_d0 = 'bx;
    end
end

/// orig_out_we0 assign process. ///
always @ (or_cond_reg_478 or or_cond1_reg_487 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it3)
begin
    if ((((or_cond_reg_478 == ap_const_lv1_0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)) | (~(or_cond_reg_478 == ap_const_lv1_0) & (ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)) | (~(or_cond_reg_478 == ap_const_lv1_0) & ~(ap_const_lv1_0 == or_cond1_reg_487) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3)))) begin
        orig_out_we0 = ap_const_logic_1;
    end else begin
        orig_out_we0 = ap_const_logic_0;
    end
end

/// reads_ce0 assign process. ///
always @ (ap_reg_ppiten_pp0_it0 or ap_sig_cseq_ST_pp0_stg0_fsm_1)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1))) begin
        reads_ce0 = ap_const_logic_1;
    end else begin
        reads_ce0 = ap_const_logic_0;
    end
end

/// score_in_ce0 assign process. ///
always @ (ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg0_fsm_1)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1))) begin
        score_in_ce0 = ap_const_logic_1;
    end else begin
        score_in_ce0 = ap_const_logic_0;
    end
end

/// score_in_ce1 assign process. ///
always @ (ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg0_fsm_1)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1))) begin
        score_in_ce1 = ap_const_logic_1;
    end else begin
        score_in_ce1 = ap_const_logic_0;
    end
end

/// score_out_address0 assign process. ///
always @ (ap_sig_cseq_ST_pp0_stg1_fsm_2 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppstg_tmp_4_reg_409_pp0_it1 or tmp_5_reg_437 or or_cond_fu_333_p2 or or_cond1_fu_353_p2 or ap_sig_cseq_ST_st9_fsm_3 or score_out_addr_4_gep_fu_141_p3 or score_out_addr_3_gep_fu_149_p3)
begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & ~(ap_const_lv1_0 == or_cond1_fu_353_p2))) begin
        score_out_address0 = score_out_addr_3_gep_fu_149_p3;
    end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & (ap_const_lv1_0 == or_cond1_fu_353_p2))) begin
        score_out_address0 = score_out_addr_4_gep_fu_141_p3;
    end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == or_cond_fu_333_p2))) begin
        score_out_address0 = tmp_5_reg_437;
    end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_3)) begin
        score_out_address0 = ap_const_lv64_64;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
        score_out_address0 = ap_reg_ppstg_tmp_4_reg_409_pp0_it1;
    end else begin
        score_out_address0 = 'bx;
    end
end

/// score_out_ce0 assign process. ///
always @ (ap_sig_cseq_ST_pp0_stg1_fsm_2 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or or_cond_fu_333_p2 or or_cond1_fu_353_p2 or ap_sig_cseq_ST_st9_fsm_3)
begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_3) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_2) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == or_cond_fu_333_p2)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & (ap_const_lv1_0 == or_cond1_fu_353_p2)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & ~(ap_const_lv1_0 == or_cond1_fu_353_p2)))) begin
        score_out_ce0 = ap_const_logic_1;
    end else begin
        score_out_ce0 = ap_const_logic_0;
    end
end

/// score_out_d0 assign process. ///
always @ (or_cond_fu_333_p2 or tmp_11_fu_339_p1 or tmp_13_fu_359_p1 or tmp_12_fu_364_p1 or ap_sig_bdd_164 or ap_sig_bdd_213 or ap_sig_bdd_216)
begin
    if (ap_sig_bdd_213) begin
        if (ap_sig_bdd_164) begin
            score_out_d0 = tmp_12_fu_364_p1;
        end else if (ap_sig_bdd_216) begin
            score_out_d0 = tmp_13_fu_359_p1;
        end else if ((ap_const_lv1_0 == or_cond_fu_333_p2)) begin
            score_out_d0 = tmp_11_fu_339_p1;
        end else begin
            score_out_d0 = 'bx;
        end
    end else begin
        score_out_d0 = 'bx;
    end
end

/// score_out_we0 assign process. ///
always @ (ap_reg_ppiten_pp0_it2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or or_cond_fu_333_p2 or or_cond1_fu_353_p2)
begin
    if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_lv1_0 == or_cond_fu_333_p2)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & (ap_const_lv1_0 == or_cond1_fu_353_p2)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_const_lv1_0 == or_cond_fu_333_p2) & ~(ap_const_lv1_0 == or_cond1_fu_353_p2)))) begin
        score_out_we0 = ap_const_logic_1;
    end else begin
        score_out_we0 = ap_const_logic_0;
    end
end
/// the next state (ap_NS_fsm) of the state machine. ///
always @ (ap_start or ap_CS_fsm or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2 or exitcond_fu_255_p2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it3 or tmp_2_fu_375_p2)
begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~(ap_start == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if ((~((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it3) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_const_lv1_0 == exitcond_fu_255_p2) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_pp0_stg1_fsm_2;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_const_lv1_0 == exitcond_fu_255_p2) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
                ap_NS_fsm = ap_ST_st9_fsm_3;
            end else begin
                ap_NS_fsm = ap_ST_st9_fsm_3;
            end
        end
        ap_ST_pp0_stg1_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
        end
        ap_ST_st9_fsm_3 : 
        begin
            ap_NS_fsm = ap_ST_st10_fsm_4;
        end
        ap_ST_st10_fsm_4 : 
        begin
            ap_NS_fsm = ap_ST_st11_fsm_5;
        end
        ap_ST_st11_fsm_5 : 
        begin
            if ((ap_const_lv1_0 == tmp_2_fu_375_p2)) begin
                ap_NS_fsm = ap_ST_st13_fsm_7;
            end else begin
                ap_NS_fsm = ap_ST_st12_fsm_6;
            end
        end
        ap_ST_st12_fsm_6 : 
        begin
            ap_NS_fsm = ap_ST_st13_fsm_7;
        end
        ap_ST_st13_fsm_7 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_return = max_orig;

/// ap_sig_bdd_112 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_112 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end

/// ap_sig_bdd_164 assign process. ///
always @ (or_cond_fu_333_p2 or or_cond1_fu_353_p2)
begin
    ap_sig_bdd_164 = (~(ap_const_lv1_0 == or_cond_fu_333_p2) & ~(ap_const_lv1_0 == or_cond1_fu_353_p2));
end

/// ap_sig_bdd_176 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_176 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_3]);
end

/// ap_sig_bdd_184 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_184 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_4]);
end

/// ap_sig_bdd_193 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_193 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_5]);
end

/// ap_sig_bdd_213 assign process. ///
always @ (ap_reg_ppiten_pp0_it2 or ap_sig_cseq_ST_pp0_stg0_fsm_1)
begin
    ap_sig_bdd_213 = ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1));
end

/// ap_sig_bdd_216 assign process. ///
always @ (or_cond_fu_333_p2 or or_cond1_fu_353_p2)
begin
    ap_sig_bdd_216 = (~(ap_const_lv1_0 == or_cond_fu_333_p2) & (ap_const_lv1_0 == or_cond1_fu_353_p2));
end

/// ap_sig_bdd_238 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_238 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_6]);
end

/// ap_sig_bdd_24 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_24 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end

/// ap_sig_bdd_247 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_247 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_7]);
end

/// ap_sig_bdd_81 assign process. ///
always @ (ap_CS_fsm)
begin
    ap_sig_bdd_81 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end
assign diag_cast_fu_287_p1 = $signed(score_in_q0);
assign diag_score_0_v_cast_cast_fu_295_p3 = ((tmp_6_reg_453[0:0]===1'b1)? ap_const_lv9_1: ap_const_lv9_1FF);
assign diag_score_fu_302_p2 = ($signed(diag_cast_fu_287_p1) + $signed(diag_score_0_v_cast_cast_fu_295_p3));
assign exitcond_fu_255_p2 = (j_phi_fu_224_p4 == ap_const_lv7_65? 1'b1: 1'b0);
assign j_1_fu_272_p2 = (j_reg_220 + ap_const_lv7_1);
assign left_cast_fu_314_p1 = $signed(score_out_q0);
assign left_score_fu_318_p2 = ($signed(left_cast_fu_314_p1) + $signed(ap_const_lv9_1FF));
assign or_cond1_fu_353_p2 = (tmp_9_fu_343_p2 | tmp_s_fu_348_p2);
assign or_cond_fu_333_p2 = (tmp_7_fu_324_p2 | tmp_8_fu_329_p2);
assign orig_out_addr_2_gep_fu_194_p3 = ap_reg_ppstg_tmp_5_reg_437_pp0_it2;
assign orig_out_addr_4_gep_fu_185_p3 = ap_reg_ppstg_tmp_5_reg_437_pp0_it2;
assign reads_address0 = tmp_4_fu_267_p1;
assign score_in_address0 = tmp_4_reg_409;
assign score_in_address1 = tmp_5_fu_278_p1;
assign score_out_addr_3_gep_fu_149_p3 = tmp_5_reg_437;
assign score_out_addr_4_gep_fu_141_p3 = tmp_5_reg_437;
assign tmp_11_fu_339_p1 = diag_score_reg_463[7:0];
assign tmp_12_fu_364_p1 = up_score_reg_471[7:0];
assign tmp_13_fu_359_p1 = left_score_fu_318_p2[7:0];
assign tmp_1_fu_368_p1 = $signed(score_out_load_reg_506);
assign tmp_2_fu_375_p2 = ($signed(tmp_1_fu_368_p1) > $signed(max_score)? 1'b1: 1'b0);
assign tmp_3_fu_261_p2 = ($signed(j_phi_fu_224_p4) + $signed(ap_const_lv7_7F));
assign tmp_4_fu_267_p1 = $unsigned(tmp_3_fu_261_p2);
assign tmp_5_fu_278_p1 = j_reg_220;
assign tmp_6_fu_283_p2 = (reads_load_reg_422 == ref_genome? 1'b1: 1'b0);
assign tmp_7_fu_324_p2 = ($signed(diag_score_reg_463) < $signed(left_score_fu_318_p2)? 1'b1: 1'b0);
assign tmp_8_fu_329_p2 = ($signed(diag_score_reg_463) < $signed(up_score_reg_471)? 1'b1: 1'b0);
assign tmp_9_fu_343_p2 = ($signed(left_score_fu_318_p2) < $signed(diag_score_reg_463)? 1'b1: 1'b0);
assign tmp_fu_237_p2 = (i == ap_const_lv32_1? 1'b1: 1'b0);
assign tmp_s_fu_348_p2 = ($signed(left_score_fu_318_p2) < $signed(up_score_reg_471)? 1'b1: 1'b0);
assign up_cast_fu_291_p1 = $signed(score_in_q1);
assign up_score_fu_308_p2 = ($signed(up_cast_fu_291_p1) + $signed(ap_const_lv9_1FF));
always @ (posedge ap_clk)
begin
    tmp_4_reg_409[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
    ap_reg_ppstg_tmp_4_reg_409_pp0_it1[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
    ap_reg_ppstg_tmp_4_reg_409_pp0_it2[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
    tmp_5_reg_437[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
    ap_reg_ppstg_tmp_5_reg_437_pp0_it2[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
end



endmodule //needlemanWunsch

