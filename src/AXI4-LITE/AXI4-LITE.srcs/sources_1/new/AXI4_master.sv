`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 07/22/2024 05:22:11 PM
// Design Name: 
// Module Name: AXI4_master
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module AXI4_master#(
parameter address_width=32,
parameter data_width=32
)
(
input logic                      clk,
input logic                      rst,
input logic [address_width-1:0]  address,
input logic                      rd_en,
input logic                      wrt_en,
input logic  [data_width-1:0]    data_in,

//READ ADDRESS CHANNEL
output logic [address_width-1:0] m_ARADDR,
output logic                     m_ARVALID,
input logic                      m_ARREADY,

//READ DATA CHANNEL
input logic  [data_width-1:0]    m_RDATA,
input logic                      m_RVALID,
output logic                     m_RREADY,

//WRITE ADDRESS CHANNEL
output logic [address_width-1:0] m_AWADDR,
output logic                     m_AWVALID,
input logic                      m_AWREADY,

//WRITE DATA CHANNEL
output logic  [data_width-1:0]   m_WDATA,
output logic                     m_WVALID,
input logic                      m_WREADY,

//WRITE RESPONSE CHANNEL
input logic   [1:0]              m_BRESP,
input logic                      m_BVALID,
output logic                     m_BREADY



    );
    
typedef enum logic [2:0]{
idle=3'b000,
read_address=3'b001,
read_data=3'b010,
write_address_data=3'b011,

write_response=3'b100

}axi_4_master;

axi_4_master current_state,next_state;  

always @(posedge clk)begin
if(!rst)begin
m_ARADDR<=0;
m_ARVALID<=0;
end
else
current_state<=next_state;
end

always_comb begin
case(current_state)
idle:begin
m_RREADY=0;
m_BREADY=0;

if(rd_en)begin
next_state=read_address;
end
else if(wrt_en)begin
next_state=write_address_data;
end
end
read_address:begin

m_ARVALID=1;
m_RREADY=1;
if(m_ARVALID && m_ARREADY)begin
m_ARADDR=address;
next_state=read_data;
end
end
read_data:begin


m_ARVALID=0;
next_state=idle;
end
write_address_data:begin

m_AWVALID=1;

m_WVALID=1;
m_BREADY=1;

if(m_AWVALID &&m_AWREADY &&m_WREADY &&m_WVALID)begin
m_WDATA=data_in;
m_AWADDR=address;
next_state=write_response;
end
end
write_response:begin
m_AWVALID=0;
m_WVALID=0;
next_state=idle;
end


/*write_response:begin
//m_BREADY=1;
next_state=idle;
end*/
default:begin
     next_state<=idle;
end

endcase
end  
endmodule
