#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("reads_address0", 7, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("reads_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("reads_q0", 8, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("ref_genome_address0", 15, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("ref_genome_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("ref_genome_q0", 8, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("nw_matrix_score_address0", 21, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("nw_matrix_score_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("nw_matrix_score_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("nw_matrix_score_d0", 8, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("nw_matrix_score_q0", 8, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("nw_matrix_score_address1", 21, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("nw_matrix_score_ce1", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("nw_matrix_score_we1", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("nw_matrix_score_d1", 8, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("nw_matrix_score_q1", 8, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("nw_matrix_orig_address0", 21, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("nw_matrix_orig_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("nw_matrix_orig_we0", 1, hls_out, 3, "ap_memory", "mem_we", 1),
	Port_Property("nw_matrix_orig_d0", 32, hls_out, 3, "ap_memory", "mem_din", 1),
	Port_Property("nw_matrix_orig_q0", 32, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("ap_return", 32, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "needlemanWunsch";
