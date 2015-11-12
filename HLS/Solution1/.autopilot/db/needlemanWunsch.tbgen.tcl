set C_TypeInfoList {{ 
"needlemanWunsch" : [[], {"return": [[], {"scalar": "unsigned int"}] }, [{"ExternC" : 0}], [ {"reads": [[], {"array": [ {"scalar": "char"}, [100]]}] }, {"ref_genome": [[], {"array": [ {"scalar": "char"}, [20340]]}] }],["0"],""],
 "0": [ "nw_matrix", [[],"1"],""], 
"1": [ "NW_matrix", {"typedef": [[[],"2"],""]}], 
"2": [ "", {"struct": [[{"pack": 0}],[],[{ "score":  {"array": [ {"scalar": "char"}, [20341,101]]}},{ "orig":  {"array": [ {"scalar": "unsigned int"}, [20341,101]]}}],""]}]
}}
set moduleName needlemanWunsch
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {needlemanWunsch}
set C_modelType { int 32 }
set C_modelArgList { 
	{ reads int 8 regular {array 100 { 1 3 } 1 1 }  }
	{ ref_genome int 8 regular {array 20340 { 1 3 } 1 1 }  }
	{ nw_matrix_score int 8 regular {array 2054441 { 2 2 } 1 1 } {global 2}  }
	{ nw_matrix_orig int 32 regular {array 2054441 { 2 3 } 3 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "reads", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "reads","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "ref_genome", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ref_genome","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 20339,"step" : 1}]}]}]} , 
 	{ "Name" : "nw_matrix_score", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "nw_matrix.score","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 20340,"step" : 1},{"low" : 0,"up" : 100,"step" : 1}]}]}],"extern" : 1} , 
 	{ "Name" : "nw_matrix_orig", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "nw_matrix.orig","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 20340,"step" : 1},{"low" : 0,"up" : 100,"step" : 1}]}]}],"extern" : 1} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ reads_address0 sc_out sc_lv 7 signal 0 } 
	{ reads_ce0 sc_out sc_logic 1 signal 0 } 
	{ reads_q0 sc_in sc_lv 8 signal 0 } 
	{ ref_genome_address0 sc_out sc_lv 15 signal 1 } 
	{ ref_genome_ce0 sc_out sc_logic 1 signal 1 } 
	{ ref_genome_q0 sc_in sc_lv 8 signal 1 } 
	{ nw_matrix_score_address0 sc_out sc_lv 21 signal 2 } 
	{ nw_matrix_score_ce0 sc_out sc_logic 1 signal 2 } 
	{ nw_matrix_score_we0 sc_out sc_logic 1 signal 2 } 
	{ nw_matrix_score_d0 sc_out sc_lv 8 signal 2 } 
	{ nw_matrix_score_q0 sc_in sc_lv 8 signal 2 } 
	{ nw_matrix_score_address1 sc_out sc_lv 21 signal 2 } 
	{ nw_matrix_score_ce1 sc_out sc_logic 1 signal 2 } 
	{ nw_matrix_score_we1 sc_out sc_logic 1 signal 2 } 
	{ nw_matrix_score_d1 sc_out sc_lv 8 signal 2 } 
	{ nw_matrix_score_q1 sc_in sc_lv 8 signal 2 } 
	{ nw_matrix_orig_address0 sc_out sc_lv 21 signal 3 } 
	{ nw_matrix_orig_ce0 sc_out sc_logic 1 signal 3 } 
	{ nw_matrix_orig_we0 sc_out sc_logic 1 signal 3 } 
	{ nw_matrix_orig_d0 sc_out sc_lv 32 signal 3 } 
	{ nw_matrix_orig_q0 sc_in sc_lv 32 signal 3 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "reads_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "reads", "role": "address0" }} , 
 	{ "name": "reads_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "reads", "role": "ce0" }} , 
 	{ "name": "reads_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "reads", "role": "q0" }} , 
 	{ "name": "ref_genome_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "ref_genome", "role": "address0" }} , 
 	{ "name": "ref_genome_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ref_genome", "role": "ce0" }} , 
 	{ "name": "ref_genome_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ref_genome", "role": "q0" }} , 
 	{ "name": "nw_matrix_score_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":21, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "address0" }} , 
 	{ "name": "nw_matrix_score_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "ce0" }} , 
 	{ "name": "nw_matrix_score_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "we0" }} , 
 	{ "name": "nw_matrix_score_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "d0" }} , 
 	{ "name": "nw_matrix_score_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "q0" }} , 
 	{ "name": "nw_matrix_score_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":21, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "address1" }} , 
 	{ "name": "nw_matrix_score_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "ce1" }} , 
 	{ "name": "nw_matrix_score_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "we1" }} , 
 	{ "name": "nw_matrix_score_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "d1" }} , 
 	{ "name": "nw_matrix_score_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "nw_matrix_score", "role": "q1" }} , 
 	{ "name": "nw_matrix_orig_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":21, "type": "signal", "bundle":{"name": "nw_matrix_orig", "role": "address0" }} , 
 	{ "name": "nw_matrix_orig_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_orig", "role": "ce0" }} , 
 	{ "name": "nw_matrix_orig_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "nw_matrix_orig", "role": "we0" }} , 
 	{ "name": "nw_matrix_orig_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nw_matrix_orig", "role": "d0" }} , 
 	{ "name": "nw_matrix_orig_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "nw_matrix_orig", "role": "q0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	reads { ap_memory {  { reads_address0 mem_address 1 7 }  { reads_ce0 mem_ce 1 1 }  { reads_q0 mem_dout 0 8 } } }
	ref_genome { ap_memory {  { ref_genome_address0 mem_address 1 15 }  { ref_genome_ce0 mem_ce 1 1 }  { ref_genome_q0 mem_dout 0 8 } } }
	nw_matrix_score { ap_memory {  { nw_matrix_score_address0 mem_address 1 21 }  { nw_matrix_score_ce0 mem_ce 1 1 }  { nw_matrix_score_we0 mem_we 1 1 }  { nw_matrix_score_d0 mem_din 1 8 }  { nw_matrix_score_q0 mem_dout 0 8 }  { nw_matrix_score_address1 mem_address 1 21 }  { nw_matrix_score_ce1 mem_ce 1 1 }  { nw_matrix_score_we1 mem_we 1 1 }  { nw_matrix_score_d1 mem_din 1 8 }  { nw_matrix_score_q1 mem_dout 0 8 } } }
	nw_matrix_orig { ap_memory {  { nw_matrix_orig_address0 mem_address 1 21 }  { nw_matrix_orig_ce0 mem_ce 1 1 }  { nw_matrix_orig_we0 mem_we 1 1 }  { nw_matrix_orig_d0 mem_din 1 32 }  { nw_matrix_orig_q0 mem_dout 0 32 } } }
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
	{ nw_matrix_orig 3 }
}
