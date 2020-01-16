// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


//======================

void Vmain::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vmain* t=(Vmain*)userthis;
    Vmain__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vmain::traceChgThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vmain::traceChgThis__2(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
			     & (~ (IData)(vlTOPp->main__DOT__zip_stall)))));
	vcdp->chgBit  (c+2,(vlTOPp->main__DOT__watchdog_reset));
	vcdp->chgBit  (c+3,((1U & (~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)))));
	vcdp->chgBit  (c+4,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full));
	vcdp->chgBit  (c+5,(vlTOPp->main__DOT__bustimer_int));
	vcdp->chgBit  (c+6,(vlTOPp->main__DOT__buspici__DOT__r_interrupt));
	vcdp->chgBit  (c+7,(vlTOPp->main__DOT__pp_rx_stb));
	vcdp->chgBit  (c+8,(vlTOPp->main__DOT__genbus__DOT__ps_full));
	vcdp->chgBit  (c+9,(vlTOPp->main__DOT__pp_tx_busy));
	vcdp->chgBit  (c+10,(vlTOPp->main__DOT__hb_dwbi_cyc));
	vcdp->chgBit  (c+11,(vlTOPp->main__DOT__hb_dwbi_stb));
	vcdp->chgBit  (c+12,(vlTOPp->main__DOT__hb_dwbi_we));
	vcdp->chgBit  (c+13,(vlTOPp->main__DOT__hb_dwbi_ack));
	vcdp->chgBit  (c+14,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb));
	vcdp->chgBit  (c+15,(vlTOPp->main__DOT__hb_dwbi_err));
	vcdp->chgBus  (c+16,(vlTOPp->main__DOT__hb_dwbi_addr),23);
	vcdp->chgBus  (c+17,(vlTOPp->main__DOT__hb_dwbi_odata),32);
	vcdp->chgBus  (c+18,(vlTOPp->main__DOT__hb_dwbi_sel),4);
	vcdp->chgBit  (c+19,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write));
	vcdp->chgBit  (c+20,(vlTOPp->main__DOT__w_console_busy));
	vcdp->chgBus  (c+21,(vlTOPp->main__DOT__r_pwrcount_data),32);
	vcdp->chgBus  (c+22,(vlTOPp->main__DOT__bus_int_vector),15);
	vcdp->chgBit  (c+23,(vlTOPp->main__DOT__wb_cyc));
	vcdp->chgBit  (c+24,(vlTOPp->main__DOT__wb_stb));
	vcdp->chgBit  (c+25,(vlTOPp->main__DOT__wb_we));
	vcdp->chgBit  (c+26,(vlTOPp->main__DOT__wb_stall));
	vcdp->chgBit  (c+27,(vlTOPp->main__DOT__wb_err));
	vcdp->chgBit  (c+28,(((IData)(vlTOPp->main__DOT__wb_stb) 
			      & (0U == (((1U == (0xfU 
						 & (vlTOPp->main__DOT__wb_addr 
						    >> 0x13U))) 
					 << 5U) | (
						   ((2U 
						     == 
						     (0xfU 
						      & (vlTOPp->main__DOT__wb_addr 
							 >> 0x13U))) 
						    << 4U) 
						   | (((3U 
							== 
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
	vcdp->chgBus  (c+29,(vlTOPp->main__DOT__wb_addr),23);
	vcdp->chgBus  (c+30,(vlTOPp->main__DOT__wb_data),32);
	vcdp->chgBus  (c+31,(vlTOPp->main__DOT__wb_sel),4);
	vcdp->chgBit  (c+32,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (0U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->chgBit  (c+33,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (1U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->chgBit  (c+34,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (2U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->chgBus  (c+35,((((IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits) 
			       << 0x10U) | (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits))),32);
	vcdp->chgBit  (c+36,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (3U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->chgBit  (c+37,(((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (4U == (7U & vlTOPp->main__DOT__wb_addr)))));
	vcdp->chgBit  (c+38,(((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & (~ vlTOPp->main__DOT__wb_addr))));
	vcdp->chgBit  (c+39,(vlTOPp->main__DOT__bustimer_ack));
	vcdp->chgBus  (c+40,((((IData)(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload) 
			       << 0x1fU) | (IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value))),32);
	vcdp->chgBit  (c+41,(((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					      >> 0x13U))) 
			      & vlTOPp->main__DOT__wb_addr)));
	vcdp->chgBit  (c+42,(vlTOPp->main__DOT__watchdog_ack));
	vcdp->chgBus  (c+43,(vlTOPp->main__DOT__watchdogi__DOT__r_value),32);
	vcdp->chgBit  (c+44,((1U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					     >> 0x13U)))));
	vcdp->chgBit  (c+45,(vlTOPp->main__DOT__sdramscope_ack));
	vcdp->chgBit  (c+46,((2U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					     >> 0x13U)))));
	vcdp->chgBit  (c+47,((3U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					     >> 0x13U)))));
	vcdp->chgBit  (c+48,(vlTOPp->main__DOT__console_ack));
	vcdp->chgBit  (c+49,((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					     >> 0x13U)))));
	vcdp->chgBit  (c+50,(vlTOPp->main__DOT__r_wb_sio_ack));
	vcdp->chgBit  (c+51,((5U == (0xfU & (vlTOPp->main__DOT__wb_addr 
					     >> 0x13U)))));
	vcdp->chgBit  (c+52,(vlTOPp->main__DOT__bkram_ack));
	vcdp->chgBit  (c+53,((8U == (8U & (vlTOPp->main__DOT__wb_addr 
					   >> 0x13U)))));
	vcdp->chgBit  (c+54,((1U & (IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack))));
	vcdp->chgBit  (c+55,(vlTOPp->main__DOT__sdram_stall));
	vcdp->chgBus  (c+56,(vlTOPp->main__DOT__sdram_data),32);
	vcdp->chgBit  (c+57,(vlTOPp->main__DOT__zip_cyc));
	vcdp->chgBit  (c+58,(vlTOPp->main__DOT__zip_stb));
	vcdp->chgBit  (c+59,(vlTOPp->main__DOT__zip_we));
	vcdp->chgBit  (c+60,(vlTOPp->main__DOT__zip_stall));
	vcdp->chgBit  (c+61,(vlTOPp->main__DOT__zip_err));
	vcdp->chgBus  (c+62,(vlTOPp->main__DOT__zip_addr),23);
	vcdp->chgBus  (c+63,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data),32);
	vcdp->chgBus  (c+64,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel),4);
	vcdp->chgBit  (c+65,(vlTOPp->main__DOT__zip_ack));
	vcdp->chgBit  (c+66,(vlTOPp->main__DOT__hb_cyc));
	vcdp->chgBit  (c+67,(vlTOPp->main__DOT__hb_stb));
	vcdp->chgBit  (c+68,(vlTOPp->main__DOT__hb_stall));
	vcdp->chgBit  (c+69,(vlTOPp->main__DOT__hb_err));
	vcdp->chgBit  (c+70,(((IData)(vlTOPp->main__DOT__hb_stb) 
			      & (0U == ((2U & ((~ (vlTOPp->main__DOT__hb_tmp_addr 
						   >> 0x17U)) 
					       << 1U)) 
					| (1U & (vlTOPp->main__DOT__hb_tmp_addr 
						 >> 0x17U)))))));
	vcdp->chgBit  (c+71,(vlTOPp->main__DOT__hb_dwb_ack));
	vcdp->chgBit  (c+72,(((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
			      | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb))));
	vcdp->chgBit  (c+73,(((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
			      & (IData)(vlTOPp->main__DOT__hb_dwbi_err))));
	vcdp->chgBit  (c+74,(vlTOPp->main__DOT__swic__DOT__dbg_ack));
	vcdp->chgBit  (c+75,(vlTOPp->main__DOT__swic__DOT__dbg_stall));
	vcdp->chgBus  (c+76,(((1U & vlTOPp->main__DOT__hb_tmp_addr)
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
	vcdp->chgBit  (c+77,((((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped) 
			       & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) 
			      & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt)))));
	vcdp->chgBit  (c+78,(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7));
	vcdp->chgBit  (c+79,((1U & vlTOPp->main__DOT__wb_addr)));
	vcdp->chgBit  (c+80,(vlTOPp->main__DOT__sdramscopei__DOT__read_from_data));
	vcdp->chgBit  (c+81,(((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
			      & (IData)(vlTOPp->main__DOT__wb_we))));
	vcdp->chgBit  (c+82,(vlTOPp->main__DOT__sdramscopei__DOT__write_to_control));
	vcdp->chgBit  (c+83,((1U & (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				       >> 2U)))));
	vcdp->chgBit  (c+84,((1U & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				    >> 1U))));
	vcdp->chgBit  (c+85,((1U & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))));
	vcdp->chgBus  (c+86,(vlTOPp->main__DOT__sdramscopei__DOT__br_config),3);
	vcdp->chgBus  (c+87,(vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff),4);
	vcdp->chgBit  (c+88,(vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered));
	vcdp->chgBit  (c+89,(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed));
	vcdp->chgBus  (c+90,(vlTOPp->main__DOT__sdramscopei__DOT__counter),4);
	vcdp->chgBit  (c+91,(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped));
	vcdp->chgBus  (c+92,(vlTOPp->main__DOT__sdramscopei__DOT__waddr),4);
	vcdp->chgBit  (c+93,(vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack));
	vcdp->chgBit  (c+94,(vlTOPp->main__DOT__sdramscopei__DOT__br_pre_wb_ack));
	vcdp->chgBus  (c+95,(vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff),20);
	vcdp->chgBit  (c+96,(vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt));
	vcdp->chgBit  (c+97,(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3));
	vcdp->chgBit  (c+98,(vlTOPp->main__DOT__sdrami__DOT__need_refresh));
	vcdp->chgBus  (c+99,(vlTOPp->main__DOT__sdrami__DOT__refresh_clk),10);
	vcdp->chgBit  (c+100,(vlTOPp->main__DOT__sdrami__DOT__refresh_cmd));
	vcdp->chgBit  (c+101,(vlTOPp->main__DOT__sdrami__DOT__in_refresh));
	vcdp->chgBus  (c+102,(vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk),3);
	vcdp->chgBus  (c+103,(vlTOPp->main__DOT__sdrami__DOT__bank_active[0]),3);
	vcdp->chgBus  (c+104,(vlTOPp->main__DOT__sdrami__DOT__bank_active[1]),3);
	vcdp->chgBus  (c+105,(vlTOPp->main__DOT__sdrami__DOT__bank_active[2]),3);
	vcdp->chgBus  (c+106,(vlTOPp->main__DOT__sdrami__DOT__bank_active[3]),3);
	vcdp->chgBus  (c+107,(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack),6);
	vcdp->chgBit  (c+108,(vlTOPp->main__DOT__sdrami__DOT__r_pending));
	vcdp->chgBus  (c+109,(vlTOPp->main__DOT__sdrami__DOT__r_addr),23);
	vcdp->chgBus  (c+110,(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle),3);
	vcdp->chgBus  (c+111,(vlTOPp->main__DOT__sdrami__DOT__m_state),2);
	vcdp->chgBit  (c+112,(vlTOPp->main__DOT__sdrami__DOT__bus_cyc));
	vcdp->chgBit  (c+113,(vlTOPp->main__DOT__sdrami__DOT__nxt_dmod));
	vcdp->chgBit  (c+114,(vlTOPp->main__DOT__sdrami__DOT__pending));
	vcdp->chgBus  (c+115,(vlTOPp->main__DOT__sdrami__DOT__fwd_addr),23);
	vcdp->chgBus  (c+116,((3U & (vlTOPp->main__DOT__wb_addr 
				     >> 8U))),2);
	vcdp->chgBus  (c+117,((3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
				     >> 8U))),2);
	vcdp->chgBus  (c+118,((3U & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
				     >> 8U))),2);
	vcdp->chgBus  (c+119,((0x1fffU & (vlTOPp->main__DOT__wb_addr 
					  >> 0xaU))),13);
	vcdp->chgBus  (c+120,((0x1fffU & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					  >> 0xaU))),13);
	vcdp->chgBus  (c+121,((0x1fffU & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
					  >> 0xaU))),13);
	vcdp->chgBit  (c+122,(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid));
	vcdp->chgBit  (c+123,(vlTOPp->main__DOT__sdrami__DOT__fwd_bank_valid));
	vcdp->chgBit  (c+124,(vlTOPp->main__DOT__sdrami__DOT__maintenance_mode));
	vcdp->chgBit  (c+125,(vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n));
	vcdp->chgBit  (c+126,(vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n));
	vcdp->chgBit  (c+127,(vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n));
	vcdp->chgBit  (c+128,(vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n));
	vcdp->chgBit  (c+129,(vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod));
	vcdp->chgBus  (c+130,(vlTOPp->main__DOT__sdrami__DOT__m_ram_addr),13);
	vcdp->chgBit  (c+131,(vlTOPp->main__DOT__sdrami__DOT__startup_hold));
	vcdp->chgBus  (c+132,(vlTOPp->main__DOT__sdrami__DOT__startup_idle),16);
	vcdp->chgBus  (c+133,(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks),4);
	vcdp->chgBit  (c+134,(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero));
	vcdp->chgBus  (c+135,((0x1ffU & vlTOPp->main__DOT__sdrami__DOT__fwd_addr)),9);
	vcdp->chgBit  (c+136,(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16));
	vcdp->chgBit  (c+137,(vlTOPp->main__DOT__swic__DOT__cpu_break));
	vcdp->chgBit  (c+138,(vlTOPp->main__DOT__swic__DOT__dbg_cmd_write));
	vcdp->chgBit  (c+139,(vlTOPp->main__DOT__swic__DOT__cmd_reset));
	vcdp->chgBit  (c+140,(vlTOPp->main__DOT__swic__DOT__cmd_halt));
	vcdp->chgBit  (c+141,(vlTOPp->main__DOT__swic__DOT__cmd_step));
	vcdp->chgBit  (c+142,(vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache));
	vcdp->chgBus  (c+143,(vlTOPp->main__DOT__swic__DOT__cmd_addr),5);
	vcdp->chgBus  (c+144,((((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
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
	vcdp->chgBit  (c+145,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
			       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))));
	vcdp->chgBit  (c+146,(vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb));
	vcdp->chgBit  (c+147,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we));
	vcdp->chgBit  (c+148,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
			       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))));
	vcdp->chgBit  (c+149,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
			       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))));
	vcdp->chgBus  (c+150,((((IData)(vlTOPp->main__DOT__hb_cyc) 
				<< 4U) | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb) 
					   << 3U) | 
					  ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
					     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid))) 
					    << 1U) 
					   | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
					      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))))))),5);
	vcdp->chgBit  (c+151,(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
	vcdp->chgBus  (c+152,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags),15);
	vcdp->chgBus  (c+153,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags),15);
	vcdp->chgBit  (c+154,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en));
	vcdp->chgBit  (c+155,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep));
	vcdp->chgBit  (c+156,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break));
	vcdp->chgBit  (c+157,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
	vcdp->chgBit  (c+158,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie));
	vcdp->chgBit  (c+159,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
	vcdp->chgBit  (c+160,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache));
	vcdp->chgBit  (c+161,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
	vcdp->chgBit  (c+162,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i));
	vcdp->chgBit  (c+163,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag));
	vcdp->chgBit  (c+164,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
	vcdp->chgBit  (c+165,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag));
	vcdp->chgBit  (c+166,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag));
	vcdp->chgBit  (c+167,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
	vcdp->chgBit  (c+168,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
	vcdp->chgBit  (c+169,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce));
	vcdp->chgBit  (c+170,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall));
	vcdp->chgBus  (c+171,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc),25);
	vcdp->chgBus  (c+172,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc),25);
	vcdp->chgBit  (c+173,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
	vcdp->chgBit  (c+174,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled));
	vcdp->chgBit  (c+175,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
	vcdp->chgBit  (c+176,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
	vcdp->chgBit  (c+177,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
	vcdp->chgBit  (c+178,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
	vcdp->chgBit  (c+179,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err));
	vcdp->chgBus  (c+180,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr),23);
	vcdp->chgBus  (c+181,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction),32);
	vcdp->chgBit  (c+182,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
	vcdp->chgBit  (c+183,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
	vcdp->chgBit  (c+184,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled));
	vcdp->chgBit  (c+185,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem));
	vcdp->chgBit  (c+186,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu));
	vcdp->chgBit  (c+187,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div));
	vcdp->chgBit  (c+188,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu));
	vcdp->chgBit  (c+189,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))));
	vcdp->chgBit  (c+190,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
	vcdp->chgBus  (c+191,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15))),5);
	vcdp->chgBus  (c+192,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))),5);
	vcdp->chgBus  (c+193,((0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14))),5);
	vcdp->chgBus  (c+194,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR),5);
	vcdp->chgBus  (c+195,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB),5);
	vcdp->chgBit  (c+196,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
				     >> 6U))));
	vcdp->chgBit  (c+197,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
				     >> 6U))));
	vcdp->chgBit  (c+198,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
				     >> 5U))));
	vcdp->chgBit  (c+199,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
				     >> 5U))));
	vcdp->chgBit  (c+200,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				     >> 6U))));
	vcdp->chgBit  (c+201,((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				     >> 5U))));
	vcdp->chgBit  (c+202,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_DIV));
	vcdp->chgBit  (c+203,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_FP));
	vcdp->chgBit  (c+204,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_lock));
	vcdp->chgBit  (c+205,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid));
	vcdp->chgBus  (c+206,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I),32);
	vcdp->chgBit  (c+207,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal));
	vcdp->chgBit  (c+208,(((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
				 >> 6U) & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR)) 
			       & ((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
					 >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))));
	vcdp->chgBus  (c+209,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av),32);
	vcdp->chgBus  (c+210,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv),32);
	vcdp->chgBus  (c+211,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v),32);
	vcdp->chgBus  (c+212,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v),32);
	vcdp->chgBus  (c+213,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB)
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
	vcdp->chgBus  (c+214,((0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)
				        ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
				        : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags)))),4);
	vcdp->chgBus  (c+215,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F),8);
	vcdp->chgBit  (c+216,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
	vcdp->chgBit  (c+217,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid));
	vcdp->chgBit  (c+218,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal));
	vcdp->chgBit  (c+219,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid));
	vcdp->chgBit  (c+220,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid));
	vcdp->chgBit  (c+221,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid));
	vcdp->chgBit  (c+222,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
	vcdp->chgBus  (c+223,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags),4);
	vcdp->chgBit  (c+224,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid));
	vcdp->chgBit  (c+225,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy));
	vcdp->chgBit  (c+226,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
	vcdp->chgBit  (c+227,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR));
	vcdp->chgBit  (c+228,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF));
	vcdp->chgBit  (c+229,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
	vcdp->chgBit  (c+230,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
	vcdp->chgBit  (c+231,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
	vcdp->chgBit  (c+232,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
	vcdp->chgBit  (c+233,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err));
	vcdp->chgBit  (c+234,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err));
	vcdp->chgBit  (c+235,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl));
	vcdp->chgBit  (c+236,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl));
	vcdp->chgBit  (c+237,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
	vcdp->chgBit  (c+238,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
	vcdp->chgBit  (c+239,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we));
	vcdp->chgBit  (c+240,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
	vcdp->chgBit  (c+241,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce));
	vcdp->chgBit  (c+242,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error));
	vcdp->chgBit  (c+243,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy));
	vcdp->chgBit  (c+244,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid));
	vcdp->chgBus  (c+245,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result),32);
	vcdp->chgBus  (c+246,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags),4);
	vcdp->chgBit  (c+247,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional));
	vcdp->chgBit  (c+248,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv));
	vcdp->chgBit  (c+249,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce));
	vcdp->chgBit  (c+250,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce));
	vcdp->chgBit  (c+251,((0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))));
	vcdp->chgBit  (c+252,((0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))));
	vcdp->chgBit  (c+253,((0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
	vcdp->chgBit  (c+254,((0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
	vcdp->chgBus  (c+255,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id),5);
	vcdp->chgBus  (c+256,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl),32);
	vcdp->chgBus  (c+257,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl),32);
	vcdp->chgBit  (c+258,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt));
	vcdp->chgBit  (c+259,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt));
	vcdp->chgBus  (c+260,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc),25);
	vcdp->chgBit  (c+261,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc));
	vcdp->chgBit  (c+262,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
				& (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
			       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc))));
	vcdp->chgBus  (c+263,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc),32);
	vcdp->chgBit  (c+264,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall));
	vcdp->chgBit  (c+265,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger));
	vcdp->chgBus  (c+266,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags),32);
	vcdp->chgBus  (c+267,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc),28);
	vcdp->chgBus  (c+268,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr),28);
	vcdp->chgQuad (c+269,((((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
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
	vcdp->chgBus  (c+271,((0x7fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
					>> 0x19U))),7);
	vcdp->chgBit  (c+272,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))));
	vcdp->chgBit  (c+273,(((0U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight)) 
			       | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
				  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))));
	vcdp->chgBit  (c+274,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle));
	vcdp->chgBit  (c+275,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid));
	vcdp->chgBus  (c+276,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight),2);
	vcdp->chgBit  (c+277,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal));
	vcdp->chgBit  (c+278,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2));
	vcdp->chgBus  (c+279,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14),7);
	vcdp->chgBus  (c+280,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15),7);
	vcdp->chgBus  (c+281,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16),7);
	vcdp->chgBus  (c+282,((0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					>> 0x16U))),5);
	vcdp->chgBit  (c+283,((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						>> 1U)))));
	vcdp->chgBit  (c+284,((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->chgBit  (c+285,((8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					      >> 1U)))));
	vcdp->chgBit  (c+286,((9U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->chgBit  (c+287,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU));
	vcdp->chgBit  (c+288,((8U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->chgBit  (c+289,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop));
	vcdp->chgBit  (c+290,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock));
	vcdp->chgBit  (c+291,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
			       & (0x1eU == (0x1fU & 
					    (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					     >> 0x16U))))));
	vcdp->chgBit  (c+292,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
			       & (0x1cU == (0x1fU & 
					    (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					     >> 0x16U))))));
	vcdp->chgBit  (c+293,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special));
	vcdp->chgBit  (c+294,((2U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))));
	vcdp->chgBit  (c+295,(((5U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					       >> 1U))) 
			       | (0xcU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)))));
	vcdp->chgBit  (c+296,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc));
	vcdp->chgBit  (c+297,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc));
	vcdp->chgBit  (c+298,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
			       & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB))))));
	vcdp->chgBit  (c+299,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
			       & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB))))));
	vcdp->chgBus  (c+300,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond),4);
	vcdp->chgBit  (c+301,(((8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
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
	vcdp->chgBit  (c+302,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem));
	vcdp->chgBit  (c+303,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto));
	vcdp->chgBit  (c+304,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div));
	vcdp->chgBit  (c+305,(((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				     >> 0x1fU)) & (3U 
						   == 
						   (3U 
						    & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						       >> 0x19U)))) 
				& (7U != (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
						>> 1U)))) 
			       & (0U != (3U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					       >> 0x17U))))));
	vcdp->chgBit  (c+306,((1U & (~ (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto) 
					 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
					| (8U == (0xfU 
						  & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						     >> 1U))))))));
	vcdp->chgBit  (c+307,(((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
				 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU) 
				     & (8U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
				    & (0xdU != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)))) 
				| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto)) 
			       | (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						 >> 1U))))));
	vcdp->chgBit  (c+308,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB));
	vcdp->chgBit  (c+309,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto) 
				| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
			       | (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						 >> 1U))))));
	vcdp->chgBus  (c+310,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword),32);
	vcdp->chgBus  (c+311,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op),5);
	vcdp->chgBus  (c+312,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I),23);
	vcdp->chgBus  (c+313,((0x7fffffU & ((0xcU == 
					     (0xfU 
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
	vcdp->chgBit  (c+314,((0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I)));
	vcdp->chgBus  (c+315,((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock) 
				<< 5U) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc))),6);
	vcdp->chgBus  (c+316,((0xffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					>> 0x10U))),8);
	vcdp->chgBus  (c+317,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
	vcdp->chgBit  (c+318,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2));
	vcdp->chgQuad (c+319,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result),33);
	vcdp->chgQuad (c+321,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result),33);
	vcdp->chgQuad (c+323,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result),33);
	vcdp->chgBus  (c+325,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result),32);
	vcdp->chgBit  (c+326,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy));
	vcdp->chgBit  (c+327,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone));
	vcdp->chgBit  (c+328,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op));
	vcdp->chgBit  (c+329,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux));
	vcdp->chgBit  (c+330,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done));
	vcdp->chgQuad (c+331,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire),33);
	vcdp->chgBit  (c+333,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner));
	vcdp->chgBit  (c+334,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2));
	vcdp->chgBit  (c+335,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
	vcdp->chgBus  (c+336,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
	vcdp->chgQuad (c+337,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
	vcdp->chgBit  (c+339,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
	vcdp->chgBit  (c+340,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
	vcdp->chgBit  (c+341,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
	vcdp->chgBit  (c+342,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
	vcdp->chgBus  (c+343,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
	vcdp->chgBit  (c+344,((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
				     >> 0x1fU))));
	vcdp->chgBit  (c+345,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3));
	vcdp->chgBit  (c+346,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned));
	vcdp->chgBit  (c+347,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb));
	vcdp->chgBit  (c+348,(vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5));
	vcdp->chgBit  (c+349,(vlTOPp->main__DOT__watchdogi__DOT__r_running));
	vcdp->chgBit  (c+350,(vlTOPp->main__DOT__watchdogi__DOT__wb_write));
	vcdp->chgBus  (c+351,(vlTOPp->main__DOT__watchdogi__DOT__r_value),16);
	vcdp->chgBit  (c+352,(vlTOPp->main__DOT__watchdogi__DOT__r_zero));
	vcdp->chgQuad (c+353,((((QData)((IData)(vlTOPp->main__DOT__wb_cyc)) 
				<< 0x20U) | (QData)((IData)(vlTOPp->main__DOT__wb_data)))),33);
	vcdp->chgBit  (c+355,(((IData)(vlTOPp->main__DOT__wb_stb) 
			       & ((4U == (0xfU & (vlTOPp->main__DOT__wb_addr 
						  >> 0x13U))) 
				  & (2U == (7U & vlTOPp->main__DOT__wb_addr))))));
	vcdp->chgBus  (c+356,(vlTOPp->main__DOT__gpioi__DOT__hi_bits),16);
	vcdp->chgBus  (c+357,(vlTOPp->main__DOT__gpioi__DOT__low_bits),16);
	vcdp->chgBus  (c+358,((0x100000U | ((0xfffe0U 
					     & (vlTOPp->main__DOT__wb_data 
						>> 0xcU)) 
					    | (0x1fU 
					       & (vlTOPp->main__DOT__wb_data 
						  >> 0xbU))))),21);
	vcdp->chgBit  (c+359,(vlTOPp->main__DOT__hbi_pp__DOT__pp_stb));
	vcdp->chgBus  (c+360,(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer),6);
	vcdp->chgBit  (c+361,(vlTOPp->main__DOT__hbi_pp__DOT__loaded));
	vcdp->chgBit  (c+362,(vlTOPp->main__DOT__genbus__DOT__w_reset));
	vcdp->chgBit  (c+363,(vlTOPp->main__DOT__genbus__DOT__dec_stb));
	vcdp->chgBit  (c+364,(vlTOPp->main__DOT__genbus__DOT__iw_stb));
	vcdp->chgQuad (c+365,(vlTOPp->main__DOT__genbus__DOT__iw_word),34);
	vcdp->chgBit  (c+367,(vlTOPp->main__DOT__genbus__DOT__ow_stb));
	vcdp->chgQuad (c+368,(vlTOPp->main__DOT__genbus__DOT__ow_word),34);
	vcdp->chgBit  (c+370,(vlTOPp->main__DOT__genbus__DOT__int_busy));
	vcdp->chgBit  (c+371,(vlTOPp->main__DOT__genbus__DOT__idl_busy));
	vcdp->chgBit  (c+372,(vlTOPp->main__DOT__genbus__DOT__int_stb));
	vcdp->chgQuad (c+373,(vlTOPp->main__DOT__genbus__DOT__int_word),34);
	vcdp->chgBit  (c+375,(vlTOPp->main__DOT__genbus__DOT__hb_stb));
	vcdp->chgBit  (c+376,(vlTOPp->main__DOT__genbus__DOT__idl_stb));
	vcdp->chgQuad (c+377,(vlTOPp->main__DOT__genbus__DOT__idl_word),34);
	vcdp->chgBit  (c+379,(vlTOPp->main__DOT__genbus__DOT__hx_busy));
	vcdp->chgBit  (c+380,(vlTOPp->main__DOT__genbus__DOT__hx_stb));
	vcdp->chgBit  (c+381,(vlTOPp->main__DOT__genbus__DOT__nl_busy));
	vcdp->chgBus  (c+382,(vlTOPp->main__DOT__genbus__DOT__hx_byte),7);
	vcdp->chgBit  (c+383,(vlTOPp->main__DOT__genbus__DOT__fnl_stb));
	vcdp->chgBus  (c+384,(vlTOPp->main__DOT__genbus__DOT__fnl_byte),7);
	vcdp->chgBit  (c+385,(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded));
	vcdp->chgQuad (c+386,(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word),34);
	vcdp->chgBit  (c+388,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__newaddr));
	vcdp->chgBit  (c+389,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr));
	vcdp->chgBit  (c+390,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
			       & (1U == (3U & (IData)(
						      (vlTOPp->main__DOT__genbus__DOT__iw_word 
						       >> 0x20U)))))));
	vcdp->chgBit  (c+391,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
			       & (0U == (3U & (IData)(
						      (vlTOPp->main__DOT__genbus__DOT__iw_word 
						       >> 0x20U)))))));
	vcdp->chgBit  (c+392,(((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
			       & (~ (IData)((vlTOPp->main__DOT__genbus__DOT__iw_word 
					     >> 0x21U))))));
	vcdp->chgBit  (c+393,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state));
	vcdp->chgBit  (c+394,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt));
	vcdp->chgBit  (c+395,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded));
	vcdp->chgBit  (c+396,(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded));
	vcdp->chgBit  (c+397,(vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb));
	vcdp->chgBus  (c+398,(vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter),23);
	vcdp->chgBus  (c+399,(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len),4);
	vcdp->chgBus  (c+400,(vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char),8);
	vcdp->chgBit  (c+401,((1U & ((IData)(vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char) 
				     >> 7U))));
	vcdp->chgBit  (c+402,(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8));
	vcdp->chgBit  (c+403,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr));
	vcdp->chgBit  (c+404,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state));
	vcdp->chgBit  (c+405,(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded));
	vcdp->chgBit  (c+406,(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11));
	vcdp->chgBit  (c+407,(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12));
	vcdp->chgBit  (c+408,(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner));
	vcdp->chgBit  (c+409,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we));
	vcdp->chgBus  (c+410,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr),23);
	vcdp->chgBus  (c+411,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data),32);
	vcdp->chgBus  (c+412,(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel),4);
	vcdp->chgBit  (c+413,(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4));
	vcdp->chgBus  (c+414,((3U & vlTOPp->main__DOT__wb_addr)),2);
	vcdp->chgBus  (c+415,((((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err) 
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
	vcdp->chgBus  (c+416,((7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full))))),16);
	vcdp->chgBus  (c+417,((((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err) 
				<< 0xcU) | ((0x100U 
					     & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)) 
						<< 8U)) 
					    | (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data)))),32);
	vcdp->chgBit  (c+418,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err));
	vcdp->chgBus  (c+419,((7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))))),16);
	vcdp->chgBus  (c+420,(((0x6000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
					   << 0xdU)) 
			       | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err) 
				   << 0xcU) | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
						<< 0xaU) 
					       | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
						   << 8U) 
						  | ((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)
						      ? (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data)
						      : 0U)))))),32);
	vcdp->chgBus  (c+421,(((0x70000U & (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
					    << 0x10U)) 
			       | (7U & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)))))),32);
	vcdp->chgBit  (c+422,(vlTOPp->main__DOT__consolei__DOT__r_wb_ack));
	vcdp->chgBus  (c+423,(((0xffffe0U & (vlTOPp->main__DOT__wb_data 
					     >> 8U)) 
			       | (0x1fU & (vlTOPp->main__DOT__wb_data 
					   >> 7U)))),24);
	vcdp->chgBit  (c+424,(vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5));
	vcdp->chgBit  (c+425,(vlTOPp->main__DOT__bustimeri__DOT__r_running));
	vcdp->chgBit  (c+426,(vlTOPp->main__DOT__bustimeri__DOT__wb_write));
	vcdp->chgBit  (c+427,(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload));
	vcdp->chgBus  (c+428,(vlTOPp->main__DOT__bustimeri__DOT__r_value),16);
	vcdp->chgBit  (c+429,(vlTOPp->main__DOT__bustimeri__DOT__r_zero));
	vcdp->chgBit  (c+430,(vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4));
	vcdp->chgBus  (c+431,((0x7ffU & vlTOPp->main__DOT__wb_addr)),11);
	vcdp->chgBit  (c+432,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_stb));
	vcdp->chgBit  (c+433,(vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3));
	vcdp->chgBus  (c+434,(vlTOPp->main__DOT__buspici__DOT__r_int_state),15);
	vcdp->chgBus  (c+435,(vlTOPp->main__DOT__buspici__DOT__r_int_enable),15);
	vcdp->chgBus  (c+436,(((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
			       | (IData)(vlTOPp->main__DOT__bus_int_vector))),15);
	vcdp->chgBit  (c+437,(vlTOPp->main__DOT__buspici__DOT__r_gie));
	vcdp->chgBit  (c+438,(vlTOPp->main__DOT__buspici__DOT__w_any));
	vcdp->chgBus  (c+439,((0x7fffffffU & vlTOPp->main__DOT__wb_data)),31);
    }
}

void Vmain::traceChgThis__3(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+440,(vlTOPp->main__DOT__sdram_debug),32);
    }
}

void Vmain::traceChgThis__4(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+441,(vlTOPp->main__DOT__gpio_int));
	vcdp->chgBus  (c+442,(vlTOPp->main__DOT__zip_debug),32);
	vcdp->chgBit  (c+443,((1U & vlTOPp->main__DOT__zip_debug)));
	vcdp->chgBit  (c+444,(vlTOPp->main__DOT__cpu_reset));
	vcdp->chgBus  (c+445,(vlTOPp->main__DOT__pp_rx_data),8);
	vcdp->chgBus  (c+446,(vlTOPp->main__DOT__genbus__DOT__ps_data),8);
	vcdp->chgBus  (c+447,(vlTOPp->main__DOT__hb_dwbi_idata),32);
	vcdp->chgBit  (c+448,(vlTOPp->main__DOT__w_console_rx_stb));
	vcdp->chgBus  (c+449,(vlTOPp->main__DOT__w_console_rx_data),7);
	vcdp->chgBus  (c+450,(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data),7);
	vcdp->chgBus  (c+451,(vlTOPp->main__DOT__r_buserr_addr),23);
	vcdp->chgBit  (c+452,(vlTOPp->main__DOT__wb_many_ack));
	vcdp->chgBus  (c+453,(vlTOPp->main__DOT__wb_idata),32);
	vcdp->chgBit  (c+454,(vlTOPp->main__DOT__wb_ack));
	vcdp->chgBus  (c+455,((vlTOPp->main__DOT__r_buserr_addr 
			       << 2U)),32);
	vcdp->chgBus  (c+456,(vlTOPp->main__DOT__buspic_data),32);
	vcdp->chgBus  (c+457,(vlTOPp->main__DOT__sdramscopei__DOT__o_bus_data),32);
	vcdp->chgBit  (c+458,((1U & ((IData)(vlTOPp->main__DOT__r_wb_dio_ack) 
				     >> 1U))));
	vcdp->chgBus  (c+459,(vlTOPp->main__DOT__r_wb_dio_data),32);
	vcdp->chgBus  (c+460,(vlTOPp->main__DOT__console_data),32);
	vcdp->chgBus  (c+461,(vlTOPp->main__DOT__r_wb_sio_data),32);
	vcdp->chgBus  (c+462,(vlTOPp->main__DOT__bkram_data),32);
	vcdp->chgBit  (c+463,(vlTOPp->main__DOT__hb_we));
	vcdp->chgBit  (c+464,(vlTOPp->main__DOT__hb_many_ack));
	vcdp->chgBus  (c+465,((0xffffffU & vlTOPp->main__DOT__hb_tmp_addr)),24);
	vcdp->chgBus  (c+466,(vlTOPp->main__DOT__hb_data),32);
	vcdp->chgBus  (c+467,(vlTOPp->main__DOT__hb_idata),32);
	vcdp->chgBit  (c+468,(vlTOPp->main__DOT__hb_ack));
	vcdp->chgBit  (c+469,((1U & (~ (vlTOPp->main__DOT__hb_tmp_addr 
					>> 0x17U)))));
	vcdp->chgBit  (c+470,((1U & (vlTOPp->main__DOT__hb_tmp_addr 
				     >> 0x17U))));
	vcdp->chgBus  (c+471,(vlTOPp->main__DOT__r_wb_dio_ack),2);
	vcdp->chgBit  (c+472,(vlTOPp->main__DOT__r_wb_dio_bus_select));
	vcdp->chgBus  (c+473,(vlTOPp->main__DOT__r_wb_bus_select),3);
	vcdp->chgBus  (c+474,(vlTOPp->main__DOT__hb_tmp_addr),30);
	vcdp->chgBit  (c+475,(vlTOPp->main__DOT__sdramscopei__DOT__read_address));
	vcdp->chgBus  (c+476,(vlTOPp->main__DOT__sdramscopei__DOT__raddr),4);
	vcdp->chgBus  (c+477,(vlTOPp->main__DOT__sdramscopei__DOT__mem[0]),32);
	vcdp->chgBus  (c+478,(vlTOPp->main__DOT__sdramscopei__DOT__mem[1]),32);
	vcdp->chgBus  (c+479,(vlTOPp->main__DOT__sdramscopei__DOT__mem[2]),32);
	vcdp->chgBus  (c+480,(vlTOPp->main__DOT__sdramscopei__DOT__mem[3]),32);
	vcdp->chgBus  (c+481,(vlTOPp->main__DOT__sdramscopei__DOT__mem[4]),32);
	vcdp->chgBus  (c+482,(vlTOPp->main__DOT__sdramscopei__DOT__mem[5]),32);
	vcdp->chgBus  (c+483,(vlTOPp->main__DOT__sdramscopei__DOT__mem[6]),32);
	vcdp->chgBus  (c+484,(vlTOPp->main__DOT__sdramscopei__DOT__mem[7]),32);
	vcdp->chgBus  (c+485,(vlTOPp->main__DOT__sdramscopei__DOT__mem[8]),32);
	vcdp->chgBus  (c+486,(vlTOPp->main__DOT__sdramscopei__DOT__mem[9]),32);
	vcdp->chgBus  (c+487,(vlTOPp->main__DOT__sdramscopei__DOT__mem[10]),32);
	vcdp->chgBus  (c+488,(vlTOPp->main__DOT__sdramscopei__DOT__mem[11]),32);
	vcdp->chgBus  (c+489,(vlTOPp->main__DOT__sdramscopei__DOT__mem[12]),32);
	vcdp->chgBus  (c+490,(vlTOPp->main__DOT__sdramscopei__DOT__mem[13]),32);
	vcdp->chgBus  (c+491,(vlTOPp->main__DOT__sdramscopei__DOT__mem[14]),32);
	vcdp->chgBus  (c+492,(vlTOPp->main__DOT__sdramscopei__DOT__mem[15]),32);
	vcdp->chgBus  (c+493,(vlTOPp->main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe),32);
	vcdp->chgBus  (c+494,(vlTOPp->main__DOT__sdramscopei__DOT__this_addr),4);
	vcdp->chgBus  (c+495,(vlTOPp->main__DOT__sdramscopei__DOT__nxt_mem),32);
	vcdp->chgBit  (c+496,(vlTOPp->main__DOT__sdrami__DOT__r_we));
	vcdp->chgBus  (c+497,(vlTOPp->main__DOT__sdrami__DOT__r_data),32);
	vcdp->chgBus  (c+498,(vlTOPp->main__DOT__sdrami__DOT__r_sel),4);
	vcdp->chgBus  (c+499,(vlTOPp->main__DOT__sdrami__DOT__bank_row[0]),13);
	vcdp->chgBus  (c+500,(vlTOPp->main__DOT__sdrami__DOT__bank_row[1]),13);
	vcdp->chgBus  (c+501,(vlTOPp->main__DOT__sdrami__DOT__bank_row[2]),13);
	vcdp->chgBus  (c+502,(vlTOPp->main__DOT__sdrami__DOT__bank_row[3]),13);
	vcdp->chgBus  (c+503,(vlTOPp->main__DOT__sdrami__DOT__ram_data),16);
	vcdp->chgBus  (c+504,(vlTOPp->main__DOT__sdrami__DOT__last_ram_data),16);
	vcdp->chgBit  (c+505,(vlTOPp->main__DOT__sdrami__DOT__trigger));
	vcdp->chgBit  (c+506,((1U & vlTOPp->main__DOT__hb_tmp_addr)));
	vcdp->chgBus  (c+507,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc),4);
	vcdp->chgBit  (c+508,((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)))));
	vcdp->chgBus  (c+509,(vlTOPp->main__DOT__swic__DOT__cpu_dbg_data),32);
	vcdp->chgBus  (c+510,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[0]),32);
	vcdp->chgBus  (c+511,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[1]),32);
	vcdp->chgBus  (c+512,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[2]),32);
	vcdp->chgBus  (c+513,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[3]),32);
	vcdp->chgBus  (c+514,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[4]),32);
	vcdp->chgBus  (c+515,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[5]),32);
	vcdp->chgBus  (c+516,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[6]),32);
	vcdp->chgBus  (c+517,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[7]),32);
	vcdp->chgBus  (c+518,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[8]),32);
	vcdp->chgBus  (c+519,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[9]),32);
	vcdp->chgBus  (c+520,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[10]),32);
	vcdp->chgBus  (c+521,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[11]),32);
	vcdp->chgBus  (c+522,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[12]),32);
	vcdp->chgBus  (c+523,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[13]),32);
	vcdp->chgBus  (c+524,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[14]),32);
	vcdp->chgBus  (c+525,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[15]),32);
	vcdp->chgBus  (c+526,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[16]),32);
	vcdp->chgBus  (c+527,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[17]),32);
	vcdp->chgBus  (c+528,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[18]),32);
	vcdp->chgBus  (c+529,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[19]),32);
	vcdp->chgBus  (c+530,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[20]),32);
	vcdp->chgBus  (c+531,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[21]),32);
	vcdp->chgBus  (c+532,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[22]),32);
	vcdp->chgBus  (c+533,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[23]),32);
	vcdp->chgBus  (c+534,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[24]),32);
	vcdp->chgBus  (c+535,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[25]),32);
	vcdp->chgBus  (c+536,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[26]),32);
	vcdp->chgBus  (c+537,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[27]),32);
	vcdp->chgBus  (c+538,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[28]),32);
	vcdp->chgBus  (c+539,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[29]),32);
	vcdp->chgBus  (c+540,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[30]),32);
	vcdp->chgBus  (c+541,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[31]),32);
	vcdp->chgBus  (c+542,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags),4);
	vcdp->chgBus  (c+543,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags),4);
	vcdp->chgBit  (c+544,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step));
	vcdp->chgBit  (c+545,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted));
	vcdp->chgBit  (c+546,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
	vcdp->chgBus  (c+547,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn),4);
	vcdp->chgBus  (c+548,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_F),4);
	vcdp->chgBit  (c+549,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR));
	vcdp->chgBit  (c+550,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rA));
	vcdp->chgBit  (c+551,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB));
	vcdp->chgBit  (c+552,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_ALU));
	vcdp->chgBit  (c+553,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_M));
	vcdp->chgBit  (c+554,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wF));
	vcdp->chgBit  (c+555,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_break));
	vcdp->chgBit  (c+556,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_zI));
	vcdp->chgBus  (c+557,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_reg),5);
	vcdp->chgBus  (c+558,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av),32);
	vcdp->chgBus  (c+559,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv),32);
	vcdp->chgBit  (c+560,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_wF));
	vcdp->chgBus  (c+561,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F),7);
	vcdp->chgBus  (c+562,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result),32);
	vcdp->chgBus  (c+563,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
	vcdp->chgBus  (c+564,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_addr),23);
	vcdp->chgBus  (c+565,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
	vcdp->chgBit  (c+566,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe));
	vcdp->chgBus  (c+567,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val),32);
	vcdp->chgBus  (c+568,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc),25);
	vcdp->chgBus  (c+569,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value),32);
	vcdp->chgBus  (c+570,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Av),32);
	vcdp->chgBus  (c+571,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv),32);
	vcdp->chgBit  (c+572,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A));
	vcdp->chgBit  (c+573,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B));
	vcdp->chgBus  (c+574,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg),32);
	vcdp->chgBus  (c+575,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word),32);
	vcdp->chgBus  (c+576,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half),15);
	vcdp->chgBus  (c+577,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I),23);
	vcdp->chgBit  (c+578,((0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result)));
	vcdp->chgBit  (c+579,((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
				     >> 0x1fU))));
	vcdp->chgBit  (c+580,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl) 
			       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
				  != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
					    >> 0x1fU))))));
	vcdp->chgBit  (c+581,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c));
	vcdp->chgBit  (c+582,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign));
	vcdp->chgBit  (c+583,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl));
	vcdp->chgBit  (c+584,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl));
	vcdp->chgQuad (c+585,((((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U])) 
				<< 0x20U) | (QData)((IData)(
							    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[0U])))),64);
	vcdp->chgBit  (c+587,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi));
	vcdp->chgBit  (c+588,(((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl) 
			       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
				  != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
					    >> 0x1fU))))));
	vcdp->chgQuad (c+589,(((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
			       << 1U)),33);
	vcdp->chgQuad (c+591,((VL_ULL(0x1ffffffff) 
			       & VL_SHIFTRS_QQI(33,33,5, 
						((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						 << 1U), 
						(0x1fU 
						 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))),33);
	vcdp->chgBus  (c+593,((3U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))),2);
	vcdp->chgBit  (c+594,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__unused_aux));
	vcdp->chgArray(c+595,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result),66);
	vcdp->chgQuad (c+598,((((QData)((IData)((1U 
						 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
						    & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
						       >> 0x1fU))))) 
				<< 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)))),33);
	vcdp->chgQuad (c+600,((((QData)((IData)((1U 
						 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
						    & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
						       >> 0x1fU))))) 
				<< 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))),33);
	vcdp->chgBus  (c+602,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count),6);
	vcdp->chgQuad (c+603,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a),33);
	vcdp->chgQuad (c+605,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b),33);
	vcdp->chgArray(c+607,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial),66);
	vcdp->chgBit  (c+610,((0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count))));
	vcdp->chgBit  (c+611,((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))));
	vcdp->chgQuad (c+612,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
	vcdp->chgBit  (c+614,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
	vcdp->chgBit  (c+615,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
	vcdp->chgBus  (c+616,((7U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))),3);
	vcdp->chgBus  (c+617,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op),4);
	vcdp->chgBus  (c+618,(vlTOPp->main__DOT__gpioi__DOT__x_gpio),2);
	vcdp->chgBus  (c+619,(vlTOPp->main__DOT__gpioi__DOT__q_gpio),2);
	vcdp->chgBus  (c+620,(vlTOPp->main__DOT__gpioi__DOT__r_gpio),2);
	vcdp->chgBit  (c+621,(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir));
	vcdp->chgBit  (c+622,(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir));
	vcdp->chgBit  (c+623,((1U & (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir)))));
	vcdp->chgBit  (c+624,((1U & (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir)))));
	vcdp->chgBus  (c+625,(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_data),8);
	vcdp->chgBit  (c+626,(vlTOPp->main__DOT__hbi_pp__DOT__r_dbg));
	vcdp->chgBus  (c+627,(vlTOPp->main__DOT__genbus__DOT__dec_bits),5);
	vcdp->chgBus  (c+628,(vlTOPp->main__DOT__genbus__DOT__hb_bits),5);
	vcdp->chgBit  (c+629,((1U & ((IData)(vlTOPp->main__DOT__pp_rx_data) 
				     >> 7U))));
	vcdp->chgBit  (c+630,(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc));
	vcdp->chgBus  (c+631,(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word),32);
	vcdp->chgBus  (c+632,((0x7fffffU & vlTOPp->main__DOT__hb_tmp_addr)),23);
	vcdp->chgBit  (c+633,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err));
	vcdp->chgBus  (c+634,(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data),7);
	vcdp->chgBus  (c+635,(vlTOPp->main__DOT__consolei__DOT__r_wb_addr),2);
	vcdp->chgBus  (c+636,(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count),16);
	vcdp->chgBit  (c+637,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb));
	vcdp->chgBus  (c+638,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data),32);
	vcdp->chgBus  (c+639,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr),11);
	vcdp->chgBus  (c+640,(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel),4);
    }
}

void Vmain::traceChgThis__5(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+641,(vlTOPp->i_clk));
	vcdp->chgBit  (c+642,(vlTOPp->i_reset));
	vcdp->chgBit  (c+643,(vlTOPp->o_ram_cke));
	vcdp->chgBit  (c+644,(vlTOPp->o_ram_cs_n));
	vcdp->chgBit  (c+645,(vlTOPp->o_ram_ras_n));
	vcdp->chgBit  (c+646,(vlTOPp->o_ram_cas_n));
	vcdp->chgBit  (c+647,(vlTOPp->o_ram_we_n));
	vcdp->chgBus  (c+648,(vlTOPp->o_ram_bs),2);
	vcdp->chgBus  (c+649,(vlTOPp->o_ram_addr),13);
	vcdp->chgBus  (c+650,(vlTOPp->i_ram_data),16);
	vcdp->chgBus  (c+651,(vlTOPp->o_ram_data),16);
	vcdp->chgBus  (c+652,(vlTOPp->o_ram_dqm),2);
	vcdp->chgBus  (c+653,(vlTOPp->o_debug),32);
	vcdp->chgBit  (c+654,(vlTOPp->o_ram_drive_data));
	vcdp->chgBit  (c+655,(vlTOPp->i_pp_clk));
	vcdp->chgBit  (c+656,(vlTOPp->i_pp_dir));
	vcdp->chgBus  (c+657,(vlTOPp->i_pp_data),8);
	vcdp->chgBus  (c+658,(vlTOPp->o_pp_data),8);
	vcdp->chgBit  (c+659,(vlTOPp->o_pp_clkfb));
	vcdp->chgBit  (c+660,(vlTOPp->o_pp_dbg));
	vcdp->chgBus  (c+661,(vlTOPp->i_gpio),2);
	vcdp->chgBus  (c+662,(vlTOPp->o_gpio),11);
	vcdp->chgBus  (c+663,((((IData)(vlTOPp->main__DOT__watchdog_reset) 
				<< 1U) | (IData)(vlTOPp->i_reset))),8);
	vcdp->chgBit  (c+664,((1U & (~ (IData)(vlTOPp->o_ram_we_n)))));
	vcdp->chgBit  (c+665,(((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed) 
			       & (((~ (IData)(vlTOPp->o_ram_we_n)) 
				   & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) 
				  | ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				     >> 1U)))));
	vcdp->chgBit  (c+666,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid));
	vcdp->chgBus  (c+667,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc),25);
	vcdp->chgBit  (c+668,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim));
	vcdp->chgBus  (c+669,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv),23);
	vcdp->chgBit  (c+670,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim));
	vcdp->chgBus  (c+671,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim_immv),23);
	vcdp->chgBit  (c+672,(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce));
    }
}
