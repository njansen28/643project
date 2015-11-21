// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

module AESL_axi_s_ref_genome (
	clk,
	reset,
	TRAN_ref_genome_TDATA,
	TRAN_ref_genome_TVALID,
	TRAN_ref_genome_TREADY,
	ready,
	done);

//------------------------Parameter----------------------
`define TV_IN_ref_genome_TDATA "./c.needlemanWunsch.autotvin_ref_genome.dat"
// Input and Output
input clk;
input reset;
output [7:0] TRAN_ref_genome_TDATA;
output  TRAN_ref_genome_TVALID;
input  TRAN_ref_genome_TREADY;
input ready;
input done;

//------------------------Local signal-------------------
reg [7 : 0] mem_ref_genome_TDATA [250000 : 0];
initial begin : initialize_mem_ref_genome_TDATA
	integer i;
	for (i = 0; i < 250000; i = i + 1) begin
		mem_ref_genome_TDATA[i] = 0;
	end
end
wire ref_genome_TDATA_empty;
wire ref_genome_TDATA_full;
reg [19 : 0] ref_genome_TDATA_mInPtr = 0;
reg [19 : 0] ref_genome_TDATA_mOutPtr = 0;
reg ref_genome_TDATA_mFlag_nEF_hint = 0; // 0: empty hint, 1: full hint

assign TRAN_ref_genome_TDATA = mem_ref_genome_TDATA[ref_genome_TDATA_mOutPtr];
assign ref_genome_TDATA_empty = ((ref_genome_TDATA_mInPtr == ref_genome_TDATA_mOutPtr) && ref_genome_TDATA_mFlag_nEF_hint == 1'b0) ? 1'b1: 1'b0;
assign ref_genome_TDATA_full = ((ref_genome_TDATA_mInPtr == ref_genome_TDATA_mOutPtr) && ref_genome_TDATA_mFlag_nEF_hint == 1'b1) ? 1'b1: 1'b0;

assign TRAN_ref_genome_TVALID = ~(ref_genome_TDATA_empty);

//------------------------Task and function--------------
function is_blank_char(input [7:0] char);
	if (char == " " || char == "\011" || char == "\012" || char == "\015") begin
		is_blank_char = 1;
	end else begin
		is_blank_char = 0;
	end
endfunction

function [199:0] read_token(input integer fp);
	reg [7:0] char;
	begin
		read_token = "";
		char = " ";
		while (is_blank_char(char) && char != 8'hff) begin
			char = $fgetc(fp);
		end
		while (~is_blank_char(char) && char != 8'hff) begin
			read_token = {read_token[199 - 8:0], char[7:0]};
			char = $fgetc(fp);
		end
	end
endfunction

task rm_0x(inout [199:0] token);
	reg [199:0] token_tmp;
	integer i;
	begin
		token_tmp = "";
		for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
			token_tmp = (token[7:0] << (8 * i)) | token_tmp;
			i = i + 1;
		end
		token = token_tmp;
	end
endtask

//------------------------Read-only axi_s-------------------
// Write operation for read_only axi_s port
initial begin : ref_genome_TDATA_read_file_process
  integer fp;
  integer err;
  integer ret;
  integer transaction_idx;
  reg [199 : 0] token;
  reg [8 : 0] mem_ref_genome_TDATA_tmp ;
  reg [8*5 : 1] str;
  ref_genome_TDATA_mInPtr = 0;
  ref_genome_TDATA_mFlag_nEF_hint = 0;
  transaction_idx = 0;
  fp = $fopen(`TV_IN_ref_genome_TDATA, "r");
  if (fp == 0) begin // Failed to open file
	    $display("Failed to open file \"%s\"!", `TV_IN_ref_genome_TDATA);
	    $finish;
  end
  token = read_token(fp);
  if (token != "[[[runtime]]]"
  ) begin // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  token = read_token(fp);
  while (token != "[[[/runtime]]]"
  ) begin
      if (token != "[[transaction]]"
      ) begin
          $display("ERROR: Simulation using HLS TB failed.");
          $finish;
      end
      token = read_token(fp); // skip transaction number
      @(posedge clk);
      # 0.2;
      while (ready !== 1) begin
          @(posedge clk);
          # 0.2;
      end
      token = read_token(fp);
      ref_genome_TDATA_mInPtr = 0;
      while (token != "[[/transaction]]"
      ) begin
          if (ref_genome_TDATA_mInPtr >= 250000) begin
              $display("Fifo overflow!");
  	        $finish;
          end
          ret = $sscanf(token, "0x%x", mem_ref_genome_TDATA_tmp);
          mem_ref_genome_TDATA[ref_genome_TDATA_mInPtr] = mem_ref_genome_TDATA_tmp;
          if (ret != 1) begin
              $display("Failed to parse token!");
              $finish;
          end
          ref_genome_TDATA_mInPtr = ref_genome_TDATA_mInPtr + 1;
          token = read_token(fp);
      end
      ref_genome_TDATA_mFlag_nEF_hint = 0;
      token = read_token(fp); // skip [[transaction]]
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
  @(posedge clk);
  # 0.2;
  while (ready !== 1) begin
  # 0.2;
      @(posedge clk);
  end
  ref_genome_TDATA_mFlag_nEF_hint = 1;
end

// Read operation for read_only axi_s signal ref_genome_TDATA
always @ (posedge clk) begin
    if (reset === 0) begin
      ref_genome_TDATA_mOutPtr = 0;
  end
  else if (TRAN_ref_genome_TVALID && TRAN_ref_genome_TREADY) begin
	    if (ref_genome_TDATA_mOutPtr < ref_genome_TDATA_mInPtr)
	        ref_genome_TDATA_mOutPtr <= ref_genome_TDATA_mOutPtr + 1;
  end
end

// Reset mOutPtr when done is pulled up
initial begin : done_reset_ref_genome_TDATA_mOutPtr_process
  while (1) begin
      @(posedge clk);
      # 0.1;
      while (ready !== 1) begin
          @(posedge clk);
          # 0.1;
      end
      ref_genome_TDATA_mOutPtr = 0;
  end
end

endmodule
