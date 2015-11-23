set C_TypeInfoList {{ 
"needlemanWunsch" : [[], {"return": [[],"0"] }, [{"ExternC" : 0}], [ {"read_r": [[], {"array": ["1", [100]]}] }, {"ref_genome": [[], {"array": ["1", [100000]]}] }],[],""], 
"1": [ "basepair_t", {"typedef": [[[],"2"],""]}], 
"2": [ "uint8", {"typedef": [[[], {"scalar": "uint8"}],""]}], 
"0": [ "orig_t", {"typedef": [[[],"3"],""]}], 
"3": [ "uint20", {"typedef": [[[], {"scalar": "uint20"}],""]}]
}}
set moduleName needlemanWunsch
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {needlemanWunsch}
set C_modelType { int 20 }
set C_modelArgList { 
	{ read_r int 32 regular {bram 25 { 1 } 1 1 }  }
	{ ref_genome int 8 regular {axi_s 0 volatile  { ref_genome data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "read_r", "interface" : "bram", "bitwidth" : 32 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "read_r","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 96,"step" : 4}]}]},{"low":8,"up":15,"cElement": [{"cName": "read_r","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 97,"step" : 4}]}]},{"low":16,"up":23,"cElement": [{"cName": "read_r","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 98,"step" : 4}]}]},{"low":24,"up":31,"cElement": [{"cName": "read_r","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 99,"step" : 4}]}]}]} , 
 	{ "Name" : "ref_genome", "interface" : "axis", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ref_genome","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 99999,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 20,"bitSlice":[{"low":0,"up":19,"cElement": [{"cName": "return","cData": "orig_t","bit_use": { "low": 0,"up": 19},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : {"out":16}} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ read_r_Addr_A sc_out sc_lv 32 signal 0 } 
	{ read_r_EN_A sc_out sc_logic 1 signal 0 } 
	{ read_r_WEN_A sc_out sc_lv 4 signal 0 } 
	{ read_r_Din_A sc_out sc_lv 32 signal 0 } 
	{ read_r_Dout_A sc_in sc_lv 32 signal 0 } 
	{ read_r_Clk_A sc_out sc_logic 1 signal 0 } 
	{ read_r_Rst_A sc_out sc_logic 1 signal 0 } 
	{ ref_genome_TDATA sc_in sc_lv 8 signal 1 } 
	{ ref_genome_TVALID sc_in sc_logic 1 invld 1 } 
	{ ref_genome_TREADY sc_out sc_logic 1 inacc 1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"needlemanWunsch","role":"start","value":"0","valid_bit":"0"},{"name":"needlemanWunsch","role":"continue","value":"0","valid_bit":"4"},{"name":"needlemanWunsch","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"needlemanWunsch","role":"start","value":"0","valid_bit":"0"},{"name":"needlemanWunsch","role":"done","value":"0","valid_bit":"1"},{"name":"needlemanWunsch","role":"idle","value":"0","valid_bit":"2"},{"name":"needlemanWunsch","role":"ready","value":"0","valid_bit":"3"},{"name":"needlemanWunsch","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "read_r_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "read_r", "role": "Addr_A" }} , 
 	{ "name": "read_r_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "read_r", "role": "EN_A" }} , 
 	{ "name": "read_r_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "read_r", "role": "WEN_A" }} , 
 	{ "name": "read_r_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "read_r", "role": "Din_A" }} , 
 	{ "name": "read_r_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "read_r", "role": "Dout_A" }} , 
 	{ "name": "read_r_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "read_r", "role": "Clk_A" }} , 
 	{ "name": "read_r_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "read_r", "role": "Rst_A" }} , 
 	{ "name": "ref_genome_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ref_genome", "role": "TDATA" }} , 
 	{ "name": "ref_genome_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "ref_genome", "role": "TVALID" }} , 
 	{ "name": "ref_genome_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "ref_genome", "role": "TREADY" }} , 
 	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "interrupt", "role": "default" }}  ]}
set Spec2ImplPortList { 
	read_r { bram {  { read_r_Addr_A mem_address 1 32 }  { read_r_EN_A mem_ce 1 1 }  { read_r_WEN_A mem_we 1 4 }  { read_r_Din_A mem_din 1 32 }  { read_r_Dout_A mem_dout 0 32 }  { read_r_Clk_A mem_clk 1 1 }  { read_r_Rst_A mem_rst 1 1 } } }
	ref_genome { axis {  { ref_genome_TDATA in_data 0 8 }  { ref_genome_TVALID in_vld 0 1 }  { ref_genome_TREADY in_acc 1 1 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
