`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 07/22/2024 07:35:39 PM
// Design Name: 
// Module Name: AXI_4_top
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


module AXI_4_top#(
parameter address_width=32,
parameter data_width=32
)
(

    );
    logic clk;
    logic rst;
    logic [data_width-1:0] data,rdata,wdata,data_in;
    logic [address_width-1:0] address,araddr,awaddr;
    logic rd_en,wrt_en;
    
    logic arvalid,arready,rvalid,rready,awvalid,awready,wvalid,wready,bvalid,bready;
    logic [1:0] bresp;
    

    
 AXI4_master master(
 .clk(clk),
 .rst(rst),
 .address(address),
 .rd_en(rd_en),
 .m_ARADDR(araddr),
 .m_ARVALID(arvalid),
 .m_ARREADY(arready),
 .m_RDATA(rdata),
 .m_RVALID(rvalid),
 .m_RREADY(rready),
 .m_AWADDR(awaddr),
 .m_AWVALID(awvalid),
 .m_AWREADY(awready),
 .m_WDATA(wdata),
 .m_WVALID(wvalid),
 .m_WREADY(wready),
 .m_BRESP(bresp),
 .m_BVALID(bvalid),
 .m_BREADY(bready),
 .wrt_en(wrt_en),
 .data_in(data_in)
 );
 
/* AXI4_slave slave(
 .clk(clk),
 .rst(rst),
 .data_in(data),
 .s_ARADDR(araddr),
 .s_ARVALID(arvalid),
 .s_ARREADY(arready),
 .s_RDATA(rdata),
 .s_RVALID(rvalid),
 .s_RREADY(rready)
 ); */
 design_2 des(
 .S_AXI_0_araddr(araddr),
 .S_AXI_0_arready(arready),
 .S_AXI_0_arvalid(arvalid),
 .S_AXI_0_rdata(rdata),
 .S_AXI_0_rready(rready),
 .S_AXI_0_rvalid(rvalid),
 .BRAM_PORTA_0_dout(data),
// .BRAM_PORTA_0_clk(clk),
 //.BRAM_PORTA_0_rst(rst),
 .S_AXI_0_awaddr(awaddr),
 .S_AXI_0_awready(awready),
 .S_AXI_0_awvalid(awvalid),
 .S_AXI_0_bready(bready),
 .S_AXI_0_bresp(bresp),
 .S_AXI_0_bvalid(bvalid),
 .S_AXI_0_wdata(wdata),
 .S_AXI_0_wready(wready),
 .S_AXI_0_wvalid(wvalid),
 
 

 
 .s_axi_aclk_0(clk),
 .s_axi_aresetn_0(rst) 
 
 
 );
 initial begin
         clk = 0;
         forever #5 clk = ~clk;
     end
     
    initial begin
  /*  #5 rst=1;
    wrt_en=1;
    address=32'h00000004;
     data_in = 32'h000abc34;
    #40 wrt_en=0;
    
    #20 wrt_en=1;
    address=32'h00000006;
    data_in = 32'h00982354;
     #30 wrt_en=0;*/
        
        #5; rst = 1;
         rd_en=1;
         address=32'h00000004;
       #20 data = 32'h12345678;
       #10 rd_en=0;
       
       #20 rd_en=1;
       address=32'h00000006;
       #10 data = 32'habc67889;
        #10 rd_en=0;
       
         
         
       //  #10
      //   data = 32'habc23489; 
          #100
          $stop;
   end
endmodule
