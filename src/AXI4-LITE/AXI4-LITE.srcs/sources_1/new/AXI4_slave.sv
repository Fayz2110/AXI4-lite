`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 07/22/2024 05:28:36 PM
// Design Name: 
// Module Name: AXI4_slave
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


module AXI4_slave#(
parameter address_width=32,
parameter data_width=32
)
(
input logic                     clk,
input logic                     rst,
input logic [data_width-1:0]    data_in,
//READ ADDRESS CHANNEL
input logic [address_width-1:0] s_ARADDR,
input logic                     s_ARVALID,
output logic                    s_ARREADY,
//READ DATA CHANNEL
input logic                     s_RREADY,
output logic  [data_width-1:0]  s_RDATA,
output logic                    s_RVALID

    );
    
 typedef enum logic [2:0]{
    idle,
    read_address,
    read_data,
    write_address,
    wite_data,
    write_response
    
    }axi_4_slave;
    
    axi_4_slave current_state,next_state;  
    
    always @(posedge clk)begin
    if(!rst)begin
    s_ARREADY<=0;
    end
    else
    current_state<=next_state;
    end   
    
    always_comb begin
    case(current_state)
    idle:begin
    if(s_ARVALID)begin
    next_state=read_address;
    end
    end
    read_address:begin
    s_ARREADY=1;
    next_state=read_data;
    end
    read_data:begin
    s_ARREADY=0;
    s_RDATA=data_in;
    s_RVALID=1;
    if(s_RVALID && s_RREADY)begin
    next_state=idle;
    end
    
    end
    default:begin
     next_state<=idle;
     end
    endcase
    end
endmodule
