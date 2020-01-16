// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


//======================

void Vmain::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vmain::traceInit, &Vmain::traceFull, &Vmain::traceChg, this);
}
void Vmain::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vmain* t=(Vmain*)userthis;
    Vmain__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vmain::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vmain* t=(Vmain*)userthis;
    Vmain__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vmain::traceInitThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vmain::traceFullThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vmain::traceInitThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+641,"i_clk",-1);
	vcdp->declBit  (c+642,"i_reset",-1);
	vcdp->declBit  (c+643,"o_ram_cke",-1);
	vcdp->declBit  (c+644,"o_ram_cs_n",-1);
	vcdp->declBit  (c+645,"o_ram_ras_n",-1);
	vcdp->declBit  (c+646,"o_ram_cas_n",-1);
	vcdp->declBit  (c+647,"o_ram_we_n",-1);
	vcdp->declBus  (c+648,"o_ram_bs",-1,1,0);
	vcdp->declBus  (c+649,"o_ram_addr",-1,12,0);
	vcdp->declBus  (c+650,"i_ram_data",-1,15,0);
	vcdp->declBus  (c+651,"o_ram_data",-1,15,0);
	vcdp->declBus  (c+652,"o_ram_dqm",-1,1,0);
	vcdp->declBus  (c+653,"o_debug",-1,31,0);
	vcdp->declBit  (c+654,"o_ram_drive_data",-1);
	vcdp->declBit  (c+655,"i_pp_clk",-1);
	vcdp->declBit  (c+656,"i_pp_dir",-1);
	vcdp->declBus  (c+657,"i_pp_data",-1,7,0);
	vcdp->declBus  (c+658,"o_pp_data",-1,7,0);
	vcdp->declBit  (c+659,"o_pp_clkfb",-1);
	vcdp->declBit  (c+660,"o_pp_dbg",-1);
	vcdp->declBus  (c+661,"i_gpio",-1,1,0);
	vcdp->declBus  (c+662,"o_gpio",-1,10,0);
	vcdp->declBus  (c+673,"main RESET_ADDRESS",-1,31,0);
	vcdp->declBus  (c+674,"main ZIP_ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+675,"main ZIP_INTS",-1,31,0);
	vcdp->declBus  (c+676,"main ZIP_START_HALTED",-1,0,0);
	vcdp->declBus  (c+677,"main ZIP_LGCACHE_SZ",-1,31,0);
	vcdp->declBit  (c+641,"main i_clk",-1);
	vcdp->declBit  (c+642,"main i_reset",-1);
	vcdp->declBus  (c+678,"main RDLY",-1,31,0);
	vcdp->declBit  (c+643,"main o_ram_cke",-1);
	vcdp->declBit  (c+644,"main o_ram_cs_n",-1);
	vcdp->declBit  (c+645,"main o_ram_ras_n",-1);
	vcdp->declBit  (c+646,"main o_ram_cas_n",-1);
	vcdp->declBit  (c+647,"main o_ram_we_n",-1);
	vcdp->declBus  (c+648,"main o_ram_bs",-1,1,0);
	vcdp->declBus  (c+649,"main o_ram_addr",-1,12,0);
	vcdp->declBus  (c+650,"main i_ram_data",-1,15,0);
	vcdp->declBus  (c+651,"main o_ram_data",-1,15,0);
	vcdp->declBus  (c+652,"main o_ram_dqm",-1,1,0);
	vcdp->declBus  (c+653,"main o_debug",-1,31,0);
	vcdp->declBus  (c+679,"main ram_data",-1,15,0);
	vcdp->declBit  (c+654,"main o_ram_drive_data",-1);
	vcdp->declBit  (c+655,"main i_pp_clk",-1);
	vcdp->declBit  (c+656,"main i_pp_dir",-1);
	vcdp->declBus  (c+657,"main i_pp_data",-1,7,0);
	vcdp->declBus  (c+658,"main o_pp_data",-1,7,0);
	vcdp->declBit  (c+659,"main o_pp_clkfb",-1);
	vcdp->declBit  (c+660,"main o_pp_dbg",-1);
	vcdp->declBit  (c+1,"main zip_cpu_int",-1);
	vcdp->declBit  (c+2,"main watchdog_reset",-1);
	vcdp->declBit  (c+441,"main gpio_int",-1);
	vcdp->declBit  (c+3,"main uarttxf_int",-1);
	vcdp->declBit  (c+4,"main uartrxf_int",-1);
	vcdp->declBit  (c+4,"main uartrx_int",-1);
	vcdp->declBit  (c+3,"main uarttx_int",-1);
	vcdp->declBit  (c+5,"main bustimer_int",-1);
	vcdp->declBit  (c+6,"main w_bus_int",-1);
	vcdp->declBus  (c+442,"main zip_debug",-1,31,0);
	vcdp->declBit  (c+443,"main zip_trigger",-1);
	vcdp->declBit  (c+680,"main zip_halted",-1);
	vcdp->declBit  (c+444,"main cpu_reset",-1);
	vcdp->declBus  (c+681,"main NGPI",-1,31,0);
	vcdp->declBus  (c+682,"main NGPO",-1,31,0);
	vcdp->declBus  (c+661,"main i_gpio",-1,1,0);
	vcdp->declBus  (c+662,"main o_gpio",-1,10,0);
	vcdp->declBus  (c+683,"main wbubus_dbg",-1,0,0);
	vcdp->declBit  (c+7,"main pp_rx_stb",-1);
	vcdp->declBit  (c+8,"main pp_tx_stb",-1);
	vcdp->declBit  (c+9,"main pp_tx_busy",-1);
	vcdp->declBus  (c+445,"main pp_rx_data",-1,7,0);
	vcdp->declBus  (c+446,"main pp_tx_data",-1,7,0);
	vcdp->declBit  (c+10,"main hb_dwbi_cyc",-1);
	vcdp->declBit  (c+11,"main hb_dwbi_stb",-1);
	vcdp->declBit  (c+12,"main hb_dwbi_we",-1);
	vcdp->declBit  (c+13,"main hb_dwbi_ack",-1);
	vcdp->declBit  (c+14,"main hb_dwbi_stall",-1);
	vcdp->declBit  (c+15,"main hb_dwbi_err",-1);
	vcdp->declBus  (c+16,"main hb_dwbi_addr",-1,22,0);
	vcdp->declBus  (c+17,"main hb_dwbi_odata",-1,31,0);
	vcdp->declBus  (c+447,"main hb_dwbi_idata",-1,31,0);
	vcdp->declBus  (c+18,"main hb_dwbi_sel",-1,3,0);
	vcdp->declBit  (c+448,"main w_console_rx_stb",-1);
	vcdp->declBit  (c+19,"main w_console_tx_stb",-1);
	vcdp->declBit  (c+20,"main w_console_busy",-1);
	vcdp->declBus  (c+449,"main w_console_rx_data",-1,6,0);
	vcdp->declBus  (c+450,"main w_console_tx_data",-1,6,0);
	vcdp->declBus  (c+451,"main r_buserr_addr",-1,22,0);
	vcdp->declBus  (c+21,"main r_pwrcount_data",-1,31,0);
	vcdp->declBus  (c+663,"main cpu_reset_bus",-1,7,0);
	vcdp->declBus  (c+22,"main bus_int_vector",-1,14,0);
	vcdp->declBit  (c+23,"main wb_cyc",-1);
	vcdp->declBit  (c+24,"main wb_stb",-1);
	vcdp->declBit  (c+25,"main wb_we",-1);
	vcdp->declBit  (c+26,"main wb_stall",-1);
	vcdp->declBit  (c+27,"main wb_err",-1);
	vcdp->declBit  (c+28,"main wb_none_sel",-1);
	vcdp->declBit  (c+452,"main wb_many_ack",-1);
	vcdp->declBus  (c+29,"main wb_addr",-1,22,0);
	vcdp->declBus  (c+30,"main wb_data",-1,31,0);
	vcdp->declBus  (c+453,"main wb_idata",-1,31,0);
	vcdp->declBus  (c+31,"main wb_sel",-1,3,0);
	vcdp->declBit  (c+454,"main wb_ack",-1);
	vcdp->declBit  (c+32,"main buserr_sel",-1);
	vcdp->declBit  (c+684,"main buserr_ack",-1);
	vcdp->declBit  (c+685,"main buserr_stall",-1);
	vcdp->declBus  (c+455,"main buserr_data",-1,31,0);
	vcdp->declBit  (c+33,"main buspic_sel",-1);
	vcdp->declBit  (c+686,"main buspic_ack",-1);
	vcdp->declBit  (c+687,"main buspic_stall",-1);
	vcdp->declBus  (c+456,"main buspic_data",-1,31,0);
	vcdp->declBit  (c+34,"main gpio_sel",-1);
	vcdp->declBit  (c+688,"main gpio_ack",-1);
	vcdp->declBit  (c+689,"main gpio_stall",-1);
	vcdp->declBus  (c+35,"main gpio_data",-1,31,0);
	vcdp->declBit  (c+36,"main pwrcount_sel",-1);
	vcdp->declBit  (c+690,"main pwrcount_ack",-1);
	vcdp->declBit  (c+691,"main pwrcount_stall",-1);
	vcdp->declBus  (c+21,"main pwrcount_data",-1,31,0);
	vcdp->declBit  (c+37,"main version_sel",-1);
	vcdp->declBit  (c+692,"main version_ack",-1);
	vcdp->declBit  (c+692,"main version_stall",-1);
	vcdp->declBus  (c+693,"main version_data",-1,31,0);
	vcdp->declBit  (c+38,"main bustimer_sel",-1);
	vcdp->declBit  (c+39,"main bustimer_ack",-1);
	vcdp->declBit  (c+692,"main bustimer_stall",-1);
	vcdp->declBus  (c+40,"main bustimer_data",-1,31,0);
	vcdp->declBit  (c+41,"main watchdog_sel",-1);
	vcdp->declBit  (c+42,"main watchdog_ack",-1);
	vcdp->declBit  (c+692,"main watchdog_stall",-1);
	vcdp->declBus  (c+43,"main watchdog_data",-1,31,0);
	vcdp->declBit  (c+44,"main sdramscope_sel",-1);
	vcdp->declBit  (c+45,"main sdramscope_ack",-1);
	vcdp->declBit  (c+692,"main sdramscope_stall",-1);
	vcdp->declBus  (c+457,"main sdramscope_data",-1,31,0);
	vcdp->declBit  (c+46,"main wb_dio_sel",-1);
	vcdp->declBit  (c+458,"main wb_dio_ack",-1);
	vcdp->declBit  (c+692,"main wb_dio_stall",-1);
	vcdp->declBus  (c+459,"main wb_dio_data",-1,31,0);
	vcdp->declBit  (c+47,"main console_sel",-1);
	vcdp->declBit  (c+48,"main console_ack",-1);
	vcdp->declBit  (c+692,"main console_stall",-1);
	vcdp->declBus  (c+460,"main console_data",-1,31,0);
	vcdp->declBit  (c+49,"main wb_sio_sel",-1);
	vcdp->declBit  (c+50,"main wb_sio_ack",-1);
	vcdp->declBit  (c+692,"main wb_sio_stall",-1);
	vcdp->declBus  (c+461,"main wb_sio_data",-1,31,0);
	vcdp->declBit  (c+51,"main bkram_sel",-1);
	vcdp->declBit  (c+52,"main bkram_ack",-1);
	vcdp->declBit  (c+692,"main bkram_stall",-1);
	vcdp->declBus  (c+462,"main bkram_data",-1,31,0);
	vcdp->declBit  (c+53,"main sdram_sel",-1);
	vcdp->declBit  (c+54,"main sdram_ack",-1);
	vcdp->declBit  (c+55,"main sdram_stall",-1);
	vcdp->declBus  (c+56,"main sdram_data",-1,31,0);
	vcdp->declBit  (c+57,"main zip_cyc",-1);
	vcdp->declBit  (c+58,"main zip_stb",-1);
	vcdp->declBit  (c+59,"main zip_we",-1);
	vcdp->declBit  (c+60,"main zip_stall",-1);
	vcdp->declBit  (c+61,"main zip_err",-1);
	vcdp->declBit  (c+692,"main zip_none_sel",-1);
	vcdp->declBit  (c+692,"main zip_many_ack",-1);
	vcdp->declBus  (c+62,"main zip_addr",-1,22,0);
	vcdp->declBus  (c+63,"main zip_data",-1,31,0);
	vcdp->declBus  (c+447,"main zip_idata",-1,31,0);
	vcdp->declBus  (c+64,"main zip_sel",-1,3,0);
	vcdp->declBit  (c+65,"main zip_ack",-1);
	vcdp->declBit  (c+57,"main zip_dwb_sel",-1);
	vcdp->declBit  (c+694,"main zip_dwb_ack",-1);
	vcdp->declBit  (c+695,"main zip_dwb_stall",-1);
	vcdp->declBit  (c+696,"main zip_dwb_err",-1);
	vcdp->declBus  (c+447,"main zip_dwb_data",-1,31,0);
	vcdp->declBit  (c+66,"main hb_cyc",-1);
	vcdp->declBit  (c+67,"main hb_stb",-1);
	vcdp->declBit  (c+463,"main hb_we",-1);
	vcdp->declBit  (c+68,"main hb_stall",-1);
	vcdp->declBit  (c+69,"main hb_err",-1);
	vcdp->declBit  (c+70,"main hb_none_sel",-1);
	vcdp->declBit  (c+464,"main hb_many_ack",-1);
	vcdp->declBus  (c+465,"main hb_addr",-1,23,0);
	vcdp->declBus  (c+466,"main hb_data",-1,31,0);
	vcdp->declBus  (c+467,"main hb_idata",-1,31,0);
	vcdp->declBus  (c+697,"main hb_sel",-1,3,0);
	vcdp->declBit  (c+468,"main hb_ack",-1);
	vcdp->declBit  (c+469,"main hb_dwb_sel",-1);
	vcdp->declBit  (c+71,"main hb_dwb_ack",-1);
	vcdp->declBit  (c+72,"main hb_dwb_stall",-1);
	vcdp->declBit  (c+73,"main hb_dwb_err",-1);
	vcdp->declBus  (c+447,"main hb_dwb_data",-1,31,0);
	vcdp->declBit  (c+470,"main zip_dbg_sel",-1);
	vcdp->declBit  (c+74,"main zip_dbg_ack",-1);
	vcdp->declBit  (c+75,"main zip_dbg_stall",-1);
	vcdp->declBus  (c+76,"main zip_dbg_data",-1,31,0);
	vcdp->declBit  (c+50,"main r_wb_sio_ack",-1);
	vcdp->declBus  (c+461,"main r_wb_sio_data",-1,31,0);
	vcdp->declBus  (c+471,"main r_wb_dio_ack",-1,1,0);
	vcdp->declBus  (c+472,"main r_wb_dio_bus_select",-1,0,0);
	vcdp->declBus  (c+459,"main r_wb_dio_data",-1,31,0);
	vcdp->declBus  (c+473,"main r_wb_bus_select",-1,2,0);
	vcdp->declBus  (c+440,"main sdram_debug",-1,31,0);
	vcdp->declBit  (c+77,"main sdramscope_int",-1);
	vcdp->declBus  (c+698,"main INITIAL_GPIO",-1,10,0);
	vcdp->declBus  (c+474,"main hb_tmp_addr",-1,29,0);
	vcdp->declBus  (c+699,"main sdramscopei LGMEM",-1,4,0);
	vcdp->declBus  (c+700,"main sdramscopei BUSW",-1,31,0);
	vcdp->declBus  (c+676,"main sdramscopei SYNCHRONOUS",-1,0,0);
	vcdp->declBus  (c+701,"main sdramscopei HOLDOFFBITS",-1,31,0);
	vcdp->declBus  (c+702,"main sdramscopei DEFAULT_HOLDOFF",-1,3,0);
	vcdp->declBit  (c+641,"main sdramscopei i_data_clk",-1);
	vcdp->declBit  (c+703,"main sdramscopei i_ce",-1);
	vcdp->declBit  (c+664,"main sdramscopei i_trigger",-1);
	vcdp->declBus  (c+440,"main sdramscopei i_data",-1,31,0);
	vcdp->declBit  (c+641,"main sdramscopei i_wb_clk",-1);
	vcdp->declBit  (c+23,"main sdramscopei i_wb_cyc",-1);
	vcdp->declBit  (c+78,"main sdramscopei i_wb_stb",-1);
	vcdp->declBit  (c+25,"main sdramscopei i_wb_we",-1);
	vcdp->declBit  (c+79,"main sdramscopei i_wb_addr",-1);
	vcdp->declBus  (c+30,"main sdramscopei i_wb_data",-1,31,0);
	vcdp->declBit  (c+45,"main sdramscopei o_wb_ack",-1);
	vcdp->declBit  (c+692,"main sdramscopei o_wb_stall",-1);
	vcdp->declBus  (c+457,"main sdramscopei o_wb_data",-1,31,0);
	vcdp->declBit  (c+77,"main sdramscopei o_interrupt",-1);
	vcdp->declBit  (c+641,"main sdramscopei bus_clock",-1);
	vcdp->declBit  (c+80,"main sdramscopei read_from_data",-1);
	vcdp->declBit  (c+81,"main sdramscopei write_stb",-1);
	vcdp->declBit  (c+82,"main sdramscopei write_to_control",-1);
	vcdp->declBit  (c+475,"main sdramscopei read_address",-1);
	vcdp->declBus  (c+476,"main sdramscopei raddr",-1,3,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+477+i*1,"main sdramscopei mem",(i+0),31,0);}}
	vcdp->declBit  (c+83,"main sdramscopei bw_reset_request",-1);
	vcdp->declBit  (c+84,"main sdramscopei bw_manual_trigger",-1);
	vcdp->declBit  (c+85,"main sdramscopei bw_disable_trigger",-1);
	vcdp->declBit  (c+83,"main sdramscopei bw_reset_complete",-1);
	vcdp->declBus  (c+86,"main sdramscopei br_config",-1,2,0);
	vcdp->declBus  (c+87,"main sdramscopei br_holdoff",-1,3,0);
	vcdp->declBit  (c+83,"main sdramscopei dw_reset",-1);
	vcdp->declBit  (c+84,"main sdramscopei dw_manual_trigger",-1);
	vcdp->declBit  (c+85,"main sdramscopei dw_disable_trigger",-1);
	vcdp->declBit  (c+88,"main sdramscopei dr_triggered",-1);
	vcdp->declBit  (c+89,"main sdramscopei dr_primed",-1);
	vcdp->declBit  (c+665,"main sdramscopei dw_trigger",-1);
	vcdp->declBus  (c+90,"main sdramscopei counter",-1,3,0);
	vcdp->declBit  (c+91,"main sdramscopei dr_stopped",-1);
	vcdp->declBus  (c+92,"main sdramscopei waddr",-1,3,0);
	vcdp->declBus  (c+704,"main sdramscopei STOPDELAY",-1,31,0);
	vcdp->declBus  (c+493,"main sdramscopei wr_piped_data",-1,31,0);
	vcdp->declBit  (c+91,"main sdramscopei bw_stopped",-1);
	vcdp->declBit  (c+88,"main sdramscopei bw_triggered",-1);
	vcdp->declBit  (c+89,"main sdramscopei bw_primed",-1);
	vcdp->declBit  (c+93,"main sdramscopei br_wb_ack",-1);
	vcdp->declBit  (c+94,"main sdramscopei br_pre_wb_ack",-1);
	vcdp->declBit  (c+78,"main sdramscopei bw_cyc_stb",-1);
	vcdp->declBus  (c+494,"main sdramscopei this_addr",-1,3,0);
	vcdp->declBus  (c+495,"main sdramscopei nxt_mem",-1,31,0);
	vcdp->declBus  (c+95,"main sdramscopei full_holdoff",-1,19,0);
	vcdp->declBus  (c+457,"main sdramscopei o_bus_data",-1,31,0);
	vcdp->declBus  (c+699,"main sdramscopei bw_lgmem",-1,4,0);
	vcdp->declBit  (c+96,"main sdramscopei br_level_interrupt",-1);
	vcdp->declBus  (c+493,"main sdramscopei genblk4 genblk1 data_pipe",-1,31,0);
	vcdp->declBus  (c+678,"main sdrami RDLY",-1,31,0);
	vcdp->declBus  (c+705,"main sdrami NCA",-1,31,0);
	vcdp->declBus  (c+706,"main sdrami NRA",-1,31,0);
	vcdp->declBus  (c+674,"main sdrami AW",-1,31,0);
	vcdp->declBus  (c+700,"main sdrami DW",-1,31,0);
	vcdp->declBus  (c+707,"main sdrami COL_THRESHOLD",-1,7,0);
	vcdp->declBit  (c+641,"main sdrami i_clk",-1);
	vcdp->declBit  (c+23,"main sdrami i_wb_cyc",-1);
	vcdp->declBit  (c+97,"main sdrami i_wb_stb",-1);
	vcdp->declBit  (c+25,"main sdrami i_wb_we",-1);
	vcdp->declBus  (c+29,"main sdrami i_wb_addr",-1,22,0);
	vcdp->declBus  (c+30,"main sdrami i_wb_data",-1,31,0);
	vcdp->declBus  (c+31,"main sdrami i_wb_sel",-1,3,0);
	vcdp->declBit  (c+54,"main sdrami o_wb_ack",-1);
	vcdp->declBit  (c+55,"main sdrami o_wb_stall",-1);
	vcdp->declBus  (c+56,"main sdrami o_wb_data",-1,31,0);
	vcdp->declBit  (c+643,"main sdrami o_ram_cke",-1);
	vcdp->declBit  (c+644,"main sdrami o_ram_cs_n",-1);
	vcdp->declBit  (c+645,"main sdrami o_ram_ras_n",-1);
	vcdp->declBit  (c+646,"main sdrami o_ram_cas_n",-1);
	vcdp->declBit  (c+647,"main sdrami o_ram_we_n",-1);
	vcdp->declBus  (c+648,"main sdrami o_ram_bs",-1,1,0);
	vcdp->declBus  (c+649,"main sdrami o_ram_addr",-1,12,0);
	vcdp->declBit  (c+654,"main sdrami o_ram_dmod",-1);
	vcdp->declBus  (c+650,"main sdrami i_ram_data",-1,15,0);
	vcdp->declBus  (c+651,"main sdrami o_ram_data",-1,15,0);
	vcdp->declBus  (c+652,"main sdrami o_ram_dqm",-1,1,0);
	vcdp->declBus  (c+653,"main sdrami o_debug",-1,31,0);
	vcdp->declBit  (c+98,"main sdrami need_refresh",-1);
	vcdp->declBus  (c+99,"main sdrami refresh_clk",-1,9,0);
	vcdp->declBit  (c+100,"main sdrami refresh_cmd",-1);
	vcdp->declBit  (c+101,"main sdrami in_refresh",-1);
	vcdp->declBus  (c+102,"main sdrami in_refresh_clk",-1,2,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus  (c+103+i*1,"main sdrami bank_active",(i+0),2,0);}}
	vcdp->declBus  (c+107,"main sdrami r_barrell_ack",-1,5,0);
	vcdp->declBit  (c+108,"main sdrami r_pending",-1);
	vcdp->declBit  (c+496,"main sdrami r_we",-1);
	vcdp->declBus  (c+109,"main sdrami r_addr",-1,22,0);
	vcdp->declBus  (c+497,"main sdrami r_data",-1,31,0);
	vcdp->declBus  (c+498,"main sdrami r_sel",-1,3,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus  (c+499+i*1,"main sdrami bank_row",(i+0),12,0);}}
	vcdp->declBus  (c+110,"main sdrami clocks_til_idle",-1,2,0);
	vcdp->declBus  (c+111,"main sdrami m_state",-1,1,0);
	vcdp->declBit  (c+112,"main sdrami bus_cyc",-1);
	vcdp->declBit  (c+113,"main sdrami nxt_dmod",-1);
	vcdp->declBit  (c+114,"main sdrami pending",-1);
	vcdp->declBus  (c+115,"main sdrami fwd_addr",-1,22,0);
	vcdp->declBus  (c+116,"main sdrami wb_bs",-1,1,0);
	vcdp->declBus  (c+117,"main sdrami r_bs",-1,1,0);
	vcdp->declBus  (c+118,"main sdrami fwd_bs",-1,1,0);
	vcdp->declBus  (c+119,"main sdrami wb_row",-1,12,0);
	vcdp->declBus  (c+120,"main sdrami r_row",-1,12,0);
	vcdp->declBus  (c+121,"main sdrami fwd_row",-1,12,0);
	vcdp->declBit  (c+122,"main sdrami r_bank_valid",-1);
	vcdp->declBit  (c+123,"main sdrami fwd_bank_valid",-1);
	vcdp->declBit  (c+124,"main sdrami maintenance_mode",-1);
	vcdp->declBit  (c+125,"main sdrami m_ram_cs_n",-1);
	vcdp->declBit  (c+126,"main sdrami m_ram_ras_n",-1);
	vcdp->declBit  (c+127,"main sdrami m_ram_cas_n",-1);
	vcdp->declBit  (c+128,"main sdrami m_ram_we_n",-1);
	vcdp->declBit  (c+129,"main sdrami m_ram_dmod",-1);
	vcdp->declBus  (c+130,"main sdrami m_ram_addr",-1,12,0);
	vcdp->declBit  (c+131,"main sdrami startup_hold",-1);
	vcdp->declBus  (c+132,"main sdrami startup_idle",-1,15,0);
	vcdp->declBus  (c+133,"main sdrami maintenance_clocks",-1,3,0);
	vcdp->declBit  (c+134,"main sdrami maintenance_clocks_zero",-1);
	vcdp->declBus  (c+503,"main sdrami ram_data",-1,15,0);
	vcdp->declBus  (c+504,"main sdrami last_ram_data",-1,15,0);
	vcdp->declBit  (c+505,"main sdrami trigger",-1);
	vcdp->declBus  (c+135,"main sdrami unused",-1,8,0);
	vcdp->declBus  (c+673,"main swic RESET_ADDRESS",-1,31,0);
	vcdp->declBus  (c+674,"main swic ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+677,"main swic LGICACHE",-1,31,0);
	vcdp->declBus  (c+676,"main swic START_HALTED",-1,0,0);
	vcdp->declBus  (c+704,"main swic EXTERNAL_INTERRUPTS",-1,31,0);
	vcdp->declBus  (c+708,"main swic IMPLEMENT_MPY",-1,31,0);
	vcdp->declBus  (c+676,"main swic IMPLEMENT_DIVIDE",-1,0,0);
	vcdp->declBus  (c+709,"main swic IMPLEMENT_FPU",-1,0,0);
	vcdp->declBus  (c+676,"main swic IMPLEMENT_LOCK",-1,0,0);
	vcdp->declBus  (c+674,"main swic PHYSICAL_ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+674,"main swic PAW",-1,31,0);
	vcdp->declBus  (c+674,"main swic VIRTUAL_ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+678,"main swic LGTLBSZ",-1,31,0);
	vcdp->declBus  (c+674,"main swic VAW",-1,31,0);
	vcdp->declBus  (c+674,"main swic AW",-1,31,0);
	vcdp->declBit  (c+641,"main swic i_clk",-1);
	vcdp->declBit  (c+444,"main swic i_reset",-1);
	vcdp->declBit  (c+57,"main swic o_wb_cyc",-1);
	vcdp->declBit  (c+58,"main swic o_wb_stb",-1);
	vcdp->declBit  (c+59,"main swic o_wb_we",-1);
	vcdp->declBus  (c+62,"main swic o_wb_addr",-1,22,0);
	vcdp->declBus  (c+63,"main swic o_wb_data",-1,31,0);
	vcdp->declBus  (c+64,"main swic o_wb_sel",-1,3,0);
	vcdp->declBit  (c+65,"main swic i_wb_ack",-1);
	vcdp->declBit  (c+60,"main swic i_wb_stall",-1);
	vcdp->declBus  (c+447,"main swic i_wb_data",-1,31,0);
	vcdp->declBit  (c+61,"main swic i_wb_err",-1);
	vcdp->declBit  (c+6,"main swic i_ext_int",-1);
	vcdp->declBit  (c+1,"main swic o_ext_int",-1);
	vcdp->declBit  (c+66,"main swic i_dbg_cyc",-1);
	vcdp->declBit  (c+136,"main swic i_dbg_stb",-1);
	vcdp->declBit  (c+463,"main swic i_dbg_we",-1);
	vcdp->declBit  (c+506,"main swic i_dbg_addr",-1);
	vcdp->declBus  (c+466,"main swic i_dbg_data",-1,31,0);
	vcdp->declBit  (c+74,"main swic o_dbg_ack",-1);
	vcdp->declBit  (c+75,"main swic o_dbg_stall",-1);
	vcdp->declBus  (c+76,"main swic o_dbg_data",-1,31,0);
	vcdp->declBus  (c+442,"main swic o_cpu_debug",-1,31,0);
	vcdp->declBit  (c+66,"main swic dbg_cyc",-1);
	vcdp->declBit  (c+136,"main swic dbg_stb",-1);
	vcdp->declBit  (c+463,"main swic dbg_we",-1);
	vcdp->declBit  (c+506,"main swic dbg_addr",-1);
	vcdp->declBit  (c+75,"main swic dbg_stall",-1);
	vcdp->declBus  (c+466,"main swic dbg_idata",-1,31,0);
	vcdp->declBus  (c+76,"main swic dbg_odata",-1,31,0);
	vcdp->declBit  (c+74,"main swic dbg_ack",-1);
	vcdp->declBit  (c+137,"main swic cpu_break",-1);
	vcdp->declBit  (c+138,"main swic dbg_cmd_write",-1);
	vcdp->declBit  (c+139,"main swic cmd_reset",-1);
	vcdp->declBit  (c+140,"main swic cmd_halt",-1);
	vcdp->declBit  (c+141,"main swic cmd_step",-1);
	vcdp->declBit  (c+142,"main swic cmd_clear_pf_cache",-1);
	vcdp->declBus  (c+143,"main swic cmd_addr",-1,4,0);
	vcdp->declBus  (c+507,"main swic cpu_dbg_cc",-1,3,0);
	vcdp->declBit  (c+139,"main swic cpu_reset",-1);
	vcdp->declBit  (c+140,"main swic cpu_halt",-1);
	vcdp->declBit  (c+508,"main swic cpu_dbg_stall",-1);
	vcdp->declBus  (c+144,"main swic cmd_data",-1,31,0);
	vcdp->declBit  (c+145,"main swic cpu_lcl_cyc",-1);
	vcdp->declBit  (c+146,"main swic cpu_lcl_stb",-1);
	vcdp->declBit  (c+147,"main swic cpu_dbg_we",-1);
	vcdp->declBit  (c+692,"main swic cpu_op_stall",-1);
	vcdp->declBit  (c+148,"main swic cpu_pf_stall",-1);
	vcdp->declBit  (c+149,"main swic cpu_i_count",-1);
	vcdp->declBus  (c+509,"main swic cpu_dbg_data",-1,31,0);
	vcdp->declBus  (c+150,"main swic unused",-1,4,0);
	vcdp->declBus  (c+673,"main swic thecpu RESET_ADDRESS",-1,31,0);
	vcdp->declBus  (c+674,"main swic thecpu ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+677,"main swic thecpu LGICACHE",-1,31,0);
	vcdp->declBus  (c+708,"main swic thecpu IMPLEMENT_MPY",-1,31,0);
	vcdp->declBus  (c+676,"main swic thecpu IMPLEMENT_DIVIDE",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu IMPLEMENT_FPU",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu EARLY_BRANCHING",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu OPT_CIS",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_NO_USERMODE",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_PIPELINED",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_PIPELINED_BUS_ACCESS",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_MEMPIPE",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu IMPLEMENT_LOCK",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_LOCK",-1,0,0);
	vcdp->declBus  (c+710,"main swic thecpu OPT_LGDCACHE",-1,31,0);
	vcdp->declBus  (c+709,"main swic thecpu OPT_DCACHE",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu WITH_LOCAL_BUS",-1,0,0);
	vcdp->declBus  (c+674,"main swic thecpu AW",-1,31,0);
	vcdp->declBus  (c+711,"main swic thecpu RESET_BUS_ADDRESS",-1,22,0);
	vcdp->declBus  (c+677,"main swic thecpu F_LGDEPTH",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu i_clk",-1);
	vcdp->declBit  (c+139,"main swic thecpu i_reset",-1);
	vcdp->declBit  (c+6,"main swic thecpu i_interrupt",-1);
	vcdp->declBit  (c+140,"main swic thecpu i_halt",-1);
	vcdp->declBit  (c+142,"main swic thecpu i_clear_pf_cache",-1);
	vcdp->declBus  (c+143,"main swic thecpu i_dbg_reg",-1,4,0);
	vcdp->declBit  (c+147,"main swic thecpu i_dbg_we",-1);
	vcdp->declBus  (c+466,"main swic thecpu i_dbg_data",-1,31,0);
	vcdp->declBit  (c+508,"main swic thecpu o_dbg_stall",-1);
	vcdp->declBus  (c+509,"main swic thecpu o_dbg_reg",-1,31,0);
	vcdp->declBus  (c+507,"main swic thecpu o_dbg_cc",-1,3,0);
	vcdp->declBit  (c+137,"main swic thecpu o_break",-1);
	vcdp->declBit  (c+57,"main swic thecpu o_wb_gbl_cyc",-1);
	vcdp->declBit  (c+58,"main swic thecpu o_wb_gbl_stb",-1);
	vcdp->declBit  (c+145,"main swic thecpu o_wb_lcl_cyc",-1);
	vcdp->declBit  (c+146,"main swic thecpu o_wb_lcl_stb",-1);
	vcdp->declBit  (c+59,"main swic thecpu o_wb_we",-1);
	vcdp->declBus  (c+62,"main swic thecpu o_wb_addr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu o_wb_data",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu o_wb_sel",-1,3,0);
	vcdp->declBit  (c+65,"main swic thecpu i_wb_ack",-1);
	vcdp->declBit  (c+60,"main swic thecpu i_wb_stall",-1);
	vcdp->declBus  (c+447,"main swic thecpu i_wb_data",-1,31,0);
	vcdp->declBit  (c+151,"main swic thecpu i_wb_err",-1);
	vcdp->declBit  (c+692,"main swic thecpu o_op_stall",-1);
	vcdp->declBit  (c+148,"main swic thecpu o_pf_stall",-1);
	vcdp->declBit  (c+149,"main swic thecpu o_i_count",-1);
	vcdp->declBus  (c+442,"main swic thecpu o_debug",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus  (c+510+i*1,"main swic thecpu regset",(i+0),31,0);}}
	vcdp->declBus  (c+542,"main swic thecpu flags",-1,3,0);
	vcdp->declBus  (c+543,"main swic thecpu iflags",-1,3,0);
	vcdp->declBus  (c+152,"main swic thecpu w_uflags",-1,14,0);
	vcdp->declBus  (c+153,"main swic thecpu w_iflags",-1,14,0);
	vcdp->declBit  (c+154,"main swic thecpu break_en",-1);
	vcdp->declBit  (c+544,"main swic thecpu step",-1);
	vcdp->declBit  (c+155,"main swic thecpu sleep",-1);
	vcdp->declBit  (c+545,"main swic thecpu r_halted",-1);
	vcdp->declBit  (c+156,"main swic thecpu break_pending",-1);
	vcdp->declBit  (c+157,"main swic thecpu trap",-1);
	vcdp->declBit  (c+158,"main swic thecpu gie",-1);
	vcdp->declBit  (c+159,"main swic thecpu ubreak",-1);
	vcdp->declBit  (c+546,"main swic thecpu pending_interrupt",-1);
	vcdp->declBit  (c+160,"main swic thecpu w_clear_icache",-1);
	vcdp->declBit  (c+161,"main swic thecpu ill_err_u",-1);
	vcdp->declBit  (c+162,"main swic thecpu ill_err_i",-1);
	vcdp->declBit  (c+163,"main swic thecpu ibus_err_flag",-1);
	vcdp->declBit  (c+164,"main swic thecpu ubus_err_flag",-1);
	vcdp->declBit  (c+165,"main swic thecpu idiv_err_flag",-1);
	vcdp->declBit  (c+166,"main swic thecpu udiv_err_flag",-1);
	vcdp->declBit  (c+692,"main swic thecpu ifpu_err_flag",-1);
	vcdp->declBit  (c+692,"main swic thecpu ufpu_err_flag",-1);
	vcdp->declBit  (c+167,"main swic thecpu ihalt_phase",-1);
	vcdp->declBit  (c+168,"main swic thecpu uhalt_phase",-1);
	vcdp->declBit  (c+169,"main swic thecpu master_ce",-1);
	vcdp->declBit  (c+170,"main swic thecpu master_stall",-1);
	vcdp->declBus  (c+171,"main swic thecpu pf_pc",-1,24,0);
	vcdp->declBus  (c+171,"main swic thecpu pf_request_address",-1,24,0);
	vcdp->declBus  (c+172,"main swic thecpu pf_instruction_pc",-1,24,0);
	vcdp->declBit  (c+173,"main swic thecpu new_pc",-1);
	vcdp->declBit  (c+173,"main swic thecpu clear_pipeline",-1);
	vcdp->declBit  (c+174,"main swic thecpu dcd_stalled",-1);
	vcdp->declBit  (c+175,"main swic thecpu pf_cyc",-1);
	vcdp->declBit  (c+176,"main swic thecpu pf_stb",-1);
	vcdp->declBit  (c+692,"main swic thecpu pf_we",-1);
	vcdp->declBit  (c+177,"main swic thecpu pf_ack",-1);
	vcdp->declBit  (c+178,"main swic thecpu pf_stall",-1);
	vcdp->declBit  (c+179,"main swic thecpu pf_err",-1);
	vcdp->declBus  (c+180,"main swic thecpu pf_addr",-1,22,0);
	vcdp->declBus  (c+712,"main swic thecpu pf_data",-1,31,0);
	vcdp->declBus  (c+181,"main swic thecpu pf_instruction",-1,31,0);
	vcdp->declBit  (c+182,"main swic thecpu pf_valid",-1);
	vcdp->declBit  (c+158,"main swic thecpu pf_gie",-1);
	vcdp->declBit  (c+183,"main swic thecpu pf_illegal",-1);
	vcdp->declBit  (c+184,"main swic thecpu pf_stalled",-1);
	vcdp->declBit  (c+173,"main swic thecpu pf_new_pc",-1);
	vcdp->declBit  (c+666,"main swic thecpu op_valid",-1);
	vcdp->declBit  (c+185,"main swic thecpu op_valid_mem",-1);
	vcdp->declBit  (c+186,"main swic thecpu op_valid_alu",-1);
	vcdp->declBit  (c+187,"main swic thecpu op_valid_div",-1);
	vcdp->declBit  (c+188,"main swic thecpu op_valid_fpu",-1);
	vcdp->declBit  (c+692,"main swic thecpu op_stall",-1);
	vcdp->declBit  (c+189,"main swic thecpu dcd_ce",-1);
	vcdp->declBit  (c+190,"main swic thecpu dcd_phase",-1);
	vcdp->declBus  (c+547,"main swic thecpu dcd_opn",-1,3,0);
	vcdp->declBus  (c+191,"main swic thecpu dcd_A",-1,4,0);
	vcdp->declBus  (c+192,"main swic thecpu dcd_B",-1,4,0);
	vcdp->declBus  (c+193,"main swic thecpu dcd_R",-1,4,0);
	vcdp->declBus  (c+194,"main swic thecpu dcd_preA",-1,4,0);
	vcdp->declBus  (c+195,"main swic thecpu dcd_preB",-1,4,0);
	vcdp->declBit  (c+196,"main swic thecpu dcd_Acc",-1);
	vcdp->declBit  (c+197,"main swic thecpu dcd_Bcc",-1);
	vcdp->declBit  (c+198,"main swic thecpu dcd_Apc",-1);
	vcdp->declBit  (c+199,"main swic thecpu dcd_Bpc",-1);
	vcdp->declBit  (c+200,"main swic thecpu dcd_Rcc",-1);
	vcdp->declBit  (c+201,"main swic thecpu dcd_Rpc",-1);
	vcdp->declBus  (c+548,"main swic thecpu dcd_F",-1,3,0);
	vcdp->declBit  (c+549,"main swic thecpu dcd_wR",-1);
	vcdp->declBit  (c+550,"main swic thecpu dcd_rA",-1);
	vcdp->declBit  (c+551,"main swic thecpu dcd_rB",-1);
	vcdp->declBit  (c+552,"main swic thecpu dcd_ALU",-1);
	vcdp->declBit  (c+553,"main swic thecpu dcd_M",-1);
	vcdp->declBit  (c+202,"main swic thecpu dcd_DIV",-1);
	vcdp->declBit  (c+203,"main swic thecpu dcd_FP",-1);
	vcdp->declBit  (c+554,"main swic thecpu dcd_wF",-1);
	vcdp->declBit  (c+158,"main swic thecpu dcd_gie",-1);
	vcdp->declBit  (c+555,"main swic thecpu dcd_break",-1);
	vcdp->declBit  (c+204,"main swic thecpu dcd_lock",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_pipe",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_ljmp",-1);
	vcdp->declBit  (c+205,"main swic thecpu dcd_valid",-1);
	vcdp->declBus  (c+667,"main swic thecpu dcd_pc",-1,24,0);
	vcdp->declBus  (c+206,"main swic thecpu dcd_I",-1,31,0);
	vcdp->declBit  (c+556,"main swic thecpu dcd_zI",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_A_stall",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_B_stall",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_F_stall",-1);
	vcdp->declBit  (c+207,"main swic thecpu dcd_illegal",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_early_branch",-1);
	vcdp->declBit  (c+692,"main swic thecpu dcd_early_branch_stb",-1);
	vcdp->declBus  (c+713,"main swic thecpu dcd_branch_pc",-1,24,0);
	vcdp->declBit  (c+668,"main swic thecpu dcd_sim",-1);
	vcdp->declBus  (c+669,"main swic thecpu dcd_sim_immv",-1,22,0);
	vcdp->declBit  (c+692,"main swic thecpu prelock_stall",-1);
	vcdp->declBit  (c+692,"main swic thecpu cc_invalid_for_dcd",-1);
	vcdp->declBit  (c+692,"main swic thecpu pending_sreg_write",-1);
	vcdp->declBus  (c+557,"main swic thecpu alu_reg",-1,4,0);
	vcdp->declBus  (c+547,"main swic thecpu op_opn",-1,3,0);
	vcdp->declBus  (c+193,"main swic thecpu op_R",-1,4,0);
	vcdp->declBit  (c+208,"main swic thecpu op_Rcc",-1);
	vcdp->declBus  (c+191,"main swic thecpu op_Aid",-1,4,0);
	vcdp->declBus  (c+192,"main swic thecpu op_Bid",-1,4,0);
	vcdp->declBit  (c+550,"main swic thecpu op_rA",-1);
	vcdp->declBit  (c+551,"main swic thecpu op_rB",-1);
	vcdp->declBus  (c+558,"main swic thecpu r_op_Av",-1,31,0);
	vcdp->declBus  (c+559,"main swic thecpu r_op_Bv",-1,31,0);
	vcdp->declBus  (c+667,"main swic thecpu op_pc",-1,24,0);
	vcdp->declBus  (c+209,"main swic thecpu w_op_Av",-1,31,0);
	vcdp->declBus  (c+210,"main swic thecpu w_op_Bv",-1,31,0);
	vcdp->declBus  (c+558,"main swic thecpu op_Av",-1,31,0);
	vcdp->declBus  (c+559,"main swic thecpu op_Bv",-1,31,0);
	vcdp->declBus  (c+211,"main swic thecpu w_pcB_v",-1,31,0);
	vcdp->declBus  (c+212,"main swic thecpu w_pcA_v",-1,31,0);
	vcdp->declBus  (c+213,"main swic thecpu w_op_BnI",-1,31,0);
	vcdp->declBit  (c+549,"main swic thecpu op_wR",-1);
	vcdp->declBit  (c+560,"main swic thecpu op_wF",-1);
	vcdp->declBit  (c+158,"main swic thecpu op_gie",-1);
	vcdp->declBus  (c+214,"main swic thecpu op_Fl",-1,3,0);
	vcdp->declBus  (c+561,"main swic thecpu r_op_F",-1,6,0);
	vcdp->declBus  (c+215,"main swic thecpu op_F",-1,7,0);
	vcdp->declBit  (c+205,"main swic thecpu op_ce",-1);
	vcdp->declBit  (c+216,"main swic thecpu op_phase",-1);
	vcdp->declBit  (c+692,"main swic thecpu op_pipe",-1);
	vcdp->declBit  (c+156,"main swic thecpu r_op_break",-1);
	vcdp->declBus  (c+547,"main swic thecpu r_op_opn",-1,3,0);
	vcdp->declBit  (c+217,"main swic thecpu w_op_valid",-1);
	vcdp->declBus  (c+714,"main swic thecpu w_cpu_info",-1,8,0);
	vcdp->declBit  (c+218,"main swic thecpu op_illegal",-1);
	vcdp->declBit  (c+156,"main swic thecpu op_break",-1);
	vcdp->declBit  (c+692,"main swic thecpu op_lock",-1);
	vcdp->declBit  (c+670,"main swic thecpu op_sim",-1);
	vcdp->declBus  (c+671,"main swic thecpu op_sim_immv",-1,22,0);
	vcdp->declBus  (c+667,"main swic thecpu alu_pc",-1,24,0);
	vcdp->declBit  (c+219,"main swic thecpu r_alu_pc_valid",-1);
	vcdp->declBit  (c+220,"main swic thecpu mem_pc_valid",-1);
	vcdp->declBit  (c+221,"main swic thecpu alu_pc_valid",-1);
	vcdp->declBit  (c+222,"main swic thecpu alu_phase",-1);
	vcdp->declBit  (c+672,"main swic thecpu alu_ce",-1);
	vcdp->declBit  (c+170,"main swic thecpu alu_stall",-1);
	vcdp->declBus  (c+562,"main swic thecpu alu_result",-1,31,0);
	vcdp->declBus  (c+223,"main swic thecpu alu_flags",-1,3,0);
	vcdp->declBit  (c+224,"main swic thecpu alu_valid",-1);
	vcdp->declBit  (c+225,"main swic thecpu alu_busy",-1);
	vcdp->declBit  (c+226,"main swic thecpu set_cond",-1);
	vcdp->declBit  (c+227,"main swic thecpu alu_wR",-1);
	vcdp->declBit  (c+228,"main swic thecpu alu_wF",-1);
	vcdp->declBit  (c+158,"main swic thecpu alu_gie",-1);
	vcdp->declBit  (c+218,"main swic thecpu alu_illegal",-1);
	vcdp->declBit  (c+229,"main swic thecpu mem_ce",-1);
	vcdp->declBit  (c+170,"main swic thecpu mem_stalled",-1);
	vcdp->declBit  (c+692,"main swic thecpu mem_pipe_stalled",-1);
	vcdp->declBit  (c+230,"main swic thecpu mem_valid",-1);
	vcdp->declBit  (c+231,"main swic thecpu mem_ack",-1);
	vcdp->declBit  (c+232,"main swic thecpu mem_stall",-1);
	vcdp->declBit  (c+233,"main swic thecpu mem_err",-1);
	vcdp->declBit  (c+234,"main swic thecpu bus_err",-1);
	vcdp->declBit  (c+235,"main swic thecpu mem_cyc_gbl",-1);
	vcdp->declBit  (c+236,"main swic thecpu mem_cyc_lcl",-1);
	vcdp->declBit  (c+237,"main swic thecpu mem_stb_gbl",-1);
	vcdp->declBit  (c+238,"main swic thecpu mem_stb_lcl",-1);
	vcdp->declBit  (c+239,"main swic thecpu mem_we",-1);
	vcdp->declBus  (c+563,"main swic thecpu mem_wreg",-1,4,0);
	vcdp->declBit  (c+240,"main swic thecpu mem_busy",-1);
	vcdp->declBit  (c+240,"main swic thecpu mem_rdbusy",-1);
	vcdp->declBus  (c+564,"main swic thecpu mem_addr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu mem_data",-1,31,0);
	vcdp->declBus  (c+565,"main swic thecpu mem_result",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu mem_sel",-1,3,0);
	vcdp->declBit  (c+241,"main swic thecpu div_ce",-1);
	vcdp->declBit  (c+242,"main swic thecpu div_error",-1);
	vcdp->declBit  (c+243,"main swic thecpu div_busy",-1);
	vcdp->declBit  (c+244,"main swic thecpu div_valid",-1);
	vcdp->declBus  (c+245,"main swic thecpu div_result",-1,31,0);
	vcdp->declBus  (c+246,"main swic thecpu div_flags",-1,3,0);
	vcdp->declBit  (c+692,"main swic thecpu fpu_ce",-1);
	vcdp->declBit  (c+692,"main swic thecpu fpu_error",-1);
	vcdp->declBit  (c+692,"main swic thecpu fpu_busy",-1);
	vcdp->declBit  (c+692,"main swic thecpu fpu_valid",-1);
	vcdp->declBus  (c+712,"main swic thecpu fpu_result",-1,31,0);
	vcdp->declBus  (c+715,"main swic thecpu fpu_flags",-1,3,0);
	vcdp->declBit  (c+247,"main swic thecpu adf_ce_unconditional",-1);
	vcdp->declBit  (c+692,"main swic thecpu bus_lock",-1);
	vcdp->declBit  (c+248,"main swic thecpu dbgv",-1);
	vcdp->declBit  (c+566,"main swic thecpu dbg_clear_pipe",-1);
	vcdp->declBus  (c+567,"main swic thecpu dbg_val",-1,31,0);
	vcdp->declBit  (c+249,"main swic thecpu wr_reg_ce",-1);
	vcdp->declBit  (c+250,"main swic thecpu wr_flags_ce",-1);
	vcdp->declBit  (c+251,"main swic thecpu wr_write_pc",-1);
	vcdp->declBit  (c+252,"main swic thecpu wr_write_cc",-1);
	vcdp->declBit  (c+253,"main swic thecpu wr_write_scc",-1);
	vcdp->declBit  (c+254,"main swic thecpu wr_write_ucc",-1);
	vcdp->declBus  (c+255,"main swic thecpu wr_reg_id",-1,4,0);
	vcdp->declBus  (c+256,"main swic thecpu wr_gpreg_vl",-1,31,0);
	vcdp->declBus  (c+257,"main swic thecpu wr_spreg_vl",-1,31,0);
	vcdp->declBit  (c+258,"main swic thecpu w_switch_to_interrupt",-1);
	vcdp->declBit  (c+259,"main swic thecpu w_release_from_interrupt",-1);
	vcdp->declBus  (c+260,"main swic thecpu ipc",-1,24,0);
	vcdp->declBus  (c+568,"main swic thecpu upc",-1,24,0);
	vcdp->declBit  (c+261,"main swic thecpu last_write_to_cc",-1);
	vcdp->declBit  (c+262,"main swic thecpu cc_write_hold",-1);
	vcdp->declBit  (c+160,"main swic thecpu r_clear_icache",-1);
	vcdp->declBus  (c+569,"main swic thecpu pre_rewrite_value",-1,31,0);
	vcdp->declBus  (c+570,"main swic thecpu pre_op_Av",-1,31,0);
	vcdp->declBus  (c+571,"main swic thecpu pre_op_Bv",-1,31,0);
	vcdp->declBit  (c+572,"main swic thecpu pre_rewrite_flag_A",-1);
	vcdp->declBit  (c+573,"main swic thecpu pre_rewrite_flag_B",-1);
	vcdp->declBus  (c+263,"main swic thecpu w_debug_pc",-1,31,0);
	vcdp->declBit  (c+264,"main swic thecpu r_dbg_stall",-1);
	vcdp->declBit  (c+265,"main swic thecpu debug_trigger",-1);
	vcdp->declBus  (c+266,"main swic thecpu debug_flags",-1,31,0);
	vcdp->declBus  (c+267,"main swic thecpu dbg_pc",-1,27,0);
	vcdp->declBus  (c+268,"main swic thecpu dbg_wb_addr",-1,27,0);
	vcdp->declQuad (c+269,"main swic thecpu unused",-1,56,0);
	vcdp->declBus  (c+716,"main swic thecpu genblk1 pipe_unused",-1,1,0);
	vcdp->declBit  (c+170,"main swic thecpu genblk2 unused_alu_stall",-1);
	vcdp->declBit  (c+204,"main swic thecpu genblk11 dcd_lock_unused",-1);
	vcdp->declBit  (c+216,"main swic thecpu OPT_CIS_OP_PHASE r_op_phase",-1);
	vcdp->declBit  (c+222,"main swic thecpu GEN_ALU_PHASE r_alu_phase",-1);
	vcdp->declBit  (c+546,"main swic thecpu GEN_PENDING_INTERRUPT r_pending_interrupt",-1);
	vcdp->declBit  (c+158,"main swic thecpu SET_GIE r_gie",-1);
	vcdp->declBit  (c+157,"main swic thecpu SET_TRAP_N_UBREAK r_trap",-1);
	vcdp->declBit  (c+159,"main swic thecpu SET_TRAP_N_UBREAK r_ubreak",-1);
	vcdp->declBit  (c+161,"main swic thecpu SET_USER_ILLEGAL_INSN r_ill_err_u",-1);
	vcdp->declBit  (c+164,"main swic thecpu SET_USER_BUSERR r_ubus_err_flag",-1);
	vcdp->declBit  (c+165,"main swic thecpu DIVERR r_idiv_err_flag",-1);
	vcdp->declBit  (c+166,"main swic thecpu DIVERR r_udiv_err_flag",-1);
	vcdp->declBit  (c+167,"main swic thecpu GEN_IHALT_PHASE r_ihalt_phase",-1);
	vcdp->declBit  (c+168,"main swic thecpu GEN_UHALT_PHASE r_uhalt_phase",-1);
	vcdp->declBus  (c+568,"main swic thecpu SET_USER_PC r_upc",-1,24,0);
	vcdp->declBus  (c+574,"main swic thecpu SETDBG pre_dbg_reg",-1,31,0);
	vcdp->declBus  (c+271,"main swic thecpu genblk49 generic_ignore",-1,31,25);
	vcdp->declBus  (c+674,"main swic thecpu pf ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+704,"main swic thecpu pf AUX_WIDTH",-1,31,0);
	vcdp->declBus  (c+709,"main swic thecpu pf F_OPT_CLK2FFLOGIC",-1,0,0);
	vcdp->declBus  (c+674,"main swic thecpu pf AW",-1,31,0);
	vcdp->declBus  (c+700,"main swic thecpu pf DW",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu pf i_clk",-1);
	vcdp->declBit  (c+139,"main swic thecpu pf i_reset",-1);
	vcdp->declBit  (c+173,"main swic thecpu pf i_new_pc",-1);
	vcdp->declBit  (c+160,"main swic thecpu pf i_clear_cache",-1);
	vcdp->declBit  (c+272,"main swic thecpu pf i_stall_n",-1);
	vcdp->declBus  (c+171,"main swic thecpu pf i_pc",-1,24,0);
	vcdp->declBus  (c+181,"main swic thecpu pf o_insn",-1,31,0);
	vcdp->declBus  (c+172,"main swic thecpu pf o_pc",-1,24,0);
	vcdp->declBit  (c+182,"main swic thecpu pf o_valid",-1);
	vcdp->declBit  (c+175,"main swic thecpu pf o_wb_cyc",-1);
	vcdp->declBit  (c+176,"main swic thecpu pf o_wb_stb",-1);
	vcdp->declBit  (c+692,"main swic thecpu pf o_wb_we",-1);
	vcdp->declBus  (c+180,"main swic thecpu pf o_wb_addr",-1,22,0);
	vcdp->declBus  (c+712,"main swic thecpu pf o_wb_data",-1,31,0);
	vcdp->declBit  (c+177,"main swic thecpu pf i_wb_ack",-1);
	vcdp->declBit  (c+178,"main swic thecpu pf i_wb_stall",-1);
	vcdp->declBit  (c+179,"main swic thecpu pf i_wb_err",-1);
	vcdp->declBus  (c+447,"main swic thecpu pf i_wb_data",-1,31,0);
	vcdp->declBit  (c+183,"main swic thecpu pf o_illegal",-1);
	vcdp->declBit  (c+273,"main swic thecpu pf last_stb",-1);
	vcdp->declBit  (c+274,"main swic thecpu pf invalid_bus_cycle",-1);
	vcdp->declBus  (c+575,"main swic thecpu pf cache_word",-1,31,0);
	vcdp->declBit  (c+275,"main swic thecpu pf cache_valid",-1);
	vcdp->declBus  (c+276,"main swic thecpu pf inflight",-1,1,0);
	vcdp->declBit  (c+277,"main swic thecpu pf cache_illegal",-1);
	vcdp->declBus  (c+674,"main swic thecpu instruction_decoder ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+676,"main swic thecpu instruction_decoder OPT_MPY",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_EARLY_BRANCHING",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_PIPELINED",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu instruction_decoder OPT_DIVIDE",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_FPU",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu instruction_decoder OPT_CIS",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_LOCK",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_OPIPE",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu instruction_decoder OPT_SIM",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu instruction_decoder OPT_NO_USERMODE",-1,0,0);
	vcdp->declBus  (c+674,"main swic thecpu instruction_decoder AW",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu instruction_decoder i_clk",-1);
	vcdp->declBit  (c+278,"main swic thecpu instruction_decoder i_reset",-1);
	vcdp->declBit  (c+189,"main swic thecpu instruction_decoder i_ce",-1);
	vcdp->declBit  (c+174,"main swic thecpu instruction_decoder i_stalled",-1);
	vcdp->declBus  (c+181,"main swic thecpu instruction_decoder i_instruction",-1,31,0);
	vcdp->declBit  (c+158,"main swic thecpu instruction_decoder i_gie",-1);
	vcdp->declBus  (c+172,"main swic thecpu instruction_decoder i_pc",-1,24,0);
	vcdp->declBit  (c+182,"main swic thecpu instruction_decoder i_pf_valid",-1);
	vcdp->declBit  (c+183,"main swic thecpu instruction_decoder i_illegal",-1);
	vcdp->declBit  (c+205,"main swic thecpu instruction_decoder o_valid",-1);
	vcdp->declBit  (c+190,"main swic thecpu instruction_decoder o_phase",-1);
	vcdp->declBit  (c+207,"main swic thecpu instruction_decoder o_illegal",-1);
	vcdp->declBus  (c+667,"main swic thecpu instruction_decoder o_pc",-1,24,0);
	vcdp->declBus  (c+279,"main swic thecpu instruction_decoder o_dcdR",-1,6,0);
	vcdp->declBus  (c+280,"main swic thecpu instruction_decoder o_dcdA",-1,6,0);
	vcdp->declBus  (c+281,"main swic thecpu instruction_decoder o_dcdB",-1,6,0);
	vcdp->declBus  (c+194,"main swic thecpu instruction_decoder o_preA",-1,4,0);
	vcdp->declBus  (c+195,"main swic thecpu instruction_decoder o_preB",-1,4,0);
	vcdp->declBus  (c+206,"main swic thecpu instruction_decoder o_I",-1,31,0);
	vcdp->declBit  (c+556,"main swic thecpu instruction_decoder o_zI",-1);
	vcdp->declBus  (c+548,"main swic thecpu instruction_decoder o_cond",-1,3,0);
	vcdp->declBit  (c+554,"main swic thecpu instruction_decoder o_wF",-1);
	vcdp->declBus  (c+547,"main swic thecpu instruction_decoder o_op",-1,3,0);
	vcdp->declBit  (c+552,"main swic thecpu instruction_decoder o_ALU",-1);
	vcdp->declBit  (c+553,"main swic thecpu instruction_decoder o_M",-1);
	vcdp->declBit  (c+202,"main swic thecpu instruction_decoder o_DV",-1);
	vcdp->declBit  (c+203,"main swic thecpu instruction_decoder o_FP",-1);
	vcdp->declBit  (c+555,"main swic thecpu instruction_decoder o_break",-1);
	vcdp->declBit  (c+204,"main swic thecpu instruction_decoder o_lock",-1);
	vcdp->declBit  (c+549,"main swic thecpu instruction_decoder o_wR",-1);
	vcdp->declBit  (c+550,"main swic thecpu instruction_decoder o_rA",-1);
	vcdp->declBit  (c+551,"main swic thecpu instruction_decoder o_rB",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder o_early_branch",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder o_early_branch_stb",-1);
	vcdp->declBus  (c+713,"main swic thecpu instruction_decoder o_branch_pc",-1,24,0);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder o_ljmp",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder o_pipe",-1);
	vcdp->declBit  (c+668,"main swic thecpu instruction_decoder o_sim",-1);
	vcdp->declBus  (c+669,"main swic thecpu instruction_decoder o_sim_immv",-1,22,0);
	vcdp->declBus  (c+282,"main swic thecpu instruction_decoder w_op",-1,4,0);
	vcdp->declBit  (c+283,"main swic thecpu instruction_decoder w_ldi",-1);
	vcdp->declBit  (c+284,"main swic thecpu instruction_decoder w_mov",-1);
	vcdp->declBit  (c+285,"main swic thecpu instruction_decoder w_cmptst",-1);
	vcdp->declBit  (c+286,"main swic thecpu instruction_decoder w_ldilo",-1);
	vcdp->declBit  (c+287,"main swic thecpu instruction_decoder w_ALU",-1);
	vcdp->declBit  (c+288,"main swic thecpu instruction_decoder w_brev",-1);
	vcdp->declBit  (c+289,"main swic thecpu instruction_decoder w_noop",-1);
	vcdp->declBit  (c+290,"main swic thecpu instruction_decoder w_lock",-1);
	vcdp->declBit  (c+291,"main swic thecpu instruction_decoder w_sim",-1);
	vcdp->declBit  (c+292,"main swic thecpu instruction_decoder w_break",-1);
	vcdp->declBit  (c+293,"main swic thecpu instruction_decoder w_special",-1);
	vcdp->declBit  (c+294,"main swic thecpu instruction_decoder w_add",-1);
	vcdp->declBit  (c+295,"main swic thecpu instruction_decoder w_mpy",-1);
	vcdp->declBus  (c+194,"main swic thecpu instruction_decoder w_dcdR",-1,4,0);
	vcdp->declBus  (c+195,"main swic thecpu instruction_decoder w_dcdB",-1,4,0);
	vcdp->declBus  (c+194,"main swic thecpu instruction_decoder w_dcdA",-1,4,0);
	vcdp->declBit  (c+296,"main swic thecpu instruction_decoder w_dcdR_pc",-1);
	vcdp->declBit  (c+297,"main swic thecpu instruction_decoder w_dcdR_cc",-1);
	vcdp->declBit  (c+296,"main swic thecpu instruction_decoder w_dcdA_pc",-1);
	vcdp->declBit  (c+297,"main swic thecpu instruction_decoder w_dcdA_cc",-1);
	vcdp->declBit  (c+298,"main swic thecpu instruction_decoder w_dcdB_pc",-1);
	vcdp->declBit  (c+299,"main swic thecpu instruction_decoder w_dcdB_cc",-1);
	vcdp->declBus  (c+300,"main swic thecpu instruction_decoder w_cond",-1,3,0);
	vcdp->declBit  (c+301,"main swic thecpu instruction_decoder w_wF",-1);
	vcdp->declBit  (c+302,"main swic thecpu instruction_decoder w_mem",-1);
	vcdp->declBit  (c+303,"main swic thecpu instruction_decoder w_sto",-1);
	vcdp->declBit  (c+304,"main swic thecpu instruction_decoder w_div",-1);
	vcdp->declBit  (c+305,"main swic thecpu instruction_decoder w_fpu",-1);
	vcdp->declBit  (c+306,"main swic thecpu instruction_decoder w_wR",-1);
	vcdp->declBit  (c+307,"main swic thecpu instruction_decoder w_rA",-1);
	vcdp->declBit  (c+308,"main swic thecpu instruction_decoder w_rB",-1);
	vcdp->declBit  (c+309,"main swic thecpu instruction_decoder w_wR_n",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder w_ljmp",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder w_ljmp_dly",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder w_cis_ljmp",-1);
	vcdp->declBus  (c+310,"main swic thecpu instruction_decoder iword",-1,31,0);
	vcdp->declBit  (c+182,"main swic thecpu instruction_decoder pf_valid",-1);
	vcdp->declBus  (c+576,"main swic thecpu instruction_decoder r_nxt_half",-1,14,0);
	vcdp->declBus  (c+311,"main swic thecpu instruction_decoder w_cis_op",-1,4,0);
	vcdp->declBus  (c+577,"main swic thecpu instruction_decoder r_I",-1,22,0);
	vcdp->declBus  (c+312,"main swic thecpu instruction_decoder w_I",-1,22,0);
	vcdp->declBus  (c+313,"main swic thecpu instruction_decoder w_fullI",-1,22,0);
	vcdp->declBit  (c+314,"main swic thecpu instruction_decoder w_Iz",-1);
	vcdp->declBit  (c+205,"main swic thecpu instruction_decoder r_valid",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder r_insn_is_pipeable",-1);
	vcdp->declBus  (c+315,"main swic thecpu instruction_decoder possibly_unused",-1,5,0);
	vcdp->declBus  (c+316,"main swic thecpu instruction_decoder GEN_CIS_IMMEDIATE w_halfbits",-1,7,0);
	vcdp->declBus  (c+317,"main swic thecpu instruction_decoder GEN_CIS_IMMEDIATE w_halfI",-1,7,0);
	vcdp->declBit  (c+190,"main swic thecpu instruction_decoder GEN_CIS_PHASE r_phase",-1);
	vcdp->declBit  (c+294,"main swic thecpu instruction_decoder genblk3 early_branch_unused",-1);
	vcdp->declBit  (c+692,"main swic thecpu instruction_decoder genblk4 unused_pipable",-1);
	vcdp->declBus  (c+708,"main swic thecpu doalu IMPLEMENT_MPY",-1,31,0);
	vcdp->declBus  (c+676,"main swic thecpu doalu OPT_SHIFTS",-1,0,0);
	vcdp->declBit  (c+641,"main swic thecpu doalu i_clk",-1);
	vcdp->declBit  (c+318,"main swic thecpu doalu i_reset",-1);
	vcdp->declBit  (c+672,"main swic thecpu doalu i_stb",-1);
	vcdp->declBus  (c+547,"main swic thecpu doalu i_op",-1,3,0);
	vcdp->declBus  (c+558,"main swic thecpu doalu i_a",-1,31,0);
	vcdp->declBus  (c+559,"main swic thecpu doalu i_b",-1,31,0);
	vcdp->declBus  (c+562,"main swic thecpu doalu o_c",-1,31,0);
	vcdp->declBus  (c+223,"main swic thecpu doalu o_f",-1,3,0);
	vcdp->declBit  (c+224,"main swic thecpu doalu o_valid",-1);
	vcdp->declBit  (c+225,"main swic thecpu doalu o_busy",-1);
	// Tracing: main swic thecpu doalu k // Ignored: Verilator trace_off at cpu/cpuops.v:57
	vcdp->declQuad (c+319,"main swic thecpu doalu w_lsr_result",-1,32,0);
	vcdp->declQuad (c+321,"main swic thecpu doalu w_asr_result",-1,32,0);
	vcdp->declQuad (c+323,"main swic thecpu doalu w_lsl_result",-1,32,0);
	vcdp->declBus  (c+325,"main swic thecpu doalu w_brev_result",-1,31,0);
	vcdp->declBit  (c+578,"main swic thecpu doalu z",-1);
	vcdp->declBit  (c+579,"main swic thecpu doalu n",-1);
	vcdp->declBit  (c+580,"main swic thecpu doalu v",-1);
	vcdp->declBit  (c+581,"main swic thecpu doalu c",-1);
	vcdp->declBit  (c+582,"main swic thecpu doalu pre_sign",-1);
	vcdp->declBit  (c+583,"main swic thecpu doalu set_ovfl",-1);
	vcdp->declBit  (c+584,"main swic thecpu doalu keep_sgn_on_ovfl",-1);
	vcdp->declQuad (c+585,"main swic thecpu doalu mpy_result",-1,63,0);
	vcdp->declBit  (c+587,"main swic thecpu doalu mpyhi",-1);
	vcdp->declBit  (c+326,"main swic thecpu doalu mpybusy",-1);
	vcdp->declBit  (c+327,"main swic thecpu doalu mpydone",-1);
	vcdp->declBit  (c+328,"main swic thecpu doalu this_is_a_multiply_op",-1);
	vcdp->declBit  (c+225,"main swic thecpu doalu r_busy",-1);
	vcdp->declBit  (c+588,"main swic thecpu doalu vx",-1);
	vcdp->declQuad (c+589,"main swic thecpu doalu IMPLEMENT_SHIFTS w_pre_asr_input",-1,32,0);
	vcdp->declQuad (c+591,"main swic thecpu doalu IMPLEMENT_SHIFTS w_pre_asr_shifted",-1,32,0);
	vcdp->declBus  (c+708,"main swic thecpu doalu thempy IMPLEMENT_MPY",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu doalu thempy i_clk",-1);
	vcdp->declBit  (c+318,"main swic thecpu doalu thempy i_reset",-1);
	vcdp->declBit  (c+328,"main swic thecpu doalu thempy i_stb",-1);
	vcdp->declBus  (c+593,"main swic thecpu doalu thempy i_op",-1,1,0);
	vcdp->declBus  (c+558,"main swic thecpu doalu thempy i_a",-1,31,0);
	vcdp->declBus  (c+559,"main swic thecpu doalu thempy i_b",-1,31,0);
	vcdp->declBit  (c+327,"main swic thecpu doalu thempy o_valid",-1);
	vcdp->declBit  (c+326,"main swic thecpu doalu thempy o_busy",-1);
	vcdp->declQuad (c+585,"main swic thecpu doalu thempy o_result",-1,63,0);
	vcdp->declBit  (c+587,"main swic thecpu doalu thempy o_hi",-1);
	vcdp->declBit  (c+594,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW unused_aux",-1);
	vcdp->declArray(c+595,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW full_result",-1,65,0);
	vcdp->declBus  (c+678,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi LGNA",-1,31,0);
	vcdp->declBus  (c+717,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi NA",-1,6,0);
	vcdp->declBus  (c+676,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi OPT_SIGNED",-1,0,0);
	vcdp->declBus  (c+717,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi NB",-1,6,0);
	vcdp->declBit  (c+641,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_clk",-1);
	vcdp->declBit  (c+318,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_reset",-1);
	vcdp->declBit  (c+328,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_stb",-1);
	vcdp->declQuad (c+598,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_a",-1,32,0);
	vcdp->declQuad (c+600,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_b",-1,32,0);
	vcdp->declBit  (c+692,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi i_aux",-1);
	vcdp->declBit  (c+326,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi o_busy",-1);
	vcdp->declBit  (c+327,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi o_done",-1);
	vcdp->declArray(c+595,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi o_p",-1,65,0);
	vcdp->declBit  (c+594,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi o_aux",-1);
	vcdp->declBus  (c+602,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi count",-1,5,0);
	vcdp->declQuad (c+603,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi p_a",-1,32,0);
	vcdp->declQuad (c+605,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi p_b",-1,32,0);
	vcdp->declArray(c+607,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi partial",-1,65,0);
	vcdp->declBit  (c+329,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi aux",-1);
	vcdp->declBit  (c+330,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi almost_done",-1);
	vcdp->declBit  (c+610,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi pre_done",-1);
	vcdp->declQuad (c+331,"main swic thecpu doalu thempy IMPY MPN1 MPN2 MPN3 MPYSLOW slowmpyi pwire",-1,32,0);
	vcdp->declBus  (c+700,"main swic thecpu pformem DW",-1,31,0);
	vcdp->declBus  (c+674,"main swic thecpu pformem AW",-1,31,0);
	vcdp->declBus  (c+709,"main swic thecpu pformem OPT_ZERO_ON_IDLE",-1,0,0);
	vcdp->declBus  (c+718,"main swic thecpu pformem F_LGDEPTH",-1,31,0);
	vcdp->declBus  (c+709,"main swic thecpu pformem F_OPT_CLK2FFLOGIC",-1,0,0);
	vcdp->declBit  (c+641,"main swic thecpu pformem i_clk",-1);
	vcdp->declBit  (c+139,"main swic thecpu pformem i_reset",-1);
	vcdp->declBit  (c+235,"main swic thecpu pformem i_a_cyc_a",-1);
	vcdp->declBit  (c+236,"main swic thecpu pformem i_a_cyc_b",-1);
	vcdp->declBit  (c+237,"main swic thecpu pformem i_a_stb_a",-1);
	vcdp->declBit  (c+238,"main swic thecpu pformem i_a_stb_b",-1);
	vcdp->declBit  (c+239,"main swic thecpu pformem i_a_we",-1);
	vcdp->declBus  (c+564,"main swic thecpu pformem i_a_adr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu pformem i_a_dat",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu pformem i_a_sel",-1,3,0);
	vcdp->declBit  (c+231,"main swic thecpu pformem o_a_ack",-1);
	vcdp->declBit  (c+232,"main swic thecpu pformem o_a_stall",-1);
	vcdp->declBit  (c+233,"main swic thecpu pformem o_a_err",-1);
	vcdp->declBit  (c+175,"main swic thecpu pformem i_b_cyc_a",-1);
	vcdp->declBit  (c+692,"main swic thecpu pformem i_b_cyc_b",-1);
	vcdp->declBit  (c+176,"main swic thecpu pformem i_b_stb_a",-1);
	vcdp->declBit  (c+692,"main swic thecpu pformem i_b_stb_b",-1);
	vcdp->declBit  (c+692,"main swic thecpu pformem i_b_we",-1);
	vcdp->declBus  (c+180,"main swic thecpu pformem i_b_adr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu pformem i_b_dat",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu pformem i_b_sel",-1,3,0);
	vcdp->declBit  (c+177,"main swic thecpu pformem o_b_ack",-1);
	vcdp->declBit  (c+178,"main swic thecpu pformem o_b_stall",-1);
	vcdp->declBit  (c+179,"main swic thecpu pformem o_b_err",-1);
	vcdp->declBit  (c+57,"main swic thecpu pformem o_cyc_a",-1);
	vcdp->declBit  (c+145,"main swic thecpu pformem o_cyc_b",-1);
	vcdp->declBit  (c+58,"main swic thecpu pformem o_stb_a",-1);
	vcdp->declBit  (c+146,"main swic thecpu pformem o_stb_b",-1);
	vcdp->declBit  (c+59,"main swic thecpu pformem o_we",-1);
	vcdp->declBus  (c+62,"main swic thecpu pformem o_adr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu pformem o_dat",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu pformem o_sel",-1,3,0);
	vcdp->declBit  (c+65,"main swic thecpu pformem i_ack",-1);
	vcdp->declBit  (c+60,"main swic thecpu pformem i_stall",-1);
	vcdp->declBit  (c+151,"main swic thecpu pformem i_err",-1);
	vcdp->declBit  (c+333,"main swic thecpu pformem r_a_owner",-1);
	vcdp->declBus  (c+700,"main swic thecpu DIVIDE thedivide BW",-1,31,0);
	vcdp->declBus  (c+719,"main swic thecpu DIVIDE thedivide LGBW",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu DIVIDE thedivide i_clk",-1);
	vcdp->declBit  (c+334,"main swic thecpu DIVIDE thedivide i_reset",-1);
	vcdp->declBit  (c+241,"main swic thecpu DIVIDE thedivide i_wr",-1);
	vcdp->declBit  (c+611,"main swic thecpu DIVIDE thedivide i_signed",-1);
	vcdp->declBus  (c+558,"main swic thecpu DIVIDE thedivide i_numerator",-1,31,0);
	vcdp->declBus  (c+559,"main swic thecpu DIVIDE thedivide i_denominator",-1,31,0);
	vcdp->declBit  (c+243,"main swic thecpu DIVIDE thedivide o_busy",-1);
	vcdp->declBit  (c+244,"main swic thecpu DIVIDE thedivide o_valid",-1);
	vcdp->declBit  (c+242,"main swic thecpu DIVIDE thedivide o_err",-1);
	vcdp->declBus  (c+245,"main swic thecpu DIVIDE thedivide o_quotient",-1,31,0);
	vcdp->declBus  (c+246,"main swic thecpu DIVIDE thedivide o_flags",-1,3,0);
	vcdp->declBit  (c+335,"main swic thecpu DIVIDE thedivide r_busy",-1);
	vcdp->declBus  (c+336,"main swic thecpu DIVIDE thedivide r_divisor",-1,31,0);
	vcdp->declQuad (c+612,"main swic thecpu DIVIDE thedivide r_dividend",-1,62,0);
	vcdp->declQuad (c+337,"main swic thecpu DIVIDE thedivide diff",-1,32,0);
	vcdp->declBit  (c+339,"main swic thecpu DIVIDE thedivide r_sign",-1);
	vcdp->declBit  (c+340,"main swic thecpu DIVIDE thedivide pre_sign",-1);
	vcdp->declBit  (c+614,"main swic thecpu DIVIDE thedivide r_z",-1);
	vcdp->declBit  (c+341,"main swic thecpu DIVIDE thedivide r_c",-1);
	vcdp->declBit  (c+342,"main swic thecpu DIVIDE thedivide last_bit",-1);
	vcdp->declBus  (c+343,"main swic thecpu DIVIDE thedivide r_bit",-1,4,0);
	vcdp->declBit  (c+615,"main swic thecpu DIVIDE thedivide zero_divisor",-1);
	vcdp->declBit  (c+344,"main swic thecpu DIVIDE thedivide w_n",-1);
	vcdp->declBus  (c+674,"main swic thecpu NO_CACHE MEM domem ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+709,"main swic thecpu NO_CACHE MEM domem IMPLEMENT_LOCK",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu NO_CACHE MEM domem WITH_LOCAL_BUS",-1,0,0);
	vcdp->declBus  (c+676,"main swic thecpu NO_CACHE MEM domem OPT_ALIGNMENT_ERR",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu NO_CACHE MEM domem OPT_ZERO_ON_IDLE",-1,0,0);
	vcdp->declBus  (c+709,"main swic thecpu NO_CACHE MEM domem F_OPT_CLK2FFLOGIC",-1,0,0);
	vcdp->declBus  (c+674,"main swic thecpu NO_CACHE MEM domem AW",-1,31,0);
	vcdp->declBit  (c+641,"main swic thecpu NO_CACHE MEM domem i_clk",-1);
	vcdp->declBit  (c+139,"main swic thecpu NO_CACHE MEM domem i_reset",-1);
	vcdp->declBit  (c+345,"main swic thecpu NO_CACHE MEM domem i_stb",-1);
	vcdp->declBit  (c+692,"main swic thecpu NO_CACHE MEM domem i_lock",-1);
	vcdp->declBus  (c+616,"main swic thecpu NO_CACHE MEM domem i_op",-1,2,0);
	vcdp->declBus  (c+559,"main swic thecpu NO_CACHE MEM domem i_addr",-1,31,0);
	vcdp->declBus  (c+558,"main swic thecpu NO_CACHE MEM domem i_data",-1,31,0);
	vcdp->declBus  (c+193,"main swic thecpu NO_CACHE MEM domem i_oreg",-1,4,0);
	vcdp->declBit  (c+240,"main swic thecpu NO_CACHE MEM domem o_busy",-1);
	vcdp->declBit  (c+230,"main swic thecpu NO_CACHE MEM domem o_valid",-1);
	vcdp->declBit  (c+234,"main swic thecpu NO_CACHE MEM domem o_err",-1);
	vcdp->declBus  (c+563,"main swic thecpu NO_CACHE MEM domem o_wreg",-1,4,0);
	vcdp->declBus  (c+565,"main swic thecpu NO_CACHE MEM domem o_result",-1,31,0);
	vcdp->declBit  (c+235,"main swic thecpu NO_CACHE MEM domem o_wb_cyc_gbl",-1);
	vcdp->declBit  (c+237,"main swic thecpu NO_CACHE MEM domem o_wb_stb_gbl",-1);
	vcdp->declBit  (c+236,"main swic thecpu NO_CACHE MEM domem o_wb_cyc_lcl",-1);
	vcdp->declBit  (c+238,"main swic thecpu NO_CACHE MEM domem o_wb_stb_lcl",-1);
	vcdp->declBit  (c+239,"main swic thecpu NO_CACHE MEM domem o_wb_we",-1);
	vcdp->declBus  (c+564,"main swic thecpu NO_CACHE MEM domem o_wb_addr",-1,22,0);
	vcdp->declBus  (c+63,"main swic thecpu NO_CACHE MEM domem o_wb_data",-1,31,0);
	vcdp->declBus  (c+64,"main swic thecpu NO_CACHE MEM domem o_wb_sel",-1,3,0);
	vcdp->declBit  (c+231,"main swic thecpu NO_CACHE MEM domem i_wb_ack",-1);
	vcdp->declBit  (c+232,"main swic thecpu NO_CACHE MEM domem i_wb_stall",-1);
	vcdp->declBit  (c+233,"main swic thecpu NO_CACHE MEM domem i_wb_err",-1);
	vcdp->declBus  (c+447,"main swic thecpu NO_CACHE MEM domem i_wb_data",-1,31,0);
	vcdp->declBus  (c+681,"main swic thecpu NO_CACHE MEM domem F_LGDEPTH",-1,31,0);
	vcdp->declBit  (c+346,"main swic thecpu NO_CACHE MEM domem misaligned",-1);
	vcdp->declBit  (c+235,"main swic thecpu NO_CACHE MEM domem r_wb_cyc_gbl",-1);
	vcdp->declBit  (c+236,"main swic thecpu NO_CACHE MEM domem r_wb_cyc_lcl",-1);
	vcdp->declBit  (c+347,"main swic thecpu NO_CACHE MEM domem gbl_stb",-1);
	vcdp->declBit  (c+692,"main swic thecpu NO_CACHE MEM domem lcl_stb",-1);
	vcdp->declBus  (c+617,"main swic thecpu NO_CACHE MEM domem r_op",-1,3,0);
	vcdp->declBit  (c+692,"main swic thecpu NO_CACHE MEM domem lock_gbl",-1);
	vcdp->declBit  (c+692,"main swic thecpu NO_CACHE MEM domem lock_lcl",-1);
	vcdp->declBus  (c+720,"main swic thecpu NO_CACHE MEM domem genblk3 lock_unused",-1,2,0);
	vcdp->declBus  (c+700,"main watchdogi BW",-1,31,0);
	vcdp->declBus  (c+675,"main watchdogi VW",-1,31,0);
	vcdp->declBus  (c+710,"main watchdogi RELOADABLE",-1,31,0);
	vcdp->declBit  (c+641,"main watchdogi i_clk",-1);
	vcdp->declBit  (c+642,"main watchdogi i_reset",-1);
	vcdp->declBit  (c+703,"main watchdogi i_ce",-1);
	vcdp->declBit  (c+23,"main watchdogi i_wb_cyc",-1);
	vcdp->declBit  (c+348,"main watchdogi i_wb_stb",-1);
	vcdp->declBit  (c+25,"main watchdogi i_wb_we",-1);
	vcdp->declBus  (c+30,"main watchdogi i_wb_data",-1,31,0);
	vcdp->declBit  (c+42,"main watchdogi o_wb_ack",-1);
	vcdp->declBit  (c+692,"main watchdogi o_wb_stall",-1);
	vcdp->declBus  (c+43,"main watchdogi o_wb_data",-1,31,0);
	vcdp->declBit  (c+2,"main watchdogi o_int",-1);
	vcdp->declBit  (c+349,"main watchdogi r_running",-1);
	vcdp->declBit  (c+350,"main watchdogi wb_write",-1);
	vcdp->declBit  (c+692,"main watchdogi auto_reload",-1);
	vcdp->declBus  (c+721,"main watchdogi interval_count",-1,15,0);
	vcdp->declBus  (c+351,"main watchdogi r_value",-1,15,0);
	vcdp->declBit  (c+352,"main watchdogi r_zero",-1);
	vcdp->declQuad (c+353,"main watchdogi unused",-1,32,0);
	vcdp->declBus  (c+681,"main gpioi NIN",-1,31,0);
	vcdp->declBus  (c+682,"main gpioi NOUT",-1,31,0);
	vcdp->declBus  (c+698,"main gpioi DEFAULT",-1,10,0);
	vcdp->declBit  (c+641,"main gpioi i_clk",-1);
	vcdp->declBit  (c+703,"main gpioi i_wb_cyc",-1);
	vcdp->declBit  (c+355,"main gpioi i_wb_stb",-1);
	vcdp->declBit  (c+703,"main gpioi i_wb_we",-1);
	vcdp->declBus  (c+30,"main gpioi i_wb_data",-1,31,0);
	vcdp->declBus  (c+35,"main gpioi o_wb_data",-1,31,0);
	vcdp->declBus  (c+661,"main gpioi i_gpio",-1,1,0);
	vcdp->declBus  (c+662,"main gpioi o_gpio",-1,10,0);
	vcdp->declBit  (c+441,"main gpioi o_int",-1);
	vcdp->declBus  (c+618,"main gpioi x_gpio",-1,1,0);
	vcdp->declBus  (c+619,"main gpioi q_gpio",-1,1,0);
	vcdp->declBus  (c+620,"main gpioi r_gpio",-1,1,0);
	vcdp->declBus  (c+356,"main gpioi hi_bits",-1,15,0);
	vcdp->declBus  (c+357,"main gpioi low_bits",-1,15,0);
	vcdp->declBus  (c+358,"main gpioi unused",-1,20,0);
	vcdp->declBit  (c+641,"main hbi_pp i_clk",-1);
	vcdp->declBit  (c+7,"main hbi_pp o_rx_stb",-1);
	vcdp->declBus  (c+445,"main hbi_pp o_rx_data",-1,7,0);
	vcdp->declBit  (c+8,"main hbi_pp i_tx_wr",-1);
	vcdp->declBus  (c+446,"main hbi_pp i_tx_data",-1,7,0);
	vcdp->declBit  (c+9,"main hbi_pp o_tx_busy",-1);
	vcdp->declBit  (c+656,"main hbi_pp i_pp_dir",-1);
	vcdp->declBit  (c+655,"main hbi_pp i_pp_clk",-1);
	vcdp->declBus  (c+657,"main hbi_pp i_pp_data",-1,7,0);
	vcdp->declBus  (c+658,"main hbi_pp o_pp_data",-1,7,0);
	vcdp->declBit  (c+659,"main hbi_pp o_pp_clkfb",-1);
	vcdp->declBit  (c+660,"main hbi_pp o_dbg",-1);
	vcdp->declBus  (c+678,"main hbi_pp SCLKS",-1,31,0);
	vcdp->declBit  (c+621,"main hbi_pp stb_pp_dir",-1);
	vcdp->declBit  (c+622,"main hbi_pp ck_pp_dir",-1);
	vcdp->declBit  (c+621,"main hbi_pp stb_rd_dir",-1);
	vcdp->declBit  (c+623,"main hbi_pp stb_wr_dir",-1);
	vcdp->declBit  (c+622,"main hbi_pp ck_rd_dir",-1);
	vcdp->declBit  (c+624,"main hbi_pp ck_wr_dir",-1);
	vcdp->declBit  (c+359,"main hbi_pp pp_stb",-1);
	vcdp->declBus  (c+360,"main hbi_pp pp_clk_transfer",-1,5,0);
	vcdp->declBus  (c+625,"main hbi_pp ck_pp_data",-1,7,0);
	vcdp->declBit  (c+361,"main hbi_pp loaded",-1);
	vcdp->declBit  (c+626,"main hbi_pp r_dbg",-1);
	vcdp->declBus  (c+722,"main genbus LGWATCHDOG",-1,31,0);
	vcdp->declBus  (c+678,"main genbus LGINPUT_FIFO",-1,31,0);
	vcdp->declBus  (c+708,"main genbus LGOUTPUT_FIFO",-1,31,0);
	vcdp->declBit  (c+641,"main genbus i_clk",-1);
	vcdp->declBit  (c+7,"main genbus i_rx_stb",-1);
	vcdp->declBus  (c+445,"main genbus i_rx_byte",-1,7,0);
	vcdp->declBit  (c+66,"main genbus o_wb_cyc",-1);
	vcdp->declBit  (c+67,"main genbus o_wb_stb",-1);
	vcdp->declBit  (c+463,"main genbus o_wb_we",-1);
	vcdp->declBus  (c+474,"main genbus o_wb_addr",-1,29,0);
	vcdp->declBus  (c+466,"main genbus o_wb_data",-1,31,0);
	vcdp->declBus  (c+697,"main genbus o_wb_sel",-1,3,0);
	vcdp->declBit  (c+468,"main genbus i_wb_ack",-1);
	vcdp->declBit  (c+68,"main genbus i_wb_stall",-1);
	vcdp->declBit  (c+69,"main genbus i_wb_err",-1);
	vcdp->declBus  (c+467,"main genbus i_wb_data",-1,31,0);
	vcdp->declBit  (c+6,"main genbus i_interrupt",-1);
	vcdp->declBit  (c+8,"main genbus o_tx_stb",-1);
	vcdp->declBus  (c+446,"main genbus o_tx_data",-1,7,0);
	vcdp->declBit  (c+9,"main genbus i_tx_busy",-1);
	vcdp->declBit  (c+19,"main genbus i_console_stb",-1);
	vcdp->declBus  (c+450,"main genbus i_console_data",-1,6,0);
	vcdp->declBit  (c+20,"main genbus o_console_busy",-1);
	vcdp->declBit  (c+448,"main genbus o_console_stb",-1);
	vcdp->declBus  (c+449,"main genbus o_console_data",-1,6,0);
	vcdp->declBit  (c+362,"main genbus w_reset",-1);
	vcdp->declBit  (c+363,"main genbus dec_stb",-1);
	vcdp->declBus  (c+627,"main genbus dec_bits",-1,4,0);
	vcdp->declBit  (c+364,"main genbus iw_stb",-1);
	vcdp->declQuad (c+365,"main genbus iw_word",-1,33,0);
	vcdp->declBit  (c+66,"main genbus wb_busy",-1);
	vcdp->declBit  (c+367,"main genbus ow_stb",-1);
	vcdp->declQuad (c+368,"main genbus ow_word",-1,33,0);
	vcdp->declBit  (c+370,"main genbus int_busy",-1);
	vcdp->declBit  (c+371,"main genbus idl_busy",-1);
	vcdp->declBit  (c+372,"main genbus int_stb",-1);
	vcdp->declQuad (c+373,"main genbus int_word",-1,33,0);
	vcdp->declBit  (c+375,"main genbus hb_busy",-1);
	vcdp->declBit  (c+376,"main genbus idl_stb",-1);
	vcdp->declQuad (c+377,"main genbus idl_word",-1,33,0);
	vcdp->declBit  (c+375,"main genbus hb_stb",-1);
	vcdp->declBit  (c+379,"main genbus hx_busy",-1);
	vcdp->declBus  (c+628,"main genbus hb_bits",-1,4,0);
	vcdp->declBit  (c+380,"main genbus hx_stb",-1);
	vcdp->declBit  (c+381,"main genbus nl_busy",-1);
	vcdp->declBus  (c+382,"main genbus hx_byte",-1,6,0);
	vcdp->declBit  (c+383,"main genbus fnl_stb",-1);
	vcdp->declBus  (c+384,"main genbus fnl_byte",-1,6,0);
	vcdp->declBit  (c+8,"main genbus ps_full",-1);
	vcdp->declBus  (c+446,"main genbus ps_data",-1,7,0);
	vcdp->declBit  (c+641,"main genbus dechxi i_clk",-1);
	vcdp->declBit  (c+7,"main genbus dechxi i_stb",-1);
	vcdp->declBus  (c+445,"main genbus dechxi i_byte",-1,7,0);
	vcdp->declBit  (c+363,"main genbus dechxi o_dh_stb",-1);
	vcdp->declBit  (c+362,"main genbus dechxi o_reset",-1);
	vcdp->declBus  (c+627,"main genbus dechxi o_dh_bits",-1,4,0);
	vcdp->declBit  (c+629,"main genbus dechxi unused",-1);
	vcdp->declBit  (c+641,"main genbus packxi i_clk",-1);
	vcdp->declBit  (c+362,"main genbus packxi i_reset",-1);
	vcdp->declBit  (c+363,"main genbus packxi i_stb",-1);
	vcdp->declBus  (c+627,"main genbus packxi i_bits",-1,4,0);
	vcdp->declBit  (c+364,"main genbus packxi o_pck_stb",-1);
	vcdp->declQuad (c+365,"main genbus packxi o_pck_word",-1,33,0);
	vcdp->declBit  (c+385,"main genbus packxi cmd_loaded",-1);
	vcdp->declQuad (c+386,"main genbus packxi r_word",-1,33,0);
	vcdp->declBus  (c+723,"main genbus wbexec ADDRESS_WIDTH",-1,31,0);
	vcdp->declBus  (c+723,"main genbus wbexec AW",-1,31,0);
	vcdp->declBus  (c+724,"main genbus wbexec CW",-1,31,0);
	vcdp->declBit  (c+641,"main genbus wbexec i_clk",-1);
	vcdp->declBit  (c+362,"main genbus wbexec i_reset",-1);
	vcdp->declBit  (c+364,"main genbus wbexec i_cmd_stb",-1);
	vcdp->declQuad (c+365,"main genbus wbexec i_cmd_word",-1,33,0);
	vcdp->declBit  (c+66,"main genbus wbexec o_cmd_busy",-1);
	vcdp->declBit  (c+367,"main genbus wbexec o_rsp_stb",-1);
	vcdp->declQuad (c+368,"main genbus wbexec o_rsp_word",-1,33,0);
	vcdp->declBit  (c+66,"main genbus wbexec o_wb_cyc",-1);
	vcdp->declBit  (c+67,"main genbus wbexec o_wb_stb",-1);
	vcdp->declBit  (c+463,"main genbus wbexec o_wb_we",-1);
	vcdp->declBus  (c+474,"main genbus wbexec o_wb_addr",-1,29,0);
	vcdp->declBus  (c+466,"main genbus wbexec o_wb_data",-1,31,0);
	vcdp->declBus  (c+697,"main genbus wbexec o_wb_sel",-1,3,0);
	vcdp->declBit  (c+468,"main genbus wbexec i_wb_ack",-1);
	vcdp->declBit  (c+68,"main genbus wbexec i_wb_stall",-1);
	vcdp->declBit  (c+69,"main genbus wbexec i_wb_err",-1);
	vcdp->declBus  (c+467,"main genbus wbexec i_wb_data",-1,31,0);
	vcdp->declBit  (c+388,"main genbus wbexec newaddr",-1);
	vcdp->declBit  (c+630,"main genbus wbexec inc",-1);
	vcdp->declBit  (c+389,"main genbus wbexec i_cmd_addr",-1);
	vcdp->declBit  (c+390,"main genbus wbexec i_cmd_wr",-1);
	vcdp->declBit  (c+391,"main genbus wbexec i_cmd_rd",-1);
	vcdp->declBit  (c+392,"main genbus wbexec i_cmd_bus",-1);
	vcdp->declBit  (c+391,"main genbus wbexec unused",-1);
	vcdp->declBit  (c+641,"main genbus addints i_clk",-1);
	vcdp->declBit  (c+362,"main genbus addints i_reset",-1);
	vcdp->declBit  (c+6,"main genbus addints i_interrupt",-1);
	vcdp->declBit  (c+367,"main genbus addints i_stb",-1);
	vcdp->declQuad (c+368,"main genbus addints i_word",-1,33,0);
	vcdp->declBit  (c+370,"main genbus addints o_int_busy",-1);
	vcdp->declBit  (c+372,"main genbus addints o_int_stb",-1);
	vcdp->declQuad (c+373,"main genbus addints o_int_word",-1,33,0);
	vcdp->declBit  (c+371,"main genbus addints i_busy",-1);
	vcdp->declBit  (c+393,"main genbus addints int_state",-1);
	vcdp->declBit  (c+394,"main genbus addints pending_interrupt",-1);
	vcdp->declBit  (c+395,"main genbus addints loaded",-1);
	vcdp->declBit  (c+396,"main genbus addints int_loaded",-1);
	vcdp->declBit  (c+641,"main genbus addidles i_clk",-1);
	vcdp->declBit  (c+362,"main genbus addidles i_reset",-1);
	vcdp->declBit  (c+372,"main genbus addidles i_cmd_stb",-1);
	vcdp->declQuad (c+373,"main genbus addidles i_cmd_word",-1,33,0);
	vcdp->declBit  (c+371,"main genbus addidles o_idl_busy",-1);
	vcdp->declBit  (c+376,"main genbus addidles o_idl_stb",-1);
	vcdp->declQuad (c+377,"main genbus addidles o_idl_word",-1,33,0);
	vcdp->declBit  (c+375,"main genbus addidles i_busy",-1);
	vcdp->declBit  (c+397,"main genbus addidles idle_stb",-1);
	vcdp->declBus  (c+398,"main genbus addidles idle_counter",-1,22,0);
	vcdp->declBit  (c+641,"main genbus unpackx i_clk",-1);
	vcdp->declBit  (c+362,"main genbus unpackx i_reset",-1);
	vcdp->declBit  (c+376,"main genbus unpackx i_stb",-1);
	vcdp->declQuad (c+377,"main genbus unpackx i_word",-1,33,0);
	vcdp->declBit  (c+375,"main genbus unpackx o_dw_busy",-1);
	vcdp->declBit  (c+375,"main genbus unpackx o_dw_stb",-1);
	vcdp->declBus  (c+628,"main genbus unpackx o_dw_bits",-1,4,0);
	vcdp->declBit  (c+379,"main genbus unpackx i_tx_busy",-1);
	vcdp->declBus  (c+399,"main genbus unpackx r_len",-1,3,0);
	vcdp->declBus  (c+631,"main genbus unpackx r_word",-1,31,0);
	vcdp->declBit  (c+641,"main genbus genhex i_clk",-1);
	vcdp->declBit  (c+362,"main genbus genhex i_reset",-1);
	vcdp->declBit  (c+375,"main genbus genhex i_stb",-1);
	vcdp->declBus  (c+628,"main genbus genhex i_bits",-1,4,0);
	vcdp->declBit  (c+379,"main genbus genhex o_gx_busy",-1);
	vcdp->declBit  (c+380,"main genbus genhex o_gx_stb",-1);
	vcdp->declBus  (c+382,"main genbus genhex o_gx_char",-1,6,0);
	vcdp->declBit  (c+381,"main genbus genhex i_busy",-1);
	vcdp->declBus  (c+400,"main genbus genhex w_gx_char",-1,7,0);
	vcdp->declBit  (c+401,"main genbus genhex unused",-1);
	vcdp->declBit  (c+641,"main genbus addnl i_clk",-1);
	vcdp->declBit  (c+362,"main genbus addnl i_reset",-1);
	vcdp->declBit  (c+380,"main genbus addnl i_stb",-1);
	vcdp->declBus  (c+382,"main genbus addnl i_byte",-1,6,0);
	vcdp->declBit  (c+381,"main genbus addnl o_nl_busy",-1);
	vcdp->declBit  (c+383,"main genbus addnl o_nl_stb",-1);
	vcdp->declBus  (c+384,"main genbus addnl o_nl_byte",-1,6,0);
	vcdp->declBit  (c+402,"main genbus addnl i_busy",-1);
	vcdp->declBit  (c+403,"main genbus addnl last_cr",-1);
	vcdp->declBit  (c+404,"main genbus addnl cr_state",-1);
	vcdp->declBit  (c+405,"main genbus addnl loaded",-1);
	vcdp->declBus  (c+700,"main bus_arbiter DW",-1,31,0);
	vcdp->declBus  (c+674,"main bus_arbiter AW",-1,31,0);
	vcdp->declBus  (c+709,"main bus_arbiter OPT_ZERO_ON_IDLE",-1,0,0);
	vcdp->declBus  (c+709,"main bus_arbiter F_OPT_CLK2FFLOGIC",-1,0,0);
	vcdp->declBit  (c+641,"main bus_arbiter i_clk",-1);
	vcdp->declBit  (c+57,"main bus_arbiter i_a_cyc",-1);
	vcdp->declBit  (c+58,"main bus_arbiter i_a_stb",-1);
	vcdp->declBit  (c+59,"main bus_arbiter i_a_we",-1);
	vcdp->declBus  (c+62,"main bus_arbiter i_a_adr",-1,22,0);
	vcdp->declBus  (c+63,"main bus_arbiter i_a_dat",-1,31,0);
	vcdp->declBus  (c+64,"main bus_arbiter i_a_sel",-1,3,0);
	vcdp->declBit  (c+65,"main bus_arbiter o_a_ack",-1);
	vcdp->declBit  (c+60,"main bus_arbiter o_a_stall",-1);
	vcdp->declBit  (c+61,"main bus_arbiter o_a_err",-1);
	vcdp->declBit  (c+406,"main bus_arbiter i_b_cyc",-1);
	vcdp->declBit  (c+407,"main bus_arbiter i_b_stb",-1);
	vcdp->declBit  (c+463,"main bus_arbiter i_b_we",-1);
	vcdp->declBus  (c+632,"main bus_arbiter i_b_adr",-1,22,0);
	vcdp->declBus  (c+466,"main bus_arbiter i_b_dat",-1,31,0);
	vcdp->declBus  (c+697,"main bus_arbiter i_b_sel",-1,3,0);
	vcdp->declBit  (c+71,"main bus_arbiter o_b_ack",-1);
	vcdp->declBit  (c+72,"main bus_arbiter o_b_stall",-1);
	vcdp->declBit  (c+73,"main bus_arbiter o_b_err",-1);
	vcdp->declBit  (c+10,"main bus_arbiter o_cyc",-1);
	vcdp->declBit  (c+11,"main bus_arbiter o_stb",-1);
	vcdp->declBit  (c+12,"main bus_arbiter o_we",-1);
	vcdp->declBus  (c+16,"main bus_arbiter o_adr",-1,22,0);
	vcdp->declBus  (c+17,"main bus_arbiter o_dat",-1,31,0);
	vcdp->declBus  (c+18,"main bus_arbiter o_sel",-1,3,0);
	vcdp->declBit  (c+13,"main bus_arbiter i_ack",-1);
	vcdp->declBit  (c+14,"main bus_arbiter i_stall",-1);
	vcdp->declBit  (c+15,"main bus_arbiter i_err",-1);
	vcdp->declBit  (c+408,"main bus_arbiter r_a_owner",-1);
	vcdp->declBus  (c+674,"main hb_dwbi_delay AW",-1,31,0);
	vcdp->declBus  (c+700,"main hb_dwbi_delay DW",-1,31,0);
	vcdp->declBus  (c+709,"main hb_dwbi_delay F_OPT_CLK2FFLOGIC",-1,0,0);
	vcdp->declBus  (c+701,"main hb_dwbi_delay F_LGDEPTH",-1,31,0);
	vcdp->declBus  (c+676,"main hb_dwbi_delay DELAY_STALL",-1,0,0);
	vcdp->declBit  (c+641,"main hb_dwbi_delay i_clk",-1);
	vcdp->declBit  (c+642,"main hb_dwbi_delay i_reset",-1);
	vcdp->declBit  (c+10,"main hb_dwbi_delay i_wb_cyc",-1);
	vcdp->declBit  (c+11,"main hb_dwbi_delay i_wb_stb",-1);
	vcdp->declBit  (c+12,"main hb_dwbi_delay i_wb_we",-1);
	vcdp->declBus  (c+16,"main hb_dwbi_delay i_wb_addr",-1,22,0);
	vcdp->declBus  (c+17,"main hb_dwbi_delay i_wb_data",-1,31,0);
	vcdp->declBus  (c+18,"main hb_dwbi_delay i_wb_sel",-1,3,0);
	vcdp->declBit  (c+13,"main hb_dwbi_delay o_wb_ack",-1);
	vcdp->declBit  (c+14,"main hb_dwbi_delay o_wb_stall",-1);
	vcdp->declBus  (c+447,"main hb_dwbi_delay o_wb_data",-1,31,0);
	vcdp->declBit  (c+15,"main hb_dwbi_delay o_wb_err",-1);
	vcdp->declBit  (c+23,"main hb_dwbi_delay o_dly_cyc",-1);
	vcdp->declBit  (c+24,"main hb_dwbi_delay o_dly_stb",-1);
	vcdp->declBit  (c+25,"main hb_dwbi_delay o_dly_we",-1);
	vcdp->declBus  (c+29,"main hb_dwbi_delay o_dly_addr",-1,22,0);
	vcdp->declBus  (c+30,"main hb_dwbi_delay o_dly_data",-1,31,0);
	vcdp->declBus  (c+31,"main hb_dwbi_delay o_dly_sel",-1,3,0);
	vcdp->declBit  (c+454,"main hb_dwbi_delay i_dly_ack",-1);
	vcdp->declBit  (c+26,"main hb_dwbi_delay i_dly_stall",-1);
	vcdp->declBus  (c+453,"main hb_dwbi_delay i_dly_data",-1,31,0);
	vcdp->declBit  (c+27,"main hb_dwbi_delay i_dly_err",-1);
	vcdp->declBit  (c+14,"main hb_dwbi_delay genblk1 r_stb",-1);
	vcdp->declBit  (c+409,"main hb_dwbi_delay genblk1 r_we",-1);
	vcdp->declBus  (c+410,"main hb_dwbi_delay genblk1 r_addr",-1,22,0);
	vcdp->declBus  (c+411,"main hb_dwbi_delay genblk1 r_data",-1,31,0);
	vcdp->declBus  (c+412,"main hb_dwbi_delay genblk1 r_sel",-1,3,0);
	vcdp->declBus  (c+715,"main consolei LGFLEN",-1,3,0);
	vcdp->declBus  (c+715,"main consolei LCLLGFLEN",-1,3,0);
	vcdp->declBit  (c+641,"main consolei i_clk",-1);
	vcdp->declBit  (c+692,"main consolei i_reset",-1);
	vcdp->declBit  (c+23,"main consolei i_wb_cyc",-1);
	vcdp->declBit  (c+413,"main consolei i_wb_stb",-1);
	vcdp->declBit  (c+25,"main consolei i_wb_we",-1);
	vcdp->declBus  (c+414,"main consolei i_wb_addr",-1,1,0);
	vcdp->declBus  (c+30,"main consolei i_wb_data",-1,31,0);
	vcdp->declBit  (c+48,"main consolei o_wb_ack",-1);
	vcdp->declBit  (c+692,"main consolei o_wb_stall",-1);
	vcdp->declBus  (c+460,"main consolei o_wb_data",-1,31,0);
	vcdp->declBit  (c+19,"main consolei o_console_stb",-1);
	vcdp->declBus  (c+450,"main consolei o_console_data",-1,6,0);
	vcdp->declBit  (c+20,"main consolei i_console_busy",-1);
	vcdp->declBit  (c+448,"main consolei i_console_stb",-1);
	vcdp->declBus  (c+449,"main consolei i_console_data",-1,6,0);
	vcdp->declBit  (c+4,"main consolei o_console_rx_int",-1);
	vcdp->declBit  (c+3,"main consolei o_console_tx_int",-1);
	vcdp->declBit  (c+4,"main consolei o_console_rxfifo_int",-1);
	vcdp->declBit  (c+3,"main consolei o_console_txfifo_int",-1);
	vcdp->declBus  (c+415,"main consolei o_dbg",-1,31,0);
	vcdp->declBit  (c+4,"main consolei rx_empty_n",-1);
	vcdp->declBit  (c+633,"main consolei rx_fifo_err",-1);
	vcdp->declBus  (c+634,"main consolei rxf_wb_data",-1,6,0);
	vcdp->declBus  (c+416,"main consolei rxf_status",-1,15,0);
	vcdp->declBus  (c+417,"main consolei wb_rx_data",-1,31,0);
	vcdp->declBit  (c+19,"main consolei tx_empty_n",-1);
	vcdp->declBit  (c+418,"main consolei txf_err",-1);
	vcdp->declBus  (c+419,"main consolei txf_status",-1,15,0);
	vcdp->declBit  (c+19,"main consolei txf_wb_write",-1);
	vcdp->declBus  (c+450,"main consolei txf_wb_data",-1,6,0);
	vcdp->declBus  (c+420,"main consolei wb_tx_data",-1,31,0);
	vcdp->declBus  (c+421,"main consolei wb_fifo_data",-1,31,0);
	vcdp->declBus  (c+635,"main consolei r_wb_addr",-1,1,0);
	vcdp->declBit  (c+422,"main consolei r_wb_ack",-1);
	vcdp->declBus  (c+423,"main consolei unused",-1,23,0);
	vcdp->declBus  (c+634,"main consolei RX_NOFIFO r_rx_fifo_data",-1,6,0);
	vcdp->declBit  (c+4,"main consolei RX_NOFIFO r_rx_fifo_full",-1);
	vcdp->declBit  (c+633,"main consolei RX_NOFIFO r_rx_fifo_err",-1);
	vcdp->declBus  (c+450,"main consolei TX_NOFIFO r_txf_wb_data",-1,6,0);
	vcdp->declBit  (c+418,"main consolei TX_NOFIFO r_txf_err",-1);
	vcdp->declBit  (c+19,"main consolei TX_NOFIFO r_txf_wb_write",-1);
	vcdp->declBus  (c+700,"main bustimeri BW",-1,31,0);
	vcdp->declBus  (c+675,"main bustimeri VW",-1,31,0);
	vcdp->declBus  (c+704,"main bustimeri RELOADABLE",-1,31,0);
	vcdp->declBit  (c+641,"main bustimeri i_clk",-1);
	vcdp->declBit  (c+642,"main bustimeri i_reset",-1);
	vcdp->declBit  (c+703,"main bustimeri i_ce",-1);
	vcdp->declBit  (c+23,"main bustimeri i_wb_cyc",-1);
	vcdp->declBit  (c+424,"main bustimeri i_wb_stb",-1);
	vcdp->declBit  (c+25,"main bustimeri i_wb_we",-1);
	vcdp->declBus  (c+30,"main bustimeri i_wb_data",-1,31,0);
	vcdp->declBit  (c+39,"main bustimeri o_wb_ack",-1);
	vcdp->declBit  (c+692,"main bustimeri o_wb_stall",-1);
	vcdp->declBus  (c+40,"main bustimeri o_wb_data",-1,31,0);
	vcdp->declBit  (c+5,"main bustimeri o_int",-1);
	vcdp->declBit  (c+425,"main bustimeri r_running",-1);
	vcdp->declBit  (c+426,"main bustimeri wb_write",-1);
	vcdp->declBit  (c+427,"main bustimeri auto_reload",-1);
	vcdp->declBus  (c+636,"main bustimeri interval_count",-1,15,0);
	vcdp->declBus  (c+428,"main bustimeri r_value",-1,15,0);
	vcdp->declBit  (c+429,"main bustimeri r_zero",-1);
	vcdp->declQuad (c+353,"main bustimeri unused",-1,32,0);
	vcdp->declBit  (c+427,"main bustimeri genblk1 r_auto_reload",-1);
	vcdp->declBus  (c+636,"main bustimeri genblk1 r_interval_count",-1,15,0);
	vcdp->declBus  (c+706,"main bkrami LGMEMSZ",-1,31,0);
	vcdp->declBus  (c+700,"main bkrami DW",-1,31,0);
	vcdp->declBus  (c+704,"main bkrami EXTRACLOCK",-1,31,0);
	vcdp->declBus  (c+709,"main bkrami HEXFILE",-1,0,0);
	vcdp->declBus  (c+709,"main bkrami OPT_ROM",-1,0,0);
	vcdp->declBus  (c+682,"main bkrami AW",-1,31,0);
	vcdp->declBit  (c+641,"main bkrami i_clk",-1);
	vcdp->declBit  (c+692,"main bkrami i_reset",-1);
	vcdp->declBit  (c+23,"main bkrami i_wb_cyc",-1);
	vcdp->declBit  (c+430,"main bkrami i_wb_stb",-1);
	vcdp->declBit  (c+25,"main bkrami i_wb_we",-1);
	vcdp->declBus  (c+431,"main bkrami i_wb_addr",-1,10,0);
	vcdp->declBus  (c+30,"main bkrami i_wb_data",-1,31,0);
	vcdp->declBus  (c+31,"main bkrami i_wb_sel",-1,3,0);
	vcdp->declBit  (c+52,"main bkrami o_wb_ack",-1);
	vcdp->declBit  (c+692,"main bkrami o_wb_stall",-1);
	vcdp->declBus  (c+462,"main bkrami o_wb_data",-1,31,0);
	vcdp->declBit  (c+637,"main bkrami w_wstb",-1);
	vcdp->declBit  (c+432,"main bkrami w_stb",-1);
	vcdp->declBus  (c+638,"main bkrami w_data",-1,31,0);
	vcdp->declBus  (c+639,"main bkrami w_addr",-1,10,0);
	vcdp->declBus  (c+640,"main bkrami w_sel",-1,3,0);
	// Tracing: main bkrami mem // Ignored: Wide memory > --trace-max-array ents at memdev.v:68
	vcdp->declBit  (c+23,"main bkrami unused",-1);
	vcdp->declBit  (c+637,"main bkrami genblk2 last_wstb",-1);
	vcdp->declBit  (c+432,"main bkrami genblk2 last_stb",-1);
	vcdp->declBus  (c+639,"main bkrami genblk2 last_addr",-1,10,0);
	vcdp->declBus  (c+638,"main bkrami genblk2 last_data",-1,31,0);
	vcdp->declBus  (c+640,"main bkrami genblk2 last_sel",-1,3,0);
	vcdp->declBus  (c+725,"main buspici IUSED",-1,31,0);
	vcdp->declBus  (c+700,"main buspici BW",-1,31,0);
	vcdp->declBit  (c+641,"main buspici i_clk",-1);
	vcdp->declBit  (c+692,"main buspici i_reset",-1);
	vcdp->declBit  (c+433,"main buspici i_wr",-1);
	vcdp->declBus  (c+30,"main buspici i_data",-1,31,0);
	vcdp->declBus  (c+456,"main buspici o_data",-1,31,0);
	vcdp->declBus  (c+22,"main buspici i_brd_ints",-1,14,0);
	vcdp->declBit  (c+6,"main buspici o_interrupt",-1);
	vcdp->declBus  (c+434,"main buspici r_int_state",-1,14,0);
	vcdp->declBus  (c+435,"main buspici r_int_enable",-1,14,0);
	vcdp->declBus  (c+436,"main buspici nxt_int_state",-1,14,0);
	vcdp->declBit  (c+6,"main buspici r_interrupt",-1);
	vcdp->declBit  (c+437,"main buspici r_gie",-1);
	vcdp->declBit  (c+438,"main buspici w_any",-1);
	vcdp->declBus  (c+439,"main buspici unused",-1,30,0);
    }
}

void Vmain::traceFullThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
			      & (~ (IData)(vlTOPp->main__DOT__zip_stall)))));
	vcdp->fullBit  (c+2,(vlTOPp->main__DOT__watchdog_reset));
	vcdp->fullBit  (c+3,((1U & (~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)))));
	vcdp->fullBit  (c+4,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full));
	vcdp->fullBit  (c+5,(vlTOPp->main__DOT__bustimer_int));
	vcdp->fullBit  (c+6,(vlTOPp->main__DOT__buspici__DOT__r_interrupt));
	vcdp->fullBit  (c+7,(vlTOPp->main__DOT__pp_rx_stb));
	vcdp->fullBit  (c+8,(vlTOPp->main__DOT__genbus__DOT__ps_full));
	vcdp->fullBit  (c+9,(vlTOPp->main__DOT__pp_tx_busy));
	vcdp->fullBit  (c+10,(vlTOPp->main__DOT__hb_dwbi_cyc));
	vcdp->fullBit  (c+11,(vlTOPp->main__DOT__hb_dwbi_stb));
	vcdp->fullBit  (c+12,(vlTOPp->main__DOT__hb_dwbi_we));
	vcdp->fullBit  (c+13,(vlTOPp->main__DOT__hb_dwbi_ack));
	vcdp->fullBit  (c+14,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb));
	vcdp->fullBit  (c+15,(vlTOPp->main__DOT__hb_dwbi_err));
	vcdp->fullBus  (c+16,(vlTOPp->main__DOT__hb_dwbi_addr),23);
	vcdp->fullBus  (c+17,(vlTOPp->main__DOT__hb_dwbi_odata),32);
	vcdp->fullBus  (c+18,(vlTOPp->main__DOT__hb_dwbi_sel),4);
	vcdp->fullBit  (c+19,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write));
	vcdp->fullBit  (c+20,(vlTOPp->main__DOT__w_console_busy));
	vcdp->fullBus  (c+21,(vlTOPp->main__DOT__r_pwrcount_data),32);
	vcdp->fullBus  (c+22,(vlTOPp->main__DOT__bus_int_vector),15);
	vcdp->fullBit  (c+23,(vlTOPp->main__DOT__wb_cyc));
	vcdp->fullBit  (c+24,(vlTOPp->main__DOT__wb_stb));
	vcdp->fullBit  (c+25,(vlTOPp->main__DOT__wb_we));
	vcdp->fullBit  (c+26,(vlTOPp->main__DOT__wb_stall));
	vcdp->fullBit  (c+27,(vlTOPp->main__DOT__wb_err));
	vcdp->fullBit  (c+28,(((IData)(vlTOPp->main__DOT__wb_stb) 
			       & (0U == (((1U == (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))) 
					  << 5U) | 
					 (((2U == (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
					   << 4U) | 
					  (((3U == 
					     (0xfU 
					      & (vlTOPp->main__DOT__wb_addr 
						 >> 0x13U))) 
					    << 3U) 
					   | (((4U 
						== 
						(0xfU 
						 & (vlTOPp->main__DOT__wb_addr 
						    >> 0x13U))) 
					       << 2U) 
					      | (((5U 
						   == 
						   (0xfU 
						    & (vlTOPp->main__DOT__wb_addr 
						       >> 0x13U))) 
						  << 1U) 
						 | (8U 
						    == 
						    (8U 
						     & (vlTOPp->main__DOT__wb_addr 
							>> 0x13U))))))))))));
	vcdp->fullBus  (c+29,(vlTOPp->main__DOT__wb_addr),23);
	vcdp->fullBus  (c+30,(vlTOPp->main__DOT__wb_data),32);
	vcdp->fullBus  (c+31,(vlTOPp->main__DOT__wb_sel),4);
	vcdp->fullBit  (c+32,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (0U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->fullBit  (c+33,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (1U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->fullBit  (c+34,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (2U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->fullBus  (c+35,((((IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits) 
				<< 0x10U) | (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits))),32);
	vcdp->fullBit  (c+36,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (3U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->fullBit  (c+37,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (4U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->fullBit  (c+38,(((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & (~ vlTOPp->main__DOT__wb_addr))));
	vcdp->fullBit  (c+39,(vlTOPp->main__DOT__bustimer_ack));
	vcdp->fullBus  (c+40,((((IData)(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload) 
				<< 0x1fU) | (IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value))),32);
	vcdp->fullBit  (c+41,(((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					       >> 0x13U))) 
			       & vlTOPp->main__DOT__wb_addr)));
	vcdp->fullBit  (c+42,(vlTOPp->main__DOT__watchdog_ack));
	vcdp->fullBus  (c+43,(vlTOPp->main__DOT__watchdogi__DOT__r_value),32);
	vcdp->fullBit  (c+44,((1U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U)))));
	vcdp->fullBit  (c+45,(vlTOPp->main__DOT__sdramscope_ack));
	vcdp->fullBit  (c+46,((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U)))));
	vcdp->fullBit  (c+47,((3U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U)))));
	vcdp->fullBit  (c+48,(vlTOPp->main__DOT__console_ack));
	vcdp->fullBit  (c+49,((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U)))));
	vcdp->fullBit  (c+50,(vlTOPp->main__DOT__r_wb_sio_ack));
	vcdp->fullBit  (c+51,((5U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U)))));
	vcdp->fullBit  (c+52,(vlTOPp->main__DOT__bkram_ack));
	vcdp->fullBit  (c+53,((8U == (8U & (vlTOPp->main__DOT__wb_addr 
					    >> 0x13U)))));
	vcdp->fullBit  (c+54,((1U & (IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack))));
	vcdp->fullBit  (c+55,(vlTOPp->main__DOT__sdram_stall));
	vcdp->fullBus  (c+56,(vlTOPp->main__DOT__sdram_data),32);
	vcdp->fullBit  (c+57,(vlTOPp->main__DOT__zip_cyc));
	vcdp->fullBit  (c+58,(vlTOPp->main__DOT__zip_stb));
	vcdp->fullBit  (c+59,(vlTOPp->main__DOT__zip_we));
	vcdp->fullBit  (c+60,(vlTOPp->main__DOT__zip_stall));
	vcdp->fullBit  (c+61,(vlTOPp->main__DOT__zip_err));
	vcdp->fullBus  (c+62,(vlTOPp->main__DOT__zip_addr),23);
	vcdp->fullBus  (c+63,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data),32);
	vcdp->fullBus  (c+64,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel),4);
	vcdp->fullBit  (c+65,(vlTOPp->main__DOT__zip_ack));
	vcdp->fullBit  (c+66,(vlTOPp->main__DOT__hb_cyc));
	vcdp->fullBit  (c+67,(vlTOPp->main__DOT__hb_stb));
	vcdp->fullBit  (c+68,(vlTOPp->main__DOT__hb_stall));
	vcdp->fullBit  (c+69,(vlTOPp->main__DOT__hb_err));
	vcdp->fullBit  (c+70,(((IData)(vlTOPp->main__DOT__hb_stb) 
			       & (0U == ((2U & ((~ 
						 (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)) 
						<< 1U)) 
					 | (1U & (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)))))));
	vcdp->fullBit  (c+71,(vlTOPp->main__DOT__hb_dwb_ack));
	vcdp->fullBit  (c+72,(((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
			       | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb))));
	vcdp->fullBit  (c+73,(((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
			       & (IData)(vlTOPp->main__DOT__hb_dwbi_err))));
	vcdp->fullBit  (c+74,(vlTOPp->main__DOT__swic__DOT__dbg_ack));
	vcdp->fullBit  (c+75,(vlTOPp->main__DOT__swic__DOT__dbg_stall));
	vcdp->fullBus  (c+76,(((1U & vlTOPp->main__DOT__hb_tmp_addr)
			        ? vlTOPp->main__DOT__swic__DOT__cpu_dbg_data
			        : (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
				    << 0x10U) | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc) 
						  << 0xcU) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
						     << 0xaU) 
						    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted) 
							<< 9U) 
						       | (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
							   << 7U) 
							  | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
							      << 6U) 
							     | (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr))))))))),32);
	vcdp->fullBit  (c+77,((((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped) 
				& (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) 
			       & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt)))));
	vcdp->fullBit  (c+78,(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7));
	vcdp->fullBit  (c+79,((1U & vlTOPp->main__DOT__wb_addr)));
	vcdp->fullBit  (c+80,(vlTOPp->main__DOT__sdramscopei__DOT__read_from_data));
	vcdp->fullBit  (c+81,(((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
			       & (IData)(vlTOPp->main__DOT__wb_we))));
	vcdp->fullBit  (c+82,(vlTOPp->main__DOT__sdramscopei__DOT__write_to_control));
	vcdp->fullBit  (c+83,((1U & (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
					>> 2U)))));
	vcdp->fullBit  (c+84,((1U & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				     >> 1U))));
	vcdp->fullBit  (c+85,((1U & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))));
	vcdp->fullBus  (c+86,(vlTOPp->main__DOT__sdramscopei__DOT__br_config),3);
	vcdp->fullBus  (c+87,(vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff),4);
	vcdp->fullBit  (c+88,(vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered));
	vcdp->fullBit  (c+89,(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed));
	vcdp->fullBus  (c+90,(vlTOPp->main__DOT__sdramscopei__DOT__counter),4);
	vcdp->fullBit  (c+91,(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped));
	vcdp->fullBus  (c+92,(vlTOPp->main__DOT__sdramscopei__DOT__waddr),4);
	vcdp->fullBit  (c+93,(vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack));
	vcdp->fullBit  (c+94,(vlTOPp->main__DOT__sdramscopei__DOT__br_pre_wb_ack));
	vcdp->fullBus  (c+95,(vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff),20);
	vcdp->fullBit  (c+96,(vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt));
	vcdp->fullBit  (c+97,(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3));
	vcdp->fullBit  (c+98,(vlTOPp->main__DOT__sdrami__DOT__need_refresh));
	vcdp->fullBus  (c+99,(vlTOPp->main__DOT__sdrami__DOT__refresh_clk),10);
	vcdp->fullBit  (c+100,(vlTOPp->main__DOT__sdrami__DOT__refresh_cmd));
	vcdp->fullBit  (c+101,(vlTOPp->main__DOT__sdrami__DOT__in_refresh));
	vcdp->fullBus  (c+102,(vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk),3);
	vcdp->fullBus  (c+103,(vlTOPp->main__DOT__sdrami__DOT__bank_active[0]),3);
	vcdp->fullBus  (c+104,(vlTOPp->main__DOT__sdrami__DOT__bank_active[1]),3);
	vcdp->fullBus  (c+105,(vlTOPp->main__DOT__sdrami__DOT__bank_active[2]),3);
	vcdp->fullBus  (c+106,(vlTOPp->main__DOT__sdrami__DOT__bank_active[3]),3);
	vcdp->fullBus  (c+107,(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack),6);
	vcdp->fullBit  (c+108,(vlTOPp->main__DOT__sdrami__DOT__r_pending));
	vcdp->fullBus  (c+109,(vlTOPp->main__DOT__sdrami__DOT__r_addr),23);
	vcdp->fullBus  (c+110,(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle),3);
	vcdp->fullBus  (c+111,(vlTOPp->main__DOT__sdrami__DOT__m_state),2);
	vcdp->fullBit  (c+112,(vlTOPp->main__DOT__sdrami__DOT__bus_cyc));
	vcdp->fullBit  (c+113,(vlTOPp->main__DOT__sdrami__DOT__nxt_dmod));
	vcdp->fullBit  (c+114,(vlTOPp->main__DOT__sdrami__DOT__pending));
	vcdp->fullBus  (c+115,(vlTOPp->main__DOT__sdrami__DOT__fwd_addr),23);
	vcdp->fullBus  (c+116,((3U & (vlTOPp->main__DOT__wb_addr 
				      >> 8U))),2);
	vcdp->fullBus  (c+117,((3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
				      >> 8U))),2);
	vcdp->fullBus  (c+118,((3U & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
				      >> 8U))),2);
	vcdp->fullBus  (c+119,((0x1fffU & (vlTOPp->main__DOT__wb_addr 
					   >> 0xaU))),13);
	vcdp->fullBus  (c+120,((0x1fffU & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					   >> 0xaU))),13);
	vcdp->fullBus  (c+121,((0x1fffU & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
					   >> 0xaU))),13);
	vcdp->fullBit  (c+122,(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid));
	vcdp->fullBit  (c+123,(vlTOPp->main__DOT__sdrami__DOT__fwd_bank_valid));
	vcdp->fullBit  (c+124,(vlTOPp->main__DOT__sdrami__DOT__maintenance_mode));
	vcdp->fullBit  (c+125,(vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n));
	vcdp->fullBit  (c+126,(vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n));
	vcdp->fullBit  (c+127,(vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n));
	vcdp->fullBit  (c+128,(vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n));
	vcdp->fullBit  (c+129,(vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod));
	vcdp->fullBus  (c+130,(vlTOPp->main__DOT__sdrami__DOT__m_ram_addr),13);
	vcdp->fullBit  (c+131,(vlTOPp->main__DOT__sdrami__DOT__startup_hold));
	vcdp->fullBus  (c+132,(vlTOPp->main__DOT__sdrami__DOT__startup_idle),16);
	vcdp->fullBus  (c+133,(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks),4);
	vcdp->fullBit  (c+134,(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero));
	vcdp->fullBus  (c+135,((0x1ffU & vlTOPp->main__DOT__sdrami__DOT__fwd_addr)),9);
	vcdp->fullBit  (c+136,(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16));
	vcdp->fullBit  (c+137,(vlTOPp->main__DOT__swic__DOT__cpu_break));
	vcdp->fullBit  (c+138,(vlTOPp->main__DOT__swic__DOT__dbg_cmd_write));
	vcdp->fullBit  (c+139,(vlTOPp->main__DOT__swic__DOT__cmd_reset));
	vcdp->fullBit  (c+140,(vlTOPp->main__DOT__swic__DOT__cmd_halt));
	vcdp->fullBit  (c+141,(vlTOPp->main__DOT__swic__DOT__cmd_step));
	vcdp->fullBit  (c+142,(vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache));
	vcdp->fullBus  (c+143,(vlTOPp->main__DOT__swic__DOT__cmd_addr),5);
	vcdp->fullBus  (c+144,((((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
				 << 0x10U) | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc) 
					       << 0xcU) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
						  << 0xaU) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted) 
						     << 9U) 
						    | (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
							<< 7U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
							   << 6U) 
							  | (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr)))))))),32);
	vcdp->fullBit  (c+145,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
				& (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))));
	vcdp->fullBit  (c+146,(vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb));
	vcdp->fullBit  (c+147,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we));
	vcdp->fullBit  (c+148,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
				& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))));
	vcdp->fullBit  (c+149,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
				& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))));
	vcdp->fullBus  (c+150,((((IData)(vlTOPp->main__DOT__hb_cyc) 
				 << 4U) | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb) 
					    << 3U) 
					   | ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
						& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid))) 
					       << 1U) 
					      | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
						 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))))))),5);
	vcdp->fullBit  (c+151,(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
	vcdp->fullBus  (c+152,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags),15);
	vcdp->fullBus  (c+153,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags),15);
	vcdp->fullBit  (c+154,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en));
	vcdp->fullBit  (c+155,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep));
	vcdp->fullBit  (c+156,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break));
	vcdp->fullBit  (c+157,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
	vcdp->fullBit  (c+158,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie));
	vcdp->fullBit  (c+159,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
	vcdp->fullBit  (c+160,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache));
	vcdp->fullBit  (c+161,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
	vcdp->fullBit  (c+162,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i));
	vcdp->fullBit  (c+163,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag));
	vcdp->fullBit  (c+164,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
	vcdp->fullBit  (c+165,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag));
	vcdp->fullBit  (c+166,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag));
	vcdp->fullBit  (c+167,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
	vcdp->fullBit  (c+168,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
	vcdp->fullBit  (c+169,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce));
	vcdp->fullBit  (c+170,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall));
	vcdp->fullBus  (c+171,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc),25);
	vcdp->fullBus  (c+172,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc),25);
	vcdp->fullBit  (c+173,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
	vcdp->fullBit  (c+174,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled));
	vcdp->fullBit  (c+175,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
	vcdp->fullBit  (c+176,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
	vcdp->fullBit  (c+177,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
	vcdp->fullBit  (c+178,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
	vcdp->fullBit  (c+179,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err));
	vcdp->fullBus  (c+180,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr),23);
	vcdp->fullBus  (c+181,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction),32);
	vcdp->fullBit  (c+182,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
	vcdp->fullBit  (c+183,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
	vcdp->fullBit  (c+184,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled));
	vcdp->fullBit  (c+185,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem));
	vcdp->fullBit  (c+186,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu));
	vcdp->fullBit  (c+187,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div));
	vcdp->fullBit  (c+188,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu));
	vcdp->fullBit  (c+189,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))));
	vcdp->fullBit  (c+190,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
	vcdp->fullBus  (c+191,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15))),5);
	vcdp->fullBus  (c+192,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))),5);
	vcdp->fullBus  (c+193,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14))),5);
	vcdp->fullBus  (c+194,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR),5);
	vcdp->fullBus  (c+195,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB),5);
	vcdp->fullBit  (c+196,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
				      >> 6U))));
	vcdp->fullBit  (c+197,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
				      >> 6U))));
	vcdp->fullBit  (c+198,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
				      >> 5U))));
	vcdp->fullBit  (c+199,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
				      >> 5U))));
	vcdp->fullBit  (c+200,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				      >> 6U))));
	vcdp->fullBit  (c+201,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				      >> 5U))));
	vcdp->fullBit  (c+202,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_DIV));
	vcdp->fullBit  (c+203,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_FP));
	vcdp->fullBit  (c+204,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_lock));
	vcdp->fullBit  (c+205,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid));
	vcdp->fullBus  (c+206,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I),32);
	vcdp->fullBit  (c+207,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal));
	vcdp->fullBit  (c+208,(((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				  >> 6U) & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR)) 
				& ((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
					  >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))));
	vcdp->fullBus  (c+209,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av),32);
	vcdp->fullBus  (c+210,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv),32);
	vcdp->fullBus  (c+211,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v),32);
	vcdp->fullBus  (c+212,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v),32);
	vcdp->fullBus  (c+213,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB)
				 ? ((0x40U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))
				     ? (0xe0800000U 
					| ((0x7f0000U 
					    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv) 
					   | ((0x10U 
					       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))
					       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
					       : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags))))
				     : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv)
				 : 0U)),32);
	vcdp->fullBus  (c+214,((0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)
					 ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
					 : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags)))),4);
	vcdp->fullBus  (c+215,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F),8);
	vcdp->fullBit  (c+216,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
	vcdp->fullBit  (c+217,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid));
	vcdp->fullBit  (c+218,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal));
	vcdp->fullBit  (c+219,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid));
	vcdp->fullBit  (c+220,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid));
	vcdp->fullBit  (c+221,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid));
	vcdp->fullBit  (c+222,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
	vcdp->fullBus  (c+223,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags),4);
	vcdp->fullBit  (c+224,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid));
	vcdp->fullBit  (c+225,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy));
	vcdp->fullBit  (c+226,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
	vcdp->fullBit  (c+227,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR));
	vcdp->fullBit  (c+228,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF));
	vcdp->fullBit  (c+229,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
	vcdp->fullBit  (c+230,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
	vcdp->fullBit  (c+231,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
	vcdp->fullBit  (c+232,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
	vcdp->fullBit  (c+233,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err));
	vcdp->fullBit  (c+234,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err));
	vcdp->fullBit  (c+235,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl));
	vcdp->fullBit  (c+236,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl));
	vcdp->fullBit  (c+237,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
	vcdp->fullBit  (c+238,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
	vcdp->fullBit  (c+239,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we));
	vcdp->fullBit  (c+240,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
	vcdp->fullBit  (c+241,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce));
	vcdp->fullBit  (c+242,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error));
	vcdp->fullBit  (c+243,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy));
	vcdp->fullBit  (c+244,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid));
	vcdp->fullBus  (c+245,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result),32);
	vcdp->fullBus  (c+246,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags),4);
	vcdp->fullBit  (c+247,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional));
	vcdp->fullBit  (c+248,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv));
	vcdp->fullBit  (c+249,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce));
	vcdp->fullBit  (c+250,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce));
	vcdp->fullBit  (c+251,((0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))));
	vcdp->fullBit  (c+252,((0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))));
	vcdp->fullBit  (c+253,((0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
	vcdp->fullBit  (c+254,((0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
	vcdp->fullBus  (c+255,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id),5);
	vcdp->fullBus  (c+256,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl),32);
	vcdp->fullBus  (c+257,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl),32);
	vcdp->fullBit  (c+258,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt));
	vcdp->fullBit  (c+259,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt));
	vcdp->fullBus  (c+260,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc),25);
	vcdp->fullBit  (c+261,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc));
	vcdp->fullBit  (c+262,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
				 & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
				| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc))));
	vcdp->fullBus  (c+263,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc),32);
	vcdp->fullBit  (c+264,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall));
	vcdp->fullBit  (c+265,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger));
	vcdp->fullBus  (c+266,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags),32);
	vcdp->fullBus  (c+267,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc),28);
	vcdp->fullBus  (c+268,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr),28);
	vcdp->fullQuad (c+269,((((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
				 << 0x38U) | (QData)((IData)(
							     ((0x600000U 
							       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
								  << 0x15U)) 
							      | ((0x180000U 
								  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc 
								     << 0x13U)) 
								 | ((0x60000U 
								     & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc 
									<< 0x11U)) 
								    | ((0x18000U 
									& (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
									   << 0xfU)) 
								       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rA) 
									   << 0xeU) 
									  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_zI) 
									      << 0xcU) 
									     | ((0xffffff00U 
										& ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
										<< 2U) 
										& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR) 
										<< 8U)) 
										& (((1U 
										& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
										>> 4U)) 
										== (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
										<< 8U))) 
										| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_F)))))))))))),57);
	vcdp->fullBus  (c+271,((0x7fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
					 >> 0x19U))),7);
	vcdp->fullBit  (c+272,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))));
	vcdp->fullBit  (c+273,(((0U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight)) 
				| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
				   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))));
	vcdp->fullBit  (c+274,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle));
	vcdp->fullBit  (c+275,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid));
	vcdp->fullBus  (c+276,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight),2);
	vcdp->fullBit  (c+277,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal));
	vcdp->fullBit  (c+278,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2));
	vcdp->fullBus  (c+279,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14),7);
	vcdp->fullBus  (c+280,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15),7);
	vcdp->fullBus  (c+281,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16),7);
	vcdp->fullBus  (c+282,((0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					 >> 0x16U))),5);
	vcdp->fullBit  (c+283,((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						 >> 1U)))));
	vcdp->fullBit  (c+284,((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->fullBit  (c+285,((8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					       >> 1U)))));
	vcdp->fullBit  (c+286,((9U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->fullBit  (c+287,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU));
	vcdp->fullBit  (c+288,((8U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->fullBit  (c+289,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop));
	vcdp->fullBit  (c+290,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock));
	vcdp->fullBit  (c+291,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
				& (0x1eU == (0x1fU 
					     & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x16U))))));
	vcdp->fullBit  (c+292,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
				& (0x1cU == (0x1fU 
					     & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x16U))))));
	vcdp->fullBit  (c+293,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special));
	vcdp->fullBit  (c+294,((2U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->fullBit  (c+295,(((5U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						>> 1U))) 
				| (0xcU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)))));
	vcdp->fullBit  (c+296,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc));
	vcdp->fullBit  (c+297,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc));
	vcdp->fullBit  (c+298,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
				& (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB))))));
	vcdp->fullBit  (c+299,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
				& (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB))))));
	vcdp->fullBus  (c+300,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond),4);
	vcdp->fullBit  (c+301,(((8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						>> 1U))) 
				| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond) 
				    >> 3U) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
					      | (((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU) 
						    & (0xdU 
						       != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
						   & (9U 
						      != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
						  & (8U 
						     != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
						 & (7U 
						    != 
						    (7U 
						     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
							>> 1U)))))))));
	vcdp->fullBit  (c+302,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem));
	vcdp->fullBit  (c+303,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto));
	vcdp->fullBit  (c+304,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div));
	vcdp->fullBit  (c+305,(((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				      >> 0x1fU)) & 
				  (3U == (3U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x19U)))) 
				 & (7U != (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
						 >> 1U)))) 
				& (0U != (3U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x17U))))));
	vcdp->fullBit  (c+306,((1U & (~ (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto) 
					  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
					 | (8U == (0xfU 
						   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						      >> 1U))))))));
	vcdp->fullBit  (c+307,(((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
				  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU) 
				      & (8U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
				     & (0xdU != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)))) 
				 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto)) 
				| (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						  >> 1U))))));
	vcdp->fullBit  (c+308,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB));
	vcdp->fullBit  (c+309,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto) 
				 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
				| (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						  >> 1U))))));
	vcdp->fullBus  (c+310,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword),32);
	vcdp->fullBus  (c+311,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op),5);
	vcdp->fullBus  (c+312,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I),23);
	vcdp->fullBus  (c+313,((0x7fffffU & ((0xcU 
					      == (0xfU 
						  & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						     >> 1U)))
					      ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword
					      : ((0xdU 
						  == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))
						  ? 
						 ((0x7fe000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
									      >> 0xcU)))) 
						      << 0xdU)) 
						  | (0x1fffU 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
						  : 
						 ((0x40000U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						   ? 
						  ((0x7fc000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
									       >> 0xdU)))) 
						       << 0xeU)) 
						   | (0x3fffU 
						      & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
						   : 
						  ((0x7c0000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
									       >> 0x11U)))) 
						       << 0x12U)) 
						   | (0x3ffffU 
						      & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))))))),23);
	vcdp->fullBit  (c+314,((0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I)));
	vcdp->fullBus  (c+315,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock) 
				 << 5U) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc))),6);
	vcdp->fullBus  (c+316,((0xffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					 >> 0x10U))),8);
	vcdp->fullBus  (c+317,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
	vcdp->fullBit  (c+318,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2));
	vcdp->fullQuad (c+319,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result),33);
	vcdp->fullQuad (c+321,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result),33);
	vcdp->fullQuad (c+323,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result),33);
	vcdp->fullBus  (c+325,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result),32);
	vcdp->fullBit  (c+326,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy));
	vcdp->fullBit  (c+327,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone));
	vcdp->fullBit  (c+328,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op));
	vcdp->fullBit  (c+329,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux));
	vcdp->fullBit  (c+330,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done));
	vcdp->fullQuad (c+331,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire),33);
	vcdp->fullBit  (c+333,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner));
	vcdp->fullBit  (c+334,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2));
	vcdp->fullBit  (c+335,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
	vcdp->fullBus  (c+336,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
	vcdp->fullQuad (c+337,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
	vcdp->fullBit  (c+339,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
	vcdp->fullBit  (c+340,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
	vcdp->fullBit  (c+341,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
	vcdp->fullBit  (c+342,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
	vcdp->fullBus  (c+343,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
	vcdp->fullBit  (c+344,((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
				      >> 0x1fU))));
	vcdp->fullBit  (c+345,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3));
	vcdp->fullBit  (c+346,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned));
	vcdp->fullBit  (c+347,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb));
	vcdp->fullBit  (c+348,(vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5));
	vcdp->fullBit  (c+349,(vlTOPp->main__DOT__watchdogi__DOT__r_running));
	vcdp->fullBit  (c+350,(vlTOPp->main__DOT__watchdogi__DOT__wb_write));
	vcdp->fullBus  (c+351,(vlTOPp->main__DOT__watchdogi__DOT__r_value),16);
	vcdp->fullBit  (c+352,(vlTOPp->main__DOT__watchdogi__DOT__r_zero));
	vcdp->fullQuad (c+353,((((QData)((IData)(vlTOPp->main__DOT__wb_cyc)) 
				 << 0x20U) | (QData)((IData)(vlTOPp->main__DOT__wb_data)))),33);
	vcdp->fullBit  (c+355,(((IData)(vlTOPp->main__DOT__wb_stb) 
				& ((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
						   >> 0x13U))) 
				   & (2U == (7U & vlTOPp->main__DOT__wb_addr))))));
	vcdp->fullBus  (c+356,(vlTOPp->main__DOT__gpioi__DOT__hi_bits),16);
	vcdp->fullBus  (c+357,(vlTOPp->main__DOT__gpioi__DOT__low_bits),16);
	vcdp->fullBus  (c+358,((0x100000U | ((0xfffe0U 
					      & (vlTOPp->main__DOT__wb_data 
						 >> 0xcU)) 
					     | (0x1fU 
						& (vlTOPp->main__DOT__wb_data 
						   >> 0xbU))))),21);
	vcdp->fullBit  (c+359,(vlTOPp->main__DOT__hbi_pp__DOT__pp_stb));
	vcdp->fullBus  (c+360,(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer),6);
	vcdp->fullBit  (c+361,(vlTOPp->main__DOT__hbi_pp__DOT__loaded));
	vcdp->fullBit  (c+362,(vlTOPp->main__DOT__genbus__DOT__w_reset));
	vcdp->fullBit  (c+363,(vlTOPp->main__DOT__genbus__DOT__dec_stb));
	vcdp->fullBit  (c+364,(vlTOPp->main__DOT__genbus__DOT__iw_stb));
	vcdp->fullQuad (c+365,(vlTOPp->main__DOT__genbus__DOT__iw_word),34);
	vcdp->fullBit  (c+367,(vlTOPp->main__DOT__genbus__DOT__ow_stb));
	vcdp->fullQuad (c+368,(vlTOPp->main__DOT__genbus__DOT__ow_word),34);
	vcdp->fullBit  (c+370,(vlTOPp->main__DOT__genbus__DOT__int_busy));
	vcdp->fullBit  (c+371,(vlTOPp->main__DOT__genbus__DOT__idl_busy));
	vcdp->fullBit  (c+372,(vlTOPp->main__DOT__genbus__DOT__int_stb));
	vcdp->fullQuad (c+373,(vlTOPp->main__DOT__genbus__DOT__int_word),34);
	vcdp->fullBit  (c+375,(vlTOPp->main__DOT__genbus__DOT__hb_stb));
	vcdp->fullBit  (c+376,(vlTOPp->main__DOT__genbus__DOT__idl_stb));
	vcdp->fullQuad (c+377,(vlTOPp->main__DOT__genbus__DOT__idl_word),34);
	vcdp->fullBit  (c+379,(vlTOPp->main__DOT__genbus__DOT__hx_busy));
	vcdp->fullBit  (c+380,(vlTOPp->main__DOT__genbus__DOT__hx_stb));
	vcdp->fullBit  (c+381,(vlTOPp->main__DOT__genbus__DOT__nl_busy));
	vcdp->fullBus  (c+382,(vlTOPp->main__DOT__genbus__DOT__hx_byte),7);
	vcdp->fullBit  (c+383,(vlTOPp->main__DOT__genbus__DOT__fnl_stb));
	vcdp->fullBus  (c+384,(vlTOPp->main__DOT__genbus__DOT__fnl_byte),7);
	vcdp->fullBit  (c+385,(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded));
	vcdp->fullQuad (c+386,(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word),34);
	vcdp->fullBit  (c+388,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__newaddr));
	vcdp->fullBit  (c+389,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr));
	vcdp->fullBit  (c+390,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
				& (1U == (3U & (IData)(
						       (vlTOPp->main__DOT__genbus__DOT__iw_word 
							>> 0x20U)))))));
	vcdp->fullBit  (c+391,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
				& (0U == (3U & (IData)(
						       (vlTOPp->main__DOT__genbus__DOT__iw_word 
							>> 0x20U)))))));
	vcdp->fullBit  (c+392,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
				& (~ (IData)((vlTOPp->main__DOT__genbus__DOT__iw_word 
					      >> 0x21U))))));
	vcdp->fullBit  (c+393,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state));
	vcdp->fullBit  (c+394,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt));
	vcdp->fullBit  (c+395,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded));
	vcdp->fullBit  (c+396,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded));
	vcdp->fullBit  (c+397,(vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb));
	vcdp->fullBus  (c+398,(vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter),23);
	vcdp->fullBus  (c+399,(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len),4);
	vcdp->fullBus  (c+400,(vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char),8);
	vcdp->fullBit  (c+401,((1U & ((IData)(vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char) 
				      >> 7U))));
	vcdp->fullBit  (c+402,(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8));
	vcdp->fullBit  (c+403,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr));
	vcdp->fullBit  (c+404,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state));
	vcdp->fullBit  (c+405,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded));
	vcdp->fullBit  (c+406,(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11));
	vcdp->fullBit  (c+407,(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12));
	vcdp->fullBit  (c+408,(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner));
	vcdp->fullBit  (c+409,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we));
	vcdp->fullBus  (c+410,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr),23);
	vcdp->fullBus  (c+411,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data),32);
	vcdp->fullBus  (c+412,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel),4);
	vcdp->fullBit  (c+413,(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4));
	vcdp->fullBus  (c+414,((3U & vlTOPp->main__DOT__wb_addr)),2);
	vcdp->fullBus  (c+415,((((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err) 
				 << 0x1fU) | ((0x400000U 
					       & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)) 
						  << 0x16U)) 
					      | ((0x200000U 
						  & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)) 
						     << 0x15U)) 
						 | (((IData)(vlTOPp->main__DOT__wb_cyc) 
						     << 0x14U) 
						    | (((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
							<< 0x13U) 
						       | (((IData)(vlTOPp->main__DOT__wb_we) 
							   << 0x12U) 
							  | ((0x30000U 
							      & (vlTOPp->main__DOT__wb_addr 
								 << 0x10U)) 
							     | ((0xff00U 
								 & (vlTOPp->main__DOT__wb_data 
								    << 8U)) 
								| ((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)
								    ? (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data)
								    : 0U)))))))))),32);
	vcdp->fullBus  (c+416,((7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full))))),16);
	vcdp->fullBus  (c+417,((((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err) 
				 << 0xcU) | ((0x100U 
					      & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)) 
						 << 8U)) 
					     | (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data)))),32);
	vcdp->fullBit  (c+418,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err));
	vcdp->fullBus  (c+419,((7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))))),16);
	vcdp->fullBus  (c+420,(((0x6000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
					    << 0xdU)) 
				| (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err) 
				    << 0xcU) | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
						 << 0xaU) 
						| (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
						    << 8U) 
						   | ((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)
						       ? (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data)
						       : 0U)))))),32);
	vcdp->fullBus  (c+421,(((0x70000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
					     << 0x10U)) 
				| (7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)))))),32);
	vcdp->fullBit  (c+422,(vlTOPp->main__DOT__consolei__DOT__r_wb_ack));
	vcdp->fullBus  (c+423,(((0xffffe0U & (vlTOPp->main__DOT__wb_data 
					      >> 8U)) 
				| (0x1fU & (vlTOPp->main__DOT__wb_data 
					    >> 7U)))),24);
	vcdp->fullBit  (c+424,(vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5));
	vcdp->fullBit  (c+425,(vlTOPp->main__DOT__bustimeri__DOT__r_running));
	vcdp->fullBit  (c+426,(vlTOPp->main__DOT__bustimeri__DOT__wb_write));
	vcdp->fullBit  (c+427,(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload));
	vcdp->fullBus  (c+428,(vlTOPp->main__DOT__bustimeri__DOT__r_value),16);
	vcdp->fullBit  (c+429,(vlTOPp->main__DOT__bustimeri__DOT__r_zero));
	vcdp->fullBit  (c+430,(vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4));
	vcdp->fullBus  (c+431,((0x7ffU & vlTOPp->main__DOT__wb_addr)),11);
	vcdp->fullBit  (c+432,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_stb));
	vcdp->fullBit  (c+433,(vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3));
	vcdp->fullBus  (c+434,(vlTOPp->main__DOT__buspici__DOT__r_int_state),15);
	vcdp->fullBus  (c+435,(vlTOPp->main__DOT__buspici__DOT__r_int_enable),15);
	vcdp->fullBus  (c+436,(((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
				| (IData)(vlTOPp->main__DOT__bus_int_vector))),15);
	vcdp->fullBit  (c+437,(vlTOPp->main__DOT__buspici__DOT__r_gie));
	vcdp->fullBit  (c+438,(vlTOPp->main__DOT__buspici__DOT__w_any));
	vcdp->fullBus  (c+439,((0x7fffffffU & vlTOPp->main__DOT__wb_data)),31);
	vcdp->fullBus  (c+440,(vlTOPp->main__DOT__sdram_debug),32);
	vcdp->fullBit  (c+441,(vlTOPp->main__DOT__gpio_int));
	vcdp->fullBus  (c+442,(vlTOPp->main__DOT__zip_debug),32);
	vcdp->fullBit  (c+443,((1U & vlTOPp->main__DOT__zip_debug)));
	vcdp->fullBit  (c+444,(vlTOPp->main__DOT__cpu_reset));
	vcdp->fullBus  (c+445,(vlTOPp->main__DOT__pp_rx_data),8);
	vcdp->fullBus  (c+446,(vlTOPp->main__DOT__genbus__DOT__ps_data),8);
	vcdp->fullBus  (c+447,(vlTOPp->main__DOT__hb_dwbi_idata),32);
	vcdp->fullBit  (c+448,(vlTOPp->main__DOT__w_console_rx_stb));
	vcdp->fullBus  (c+449,(vlTOPp->main__DOT__w_console_rx_data),7);
	vcdp->fullBus  (c+450,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data),7);
	vcdp->fullBus  (c+451,(vlTOPp->main__DOT__r_buserr_addr),23);
	vcdp->fullBit  (c+452,(vlTOPp->main__DOT__wb_many_ack));
	vcdp->fullBus  (c+453,(vlTOPp->main__DOT__wb_idata),32);
	vcdp->fullBit  (c+454,(vlTOPp->main__DOT__wb_ack));
	vcdp->fullBus  (c+455,((vlTOPp->main__DOT__r_buserr_addr 
				<< 2U)),32);
	vcdp->fullBus  (c+456,(vlTOPp->main__DOT__buspic_data),32);
	vcdp->fullBus  (c+457,(vlTOPp->main__DOT__sdramscopei__DOT__o_bus_data),32);
	vcdp->fullBit  (c+458,((1U & ((IData)(vlTOPp->main__DOT__r_wb_dio_ack) 
				      >> 1U))));
	vcdp->fullBus  (c+459,(vlTOPp->main__DOT__r_wb_dio_data),32);
	vcdp->fullBus  (c+460,(vlTOPp->main__DOT__console_data),32);
	vcdp->fullBus  (c+461,(vlTOPp->main__DOT__r_wb_sio_data),32);
	vcdp->fullBus  (c+462,(vlTOPp->main__DOT__bkram_data),32);
	vcdp->fullBit  (c+463,(vlTOPp->main__DOT__hb_we));
	vcdp->fullBit  (c+464,(vlTOPp->main__DOT__hb_many_ack));
	vcdp->fullBus  (c+465,((0xffffffU & vlTOPp->main__DOT__hb_tmp_addr)),24);
	vcdp->fullBus  (c+466,(vlTOPp->main__DOT__hb_data),32);
	vcdp->fullBus  (c+467,(vlTOPp->main__DOT__hb_idata),32);
	vcdp->fullBit  (c+468,(vlTOPp->main__DOT__hb_ack));
	vcdp->fullBit  (c+469,((1U & (~ (vlTOPp->main__DOT__hb_tmp_addr 
					 >> 0x17U)))));
	vcdp->fullBit  (c+470,((1U & (vlTOPp->main__DOT__hb_tmp_addr 
				      >> 0x17U))));
	vcdp->fullBus  (c+471,(vlTOPp->main__DOT__r_wb_dio_ack),2);
	vcdp->fullBit  (c+472,(vlTOPp->main__DOT__r_wb_dio_bus_select));
	vcdp->fullBus  (c+473,(vlTOPp->main__DOT__r_wb_bus_select),3);
	vcdp->fullBus  (c+474,(vlTOPp->main__DOT__hb_tmp_addr),30);
	vcdp->fullBit  (c+475,(vlTOPp->main__DOT__sdramscopei__DOT__read_address));
	vcdp->fullBus  (c+476,(vlTOPp->main__DOT__sdramscopei__DOT__raddr),4);
	vcdp->fullBus  (c+477,(vlTOPp->main__DOT__sdramscopei__DOT__mem[0]),32);
	vcdp->fullBus  (c+478,(vlTOPp->main__DOT__sdramscopei__DOT__mem[1]),32);
	vcdp->fullBus  (c+479,(vlTOPp->main__DOT__sdramscopei__DOT__mem[2]),32);
	vcdp->fullBus  (c+480,(vlTOPp->main__DOT__sdramscopei__DOT__mem[3]),32);
	vcdp->fullBus  (c+481,(vlTOPp->main__DOT__sdramscopei__DOT__mem[4]),32);
	vcdp->fullBus  (c+482,(vlTOPp->main__DOT__sdramscopei__DOT__mem[5]),32);
	vcdp->fullBus  (c+483,(vlTOPp->main__DOT__sdramscopei__DOT__mem[6]),32);
	vcdp->fullBus  (c+484,(vlTOPp->main__DOT__sdramscopei__DOT__mem[7]),32);
	vcdp->fullBus  (c+485,(vlTOPp->main__DOT__sdramscopei__DOT__mem[8]),32);
	vcdp->fullBus  (c+486,(vlTOPp->main__DOT__sdramscopei__DOT__mem[9]),32);
	vcdp->fullBus  (c+487,(vlTOPp->main__DOT__sdramscopei__DOT__mem[10]),32);
	vcdp->fullBus  (c+488,(vlTOPp->main__DOT__sdramscopei__DOT__mem[11]),32);
	vcdp->fullBus  (c+489,(vlTOPp->main__DOT__sdramscopei__DOT__mem[12]),32);
	vcdp->fullBus  (c+490,(vlTOPp->main__DOT__sdramscopei__DOT__mem[13]),32);
	vcdp->fullBus  (c+491,(vlTOPp->main__DOT__sdramscopei__DOT__mem[14]),32);
	vcdp->fullBus  (c+492,(vlTOPp->main__DOT__sdramscopei__DOT__mem[15]),32);
	vcdp->fullBus  (c+493,(vlTOPp->main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe),32);
	vcdp->fullBus  (c+494,(vlTOPp->main__DOT__sdramscopei__DOT__this_addr),4);
	vcdp->fullBus  (c+495,(vlTOPp->main__DOT__sdramscopei__DOT__nxt_mem),32);
	vcdp->fullBit  (c+496,(vlTOPp->main__DOT__sdrami__DOT__r_we));
	vcdp->fullBus  (c+497,(vlTOPp->main__DOT__sdrami__DOT__r_data),32);
	vcdp->fullBus  (c+498,(vlTOPp->main__DOT__sdrami__DOT__r_sel),4);
	vcdp->fullBus  (c+499,(vlTOPp->main__DOT__sdrami__DOT__bank_row[0]),13);
	vcdp->fullBus  (c+500,(vlTOPp->main__DOT__sdrami__DOT__bank_row[1]),13);
	vcdp->fullBus  (c+501,(vlTOPp->main__DOT__sdrami__DOT__bank_row[2]),13);
	vcdp->fullBus  (c+502,(vlTOPp->main__DOT__sdrami__DOT__bank_row[3]),13);
	vcdp->fullBus  (c+503,(vlTOPp->main__DOT__sdrami__DOT__ram_data),16);
	vcdp->fullBus  (c+504,(vlTOPp->main__DOT__sdrami__DOT__last_ram_data),16);
	vcdp->fullBit  (c+505,(vlTOPp->main__DOT__sdrami__DOT__trigger));
	vcdp->fullBit  (c+506,((1U & vlTOPp->main__DOT__hb_tmp_addr)));
	vcdp->fullBus  (c+507,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc),4);
	vcdp->fullBit  (c+508,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)))));
	vcdp->fullBus  (c+509,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_data),32);
	vcdp->fullBus  (c+510,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[0]),32);
	vcdp->fullBus  (c+511,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[1]),32);
	vcdp->fullBus  (c+512,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[2]),32);
	vcdp->fullBus  (c+513,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[3]),32);
	vcdp->fullBus  (c+514,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[4]),32);
	vcdp->fullBus  (c+515,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[5]),32);
	vcdp->fullBus  (c+516,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[6]),32);
	vcdp->fullBus  (c+517,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[7]),32);
	vcdp->fullBus  (c+518,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[8]),32);
	vcdp->fullBus  (c+519,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[9]),32);
	vcdp->fullBus  (c+520,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[10]),32);
	vcdp->fullBus  (c+521,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[11]),32);
	vcdp->fullBus  (c+522,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[12]),32);
	vcdp->fullBus  (c+523,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[13]),32);
	vcdp->fullBus  (c+524,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[14]),32);
	vcdp->fullBus  (c+525,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[15]),32);
	vcdp->fullBus  (c+526,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[16]),32);
	vcdp->fullBus  (c+527,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[17]),32);
	vcdp->fullBus  (c+528,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[18]),32);
	vcdp->fullBus  (c+529,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[19]),32);
	vcdp->fullBus  (c+530,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[20]),32);
	vcdp->fullBus  (c+531,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[21]),32);
	vcdp->fullBus  (c+532,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[22]),32);
	vcdp->fullBus  (c+533,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[23]),32);
	vcdp->fullBus  (c+534,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[24]),32);
	vcdp->fullBus  (c+535,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[25]),32);
	vcdp->fullBus  (c+536,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[26]),32);
	vcdp->fullBus  (c+537,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[27]),32);
	vcdp->fullBus  (c+538,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[28]),32);
	vcdp->fullBus  (c+539,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[29]),32);
	vcdp->fullBus  (c+540,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[30]),32);
	vcdp->fullBus  (c+541,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[31]),32);
	vcdp->fullBus  (c+542,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags),4);
	vcdp->fullBus  (c+543,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags),4);
	vcdp->fullBit  (c+544,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step));
	vcdp->fullBit  (c+545,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted));
	vcdp->fullBit  (c+546,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
	vcdp->fullBus  (c+547,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn),4);
	vcdp->fullBus  (c+548,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_F),4);
	vcdp->fullBit  (c+549,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR));
	vcdp->fullBit  (c+550,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rA));
	vcdp->fullBit  (c+551,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB));
	vcdp->fullBit  (c+552,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_ALU));
	vcdp->fullBit  (c+553,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_M));
	vcdp->fullBit  (c+554,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wF));
	vcdp->fullBit  (c+555,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_break));
	vcdp->fullBit  (c+556,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_zI));
	vcdp->fullBus  (c+557,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_reg),5);
	vcdp->fullBus  (c+558,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av),32);
	vcdp->fullBus  (c+559,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv),32);
	vcdp->fullBit  (c+560,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_wF));
	vcdp->fullBus  (c+561,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F),7);
	vcdp->fullBus  (c+562,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result),32);
	vcdp->fullBus  (c+563,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
	vcdp->fullBus  (c+564,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_addr),23);
	vcdp->fullBus  (c+565,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
	vcdp->fullBit  (c+566,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe));
	vcdp->fullBus  (c+567,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val),32);
	vcdp->fullBus  (c+568,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc),25);
	vcdp->fullBus  (c+569,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value),32);
	vcdp->fullBus  (c+570,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Av),32);
	vcdp->fullBus  (c+571,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv),32);
	vcdp->fullBit  (c+572,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A));
	vcdp->fullBit  (c+573,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B));
	vcdp->fullBus  (c+574,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg),32);
	vcdp->fullBus  (c+575,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word),32);
	vcdp->fullBus  (c+576,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half),15);
	vcdp->fullBus  (c+577,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I),23);
	vcdp->fullBit  (c+578,((0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result)));
	vcdp->fullBit  (c+579,((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
				      >> 0x1fU))));
	vcdp->fullBit  (c+580,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl) 
				& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
				   != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
					     >> 0x1fU))))));
	vcdp->fullBit  (c+581,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c));
	vcdp->fullBit  (c+582,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign));
	vcdp->fullBit  (c+583,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl));
	vcdp->fullBit  (c+584,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl));
	vcdp->fullQuad (c+585,((((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[0U])))),64);
	vcdp->fullBit  (c+587,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi));
	vcdp->fullBit  (c+588,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl) 
				& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
				   != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
					     >> 0x1fU))))));
	vcdp->fullQuad (c+589,(((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
				<< 1U)),33);
	vcdp->fullQuad (c+591,((VL_ULL(0x1ffffffff) 
				& VL_SHIFTRS_QQI(33,33,5, 
						 ((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						  << 1U), 
						 (0x1fU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))),33);
	vcdp->fullBus  (c+593,((3U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))),2);
	vcdp->fullBit  (c+594,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__unused_aux));
	vcdp->fullArray(c+595,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result),66);
	vcdp->fullQuad (c+598,((((QData)((IData)((1U 
						  & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
						     & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
							>> 0x1fU))))) 
				 << 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)))),33);
	vcdp->fullQuad (c+600,((((QData)((IData)((1U 
						  & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
						     & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
							>> 0x1fU))))) 
				 << 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))),33);
	vcdp->fullBus  (c+602,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count),6);
	vcdp->fullQuad (c+603,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a),33);
	vcdp->fullQuad (c+605,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b),33);
	vcdp->fullArray(c+607,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial),66);
	vcdp->fullBit  (c+610,((0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count))));
	vcdp->fullBit  (c+611,((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))));
	vcdp->fullQuad (c+612,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
	vcdp->fullBit  (c+614,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
	vcdp->fullBit  (c+615,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
	vcdp->fullBus  (c+616,((7U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))),3);
	vcdp->fullBus  (c+617,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op),4);
	vcdp->fullBus  (c+618,(vlTOPp->main__DOT__gpioi__DOT__x_gpio),2);
	vcdp->fullBus  (c+619,(vlTOPp->main__DOT__gpioi__DOT__q_gpio),2);
	vcdp->fullBus  (c+620,(vlTOPp->main__DOT__gpioi__DOT__r_gpio),2);
	vcdp->fullBit  (c+621,(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir));
	vcdp->fullBit  (c+622,(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir));
	vcdp->fullBit  (c+623,((1U & (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir)))));
	vcdp->fullBit  (c+624,((1U & (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir)))));
	vcdp->fullBus  (c+625,(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_data),8);
	vcdp->fullBit  (c+626,(vlTOPp->main__DOT__hbi_pp__DOT__r_dbg));
	vcdp->fullBus  (c+627,(vlTOPp->main__DOT__genbus__DOT__dec_bits),5);
	vcdp->fullBus  (c+628,(vlTOPp->main__DOT__genbus__DOT__hb_bits),5);
	vcdp->fullBit  (c+629,((1U & ((IData)(vlTOPp->main__DOT__pp_rx_data) 
				      >> 7U))));
	vcdp->fullBit  (c+630,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc));
	vcdp->fullBus  (c+631,(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word),32);
	vcdp->fullBus  (c+632,((0x7fffffU & vlTOPp->main__DOT__hb_tmp_addr)),23);
	vcdp->fullBit  (c+633,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err));
	vcdp->fullBus  (c+634,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data),7);
	vcdp->fullBus  (c+635,(vlTOPp->main__DOT__consolei__DOT__r_wb_addr),2);
	vcdp->fullBus  (c+636,(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count),16);
	vcdp->fullBit  (c+637,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb));
	vcdp->fullBus  (c+638,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data),32);
	vcdp->fullBus  (c+639,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr),11);
	vcdp->fullBus  (c+640,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel),4);
	vcdp->fullBit  (c+641,(vlTOPp->i_clk));
	vcdp->fullBit  (c+642,(vlTOPp->i_reset));
	vcdp->fullBit  (c+643,(vlTOPp->o_ram_cke));
	vcdp->fullBit  (c+644,(vlTOPp->o_ram_cs_n));
	vcdp->fullBit  (c+645,(vlTOPp->o_ram_ras_n));
	vcdp->fullBit  (c+646,(vlTOPp->o_ram_cas_n));
	vcdp->fullBit  (c+647,(vlTOPp->o_ram_we_n));
	vcdp->fullBus  (c+648,(vlTOPp->o_ram_bs),2);
	vcdp->fullBus  (c+649,(vlTOPp->o_ram_addr),13);
	vcdp->fullBus  (c+650,(vlTOPp->i_ram_data),16);
	vcdp->fullBus  (c+651,(vlTOPp->o_ram_data),16);
	vcdp->fullBus  (c+652,(vlTOPp->o_ram_dqm),2);
	vcdp->fullBus  (c+653,(vlTOPp->o_debug),32);
	vcdp->fullBit  (c+654,(vlTOPp->o_ram_drive_data));
	vcdp->fullBit  (c+655,(vlTOPp->i_pp_clk));
	vcdp->fullBit  (c+656,(vlTOPp->i_pp_dir));
	vcdp->fullBus  (c+657,(vlTOPp->i_pp_data),8);
	vcdp->fullBus  (c+658,(vlTOPp->o_pp_data),8);
	vcdp->fullBit  (c+659,(vlTOPp->o_pp_clkfb));
	vcdp->fullBit  (c+660,(vlTOPp->o_pp_dbg));
	vcdp->fullBus  (c+661,(vlTOPp->i_gpio),2);
	vcdp->fullBus  (c+662,(vlTOPp->o_gpio),11);
	vcdp->fullBus  (c+663,((((IData)(vlTOPp->main__DOT__watchdog_reset) 
				 << 1U) | (IData)(vlTOPp->i_reset))),8);
	vcdp->fullBit  (c+664,((1U & (~ (IData)(vlTOPp->o_ram_we_n)))));
	vcdp->fullBit  (c+665,(((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed) 
				& (((~ (IData)(vlTOPp->o_ram_we_n)) 
				    & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) 
				   | ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				      >> 1U)))));
	vcdp->fullBit  (c+666,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid));
	vcdp->fullBus  (c+667,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc),25);
	vcdp->fullBit  (c+668,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim));
	vcdp->fullBus  (c+669,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv),23);
	vcdp->fullBit  (c+670,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim));
	vcdp->fullBus  (c+671,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim_immv),23);
	vcdp->fullBit  (c+672,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce));
	vcdp->fullBus  (c+673,(0xa00000U),32);
	vcdp->fullBus  (c+674,(0x17U),32);
	vcdp->fullBus  (c+675,(0x10U),32);
	vcdp->fullBit  (c+676,(1U));
	vcdp->fullBus  (c+677,(8U),32);
	vcdp->fullBus  (c+678,(6U),32);
	vcdp->fullBus  (c+679,(vlTOPp->main__DOT__ram_data),16);
	vcdp->fullBit  (c+680,(vlTOPp->main__DOT__zip_halted));
	vcdp->fullBus  (c+681,(2U),32);
	vcdp->fullBus  (c+682,(0xbU),32);
	vcdp->fullBit  (c+683,(vlTOPp->main__DOT__wbubus_dbg));
	vcdp->fullBit  (c+684,(vlTOPp->main__DOT__buserr_ack));
	vcdp->fullBit  (c+685,(vlTOPp->main__DOT__buserr_stall));
	vcdp->fullBit  (c+686,(vlTOPp->main__DOT__buspic_ack));
	vcdp->fullBit  (c+687,(vlTOPp->main__DOT__buspic_stall));
	vcdp->fullBit  (c+688,(vlTOPp->main__DOT__gpio_ack));
	vcdp->fullBit  (c+689,(vlTOPp->main__DOT__gpio_stall));
	vcdp->fullBit  (c+690,(vlTOPp->main__DOT__pwrcount_ack));
	vcdp->fullBit  (c+691,(vlTOPp->main__DOT__pwrcount_stall));
	vcdp->fullBit  (c+692,(0U));
	vcdp->fullBus  (c+693,(0x20200109U),32);
	vcdp->fullBit  (c+694,(vlTOPp->main__DOT__zip_dwb_ack));
	vcdp->fullBit  (c+695,(vlTOPp->main__DOT__zip_dwb_stall));
	vcdp->fullBit  (c+696,(vlTOPp->main__DOT__zip_dwb_err));
	vcdp->fullBus  (c+697,(0xfU),4);
	vcdp->fullBus  (c+698,(0U),11);
	vcdp->fullBus  (c+699,(4U),5);
	vcdp->fullBus  (c+700,(0x20U),32);
	vcdp->fullBus  (c+701,(4U),32);
	vcdp->fullBus  (c+702,(4U),4);
	vcdp->fullBit  (c+703,(1U));
	vcdp->fullBus  (c+704,(1U),32);
	vcdp->fullBus  (c+705,(9U),32);
	vcdp->fullBus  (c+706,(0xdU),32);
	vcdp->fullBus  (c+707,(0xf0U),8);
	vcdp->fullBus  (c+708,(0xaU),32);
	vcdp->fullBit  (c+709,(0U));
	vcdp->fullBus  (c+710,(0U),32);
	vcdp->fullBus  (c+711,(0x280000U),23);
	vcdp->fullBus  (c+712,(0U),32);
	vcdp->fullBus  (c+713,(0U),25);
	vcdp->fullBus  (c+714,(0x1c1U),9);
	vcdp->fullBus  (c+715,(0U),4);
	vcdp->fullBus  (c+716,(0U),2);
	vcdp->fullBus  (c+717,(0x21U),7);
	vcdp->fullBus  (c+718,(3U),32);
	vcdp->fullBus  (c+719,(5U),32);
	vcdp->fullBus  (c+720,(0U),3);
	vcdp->fullBus  (c+721,(0U),16);
	vcdp->fullBus  (c+722,(0x13U),32);
	vcdp->fullBus  (c+723,(0x1eU),32);
	vcdp->fullBus  (c+724,(0x22U),32);
	vcdp->fullBus  (c+725,(0xfU),32);
    }
}
