// (c) Copyright 1995-2015 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:needlemanWunsch:1.0
// IP Revision: 1511271650

(* X_CORE_INFO = "needlemanWunsch,Vivado 2015.2" *)
(* CHECK_LICENSE_TYPE = "design_1_needlemanWunsch_0_0,needlemanWunsch,{}" *)
(* CORE_GENERATION_INFO = "design_1_needlemanWunsch_0_0,needlemanWunsch,{x_ipProduct=Vivado 2015.2,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=needlemanWunsch,x_ipVersion=1.0,x_ipCoreRevision=1511271650,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_AXILITES_ADDR_WIDTH=5,C_S_AXI_AXILITES_DATA_WIDTH=32}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module design_1_needlemanWunsch_0_0 (
  s_axi_AXILiteS_AWADDR,
  s_axi_AXILiteS_AWVALID,
  s_axi_AXILiteS_AWREADY,
  s_axi_AXILiteS_WDATA,
  s_axi_AXILiteS_WSTRB,
  s_axi_AXILiteS_WVALID,
  s_axi_AXILiteS_WREADY,
  s_axi_AXILiteS_BRESP,
  s_axi_AXILiteS_BVALID,
  s_axi_AXILiteS_BREADY,
  s_axi_AXILiteS_ARADDR,
  s_axi_AXILiteS_ARVALID,
  s_axi_AXILiteS_ARREADY,
  s_axi_AXILiteS_RDATA,
  s_axi_AXILiteS_RRESP,
  s_axi_AXILiteS_RVALID,
  s_axi_AXILiteS_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  read_r_0_Clk_A,
  read_r_0_Rst_A,
  read_r_0_EN_A,
  read_r_0_WEN_A,
  read_r_0_Addr_A,
  read_r_0_Din_A,
  read_r_0_Dout_A,
  read_r_1_Clk_A,
  read_r_1_Rst_A,
  read_r_1_EN_A,
  read_r_1_WEN_A,
  read_r_1_Addr_A,
  read_r_1_Din_A,
  read_r_1_Dout_A,
  read_r_2_Clk_A,
  read_r_2_Rst_A,
  read_r_2_EN_A,
  read_r_2_WEN_A,
  read_r_2_Addr_A,
  read_r_2_Din_A,
  read_r_2_Dout_A,
  read_r_3_Clk_A,
  read_r_3_Rst_A,
  read_r_3_EN_A,
  read_r_3_WEN_A,
  read_r_3_Addr_A,
  read_r_3_Din_A,
  read_r_3_Dout_A,
  read_r_4_Clk_A,
  read_r_4_Rst_A,
  read_r_4_EN_A,
  read_r_4_WEN_A,
  read_r_4_Addr_A,
  read_r_4_Din_A,
  read_r_4_Dout_A,
  read_r_5_Clk_A,
  read_r_5_Rst_A,
  read_r_5_EN_A,
  read_r_5_WEN_A,
  read_r_5_Addr_A,
  read_r_5_Din_A,
  read_r_5_Dout_A,
  read_r_6_Clk_A,
  read_r_6_Rst_A,
  read_r_6_EN_A,
  read_r_6_WEN_A,
  read_r_6_Addr_A,
  read_r_6_Din_A,
  read_r_6_Dout_A,
  read_r_7_Clk_A,
  read_r_7_Rst_A,
  read_r_7_EN_A,
  read_r_7_WEN_A,
  read_r_7_Addr_A,
  read_r_7_Din_A,
  read_r_7_Dout_A,
  read_r_8_Clk_A,
  read_r_8_Rst_A,
  read_r_8_EN_A,
  read_r_8_WEN_A,
  read_r_8_Addr_A,
  read_r_8_Din_A,
  read_r_8_Dout_A,
  read_r_9_Clk_A,
  read_r_9_Rst_A,
  read_r_9_EN_A,
  read_r_9_WEN_A,
  read_r_9_Addr_A,
  read_r_9_Din_A,
  read_r_9_Dout_A,
  read_r_10_Clk_A,
  read_r_10_Rst_A,
  read_r_10_EN_A,
  read_r_10_WEN_A,
  read_r_10_Addr_A,
  read_r_10_Din_A,
  read_r_10_Dout_A,
  read_r_11_Clk_A,
  read_r_11_Rst_A,
  read_r_11_EN_A,
  read_r_11_WEN_A,
  read_r_11_Addr_A,
  read_r_11_Din_A,
  read_r_11_Dout_A,
  read_r_12_Clk_A,
  read_r_12_Rst_A,
  read_r_12_EN_A,
  read_r_12_WEN_A,
  read_r_12_Addr_A,
  read_r_12_Din_A,
  read_r_12_Dout_A,
  read_r_13_Clk_A,
  read_r_13_Rst_A,
  read_r_13_EN_A,
  read_r_13_WEN_A,
  read_r_13_Addr_A,
  read_r_13_Din_A,
  read_r_13_Dout_A,
  read_r_14_Clk_A,
  read_r_14_Rst_A,
  read_r_14_EN_A,
  read_r_14_WEN_A,
  read_r_14_Addr_A,
  read_r_14_Din_A,
  read_r_14_Dout_A,
  read_r_15_Clk_A,
  read_r_15_Rst_A,
  read_r_15_EN_A,
  read_r_15_WEN_A,
  read_r_15_Addr_A,
  read_r_15_Din_A,
  read_r_15_Dout_A,
  read_r_16_Clk_A,
  read_r_16_Rst_A,
  read_r_16_EN_A,
  read_r_16_WEN_A,
  read_r_16_Addr_A,
  read_r_16_Din_A,
  read_r_16_Dout_A,
  read_r_17_Clk_A,
  read_r_17_Rst_A,
  read_r_17_EN_A,
  read_r_17_WEN_A,
  read_r_17_Addr_A,
  read_r_17_Din_A,
  read_r_17_Dout_A,
  read_r_18_Clk_A,
  read_r_18_Rst_A,
  read_r_18_EN_A,
  read_r_18_WEN_A,
  read_r_18_Addr_A,
  read_r_18_Din_A,
  read_r_18_Dout_A,
  read_r_19_Clk_A,
  read_r_19_Rst_A,
  read_r_19_EN_A,
  read_r_19_WEN_A,
  read_r_19_Addr_A,
  read_r_19_Din_A,
  read_r_19_Dout_A,
  read_r_20_Clk_A,
  read_r_20_Rst_A,
  read_r_20_EN_A,
  read_r_20_WEN_A,
  read_r_20_Addr_A,
  read_r_20_Din_A,
  read_r_20_Dout_A,
  read_r_21_Clk_A,
  read_r_21_Rst_A,
  read_r_21_EN_A,
  read_r_21_WEN_A,
  read_r_21_Addr_A,
  read_r_21_Din_A,
  read_r_21_Dout_A,
  read_r_22_Clk_A,
  read_r_22_Rst_A,
  read_r_22_EN_A,
  read_r_22_WEN_A,
  read_r_22_Addr_A,
  read_r_22_Din_A,
  read_r_22_Dout_A,
  read_r_23_Clk_A,
  read_r_23_Rst_A,
  read_r_23_EN_A,
  read_r_23_WEN_A,
  read_r_23_Addr_A,
  read_r_23_Din_A,
  read_r_23_Dout_A,
  read_r_24_Clk_A,
  read_r_24_Rst_A,
  read_r_24_EN_A,
  read_r_24_WEN_A,
  read_r_24_Addr_A,
  read_r_24_Din_A,
  read_r_24_Dout_A,
  read_r_25_Clk_A,
  read_r_25_Rst_A,
  read_r_25_EN_A,
  read_r_25_WEN_A,
  read_r_25_Addr_A,
  read_r_25_Din_A,
  read_r_25_Dout_A,
  read_r_26_Clk_A,
  read_r_26_Rst_A,
  read_r_26_EN_A,
  read_r_26_WEN_A,
  read_r_26_Addr_A,
  read_r_26_Din_A,
  read_r_26_Dout_A,
  read_r_27_Clk_A,
  read_r_27_Rst_A,
  read_r_27_EN_A,
  read_r_27_WEN_A,
  read_r_27_Addr_A,
  read_r_27_Din_A,
  read_r_27_Dout_A,
  read_r_28_Clk_A,
  read_r_28_Rst_A,
  read_r_28_EN_A,
  read_r_28_WEN_A,
  read_r_28_Addr_A,
  read_r_28_Din_A,
  read_r_28_Dout_A,
  read_r_29_Clk_A,
  read_r_29_Rst_A,
  read_r_29_EN_A,
  read_r_29_WEN_A,
  read_r_29_Addr_A,
  read_r_29_Din_A,
  read_r_29_Dout_A,
  read_r_30_Clk_A,
  read_r_30_Rst_A,
  read_r_30_EN_A,
  read_r_30_WEN_A,
  read_r_30_Addr_A,
  read_r_30_Din_A,
  read_r_30_Dout_A,
  read_r_31_Clk_A,
  read_r_31_Rst_A,
  read_r_31_EN_A,
  read_r_31_WEN_A,
  read_r_31_Addr_A,
  read_r_31_Din_A,
  read_r_31_Dout_A,
  read_r_32_Clk_A,
  read_r_32_Rst_A,
  read_r_32_EN_A,
  read_r_32_WEN_A,
  read_r_32_Addr_A,
  read_r_32_Din_A,
  read_r_32_Dout_A,
  read_r_33_Clk_A,
  read_r_33_Rst_A,
  read_r_33_EN_A,
  read_r_33_WEN_A,
  read_r_33_Addr_A,
  read_r_33_Din_A,
  read_r_33_Dout_A,
  read_r_34_Clk_A,
  read_r_34_Rst_A,
  read_r_34_EN_A,
  read_r_34_WEN_A,
  read_r_34_Addr_A,
  read_r_34_Din_A,
  read_r_34_Dout_A,
  read_r_35_Clk_A,
  read_r_35_Rst_A,
  read_r_35_EN_A,
  read_r_35_WEN_A,
  read_r_35_Addr_A,
  read_r_35_Din_A,
  read_r_35_Dout_A,
  read_r_36_Clk_A,
  read_r_36_Rst_A,
  read_r_36_EN_A,
  read_r_36_WEN_A,
  read_r_36_Addr_A,
  read_r_36_Din_A,
  read_r_36_Dout_A,
  read_r_37_Clk_A,
  read_r_37_Rst_A,
  read_r_37_EN_A,
  read_r_37_WEN_A,
  read_r_37_Addr_A,
  read_r_37_Din_A,
  read_r_37_Dout_A,
  read_r_38_Clk_A,
  read_r_38_Rst_A,
  read_r_38_EN_A,
  read_r_38_WEN_A,
  read_r_38_Addr_A,
  read_r_38_Din_A,
  read_r_38_Dout_A,
  read_r_39_Clk_A,
  read_r_39_Rst_A,
  read_r_39_EN_A,
  read_r_39_WEN_A,
  read_r_39_Addr_A,
  read_r_39_Din_A,
  read_r_39_Dout_A,
  read_r_40_Clk_A,
  read_r_40_Rst_A,
  read_r_40_EN_A,
  read_r_40_WEN_A,
  read_r_40_Addr_A,
  read_r_40_Din_A,
  read_r_40_Dout_A,
  read_r_41_Clk_A,
  read_r_41_Rst_A,
  read_r_41_EN_A,
  read_r_41_WEN_A,
  read_r_41_Addr_A,
  read_r_41_Din_A,
  read_r_41_Dout_A,
  read_r_42_Clk_A,
  read_r_42_Rst_A,
  read_r_42_EN_A,
  read_r_42_WEN_A,
  read_r_42_Addr_A,
  read_r_42_Din_A,
  read_r_42_Dout_A,
  read_r_43_Clk_A,
  read_r_43_Rst_A,
  read_r_43_EN_A,
  read_r_43_WEN_A,
  read_r_43_Addr_A,
  read_r_43_Din_A,
  read_r_43_Dout_A,
  read_r_44_Clk_A,
  read_r_44_Rst_A,
  read_r_44_EN_A,
  read_r_44_WEN_A,
  read_r_44_Addr_A,
  read_r_44_Din_A,
  read_r_44_Dout_A,
  read_r_45_Clk_A,
  read_r_45_Rst_A,
  read_r_45_EN_A,
  read_r_45_WEN_A,
  read_r_45_Addr_A,
  read_r_45_Din_A,
  read_r_45_Dout_A,
  read_r_46_Clk_A,
  read_r_46_Rst_A,
  read_r_46_EN_A,
  read_r_46_WEN_A,
  read_r_46_Addr_A,
  read_r_46_Din_A,
  read_r_46_Dout_A,
  read_r_47_Clk_A,
  read_r_47_Rst_A,
  read_r_47_EN_A,
  read_r_47_WEN_A,
  read_r_47_Addr_A,
  read_r_47_Din_A,
  read_r_47_Dout_A,
  read_r_48_Clk_A,
  read_r_48_Rst_A,
  read_r_48_EN_A,
  read_r_48_WEN_A,
  read_r_48_Addr_A,
  read_r_48_Din_A,
  read_r_48_Dout_A,
  read_r_49_Clk_A,
  read_r_49_Rst_A,
  read_r_49_EN_A,
  read_r_49_WEN_A,
  read_r_49_Addr_A,
  read_r_49_Din_A,
  read_r_49_Dout_A,
  ref_genome_TVALID,
  ref_genome_TREADY,
  ref_genome_TDATA,
  results_Clk_A,
  results_Rst_A,
  results_EN_A,
  results_WEN_A,
  results_Addr_A,
  results_Din_A,
  results_Dout_A
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWADDR" *)
input wire [4 : 0] s_axi_AXILiteS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWVALID" *)
input wire s_axi_AXILiteS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWREADY" *)
output wire s_axi_AXILiteS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WDATA" *)
input wire [31 : 0] s_axi_AXILiteS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WSTRB" *)
input wire [3 : 0] s_axi_AXILiteS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WVALID" *)
input wire s_axi_AXILiteS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WREADY" *)
output wire s_axi_AXILiteS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BRESP" *)
output wire [1 : 0] s_axi_AXILiteS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BVALID" *)
output wire s_axi_AXILiteS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BREADY" *)
input wire s_axi_AXILiteS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARADDR" *)
input wire [4 : 0] s_axi_AXILiteS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARVALID" *)
input wire s_axi_AXILiteS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARREADY" *)
output wire s_axi_AXILiteS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RDATA" *)
output wire [31 : 0] s_axi_AXILiteS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RRESP" *)
output wire [1 : 0] s_axi_AXILiteS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RVALID" *)
output wire s_axi_AXILiteS_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RREADY" *)
input wire s_axi_AXILiteS_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA CLK" *)
output wire read_r_0_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA RST" *)
output wire read_r_0_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA EN" *)
output wire read_r_0_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA WE" *)
output wire [3 : 0] read_r_0_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA ADDR" *)
output wire [31 : 0] read_r_0_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA DIN" *)
output wire [31 : 0] read_r_0_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_0_PORTA DOUT" *)
input wire [31 : 0] read_r_0_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA CLK" *)
output wire read_r_1_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA RST" *)
output wire read_r_1_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA EN" *)
output wire read_r_1_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA WE" *)
output wire [3 : 0] read_r_1_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA ADDR" *)
output wire [31 : 0] read_r_1_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA DIN" *)
output wire [31 : 0] read_r_1_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_1_PORTA DOUT" *)
input wire [31 : 0] read_r_1_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA CLK" *)
output wire read_r_2_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA RST" *)
output wire read_r_2_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA EN" *)
output wire read_r_2_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA WE" *)
output wire [3 : 0] read_r_2_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA ADDR" *)
output wire [31 : 0] read_r_2_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA DIN" *)
output wire [31 : 0] read_r_2_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_2_PORTA DOUT" *)
input wire [31 : 0] read_r_2_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA CLK" *)
output wire read_r_3_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA RST" *)
output wire read_r_3_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA EN" *)
output wire read_r_3_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA WE" *)
output wire [3 : 0] read_r_3_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA ADDR" *)
output wire [31 : 0] read_r_3_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA DIN" *)
output wire [31 : 0] read_r_3_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_3_PORTA DOUT" *)
input wire [31 : 0] read_r_3_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA CLK" *)
output wire read_r_4_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA RST" *)
output wire read_r_4_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA EN" *)
output wire read_r_4_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA WE" *)
output wire [3 : 0] read_r_4_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA ADDR" *)
output wire [31 : 0] read_r_4_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA DIN" *)
output wire [31 : 0] read_r_4_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_4_PORTA DOUT" *)
input wire [31 : 0] read_r_4_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA CLK" *)
output wire read_r_5_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA RST" *)
output wire read_r_5_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA EN" *)
output wire read_r_5_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA WE" *)
output wire [3 : 0] read_r_5_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA ADDR" *)
output wire [31 : 0] read_r_5_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA DIN" *)
output wire [31 : 0] read_r_5_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_5_PORTA DOUT" *)
input wire [31 : 0] read_r_5_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA CLK" *)
output wire read_r_6_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA RST" *)
output wire read_r_6_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA EN" *)
output wire read_r_6_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA WE" *)
output wire [3 : 0] read_r_6_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA ADDR" *)
output wire [31 : 0] read_r_6_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA DIN" *)
output wire [31 : 0] read_r_6_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_6_PORTA DOUT" *)
input wire [31 : 0] read_r_6_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA CLK" *)
output wire read_r_7_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA RST" *)
output wire read_r_7_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA EN" *)
output wire read_r_7_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA WE" *)
output wire [3 : 0] read_r_7_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA ADDR" *)
output wire [31 : 0] read_r_7_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA DIN" *)
output wire [31 : 0] read_r_7_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_7_PORTA DOUT" *)
input wire [31 : 0] read_r_7_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA CLK" *)
output wire read_r_8_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA RST" *)
output wire read_r_8_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA EN" *)
output wire read_r_8_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA WE" *)
output wire [3 : 0] read_r_8_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA ADDR" *)
output wire [31 : 0] read_r_8_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA DIN" *)
output wire [31 : 0] read_r_8_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_8_PORTA DOUT" *)
input wire [31 : 0] read_r_8_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA CLK" *)
output wire read_r_9_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA RST" *)
output wire read_r_9_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA EN" *)
output wire read_r_9_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA WE" *)
output wire [3 : 0] read_r_9_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA ADDR" *)
output wire [31 : 0] read_r_9_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA DIN" *)
output wire [31 : 0] read_r_9_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_9_PORTA DOUT" *)
input wire [31 : 0] read_r_9_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA CLK" *)
output wire read_r_10_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA RST" *)
output wire read_r_10_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA EN" *)
output wire read_r_10_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA WE" *)
output wire [3 : 0] read_r_10_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA ADDR" *)
output wire [31 : 0] read_r_10_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA DIN" *)
output wire [31 : 0] read_r_10_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_10_PORTA DOUT" *)
input wire [31 : 0] read_r_10_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA CLK" *)
output wire read_r_11_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA RST" *)
output wire read_r_11_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA EN" *)
output wire read_r_11_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA WE" *)
output wire [3 : 0] read_r_11_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA ADDR" *)
output wire [31 : 0] read_r_11_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA DIN" *)
output wire [31 : 0] read_r_11_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_11_PORTA DOUT" *)
input wire [31 : 0] read_r_11_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA CLK" *)
output wire read_r_12_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA RST" *)
output wire read_r_12_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA EN" *)
output wire read_r_12_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA WE" *)
output wire [3 : 0] read_r_12_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA ADDR" *)
output wire [31 : 0] read_r_12_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA DIN" *)
output wire [31 : 0] read_r_12_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_12_PORTA DOUT" *)
input wire [31 : 0] read_r_12_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA CLK" *)
output wire read_r_13_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA RST" *)
output wire read_r_13_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA EN" *)
output wire read_r_13_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA WE" *)
output wire [3 : 0] read_r_13_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA ADDR" *)
output wire [31 : 0] read_r_13_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA DIN" *)
output wire [31 : 0] read_r_13_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_13_PORTA DOUT" *)
input wire [31 : 0] read_r_13_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA CLK" *)
output wire read_r_14_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA RST" *)
output wire read_r_14_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA EN" *)
output wire read_r_14_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA WE" *)
output wire [3 : 0] read_r_14_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA ADDR" *)
output wire [31 : 0] read_r_14_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA DIN" *)
output wire [31 : 0] read_r_14_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_14_PORTA DOUT" *)
input wire [31 : 0] read_r_14_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA CLK" *)
output wire read_r_15_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA RST" *)
output wire read_r_15_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA EN" *)
output wire read_r_15_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA WE" *)
output wire [3 : 0] read_r_15_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA ADDR" *)
output wire [31 : 0] read_r_15_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA DIN" *)
output wire [31 : 0] read_r_15_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_15_PORTA DOUT" *)
input wire [31 : 0] read_r_15_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA CLK" *)
output wire read_r_16_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA RST" *)
output wire read_r_16_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA EN" *)
output wire read_r_16_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA WE" *)
output wire [3 : 0] read_r_16_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA ADDR" *)
output wire [31 : 0] read_r_16_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA DIN" *)
output wire [31 : 0] read_r_16_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_16_PORTA DOUT" *)
input wire [31 : 0] read_r_16_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA CLK" *)
output wire read_r_17_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA RST" *)
output wire read_r_17_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA EN" *)
output wire read_r_17_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA WE" *)
output wire [3 : 0] read_r_17_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA ADDR" *)
output wire [31 : 0] read_r_17_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA DIN" *)
output wire [31 : 0] read_r_17_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_17_PORTA DOUT" *)
input wire [31 : 0] read_r_17_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA CLK" *)
output wire read_r_18_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA RST" *)
output wire read_r_18_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA EN" *)
output wire read_r_18_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA WE" *)
output wire [3 : 0] read_r_18_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA ADDR" *)
output wire [31 : 0] read_r_18_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA DIN" *)
output wire [31 : 0] read_r_18_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_18_PORTA DOUT" *)
input wire [31 : 0] read_r_18_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA CLK" *)
output wire read_r_19_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA RST" *)
output wire read_r_19_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA EN" *)
output wire read_r_19_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA WE" *)
output wire [3 : 0] read_r_19_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA ADDR" *)
output wire [31 : 0] read_r_19_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA DIN" *)
output wire [31 : 0] read_r_19_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_19_PORTA DOUT" *)
input wire [31 : 0] read_r_19_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA CLK" *)
output wire read_r_20_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA RST" *)
output wire read_r_20_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA EN" *)
output wire read_r_20_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA WE" *)
output wire [3 : 0] read_r_20_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA ADDR" *)
output wire [31 : 0] read_r_20_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA DIN" *)
output wire [31 : 0] read_r_20_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_20_PORTA DOUT" *)
input wire [31 : 0] read_r_20_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA CLK" *)
output wire read_r_21_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA RST" *)
output wire read_r_21_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA EN" *)
output wire read_r_21_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA WE" *)
output wire [3 : 0] read_r_21_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA ADDR" *)
output wire [31 : 0] read_r_21_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA DIN" *)
output wire [31 : 0] read_r_21_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_21_PORTA DOUT" *)
input wire [31 : 0] read_r_21_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA CLK" *)
output wire read_r_22_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA RST" *)
output wire read_r_22_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA EN" *)
output wire read_r_22_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA WE" *)
output wire [3 : 0] read_r_22_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA ADDR" *)
output wire [31 : 0] read_r_22_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA DIN" *)
output wire [31 : 0] read_r_22_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_22_PORTA DOUT" *)
input wire [31 : 0] read_r_22_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA CLK" *)
output wire read_r_23_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA RST" *)
output wire read_r_23_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA EN" *)
output wire read_r_23_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA WE" *)
output wire [3 : 0] read_r_23_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA ADDR" *)
output wire [31 : 0] read_r_23_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA DIN" *)
output wire [31 : 0] read_r_23_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_23_PORTA DOUT" *)
input wire [31 : 0] read_r_23_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA CLK" *)
output wire read_r_24_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA RST" *)
output wire read_r_24_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA EN" *)
output wire read_r_24_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA WE" *)
output wire [3 : 0] read_r_24_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA ADDR" *)
output wire [31 : 0] read_r_24_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA DIN" *)
output wire [31 : 0] read_r_24_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_24_PORTA DOUT" *)
input wire [31 : 0] read_r_24_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA CLK" *)
output wire read_r_25_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA RST" *)
output wire read_r_25_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA EN" *)
output wire read_r_25_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA WE" *)
output wire [3 : 0] read_r_25_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA ADDR" *)
output wire [31 : 0] read_r_25_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA DIN" *)
output wire [31 : 0] read_r_25_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_25_PORTA DOUT" *)
input wire [31 : 0] read_r_25_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA CLK" *)
output wire read_r_26_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA RST" *)
output wire read_r_26_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA EN" *)
output wire read_r_26_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA WE" *)
output wire [3 : 0] read_r_26_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA ADDR" *)
output wire [31 : 0] read_r_26_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA DIN" *)
output wire [31 : 0] read_r_26_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_26_PORTA DOUT" *)
input wire [31 : 0] read_r_26_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA CLK" *)
output wire read_r_27_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA RST" *)
output wire read_r_27_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA EN" *)
output wire read_r_27_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA WE" *)
output wire [3 : 0] read_r_27_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA ADDR" *)
output wire [31 : 0] read_r_27_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA DIN" *)
output wire [31 : 0] read_r_27_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_27_PORTA DOUT" *)
input wire [31 : 0] read_r_27_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA CLK" *)
output wire read_r_28_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA RST" *)
output wire read_r_28_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA EN" *)
output wire read_r_28_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA WE" *)
output wire [3 : 0] read_r_28_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA ADDR" *)
output wire [31 : 0] read_r_28_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA DIN" *)
output wire [31 : 0] read_r_28_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_28_PORTA DOUT" *)
input wire [31 : 0] read_r_28_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA CLK" *)
output wire read_r_29_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA RST" *)
output wire read_r_29_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA EN" *)
output wire read_r_29_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA WE" *)
output wire [3 : 0] read_r_29_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA ADDR" *)
output wire [31 : 0] read_r_29_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA DIN" *)
output wire [31 : 0] read_r_29_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_29_PORTA DOUT" *)
input wire [31 : 0] read_r_29_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA CLK" *)
output wire read_r_30_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA RST" *)
output wire read_r_30_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA EN" *)
output wire read_r_30_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA WE" *)
output wire [3 : 0] read_r_30_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA ADDR" *)
output wire [31 : 0] read_r_30_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA DIN" *)
output wire [31 : 0] read_r_30_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_30_PORTA DOUT" *)
input wire [31 : 0] read_r_30_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA CLK" *)
output wire read_r_31_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA RST" *)
output wire read_r_31_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA EN" *)
output wire read_r_31_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA WE" *)
output wire [3 : 0] read_r_31_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA ADDR" *)
output wire [31 : 0] read_r_31_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA DIN" *)
output wire [31 : 0] read_r_31_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_31_PORTA DOUT" *)
input wire [31 : 0] read_r_31_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA CLK" *)
output wire read_r_32_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA RST" *)
output wire read_r_32_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA EN" *)
output wire read_r_32_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA WE" *)
output wire [3 : 0] read_r_32_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA ADDR" *)
output wire [31 : 0] read_r_32_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA DIN" *)
output wire [31 : 0] read_r_32_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_32_PORTA DOUT" *)
input wire [31 : 0] read_r_32_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA CLK" *)
output wire read_r_33_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA RST" *)
output wire read_r_33_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA EN" *)
output wire read_r_33_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA WE" *)
output wire [3 : 0] read_r_33_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA ADDR" *)
output wire [31 : 0] read_r_33_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA DIN" *)
output wire [31 : 0] read_r_33_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_33_PORTA DOUT" *)
input wire [31 : 0] read_r_33_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA CLK" *)
output wire read_r_34_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA RST" *)
output wire read_r_34_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA EN" *)
output wire read_r_34_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA WE" *)
output wire [3 : 0] read_r_34_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA ADDR" *)
output wire [31 : 0] read_r_34_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA DIN" *)
output wire [31 : 0] read_r_34_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_34_PORTA DOUT" *)
input wire [31 : 0] read_r_34_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA CLK" *)
output wire read_r_35_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA RST" *)
output wire read_r_35_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA EN" *)
output wire read_r_35_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA WE" *)
output wire [3 : 0] read_r_35_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA ADDR" *)
output wire [31 : 0] read_r_35_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA DIN" *)
output wire [31 : 0] read_r_35_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_35_PORTA DOUT" *)
input wire [31 : 0] read_r_35_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA CLK" *)
output wire read_r_36_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA RST" *)
output wire read_r_36_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA EN" *)
output wire read_r_36_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA WE" *)
output wire [3 : 0] read_r_36_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA ADDR" *)
output wire [31 : 0] read_r_36_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA DIN" *)
output wire [31 : 0] read_r_36_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_36_PORTA DOUT" *)
input wire [31 : 0] read_r_36_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA CLK" *)
output wire read_r_37_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA RST" *)
output wire read_r_37_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA EN" *)
output wire read_r_37_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA WE" *)
output wire [3 : 0] read_r_37_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA ADDR" *)
output wire [31 : 0] read_r_37_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA DIN" *)
output wire [31 : 0] read_r_37_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_37_PORTA DOUT" *)
input wire [31 : 0] read_r_37_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA CLK" *)
output wire read_r_38_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA RST" *)
output wire read_r_38_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA EN" *)
output wire read_r_38_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA WE" *)
output wire [3 : 0] read_r_38_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA ADDR" *)
output wire [31 : 0] read_r_38_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA DIN" *)
output wire [31 : 0] read_r_38_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_38_PORTA DOUT" *)
input wire [31 : 0] read_r_38_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA CLK" *)
output wire read_r_39_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA RST" *)
output wire read_r_39_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA EN" *)
output wire read_r_39_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA WE" *)
output wire [3 : 0] read_r_39_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA ADDR" *)
output wire [31 : 0] read_r_39_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA DIN" *)
output wire [31 : 0] read_r_39_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_39_PORTA DOUT" *)
input wire [31 : 0] read_r_39_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA CLK" *)
output wire read_r_40_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA RST" *)
output wire read_r_40_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA EN" *)
output wire read_r_40_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA WE" *)
output wire [3 : 0] read_r_40_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA ADDR" *)
output wire [31 : 0] read_r_40_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA DIN" *)
output wire [31 : 0] read_r_40_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_40_PORTA DOUT" *)
input wire [31 : 0] read_r_40_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA CLK" *)
output wire read_r_41_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA RST" *)
output wire read_r_41_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA EN" *)
output wire read_r_41_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA WE" *)
output wire [3 : 0] read_r_41_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA ADDR" *)
output wire [31 : 0] read_r_41_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA DIN" *)
output wire [31 : 0] read_r_41_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_41_PORTA DOUT" *)
input wire [31 : 0] read_r_41_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA CLK" *)
output wire read_r_42_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA RST" *)
output wire read_r_42_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA EN" *)
output wire read_r_42_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA WE" *)
output wire [3 : 0] read_r_42_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA ADDR" *)
output wire [31 : 0] read_r_42_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA DIN" *)
output wire [31 : 0] read_r_42_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_42_PORTA DOUT" *)
input wire [31 : 0] read_r_42_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA CLK" *)
output wire read_r_43_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA RST" *)
output wire read_r_43_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA EN" *)
output wire read_r_43_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA WE" *)
output wire [3 : 0] read_r_43_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA ADDR" *)
output wire [31 : 0] read_r_43_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA DIN" *)
output wire [31 : 0] read_r_43_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_43_PORTA DOUT" *)
input wire [31 : 0] read_r_43_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA CLK" *)
output wire read_r_44_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA RST" *)
output wire read_r_44_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA EN" *)
output wire read_r_44_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA WE" *)
output wire [3 : 0] read_r_44_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA ADDR" *)
output wire [31 : 0] read_r_44_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA DIN" *)
output wire [31 : 0] read_r_44_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_44_PORTA DOUT" *)
input wire [31 : 0] read_r_44_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA CLK" *)
output wire read_r_45_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA RST" *)
output wire read_r_45_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA EN" *)
output wire read_r_45_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA WE" *)
output wire [3 : 0] read_r_45_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA ADDR" *)
output wire [31 : 0] read_r_45_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA DIN" *)
output wire [31 : 0] read_r_45_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_45_PORTA DOUT" *)
input wire [31 : 0] read_r_45_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA CLK" *)
output wire read_r_46_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA RST" *)
output wire read_r_46_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA EN" *)
output wire read_r_46_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA WE" *)
output wire [3 : 0] read_r_46_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA ADDR" *)
output wire [31 : 0] read_r_46_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA DIN" *)
output wire [31 : 0] read_r_46_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_46_PORTA DOUT" *)
input wire [31 : 0] read_r_46_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA CLK" *)
output wire read_r_47_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA RST" *)
output wire read_r_47_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA EN" *)
output wire read_r_47_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA WE" *)
output wire [3 : 0] read_r_47_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA ADDR" *)
output wire [31 : 0] read_r_47_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA DIN" *)
output wire [31 : 0] read_r_47_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_47_PORTA DOUT" *)
input wire [31 : 0] read_r_47_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA CLK" *)
output wire read_r_48_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA RST" *)
output wire read_r_48_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA EN" *)
output wire read_r_48_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA WE" *)
output wire [3 : 0] read_r_48_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA ADDR" *)
output wire [31 : 0] read_r_48_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA DIN" *)
output wire [31 : 0] read_r_48_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_48_PORTA DOUT" *)
input wire [31 : 0] read_r_48_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA CLK" *)
output wire read_r_49_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA RST" *)
output wire read_r_49_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA EN" *)
output wire read_r_49_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA WE" *)
output wire [3 : 0] read_r_49_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA ADDR" *)
output wire [31 : 0] read_r_49_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA DIN" *)
output wire [31 : 0] read_r_49_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 read_r_49_PORTA DOUT" *)
input wire [31 : 0] read_r_49_Dout_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 ref_genome TVALID" *)
input wire ref_genome_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 ref_genome TREADY" *)
output wire ref_genome_TREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 ref_genome TDATA" *)
input wire [7 : 0] ref_genome_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA CLK" *)
output wire results_Clk_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA RST" *)
output wire results_Rst_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA EN" *)
output wire results_EN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA WE" *)
output wire [3 : 0] results_WEN_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA ADDR" *)
output wire [31 : 0] results_Addr_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA DIN" *)
output wire [31 : 0] results_Din_A;
(* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 results_PORTA DOUT" *)
input wire [31 : 0] results_Dout_A;

  needlemanWunsch #(
    .C_S_AXI_AXILITES_ADDR_WIDTH(5),
    .C_S_AXI_AXILITES_DATA_WIDTH(32)
  ) inst (
    .s_axi_AXILiteS_AWADDR(s_axi_AXILiteS_AWADDR),
    .s_axi_AXILiteS_AWVALID(s_axi_AXILiteS_AWVALID),
    .s_axi_AXILiteS_AWREADY(s_axi_AXILiteS_AWREADY),
    .s_axi_AXILiteS_WDATA(s_axi_AXILiteS_WDATA),
    .s_axi_AXILiteS_WSTRB(s_axi_AXILiteS_WSTRB),
    .s_axi_AXILiteS_WVALID(s_axi_AXILiteS_WVALID),
    .s_axi_AXILiteS_WREADY(s_axi_AXILiteS_WREADY),
    .s_axi_AXILiteS_BRESP(s_axi_AXILiteS_BRESP),
    .s_axi_AXILiteS_BVALID(s_axi_AXILiteS_BVALID),
    .s_axi_AXILiteS_BREADY(s_axi_AXILiteS_BREADY),
    .s_axi_AXILiteS_ARADDR(s_axi_AXILiteS_ARADDR),
    .s_axi_AXILiteS_ARVALID(s_axi_AXILiteS_ARVALID),
    .s_axi_AXILiteS_ARREADY(s_axi_AXILiteS_ARREADY),
    .s_axi_AXILiteS_RDATA(s_axi_AXILiteS_RDATA),
    .s_axi_AXILiteS_RRESP(s_axi_AXILiteS_RRESP),
    .s_axi_AXILiteS_RVALID(s_axi_AXILiteS_RVALID),
    .s_axi_AXILiteS_RREADY(s_axi_AXILiteS_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .read_r_0_Clk_A(read_r_0_Clk_A),
    .read_r_0_Rst_A(read_r_0_Rst_A),
    .read_r_0_EN_A(read_r_0_EN_A),
    .read_r_0_WEN_A(read_r_0_WEN_A),
    .read_r_0_Addr_A(read_r_0_Addr_A),
    .read_r_0_Din_A(read_r_0_Din_A),
    .read_r_0_Dout_A(read_r_0_Dout_A),
    .read_r_1_Clk_A(read_r_1_Clk_A),
    .read_r_1_Rst_A(read_r_1_Rst_A),
    .read_r_1_EN_A(read_r_1_EN_A),
    .read_r_1_WEN_A(read_r_1_WEN_A),
    .read_r_1_Addr_A(read_r_1_Addr_A),
    .read_r_1_Din_A(read_r_1_Din_A),
    .read_r_1_Dout_A(read_r_1_Dout_A),
    .read_r_2_Clk_A(read_r_2_Clk_A),
    .read_r_2_Rst_A(read_r_2_Rst_A),
    .read_r_2_EN_A(read_r_2_EN_A),
    .read_r_2_WEN_A(read_r_2_WEN_A),
    .read_r_2_Addr_A(read_r_2_Addr_A),
    .read_r_2_Din_A(read_r_2_Din_A),
    .read_r_2_Dout_A(read_r_2_Dout_A),
    .read_r_3_Clk_A(read_r_3_Clk_A),
    .read_r_3_Rst_A(read_r_3_Rst_A),
    .read_r_3_EN_A(read_r_3_EN_A),
    .read_r_3_WEN_A(read_r_3_WEN_A),
    .read_r_3_Addr_A(read_r_3_Addr_A),
    .read_r_3_Din_A(read_r_3_Din_A),
    .read_r_3_Dout_A(read_r_3_Dout_A),
    .read_r_4_Clk_A(read_r_4_Clk_A),
    .read_r_4_Rst_A(read_r_4_Rst_A),
    .read_r_4_EN_A(read_r_4_EN_A),
    .read_r_4_WEN_A(read_r_4_WEN_A),
    .read_r_4_Addr_A(read_r_4_Addr_A),
    .read_r_4_Din_A(read_r_4_Din_A),
    .read_r_4_Dout_A(read_r_4_Dout_A),
    .read_r_5_Clk_A(read_r_5_Clk_A),
    .read_r_5_Rst_A(read_r_5_Rst_A),
    .read_r_5_EN_A(read_r_5_EN_A),
    .read_r_5_WEN_A(read_r_5_WEN_A),
    .read_r_5_Addr_A(read_r_5_Addr_A),
    .read_r_5_Din_A(read_r_5_Din_A),
    .read_r_5_Dout_A(read_r_5_Dout_A),
    .read_r_6_Clk_A(read_r_6_Clk_A),
    .read_r_6_Rst_A(read_r_6_Rst_A),
    .read_r_6_EN_A(read_r_6_EN_A),
    .read_r_6_WEN_A(read_r_6_WEN_A),
    .read_r_6_Addr_A(read_r_6_Addr_A),
    .read_r_6_Din_A(read_r_6_Din_A),
    .read_r_6_Dout_A(read_r_6_Dout_A),
    .read_r_7_Clk_A(read_r_7_Clk_A),
    .read_r_7_Rst_A(read_r_7_Rst_A),
    .read_r_7_EN_A(read_r_7_EN_A),
    .read_r_7_WEN_A(read_r_7_WEN_A),
    .read_r_7_Addr_A(read_r_7_Addr_A),
    .read_r_7_Din_A(read_r_7_Din_A),
    .read_r_7_Dout_A(read_r_7_Dout_A),
    .read_r_8_Clk_A(read_r_8_Clk_A),
    .read_r_8_Rst_A(read_r_8_Rst_A),
    .read_r_8_EN_A(read_r_8_EN_A),
    .read_r_8_WEN_A(read_r_8_WEN_A),
    .read_r_8_Addr_A(read_r_8_Addr_A),
    .read_r_8_Din_A(read_r_8_Din_A),
    .read_r_8_Dout_A(read_r_8_Dout_A),
    .read_r_9_Clk_A(read_r_9_Clk_A),
    .read_r_9_Rst_A(read_r_9_Rst_A),
    .read_r_9_EN_A(read_r_9_EN_A),
    .read_r_9_WEN_A(read_r_9_WEN_A),
    .read_r_9_Addr_A(read_r_9_Addr_A),
    .read_r_9_Din_A(read_r_9_Din_A),
    .read_r_9_Dout_A(read_r_9_Dout_A),
    .read_r_10_Clk_A(read_r_10_Clk_A),
    .read_r_10_Rst_A(read_r_10_Rst_A),
    .read_r_10_EN_A(read_r_10_EN_A),
    .read_r_10_WEN_A(read_r_10_WEN_A),
    .read_r_10_Addr_A(read_r_10_Addr_A),
    .read_r_10_Din_A(read_r_10_Din_A),
    .read_r_10_Dout_A(read_r_10_Dout_A),
    .read_r_11_Clk_A(read_r_11_Clk_A),
    .read_r_11_Rst_A(read_r_11_Rst_A),
    .read_r_11_EN_A(read_r_11_EN_A),
    .read_r_11_WEN_A(read_r_11_WEN_A),
    .read_r_11_Addr_A(read_r_11_Addr_A),
    .read_r_11_Din_A(read_r_11_Din_A),
    .read_r_11_Dout_A(read_r_11_Dout_A),
    .read_r_12_Clk_A(read_r_12_Clk_A),
    .read_r_12_Rst_A(read_r_12_Rst_A),
    .read_r_12_EN_A(read_r_12_EN_A),
    .read_r_12_WEN_A(read_r_12_WEN_A),
    .read_r_12_Addr_A(read_r_12_Addr_A),
    .read_r_12_Din_A(read_r_12_Din_A),
    .read_r_12_Dout_A(read_r_12_Dout_A),
    .read_r_13_Clk_A(read_r_13_Clk_A),
    .read_r_13_Rst_A(read_r_13_Rst_A),
    .read_r_13_EN_A(read_r_13_EN_A),
    .read_r_13_WEN_A(read_r_13_WEN_A),
    .read_r_13_Addr_A(read_r_13_Addr_A),
    .read_r_13_Din_A(read_r_13_Din_A),
    .read_r_13_Dout_A(read_r_13_Dout_A),
    .read_r_14_Clk_A(read_r_14_Clk_A),
    .read_r_14_Rst_A(read_r_14_Rst_A),
    .read_r_14_EN_A(read_r_14_EN_A),
    .read_r_14_WEN_A(read_r_14_WEN_A),
    .read_r_14_Addr_A(read_r_14_Addr_A),
    .read_r_14_Din_A(read_r_14_Din_A),
    .read_r_14_Dout_A(read_r_14_Dout_A),
    .read_r_15_Clk_A(read_r_15_Clk_A),
    .read_r_15_Rst_A(read_r_15_Rst_A),
    .read_r_15_EN_A(read_r_15_EN_A),
    .read_r_15_WEN_A(read_r_15_WEN_A),
    .read_r_15_Addr_A(read_r_15_Addr_A),
    .read_r_15_Din_A(read_r_15_Din_A),
    .read_r_15_Dout_A(read_r_15_Dout_A),
    .read_r_16_Clk_A(read_r_16_Clk_A),
    .read_r_16_Rst_A(read_r_16_Rst_A),
    .read_r_16_EN_A(read_r_16_EN_A),
    .read_r_16_WEN_A(read_r_16_WEN_A),
    .read_r_16_Addr_A(read_r_16_Addr_A),
    .read_r_16_Din_A(read_r_16_Din_A),
    .read_r_16_Dout_A(read_r_16_Dout_A),
    .read_r_17_Clk_A(read_r_17_Clk_A),
    .read_r_17_Rst_A(read_r_17_Rst_A),
    .read_r_17_EN_A(read_r_17_EN_A),
    .read_r_17_WEN_A(read_r_17_WEN_A),
    .read_r_17_Addr_A(read_r_17_Addr_A),
    .read_r_17_Din_A(read_r_17_Din_A),
    .read_r_17_Dout_A(read_r_17_Dout_A),
    .read_r_18_Clk_A(read_r_18_Clk_A),
    .read_r_18_Rst_A(read_r_18_Rst_A),
    .read_r_18_EN_A(read_r_18_EN_A),
    .read_r_18_WEN_A(read_r_18_WEN_A),
    .read_r_18_Addr_A(read_r_18_Addr_A),
    .read_r_18_Din_A(read_r_18_Din_A),
    .read_r_18_Dout_A(read_r_18_Dout_A),
    .read_r_19_Clk_A(read_r_19_Clk_A),
    .read_r_19_Rst_A(read_r_19_Rst_A),
    .read_r_19_EN_A(read_r_19_EN_A),
    .read_r_19_WEN_A(read_r_19_WEN_A),
    .read_r_19_Addr_A(read_r_19_Addr_A),
    .read_r_19_Din_A(read_r_19_Din_A),
    .read_r_19_Dout_A(read_r_19_Dout_A),
    .read_r_20_Clk_A(read_r_20_Clk_A),
    .read_r_20_Rst_A(read_r_20_Rst_A),
    .read_r_20_EN_A(read_r_20_EN_A),
    .read_r_20_WEN_A(read_r_20_WEN_A),
    .read_r_20_Addr_A(read_r_20_Addr_A),
    .read_r_20_Din_A(read_r_20_Din_A),
    .read_r_20_Dout_A(read_r_20_Dout_A),
    .read_r_21_Clk_A(read_r_21_Clk_A),
    .read_r_21_Rst_A(read_r_21_Rst_A),
    .read_r_21_EN_A(read_r_21_EN_A),
    .read_r_21_WEN_A(read_r_21_WEN_A),
    .read_r_21_Addr_A(read_r_21_Addr_A),
    .read_r_21_Din_A(read_r_21_Din_A),
    .read_r_21_Dout_A(read_r_21_Dout_A),
    .read_r_22_Clk_A(read_r_22_Clk_A),
    .read_r_22_Rst_A(read_r_22_Rst_A),
    .read_r_22_EN_A(read_r_22_EN_A),
    .read_r_22_WEN_A(read_r_22_WEN_A),
    .read_r_22_Addr_A(read_r_22_Addr_A),
    .read_r_22_Din_A(read_r_22_Din_A),
    .read_r_22_Dout_A(read_r_22_Dout_A),
    .read_r_23_Clk_A(read_r_23_Clk_A),
    .read_r_23_Rst_A(read_r_23_Rst_A),
    .read_r_23_EN_A(read_r_23_EN_A),
    .read_r_23_WEN_A(read_r_23_WEN_A),
    .read_r_23_Addr_A(read_r_23_Addr_A),
    .read_r_23_Din_A(read_r_23_Din_A),
    .read_r_23_Dout_A(read_r_23_Dout_A),
    .read_r_24_Clk_A(read_r_24_Clk_A),
    .read_r_24_Rst_A(read_r_24_Rst_A),
    .read_r_24_EN_A(read_r_24_EN_A),
    .read_r_24_WEN_A(read_r_24_WEN_A),
    .read_r_24_Addr_A(read_r_24_Addr_A),
    .read_r_24_Din_A(read_r_24_Din_A),
    .read_r_24_Dout_A(read_r_24_Dout_A),
    .read_r_25_Clk_A(read_r_25_Clk_A),
    .read_r_25_Rst_A(read_r_25_Rst_A),
    .read_r_25_EN_A(read_r_25_EN_A),
    .read_r_25_WEN_A(read_r_25_WEN_A),
    .read_r_25_Addr_A(read_r_25_Addr_A),
    .read_r_25_Din_A(read_r_25_Din_A),
    .read_r_25_Dout_A(read_r_25_Dout_A),
    .read_r_26_Clk_A(read_r_26_Clk_A),
    .read_r_26_Rst_A(read_r_26_Rst_A),
    .read_r_26_EN_A(read_r_26_EN_A),
    .read_r_26_WEN_A(read_r_26_WEN_A),
    .read_r_26_Addr_A(read_r_26_Addr_A),
    .read_r_26_Din_A(read_r_26_Din_A),
    .read_r_26_Dout_A(read_r_26_Dout_A),
    .read_r_27_Clk_A(read_r_27_Clk_A),
    .read_r_27_Rst_A(read_r_27_Rst_A),
    .read_r_27_EN_A(read_r_27_EN_A),
    .read_r_27_WEN_A(read_r_27_WEN_A),
    .read_r_27_Addr_A(read_r_27_Addr_A),
    .read_r_27_Din_A(read_r_27_Din_A),
    .read_r_27_Dout_A(read_r_27_Dout_A),
    .read_r_28_Clk_A(read_r_28_Clk_A),
    .read_r_28_Rst_A(read_r_28_Rst_A),
    .read_r_28_EN_A(read_r_28_EN_A),
    .read_r_28_WEN_A(read_r_28_WEN_A),
    .read_r_28_Addr_A(read_r_28_Addr_A),
    .read_r_28_Din_A(read_r_28_Din_A),
    .read_r_28_Dout_A(read_r_28_Dout_A),
    .read_r_29_Clk_A(read_r_29_Clk_A),
    .read_r_29_Rst_A(read_r_29_Rst_A),
    .read_r_29_EN_A(read_r_29_EN_A),
    .read_r_29_WEN_A(read_r_29_WEN_A),
    .read_r_29_Addr_A(read_r_29_Addr_A),
    .read_r_29_Din_A(read_r_29_Din_A),
    .read_r_29_Dout_A(read_r_29_Dout_A),
    .read_r_30_Clk_A(read_r_30_Clk_A),
    .read_r_30_Rst_A(read_r_30_Rst_A),
    .read_r_30_EN_A(read_r_30_EN_A),
    .read_r_30_WEN_A(read_r_30_WEN_A),
    .read_r_30_Addr_A(read_r_30_Addr_A),
    .read_r_30_Din_A(read_r_30_Din_A),
    .read_r_30_Dout_A(read_r_30_Dout_A),
    .read_r_31_Clk_A(read_r_31_Clk_A),
    .read_r_31_Rst_A(read_r_31_Rst_A),
    .read_r_31_EN_A(read_r_31_EN_A),
    .read_r_31_WEN_A(read_r_31_WEN_A),
    .read_r_31_Addr_A(read_r_31_Addr_A),
    .read_r_31_Din_A(read_r_31_Din_A),
    .read_r_31_Dout_A(read_r_31_Dout_A),
    .read_r_32_Clk_A(read_r_32_Clk_A),
    .read_r_32_Rst_A(read_r_32_Rst_A),
    .read_r_32_EN_A(read_r_32_EN_A),
    .read_r_32_WEN_A(read_r_32_WEN_A),
    .read_r_32_Addr_A(read_r_32_Addr_A),
    .read_r_32_Din_A(read_r_32_Din_A),
    .read_r_32_Dout_A(read_r_32_Dout_A),
    .read_r_33_Clk_A(read_r_33_Clk_A),
    .read_r_33_Rst_A(read_r_33_Rst_A),
    .read_r_33_EN_A(read_r_33_EN_A),
    .read_r_33_WEN_A(read_r_33_WEN_A),
    .read_r_33_Addr_A(read_r_33_Addr_A),
    .read_r_33_Din_A(read_r_33_Din_A),
    .read_r_33_Dout_A(read_r_33_Dout_A),
    .read_r_34_Clk_A(read_r_34_Clk_A),
    .read_r_34_Rst_A(read_r_34_Rst_A),
    .read_r_34_EN_A(read_r_34_EN_A),
    .read_r_34_WEN_A(read_r_34_WEN_A),
    .read_r_34_Addr_A(read_r_34_Addr_A),
    .read_r_34_Din_A(read_r_34_Din_A),
    .read_r_34_Dout_A(read_r_34_Dout_A),
    .read_r_35_Clk_A(read_r_35_Clk_A),
    .read_r_35_Rst_A(read_r_35_Rst_A),
    .read_r_35_EN_A(read_r_35_EN_A),
    .read_r_35_WEN_A(read_r_35_WEN_A),
    .read_r_35_Addr_A(read_r_35_Addr_A),
    .read_r_35_Din_A(read_r_35_Din_A),
    .read_r_35_Dout_A(read_r_35_Dout_A),
    .read_r_36_Clk_A(read_r_36_Clk_A),
    .read_r_36_Rst_A(read_r_36_Rst_A),
    .read_r_36_EN_A(read_r_36_EN_A),
    .read_r_36_WEN_A(read_r_36_WEN_A),
    .read_r_36_Addr_A(read_r_36_Addr_A),
    .read_r_36_Din_A(read_r_36_Din_A),
    .read_r_36_Dout_A(read_r_36_Dout_A),
    .read_r_37_Clk_A(read_r_37_Clk_A),
    .read_r_37_Rst_A(read_r_37_Rst_A),
    .read_r_37_EN_A(read_r_37_EN_A),
    .read_r_37_WEN_A(read_r_37_WEN_A),
    .read_r_37_Addr_A(read_r_37_Addr_A),
    .read_r_37_Din_A(read_r_37_Din_A),
    .read_r_37_Dout_A(read_r_37_Dout_A),
    .read_r_38_Clk_A(read_r_38_Clk_A),
    .read_r_38_Rst_A(read_r_38_Rst_A),
    .read_r_38_EN_A(read_r_38_EN_A),
    .read_r_38_WEN_A(read_r_38_WEN_A),
    .read_r_38_Addr_A(read_r_38_Addr_A),
    .read_r_38_Din_A(read_r_38_Din_A),
    .read_r_38_Dout_A(read_r_38_Dout_A),
    .read_r_39_Clk_A(read_r_39_Clk_A),
    .read_r_39_Rst_A(read_r_39_Rst_A),
    .read_r_39_EN_A(read_r_39_EN_A),
    .read_r_39_WEN_A(read_r_39_WEN_A),
    .read_r_39_Addr_A(read_r_39_Addr_A),
    .read_r_39_Din_A(read_r_39_Din_A),
    .read_r_39_Dout_A(read_r_39_Dout_A),
    .read_r_40_Clk_A(read_r_40_Clk_A),
    .read_r_40_Rst_A(read_r_40_Rst_A),
    .read_r_40_EN_A(read_r_40_EN_A),
    .read_r_40_WEN_A(read_r_40_WEN_A),
    .read_r_40_Addr_A(read_r_40_Addr_A),
    .read_r_40_Din_A(read_r_40_Din_A),
    .read_r_40_Dout_A(read_r_40_Dout_A),
    .read_r_41_Clk_A(read_r_41_Clk_A),
    .read_r_41_Rst_A(read_r_41_Rst_A),
    .read_r_41_EN_A(read_r_41_EN_A),
    .read_r_41_WEN_A(read_r_41_WEN_A),
    .read_r_41_Addr_A(read_r_41_Addr_A),
    .read_r_41_Din_A(read_r_41_Din_A),
    .read_r_41_Dout_A(read_r_41_Dout_A),
    .read_r_42_Clk_A(read_r_42_Clk_A),
    .read_r_42_Rst_A(read_r_42_Rst_A),
    .read_r_42_EN_A(read_r_42_EN_A),
    .read_r_42_WEN_A(read_r_42_WEN_A),
    .read_r_42_Addr_A(read_r_42_Addr_A),
    .read_r_42_Din_A(read_r_42_Din_A),
    .read_r_42_Dout_A(read_r_42_Dout_A),
    .read_r_43_Clk_A(read_r_43_Clk_A),
    .read_r_43_Rst_A(read_r_43_Rst_A),
    .read_r_43_EN_A(read_r_43_EN_A),
    .read_r_43_WEN_A(read_r_43_WEN_A),
    .read_r_43_Addr_A(read_r_43_Addr_A),
    .read_r_43_Din_A(read_r_43_Din_A),
    .read_r_43_Dout_A(read_r_43_Dout_A),
    .read_r_44_Clk_A(read_r_44_Clk_A),
    .read_r_44_Rst_A(read_r_44_Rst_A),
    .read_r_44_EN_A(read_r_44_EN_A),
    .read_r_44_WEN_A(read_r_44_WEN_A),
    .read_r_44_Addr_A(read_r_44_Addr_A),
    .read_r_44_Din_A(read_r_44_Din_A),
    .read_r_44_Dout_A(read_r_44_Dout_A),
    .read_r_45_Clk_A(read_r_45_Clk_A),
    .read_r_45_Rst_A(read_r_45_Rst_A),
    .read_r_45_EN_A(read_r_45_EN_A),
    .read_r_45_WEN_A(read_r_45_WEN_A),
    .read_r_45_Addr_A(read_r_45_Addr_A),
    .read_r_45_Din_A(read_r_45_Din_A),
    .read_r_45_Dout_A(read_r_45_Dout_A),
    .read_r_46_Clk_A(read_r_46_Clk_A),
    .read_r_46_Rst_A(read_r_46_Rst_A),
    .read_r_46_EN_A(read_r_46_EN_A),
    .read_r_46_WEN_A(read_r_46_WEN_A),
    .read_r_46_Addr_A(read_r_46_Addr_A),
    .read_r_46_Din_A(read_r_46_Din_A),
    .read_r_46_Dout_A(read_r_46_Dout_A),
    .read_r_47_Clk_A(read_r_47_Clk_A),
    .read_r_47_Rst_A(read_r_47_Rst_A),
    .read_r_47_EN_A(read_r_47_EN_A),
    .read_r_47_WEN_A(read_r_47_WEN_A),
    .read_r_47_Addr_A(read_r_47_Addr_A),
    .read_r_47_Din_A(read_r_47_Din_A),
    .read_r_47_Dout_A(read_r_47_Dout_A),
    .read_r_48_Clk_A(read_r_48_Clk_A),
    .read_r_48_Rst_A(read_r_48_Rst_A),
    .read_r_48_EN_A(read_r_48_EN_A),
    .read_r_48_WEN_A(read_r_48_WEN_A),
    .read_r_48_Addr_A(read_r_48_Addr_A),
    .read_r_48_Din_A(read_r_48_Din_A),
    .read_r_48_Dout_A(read_r_48_Dout_A),
    .read_r_49_Clk_A(read_r_49_Clk_A),
    .read_r_49_Rst_A(read_r_49_Rst_A),
    .read_r_49_EN_A(read_r_49_EN_A),
    .read_r_49_WEN_A(read_r_49_WEN_A),
    .read_r_49_Addr_A(read_r_49_Addr_A),
    .read_r_49_Din_A(read_r_49_Din_A),
    .read_r_49_Dout_A(read_r_49_Dout_A),
    .ref_genome_TVALID(ref_genome_TVALID),
    .ref_genome_TREADY(ref_genome_TREADY),
    .ref_genome_TDATA(ref_genome_TDATA),
    .results_Clk_A(results_Clk_A),
    .results_Rst_A(results_Rst_A),
    .results_EN_A(results_EN_A),
    .results_WEN_A(results_WEN_A),
    .results_Addr_A(results_Addr_A),
    .results_Din_A(results_Din_A),
    .results_Dout_A(results_Dout_A)
  );
endmodule
