#include "needlemanWunsch.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void needlemanWunsch::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_Addr_A\" :  \"" << read_r_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_EN_A\" :  \"" << read_r_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_WEN_A\" :  \"" << read_r_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_Din_A\" :  \"" << read_r_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"read_r_Dout_A\" :  \"" << read_r_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_Clk_A\" :  \"" << read_r_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"read_r_Rst_A\" :  \"" << read_r_Rst_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ref_genome_TDATA\" :  \"" << ref_genome_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ref_genome_TVALID\" :  \"" << ref_genome_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ref_genome_TREADY\" :  \"" << ref_genome_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

