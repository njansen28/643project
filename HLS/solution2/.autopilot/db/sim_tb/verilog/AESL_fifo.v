`timescale 1 ns / 1 ps

module fifo #(parameter DEPTH = 16, parameter WIDTH = 8) (
	input reset,
	input write_clock,
	input write_en,
	input [WIDTH - 1:0] write_data,
	input read_clock,
	input read_en,
	output reg [WIDTH - 1:0] read_data,
	output reg full,
	output reg empty);
	
	reg [WIDTH - 1:0] mem [0:DEPTH - 1];
	
	reg [log2(DEPTH):0] write_address;
	reg [log2(DEPTH):0] read_address_1;
	reg [log2(DEPTH):0] read_address_2;
	
	reg [log2(DEPTH):0] read_address;
	reg [log2(DEPTH):0] write_address_1;
	reg [log2(DEPTH):0] write_address_2;
	
	always @ (*) begin
		full  <= (write_address[log2(DEPTH)] != read_address_2[log2(DEPTH)]) && (write_address[log2(DEPTH) - 1:0] == read_address_2[log2(DEPTH) - 1:0]);
		empty <= (read_address[log2(DEPTH)] == write_address_2[log2(DEPTH)]) && (read_address[log2(DEPTH) - 1:0] == write_address_2[log2(DEPTH) - 1:0]);
	end
	
	// PUSH
	always @ (posedge reset or posedge write_clock) begin
		if (reset) begin
			write_address  <= 0;
			read_address_1 <= 0;
			read_address_2 <= 0;
		end else begin
			read_address_1 <= read_address;
			read_address_2 <= read_address_1;
			if (~full && write_en) begin
				mem[write_address[log2(DEPTH) - 1:0]] <= write_data;
				if (write_address[log2(DEPTH) - 1:0] < DEPTH - 1) begin
					write_address <= write_address + 1;
				end else begin
					write_address[log2(DEPTH) - 1:0] <= 0;
					write_address[log2(DEPTH)] <= ~write_address[log2(DEPTH)];
				end
			end
		end
	end
	
	// POP
	always @ (posedge reset or posedge read_clock) begin
		if (reset) begin
			read_address    <= 0;
			write_address_1 <= 0;
			write_address_2 <= 0;
		end else begin
			write_address_1 <= write_address;
			write_address_2 <= write_address_1;
			if (~empty && read_en) begin
				if (read_address[log2(DEPTH) - 1:0] < DEPTH - 1) begin
					read_address <= read_address + 1;
				end else begin
					read_address[log2(DEPTH) - 1:0] <= 0;
					read_address[log2(DEPTH)] <= ~read_address[log2(DEPTH)];
				end
			end
		end
	end
	
	always @ (*) begin
		read_data <= mem[read_address[log2(DEPTH) - 1:0]];
	end
	
	function integer log2;
		input integer depth;
		for (log2 = 0; depth > 0; log2 = log2 + 1)
			depth = depth >> 1;
	endfunction
	
	// backdoor API
	task push(input [WIDTH - 1:0] write_data);
		if (~full) begin
			mem[write_address[log2(DEPTH) - 1:0]] = write_data;
			if (write_address[log2(DEPTH) - 1:0] < DEPTH - 1) begin
				write_address = write_address + 1;
			end else begin
				write_address[log2(DEPTH) - 1:0] = 0;
				write_address[log2(DEPTH)] = ~write_address[log2(DEPTH)];
			end
			full  = (write_address[log2(DEPTH)] != read_address_2[log2(DEPTH)]) && (write_address[log2(DEPTH) - 1:0] == read_address_2[log2(DEPTH) - 1:0]);
		end
	endtask
	
	// backdoor API
	task pop(output [WIDTH - 1:0] read_data);
		if (~empty) begin
			read_data = mem[read_address[log2(DEPTH) - 1:0]];
			if (read_address[log2(DEPTH) - 1:0] < DEPTH - 1) begin
				read_address = read_address + 1;
			end else begin
				read_address[log2(DEPTH) - 1:0] = 0;
				read_address[log2(DEPTH)] = ~read_address[log2(DEPTH)];
			end
			empty = (read_address[log2(DEPTH)] == write_address_2[log2(DEPTH)]) && (read_address[log2(DEPTH) - 1:0] == write_address_2[log2(DEPTH) - 1:0]);
		end
	endtask
	
endmodule
