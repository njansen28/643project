set C_TypeInfoList {{ 
"needlemanWunsch" : [[], {"return": [[], {"scalar": "unsigned int"}] }, [{"ExternC" : 0}], [ {"reads": [[], {"array": [ {"scalar": "char"}, [100]]}] }, {"ref_genome": [[], {"scalar": "char"}] }, {"orig_in": [[], {"array": [ {"scalar": "unsigned int"}, [101]]}] }, {"orig_out": [[], {"array": [ {"scalar": "unsigned int"}, [101]]}] }, {"score_in": [[], {"array": [ {"scalar": "char"}, [101]]}] }, {"score_out": [[], {"array": [ {"scalar": "char"}, [101]]}] }, {"i": [[], {"scalar": "unsigned int"}] }],["0","1"],""],
 "0": [ "max_orig", [[], {"scalar": "unsigned int"}],""],
 "1": [ "max_score", [[], {"scalar": "int"}],""]
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
	{ ref_genome int 8 regular  }
	{ orig_in int 32 regular {array 101 { 1 3 } 1 1 }  }
	{ orig_out int 32 regular {array 101 { 2 3 } 1 1 }  }
	{ score_in int 8 regular {array 101 { 1 1 } 1 1 }  }
	{ score_out int 8 regular {array 101 { 2 3 } 1 1 }  }
	{ i int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "reads", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "reads","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "ref_genome", "interface" : "wire", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ref_genome","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "orig_in", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "orig_in","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 100,"step" : 1}]}]}]} , 
 	{ "Name" : "orig_out", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "orig_out","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 100,"step" : 1}]}]}]} , 
 	{ "Name" : "score_in", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "score_in","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 100,"step" : 1}]}]}]} , 
 	{ "Name" : "score_out", "interface" : "memory", "bitwidth" : 8 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "score_out","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 100,"step" : 1}]}]}]} , 
 	{ "Name" : "i", "interface" : "wire", "bitwidth" : 32 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 31
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
	{ ref_genome sc_in sc_lv 8 signal 1 } 
	{ orig_in_address0 sc_out sc_lv 7 signal 2 } 
	{ orig_in_ce0 sc_out sc_logic 1 signal 2 } 
	{ orig_in_q0 sc_in sc_lv 32 signal 2 } 
	{ orig_out_address0 sc_out sc_lv 7 signal 3 } 
	{ orig_out_ce0 sc_out sc_logic 1 signal 3 } 
	{ orig_out_we0 sc_out sc_logic 1 signal 3 } 
	{ orig_out_d0 sc_out sc_lv 32 signal 3 } 
	{ orig_out_q0 sc_in sc_lv 32 signal 3 } 
	{ score_in_address0 sc_out sc_lv 7 signal 4 } 
	{ score_in_ce0 sc_out sc_logic 1 signal 4 } 
	{ score_in_q0 sc_in sc_lv 8 signal 4 } 
	{ score_in_address1 sc_out sc_lv 7 signal 4 } 
	{ score_in_ce1 sc_out sc_logic 1 signal 4 } 
	{ score_in_q1 sc_in sc_lv 8 signal 4 } 
	{ score_out_address0 sc_out sc_lv 7 signal 5 } 
	{ score_out_ce0 sc_out sc_logic 1 signal 5 } 
	{ score_out_we0 sc_out sc_logic 1 signal 5 } 
	{ score_out_d0 sc_out sc_lv 8 signal 5 } 
	{ score_out_q0 sc_in sc_lv 8 signal 5 } 
	{ i sc_in sc_lv 32 signal 6 } 
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
 	{ "name": "ref_genome", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ref_genome", "role": "default" }} , 
 	{ "name": "orig_in_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "orig_in", "role": "address0" }} , 
 	{ "name": "orig_in_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "orig_in", "role": "ce0" }} , 
 	{ "name": "orig_in_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "orig_in", "role": "q0" }} , 
 	{ "name": "orig_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "orig_out", "role": "address0" }} , 
 	{ "name": "orig_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "orig_out", "role": "ce0" }} , 
 	{ "name": "orig_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "orig_out", "role": "we0" }} , 
 	{ "name": "orig_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "orig_out", "role": "d0" }} , 
 	{ "name": "orig_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "orig_out", "role": "q0" }} , 
 	{ "name": "score_in_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "score_in", "role": "address0" }} , 
 	{ "name": "score_in_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "score_in", "role": "ce0" }} , 
 	{ "name": "score_in_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "score_in", "role": "q0" }} , 
 	{ "name": "score_in_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "score_in", "role": "address1" }} , 
 	{ "name": "score_in_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "score_in", "role": "ce1" }} , 
 	{ "name": "score_in_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "score_in", "role": "q1" }} , 
 	{ "name": "score_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "score_out", "role": "address0" }} , 
 	{ "name": "score_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "score_out", "role": "ce0" }} , 
 	{ "name": "score_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "score_out", "role": "we0" }} , 
 	{ "name": "score_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "score_out", "role": "d0" }} , 
 	{ "name": "score_out_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "score_out", "role": "q0" }} , 
 	{ "name": "i", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	reads { ap_memory {  { reads_address0 mem_address 1 7 }  { reads_ce0 mem_ce 1 1 }  { reads_q0 mem_dout 0 8 } } }
	ref_genome { ap_none {  { ref_genome in_data 0 8 } } }
	orig_in { ap_memory {  { orig_in_address0 mem_address 1 7 }  { orig_in_ce0 mem_ce 1 1 }  { orig_in_q0 mem_dout 0 32 } } }
	orig_out { ap_memory {  { orig_out_address0 mem_address 1 7 }  { orig_out_ce0 mem_ce 1 1 }  { orig_out_we0 mem_we 1 1 }  { orig_out_d0 mem_din 1 32 }  { orig_out_q0 mem_dout 0 32 } } }
	score_in { ap_memory {  { score_in_address0 mem_address 1 7 }  { score_in_ce0 mem_ce 1 1 }  { score_in_q0 mem_dout 0 8 }  { score_in_address1 mem_address 1 7 }  { score_in_ce1 mem_ce 1 1 }  { score_in_q1 mem_dout 0 8 } } }
	score_out { ap_memory {  { score_out_address0 mem_address 1 7 }  { score_out_ce0 mem_ce 1 1 }  { score_out_we0 mem_we 1 1 }  { score_out_d0 mem_din 1 8 }  { score_out_q0 mem_dout 0 8 } } }
	i { ap_none {  { i in_data 0 32 } } }
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
