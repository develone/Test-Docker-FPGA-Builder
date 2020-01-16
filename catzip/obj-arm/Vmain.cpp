// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain.h"             // For This
#include "Vmain__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vmain::__Vtable1_main__DOT__wb_many_ack[128],0,0);
VL_ST_SIG8(Vmain::__Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[16],6,0);
VL_ST_SIG8(Vmain::__Vtable3_main__DOT__genbus__DOT__dec_bits[256],4,0);
VL_ST_SIG8(Vmain::__Vtable4_main__DOT__hb_cyc[128],0,0);
VL_ST_SIG8(Vmain::__Vtable4_main__DOT__hb_stb[128],0,0);
VL_ST_SIG8(Vmain::__Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[32],7,0);

//--------------------

VL_CTOR_IMP(Vmain) {
    Vmain__Syms* __restrict vlSymsp = __VlSymsp = new Vmain__Syms(this, name());
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmain::__Vconfigure(Vmain__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmain::~Vmain() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmain::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain::eval\n"); );
    Vmain__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vmain::_eval_initial_loop(Vmain__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vmain::_initial__TOP__1(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_initial__TOP__1\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at main.v:867
    // INITIAL at ../hexbus/hbexec.v:266
    // INITIAL at wbsdram.v:263
    vlTOPp->o_ram_cke = 1U;
    // INITIAL at wbscope.v:404
    vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt = 0U;
    // INITIAL at wbsdram.v:262
    vlTOPp->o_ram_dqm = 3U;
    // INITIAL at cpu/zipcpu.v:1034
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu = 0U;
    // INITIAL at cpu/idecode.v:456
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_FP = 0U;
    // INITIAL at cpu/idecode.v:457
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_lock = 0U;
    // INITIAL at cpu/ziptimer.v:174
    vlTOPp->main__DOT__watchdog_ack = 0U;
    // INITIAL at ../pport/pport.v:143
    vlTOPp->o_pp_data = 0xffU;
    // INITIAL at cpu/ziptimer.v:174
    vlTOPp->main__DOT__bustimer_ack = 0U;
    // INITIAL at cpu/memops.v:166
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel = 0U;
    // INITIAL at wbscope.v:348
    // INITIAL at wbscope.v:352
    vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack = 0U;
    // INITIAL at cpu/zipcpu.v:1033
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div = 0U;
    // INITIAL at cpu/zipcpu.v:1549
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid = 0U;
    // INITIAL at cpu/div.v:329
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c = 0U;
    // INITIAL at ../hexbus/hbnewline.v:80
    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 0U;
    // INITIAL at cpu/ziptimer.v:167
    vlTOPp->main__DOT__bustimer_int = 0U;
    // INITIAL at wbsdram.v:256
    vlTOPp->o_ram_drive_data = 0U;
    // INITIAL at cpu/busdelay.v:117
    vlTOPp->main__DOT__hb_dwbi_ack = 0U;
    // INITIAL at wbsdram.v:255
    vlTOPp->main__DOT__sdram_stall = 1U;
    // INITIAL at cpu/zipcpu.v:1031
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu = 0U;
    // INITIAL at cpu/wbdblpriarb.v:133
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner = 1U;
    // INITIAL at cpu/wbpriarbiter.v:101
    vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner = 1U;
    // INITIAL at cpu/zipcpu.v:2060
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 0U;
    // INITIAL at cpu/zipcpu.v:2094
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 0U;
    // INITIAL at cpu/zipcpu.v:2132
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 0U;
    // INITIAL at cpu/zipcpu.v:2222
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase = 0U;
    // INITIAL at cpu/zipcpu.v:2245
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = 0U;
    // INITIAL at cpu/zipcpu.v:1032
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem = 0U;
    // INITIAL at cpu/zipcpu.v:1413
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF = 0U;
    // INITIAL at cpu/zipcpu.v:2317
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc = 0U;
    // INITIAL at cpu/zipcpu.v:1864
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en = 0U;
    // INITIAL at wbscope.v:351
    vlTOPp->main__DOT__sdramscopei__DOT__br_pre_wb_ack = 0U;
    // INITIAL at cpu/zipbones.v:168
    vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache = 1U;
    // INITIAL at cpu/zipcpu.v:2462
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall = 1U;
    // INITIAL at cpu/dblfetch.v:119
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight = 0U;
    // INITIAL at cpu/dblfetch.v:137
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle = 0U;
    // INITIAL at cpu/dblfetch.v:176
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
	= (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc);
    // INITIAL at cpu/dblfetch.v:218
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal = 0U;
    // INITIAL at cpu/div.v:205
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit = 0U;
    // INITIAL at cpu/div.v:236
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign = 0U;
    // INITIAL at cpu/ziptimer.v:151
    vlTOPp->main__DOT__watchdogi__DOT__r_zero = 1U;
    // INITIAL at ../pport/pport.v:122
    vlTOPp->main__DOT__hbi_pp__DOT__loaded = 0U;
    // INITIAL at ../hexbus/hbints.v:62
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state = 0U;
    // INITIAL at ../hexbus/hbints.v:101
    vlTOPp->main__DOT__genbus__DOT__int_word = VL_ULL(0x340000000);
    // INITIAL at ../hexbus/hbidle.v:69
    vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb = 0U;
    // INITIAL at cpu/ziptimer.v:98
    vlTOPp->main__DOT__bustimeri__DOT__r_running = 0U;
    // INITIAL at cpu/div.v:281
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = 0U;
    // INITIAL at cpu/memops.v:151
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = 0U;
    // INITIAL at cpu/zipcpu.v:2299
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc = 0xa00000U;
    // INITIAL at cpu/memops.v:165
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data = 0U;
    // INITIAL at wbgpio.v:79
    vlTOPp->o_gpio = 0U;
    // INITIAL at cpu/zipcpu.v:2288
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc = 0xa00000U;
    // INITIAL at cpu/div.v:312
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result = 0U;
    // INITIAL at cpu/dblfetch.v:86
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
    // INITIAL at cpu/memops.v:139
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = 0U;
    // INITIAL at cpu/zipcpu.v:2494
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger = 0U;
    // INITIAL at cpu/dblfetch.v:144
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr = 0x7fffffU;
    // INITIAL at cpu/zipcpu.v:2169
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag = 0U;
    // INITIAL at cpu/zipcpu.v:2048
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 0U;
    // INITIAL at cpu/zipcpu.v:2151
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag = 0U;
    // INITIAL at cpu/zipcpu.v:2113
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag = 0U;
    // INITIAL at cpu/zipcpu.v:1414
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR = 0U;
    // INITIAL at cpu/zipcpu.v:1482
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv = 0U;
    // INITIAL at cpu/zipcpu.v:1078
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break = 0U;
    // INITIAL at cpu/cpuops.v:181
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid = 0U;
    // INITIAL at cpu/div.v:171
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid = 0U;
    // INITIAL at cpu/zipcpu.v:2075
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i = 0U;
    // INITIAL at cpu/div.v:190
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error = 0U;
    // INITIAL at cpu/memops.v:209
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid = 0U;
    // INITIAL at cpu/zipcpu.v:1550
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid = 0U;
    // INITIAL at cpu/slowmpy.v:77
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux = 0U;
    // INITIAL at cpu/slowmpy.v:78
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = 0U;
    // INITIAL at cpu/ziptimer.v:98
    vlTOPp->main__DOT__watchdogi__DOT__r_running = 0U;
    // INITIAL at ../hexbus/hbexec.v:277
    vlTOPp->main__DOT__genbus__DOT__ow_word = VL_ULL(0x300000000);
    // INITIAL at ../hexbus/hbidle.v:70
    vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter = 0U;
    // INITIAL at ../hexbus/hbnewline.v:81
    vlTOPp->main__DOT__genbus__DOT__fnl_byte = 0x7fU;
    // INITIAL at cpu/busdelay.v:111
    vlTOPp->main__DOT__wb_sel = 0U;
    // INITIAL at cpu/ziptimer.v:151
    vlTOPp->main__DOT__bustimeri__DOT__r_zero = 1U;
    // INITIAL at ../hexbus/hbints.v:89
    vlTOPp->main__DOT__genbus__DOT__int_stb = 0U;
    // INITIAL at cpu/idecode.v:428
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc = 0U;
    // INITIAL at ../hexbus/hbnewline.v:79
    vlTOPp->main__DOT__genbus__DOT__fnl_stb = 0U;
    // INITIAL at ../pport/pport.v:129
    vlTOPp->main__DOT__pp_tx_busy = 0U;
    // INITIAL at wbsdram.v:258
    vlTOPp->o_ram_cs_n = 0U;
    // INITIAL at wbsdram.v:259
    vlTOPp->o_ram_ras_n = 1U;
    // INITIAL at wbsdram.v:260
    vlTOPp->o_ram_cas_n = 1U;
    // INITIAL at cpu/memops.v:164
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we = 0U;
    // INITIAL at ../hexbus/hbconsole.v:170
    vlTOPp->main__DOT__genbus__DOT__ps_full = 0U;
    // INITIAL at cpu/zipcpu.v:1113
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal = 0U;
    // INITIAL at cpu/slowmpy.v:73
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done = 0U;
    // INITIAL at ../hexbus/hbexec.v:276
    vlTOPp->main__DOT__genbus__DOT__ow_stb = 1U;
    // INITIAL at ../hexbus/hbints.v:71
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt = 0U;
    // INITIAL at ../hexbus/hbints.v:100
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded = 1U;
    // INITIAL at ../hexbus/hbgenhex.v:112
    vlTOPp->main__DOT__genbus__DOT__hx_byte = 0U;
    // INITIAL at ../hexbus/hbnewline.v:77
    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr = 1U;
    // INITIAL at ../hexbus/hbints.v:80
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded = 0U;
    // INITIAL at ../hexbus/hbgenhex.v:73
    vlTOPp->main__DOT__genbus__DOT__hx_stb = 0U;
    // INITIAL at ../hexbus/hbnewline.v:78
    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state = 0U;
    // INITIAL at ../hexbus/hbexec.v:191
    vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__newaddr = 0U;
    // INITIAL at ../hexbus/hbdeword.v:61
    vlTOPp->main__DOT__genbus__DOT__hb_stb = 0U;
    // INITIAL at cpu/idecode.v:453
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15 = 0U;
    // INITIAL at cpu/zipbones.v:232
    vlTOPp->main__DOT__swic__DOT__dbg_ack = 0U;
    // INITIAL at ../hexbus/hbidle.v:90
    vlTOPp->main__DOT__genbus__DOT__idl_word = VL_ULL(0x360000000);
    // INITIAL at ../hexbus/hbdeword.v:62
    vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len = 0U;
    // INITIAL at ../hexbus/hbpack.v:83
    vlTOPp->main__DOT__genbus__DOT__iw_stb = 0U;
    // INITIAL at ../hexbus/hbidle.v:79
    vlTOPp->main__DOT__genbus__DOT__idl_stb = 0U;
    // INITIAL at ../hexbus/hbexec.v:119
    vlTOPp->main__DOT__hb_cyc = 0U;
    // INITIAL at ../hexbus/hbpack.v:74
    vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded = 0U;
    // INITIAL at cpu/div.v:147
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy = 0U;
    // INITIAL at cpu/cpuops.v:162
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy = 0U;
    // INITIAL at cpu/zipcpu.v:1446
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
    // INITIAL at cpu/zipbones.v:157
    vlTOPp->main__DOT__swic__DOT__cmd_halt = 1U;
    // INITIAL at cpu/zipcpu.v:1906
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep = 0U;
    // INITIAL at cpu/memops.v:216
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err = 0U;
    // INITIAL at cpu/zipbones.v:172
    vlTOPp->main__DOT__swic__DOT__cmd_step = 0U;
    // INITIAL at cpu/zipcpu.v:1210
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase = 0U;
    // INITIAL at cpu/slowmpy.v:79
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy = 0U;
    // INITIAL at cpu/div.v:132
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
    // INITIAL at cpu/div.v:301
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign = 0U;
    // INITIAL at cpu/icontrol.v:124
    vlTOPp->main__DOT__buspici__DOT__r_interrupt = 0U;
    // INITIAL at cpu/zipbones.v:176
    vlTOPp->main__DOT__swic__DOT__cmd_addr = 0U;
    // INITIAL at cpu/memops.v:120
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl = 0U;
    // INITIAL at cpu/memops.v:121
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl = 0U;
    // INITIAL at cpu/zipcpu.v:1030
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid = 0U;
    // INITIAL at cpu/idecode.v:388
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = 0U;
    // INITIAL at cpu/idecode.v:452
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14 = 0U;
    // INITIAL at cpu/idecode.v:455
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_DIV = 0U;
    // INITIAL at cpu/div.v:222
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit = 0U;
    // INITIAL at cpu/ziptimer.v:167
    vlTOPp->main__DOT__watchdog_reset = 0U;
    // INITIAL at cpu/idecode.v:729
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid = 0U;
    // INITIAL at cpu/idecode.v:366
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase = 0U;
    // INITIAL at cpu/idecode.v:454
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16 = 0U;
    // INITIAL at cpu/dblfetch.v:183
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal = 0U;
    // INITIAL at cpu/dblfetch.v:166
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction = 0xffffffffU;
    // INITIAL at cpu/dblfetch.v:157
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid = 0U;
    // INITIAL at cpu/dblfetch.v:202
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid = 0U;
    // INITIAL at cpu/dblfetch.v:85
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
    // INITIAL at cpu/zipcpu.v:2340
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc = 1U;
    // INITIAL at cpu/zipcpu.v:2328
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache = 1U;
    // INITIAL at cpu/zipcpu.v:2027
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie = 0U;
    // INITIAL at cpu/zipbones.v:153
    vlTOPp->main__DOT__swic__DOT__cmd_reset = 1U;
    // INITIAL at main.v:1015
    vlTOPp->main__DOT__r_pwrcount_data = 0U;
    // INITIAL at wbscope.v:229
    vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped = 0U;
    // INITIAL at cpu/ziptimer.v:137
    vlTOPp->main__DOT__watchdogi__DOT__r_value = 0U;
    // INITIAL at ../hexbus/console.v:288
    vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err = 0U;
    // INITIAL at cpu/ziptimer.v:113
    vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload = 0U;
    // INITIAL at cpu/ziptimer.v:137
    vlTOPp->main__DOT__bustimeri__DOT__r_value = 0U;
    // INITIAL at wbscope.v:214
    vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered = 0U;
    // INITIAL at wbscope.v:230
    vlTOPp->main__DOT__sdramscopei__DOT__counter = 0U;
    // INITIAL at cpu/icontrol.v:115
    vlTOPp->main__DOT__buspici__DOT__r_gie = 0U;
    // INITIAL at ../hexbus/hbpack.v:106
    vlTOPp->main__DOT__genbus__DOT__iw_word = VL_ULL(0);
    // INITIAL at cpu/icontrol.v:106
    vlTOPp->main__DOT__buspici__DOT__r_int_enable = 0U;
    // INITIAL at wbscope.v:146
    vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff = 4U;
    // INITIAL at cpu/icontrol.v:98
    vlTOPp->main__DOT__buspici__DOT__r_int_state = 0U;
    // INITIAL at ../hexbus/console.v:156
    vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full = 0U;
    // INITIAL at ../hexbus/hbexec.v:120
    vlTOPp->main__DOT__hb_stb = 0U;
    // INITIAL at wbscope.v:257
    vlTOPp->main__DOT__sdramscopei__DOT__waddr = 0U;
    // INITIAL at wbscope.v:258
    vlTOPp->main__DOT__sdramscopei__DOT__dr_primed = 0U;
    // INITIAL at ../hexbus/hbdechex.v:52
    vlTOPp->main__DOT__genbus__DOT__w_reset = 1U;
    // INITIAL at ../hexbus/hbdechex.v:56
    vlTOPp->main__DOT__genbus__DOT__dec_stb = 0U;
    // INITIAL at ../hexbus/hbpack.v:87
    vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word = VL_ULL(0);
    // INITIAL at wbscope.v:145
    vlTOPp->main__DOT__sdramscopei__DOT__br_config = 0U;
    // INITIAL at wbsdram.v:261
    vlTOPp->o_ram_we_n = 1U;
    // INITIAL at wbsdram.v:127
    vlTOPp->main__DOT__sdrami__DOT__need_refresh = 0U;
    // INITIAL at wbsdram.v:139
    vlTOPp->main__DOT__sdrami__DOT__in_refresh = 0U;
    // INITIAL at wbsdram.v:218
    vlTOPp->main__DOT__sdrami__DOT__r_bank_valid = 0U;
    // INITIAL at wbsdram.v:228
    vlTOPp->main__DOT__sdrami__DOT__fwd_bank_valid = 0U;
    // INITIAL at wbsdram.v:254
    vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle = 0U;
    // INITIAL at wbsdram.v:257
    vlTOPp->main__DOT__sdrami__DOT__nxt_dmod = 0U;
    // INITIAL at wbsdram.v:476
    vlTOPp->main__DOT__sdrami__DOT__maintenance_mode = 1U;
    // INITIAL at wbsdram.v:479
    vlTOPp->main__DOT__sdrami__DOT__m_ram_addr = 0x21U;
    // INITIAL at wbsdram.v:481
    vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 1U;
    // INITIAL at wbsdram.v:482
    vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 1U;
    // INITIAL at wbsdram.v:483
    vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 1U;
    // INITIAL at wbsdram.v:484
    vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 1U;
    // INITIAL at wbsdram.v:485
    vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod = 0U;
    // INITIAL at ../pport/pport.v:113
    vlTOPp->main__DOT__pp_rx_stb = 0U;
    // INITIAL at cpu/busdelay.v:110
    vlTOPp->main__DOT__wb_data = 0U;
    // INITIAL at ../hexbus/console.v:272
    vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write = 0U;
    // INITIAL at wbsdram.v:180
    vlTOPp->main__DOT__sdrami__DOT__r_pending = 0U;
    // INITIAL at wbsdram.v:118
    vlTOPp->main__DOT__sdrami__DOT__refresh_clk = 0U;
    // INITIAL at wbsdram.v:133
    vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk = 0U;
    // INITIAL at wbsdram.v:182
    vlTOPp->main__DOT__sdrami__DOT__r_addr = 0U;
    // INITIAL at wbsdram.v:183
    vlTOPp->main__DOT__sdrami__DOT__fwd_addr = 0x100U;
    // INITIAL at wbsdram.v:459
    vlTOPp->main__DOT__sdrami__DOT__startup_hold = 1U;
    // INITIAL at wbsdram.v:477
    vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks = 0xfU;
    // INITIAL at wbsdram.v:478
    vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero = 0U;
    // INITIAL at wbsdram.v:480
    vlTOPp->main__DOT__sdrami__DOT__m_state = 1U;
    // INITIAL at ../pport/pport.v:84
    vlTOPp->main__DOT__hbi_pp__DOT__pp_stb = 0U;
    // INITIAL at wbsdram.v:264
    vlTOPp->main__DOT__sdrami__DOT__bank_active[0U] = 0U;
    // INITIAL at wbsdram.v:265
    vlTOPp->main__DOT__sdrami__DOT__bank_active[1U] = 0U;
    // INITIAL at wbsdram.v:266
    vlTOPp->main__DOT__sdrami__DOT__bank_active[2U] = 0U;
    // INITIAL at wbsdram.v:267
    vlTOPp->main__DOT__sdrami__DOT__bank_active[3U] = 0U;
    // INITIAL at cpu/busdelay.v:108
    vlTOPp->main__DOT__wb_we = 0U;
    // INITIAL at cpu/busdelay.v:109
    vlTOPp->main__DOT__wb_addr = 0U;
    // INITIAL at wbsdram.v:458
    vlTOPp->main__DOT__sdrami__DOT__startup_idle = 0x5014U;
    // INITIAL at ../pport/pport.v:88
    vlTOPp->o_pp_clkfb = 0U;
    // INITIAL at cpu/busdelay.v:113
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we = 0U;
    // INITIAL at cpu/busdelay.v:114
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr = 0U;
    // INITIAL at cpu/busdelay.v:115
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data = 0U;
    // INITIAL at cpu/busdelay.v:116
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel = 0U;
    // INITIAL at cpu/busdelay.v:112
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb = 0U;
    // INITIAL at cpu/busdelay.v:118
    vlTOPp->main__DOT__hb_dwbi_err = 0U;
    // INITIAL at cpu/busdelay.v:107
    vlTOPp->main__DOT__wb_stb = 0U;
    // INITIAL at main.v:445
    vlTOPp->main__DOT__r_wb_sio_ack = 0U;
    // INITIAL at ../pport/pport.v:83
    vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer = 0U;
    // INITIAL at ../hexbus/console.v:348
    vlTOPp->main__DOT__console_ack = 0U;
    // INITIAL at memdev.v:145
    vlTOPp->main__DOT__bkram_ack = 0U;
    // INITIAL at wbsdram.v:253
    vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack = 0U;
    // INITIAL at ../hexbus/console.v:345
    vlTOPp->main__DOT__consolei__DOT__r_wb_ack = 0U;
    // INITIAL at memdev.v:93
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_stb = 0U;
    // INITIAL at cpu/busdelay.v:106
    vlTOPp->main__DOT__wb_cyc = 0U;
}

void Vmain::_settle__TOP__2(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_settle__TOP__2\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at main.v:575
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc 
	= (0x7fffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr 
	= (0x7fffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr);
    vlTOPp->o_pp_dbg = vlTOPp->main__DOT__hbi_pp__DOT__r_dbg;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
	= ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b))
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a
	    : VL_ULL(0));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F 
	= ((0x80U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F) 
		     << 4U)) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
		!= (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			  >> 0x1fU)))) << 3U) | ((4U 
						  & ((4U 
						      & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
							 >> 0x1dU)) 
						     ^ 
						     (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl) 
						       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
							  != 
							  (1U 
							   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
							      >> 0x1fU)))) 
						      << 2U))) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c) 
						     << 1U) 
						    | (0U 
						       == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result))));
    // ALWAYS at cpu/zipcpu.v:911
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v 
	= (0x1ffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Av);
    // ALWAYS at ../hexbus/hbgenhex.v:81
    vlTOPp->__Vtableidx5 = vlTOPp->main__DOT__genbus__DOT__hb_bits;
    vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char 
	= vlTOPp->__Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char
	[vlTOPp->__Vtableidx5];
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done 
	= (0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc 
	= (0x1ffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc);
    vlTOPp->main__DOT__swic__DOT__dbg_stall = (1U & 
					       ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)) 
						& vlTOPp->main__DOT__hb_tmp_addr));
    // ALWAYS at cpu/zipcpu.v:973
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v 
	= (0x1ffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result 
	= (VL_ULL(0x1ffffffff) & ((0U != (0x7ffffffU 
					  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					     >> 5U)))
				   ? VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
								     >> 0x1fU)))))
				   : VL_SHIFTRS_QQI(33,33,5, 
						    ((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						     << 1U), 
						    (0x1fU 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result 
	= (VL_ULL(0x1ffffffff) & (((0U != (0x3ffffffU 
					   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					      >> 6U))) 
				   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
				       >> 5U) & (0U 
						 != 
						 (0x1fU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
				   ? VL_ULL(0) : ((0x20U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
						   ? (QData)((IData)(
								     (1U 
								      & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
									 >> 0x1fU))))
						   : 
						  (((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						    << 1U) 
						   >> 
						   (0x1fU 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result 
	= (VL_ULL(0x1ffffffff) & (((0U != (0x3ffffffU 
					   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					      >> 6U))) 
				   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
				       >> 5U) & (0U 
						 != 
						 (0x1fU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
				   ? VL_ULL(0) : ((0x20U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
						   ? 
						  ((QData)((IData)(
								   (1U 
								    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av))) 
						   << 0x20U)
						   : 
						  ((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						   << 
						   (0x1fU 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffeU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1fU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffdU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (2U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1dU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffbU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (4U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffff7U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (8U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x19U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffefU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x17U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffdfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x15U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffbfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x13U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffff7fU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x11U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffeffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x100U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xfU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffdffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x200U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xdU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffbffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x400U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xbU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffff7ffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x800U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 9U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffefffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x1000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 7U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffdfffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x2000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 5U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffbfffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x4000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 3U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffff7fffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x8000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 1U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffeffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 1U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffdffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 3U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffbffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 5U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfff7ffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 7U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffefffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x100000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 9U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffdfffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x200000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xbU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffbfffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x400000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xdU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xff7fffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x800000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xfU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfeffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x1000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x11U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfdffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x2000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x13U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfbffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x4000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x15U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xf7ffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x8000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x17U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xefffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x19U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xdfffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xbfffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1dU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0x7fffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1fU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I 
	= ((0xffc00000U & (VL_NEGATE_I((IData)((1U 
						& (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I 
						   >> 0x16U)))) 
			   << 0x16U)) | (0x3fffffU 
					 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I));
    vlTOPp->main__DOT__sdram_data = (((IData)(vlTOPp->main__DOT__sdrami__DOT__last_ram_data) 
				      << 0x10U) | (IData)(vlTOPp->main__DOT__sdrami__DOT__ram_data));
    vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff 
	= (0xfU & vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff);
    vlTOPp->main__DOT__gpioi__DOT__hi_bits = (3U & (IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits));
    vlTOPp->main__DOT__gpioi__DOT__low_bits = (0x7ffU 
					       & (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits));
    vlTOPp->main__DOT__gpioi__DOT__hi_bits = ((0xfffcU 
					       & (IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits)) 
					      | (IData)(vlTOPp->main__DOT__gpioi__DOT__r_gpio));
    vlTOPp->main__DOT__hb_dwbi_sel = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel)
				       : 0xfU);
    vlTOPp->main__DOT__hb_dwb_ack = ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
				     & (IData)(vlTOPp->main__DOT__hb_dwbi_ack));
    vlTOPp->main__DOT__zip_ack = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				  & (IData)(vlTOPp->main__DOT__hb_dwbi_ack));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubreak 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_u 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubus_err_flag 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
						   >> 0x1fU))) 
				  - (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor))));
    vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
						 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc 
	= ((0xf800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc) 
	   | (0x7fffffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
			   >> 2U)));
    vlTOPp->main__DOT__hb_dwbi_odata = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
					 ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data
					 : vlTOPp->main__DOT__hb_data);
    vlTOPp->main__DOT__gpioi__DOT__low_bits = ((0xf800U 
						& (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits)) 
					       | (IData)(vlTOPp->o_gpio));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags 
	= ((4U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
		  >> 0x1dU)) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
				 << 1U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z)));
    vlTOPp->main__DOT__zip_stb = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				   ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
				   : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    vlTOPp->main__DOT__zip_addr = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_addr
				    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result
	    : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
	        ? ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
		    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result
		    : 0U) : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)
			      ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val
			      : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result
	    : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)
	        ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val
	        : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_wreg)
	    : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_reg));
    vlTOPp->main__DOT__zip_we = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
				 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8 
	= ((IData)(vlTOPp->main__DOT__pp_tx_busy) & (IData)(vlTOPp->main__DOT__genbus__DOT__ps_full));
    vlTOPp->main__DOT__w_console_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__fnl_stb) 
					 | (IData)(vlTOPp->main__DOT__genbus__DOT__ps_full));
    vlTOPp->main__DOT__genbus__DOT__int_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded));
    vlTOPp->main__DOT__genbus__DOT__hb_busy = vlTOPp->main__DOT__genbus__DOT__hb_stb;
    vlTOPp->main__DOT__genbus__DOT__idl_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb));
    vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11 
	= ((IData)(vlTOPp->main__DOT__hb_cyc) & (~ 
						 (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid) 
	   & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc) 
	   | ((0x10U & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr))
	       ? ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U)) : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc) 
				| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
				   << 1U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_phase 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)
	    ? (0x80000000U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half) 
			       << 0x10U) | (0xffffU 
					    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction)))
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction);
    vlTOPp->main__DOT__zip_cyc = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				   ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl)
				   : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid))) 
	    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)) 
	   | (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal))) 
	      & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid)) 
		 | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error))))));
    // ALWAYS at cpu/zipcpu.v:903
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v) 
	   | (((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
		      >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
	       ? (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc)
	       : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U))));
    // ALWAYS at cpu/zipcpu.v:966
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v) 
	   | (((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
		      >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
	       ? (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc)
	       : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U))));
    vlTOPp->main__DOT__swic__DOT__cpu_break = (((((
						   (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en) 
						     | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) 
						    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break)) 
						   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
						  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
						 | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err))) 
						| ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error))) 
					       | (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)) 
						  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache));
    vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr 
	= ((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
	   & (2U == (3U & (IData)((vlTOPp->main__DOT__genbus__DOT__iw_word 
				   >> 0x20U)))));
    vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff 
	= ((0xffff0U & vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff) 
	   | (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff));
    vlTOPp->main__DOT__buspici__DOT__w_any = (0U != 
					      ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
					       & (IData)(vlTOPp->main__DOT__buspici__DOT__r_int_enable)));
    vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12 
	= ((IData)(vlTOPp->main__DOT__hb_stb) & (~ 
						 (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)));
    vlTOPp->main__DOT____Vcellinp__swic____pinNumber16 
	= ((IData)(vlTOPp->main__DOT__hb_stb) & (vlTOPp->main__DOT__hb_tmp_addr 
						 >> 0x17U));
    vlTOPp->main__DOT__sdramscopei__DOT__bw_reset_complete 
	= (1U & (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		    >> 2U)));
    vlTOPp->main__DOT__sdrami__DOT__refresh_cmd = (
						   (((~ (IData)(vlTOPp->o_ram_cs_n)) 
						     & (~ (IData)(vlTOPp->o_ram_ras_n))) 
						    & (~ (IData)(vlTOPp->o_ram_cas_n))) 
						   & (IData)(vlTOPp->o_ram_we_n));
    vlTOPp->main__DOT__bus_int_vector = (((IData)(vlTOPp->main__DOT__bustimer_int) 
					  << 3U) | 
					 (((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full) 
					   << 2U) | 
					  ((2U & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)) 
						  << 1U)) 
					   | (IData)(vlTOPp->main__DOT__gpio_int))));
    vlTOPp->main__DOT__sdrami__DOT__pending = ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
					       & (IData)(vlTOPp->main__DOT__sdram_stall));
    vlTOPp->main__DOT__wb_stall = ((8U == (8U & (vlTOPp->main__DOT__wb_addr 
						 >> 0x13U))) 
				   & (IData)(vlTOPp->main__DOT__sdram_stall));
    vlTOPp->main__DOT__hb_dwbi_stall = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb;
    vlTOPp->main__DOT__zip_stall = (1U & ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
					  | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb)));
    vlTOPp->main__DOT__hb_err = ((((IData)(vlTOPp->main__DOT__hb_stb) 
				   & (0U == ((2U & 
					      ((~ (vlTOPp->main__DOT__hb_tmp_addr 
						   >> 0x17U)) 
					       << 1U)) 
					     | (1U 
						& (vlTOPp->main__DOT__hb_tmp_addr 
						   >> 0x17U))))) 
				  | (IData)(vlTOPp->main__DOT__hb_many_ack)) 
				 | ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
				    & (IData)(vlTOPp->main__DOT__hb_dwbi_err)));
    vlTOPp->main__DOT__zip_err = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				  & (IData)(vlTOPp->main__DOT__hb_dwbi_err));
    vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & (1U 
						    == 
						    (7U 
						     & vlTOPp->main__DOT__wb_addr))));
    vlTOPp->main__DOT__wb_err = (((IData)(vlTOPp->main__DOT__wb_stb) 
				  & (0U == (((1U == 
					      (0xfU 
					       & (vlTOPp->main__DOT__wb_addr 
						  >> 0x13U))) 
					     << 5U) 
					    | (((2U 
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
							       >> 0x13U)))))))))) 
				 | (IData)(vlTOPp->main__DOT__wb_many_ack));
    vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((2U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & vlTOPp->main__DOT__wb_addr));
    vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((2U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & (~ vlTOPp->main__DOT__wb_addr)));
    vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (1U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (8U 
						 == 
						 (8U 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (3U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (5U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT__sdramscope_ack = ((IData)(vlTOPp->main__DOT__wb_cyc) 
					 & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack));
    vlTOPp->main__DOT__sdram_debug = ((0x40000000U 
				       & ((~ (IData)(vlTOPp->o_ram_cs_n)) 
					  << 0x1eU)) 
				      | (((IData)(vlTOPp->main__DOT__wb_cyc) 
					  << 0x1dU) 
					 | ((((IData)(vlTOPp->main__DOT__wb_stb) 
					      & (8U 
						 == 
						 (8U 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U)))) 
					     << 0x1cU) 
					    | (((IData)(vlTOPp->main__DOT__wb_we) 
						<< 0x1bU) 
					       | (((IData)(vlTOPp->main__DOT__sdram_stall) 
						   << 0x1aU) 
						  | ((0x2000000U 
						      & ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
							 << 0x19U)) 
						     | (((IData)(vlTOPp->o_ram_cs_n) 
							 << 0x18U) 
							| (((IData)(vlTOPp->o_ram_ras_n) 
							    << 0x17U) 
							   | (((IData)(vlTOPp->o_ram_we_n) 
							       << 0x16U) 
							      | (((IData)(vlTOPp->o_ram_cas_n) 
								  << 0x15U) 
								 | ((0x1f0000U 
								     & ((IData)(vlTOPp->o_ram_addr) 
									<< 0x10U)) 
								    | ((IData)(vlTOPp->o_ram_we_n)
								        ? (IData)(vlTOPp->o_ram_data)
								        : (IData)(vlTOPp->i_ram_data)))))))))))));
    vlTOPp->main__DOT__hb_stall = (((~ (vlTOPp->main__DOT__hb_tmp_addr 
					>> 0x17U)) 
				    & ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				       | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb))) 
				   | ((vlTOPp->main__DOT__hb_tmp_addr 
				       >> 0x17U) & (IData)(vlTOPp->main__DOT__swic__DOT__dbg_stall)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   & (IData)(vlTOPp->main__DOT__zip_ack));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
	   & (IData)(vlTOPp->main__DOT__zip_ack));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr 
	= ((0xf800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr) 
	   | vlTOPp->main__DOT__zip_addr);
    vlTOPp->main__DOT__hb_dwbi_addr = (0x7fffffU & 
				       ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
					 ? vlTOPp->main__DOT__zip_addr
					 : vlTOPp->main__DOT__hb_tmp_addr));
    vlTOPp->main__DOT__hb_dwbi_we = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				      ? (IData)(vlTOPp->main__DOT__zip_we)
				      : (IData)(vlTOPp->main__DOT__hb_we));
    vlTOPp->main__DOT__genbus__DOT__nl_busy = ((((IData)(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8) 
						 & (IData)(vlTOPp->main__DOT__genbus__DOT__fnl_stb)) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded)) 
					       | ((IData)(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state) 
						  & (~ (IData)(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div 
	= ((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU)) & (7U == (0xfU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					    >> 0x17U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI 
	= (0xffU & ((6U == (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				  >> 0x18U))) ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						 >> 0x10U)
		     : ((0x800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0xfcU & (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
							      >> 0x12U)))) 
				      << 2U)) | (3U 
						 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						    >> 0x10U)))
			 : ((0x80U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				      >> 0xfU)) | (0x7fU 
						   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						      >> 0x10U))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special 
	= ((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU)) & (7U == (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					  >> 0x18U))));
    // ALWAYS at cpu/idecode.v:184
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op 
	= (0x1fU & ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
		     ? ((0x4000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0x2000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			     ? ((0x1000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
				 ? 0xdU : 0x18U) : 
			    ((0x1000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			      ? 0x13U : 0x12U)) : (
						   (0x2000000U 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						    ? 
						   ((0x1000000U 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						     ? 0x10U
						     : 2U)
						    : 
						   ((0x1000000U 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						     ? 1U
						     : 0U)))
		     : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			>> 0x16U)));
    vlTOPp->main__DOT__hb_dwbi_cyc = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__zip_cyc)
				       : (IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
	    << 0xdU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag) 
			 << 0xbU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag) 
				      << 0xaU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
						   << 9U) 
						  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i) 
						      << 8U) 
						     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en) 
							 << 7U) 
							| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
							    << 4U) 
							   | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
							       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
							       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags)
							       : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags)))))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags 
	= (0x20U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 0xdU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag) 
				  << 0xbU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag) 
					       << 0xaU) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
						  << 9U) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u) 
						     << 8U) 
						    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak) 
							<< 7U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step) 
							   << 6U) 
							  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
							      << 4U) 
							     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
								 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
								 ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags)
								 : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags)))))))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt 
	= (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	    & (~ (IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt))) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		  >> 5U)) & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	   & ((((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err)) 
	      | ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		   & (~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			 >> 5U))) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
				     >> 4U)) & (0xeU 
						== 
						(0xfU 
						 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce 
	= (1U & (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase)) 
		   & (~ (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
			  & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
			 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc)))) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__cpu_break))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep))));
    vlTOPp->main__DOT__hb_dwbi_stb = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__zip_stb)
				       : (IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12));
    vlTOPp->main__DOT__swic__DOT__dbg_cmd_write = (
						   ((IData)(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16) 
						    & (IData)(vlTOPp->main__DOT__hb_we)) 
						   & (~ vlTOPp->main__DOT__hb_tmp_addr));
    vlTOPp->main__DOT__swic__DOT__cpu_dbg_we = (((IData)(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16) 
						 & (IData)(vlTOPp->main__DOT__hb_we)) 
						& vlTOPp->main__DOT__hb_tmp_addr);
    vlTOPp->main__DOT__buspici__DOT__nxt_int_state 
	= ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
	   | (IData)(vlTOPp->main__DOT__bus_int_vector));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall 
	= (1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
		 | (IData)(vlTOPp->main__DOT__zip_stall)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   | (IData)(vlTOPp->main__DOT__zip_stall));
    vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24 
	= ((IData)(vlTOPp->main__DOT__zip_err) | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
						  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl)));
    vlTOPp->main__DOT__watchdogi__DOT__wb_write = ((IData)(vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5) 
						   & (IData)(vlTOPp->main__DOT__wb_we));
    vlTOPp->main__DOT__bustimeri__DOT__wb_write = ((IData)(vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5) 
						   & (IData)(vlTOPp->main__DOT__wb_we));
    vlTOPp->main__DOT__sdramscopei__DOT__read_from_data 
	= (((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
	    & (~ (IData)(vlTOPp->main__DOT__wb_we))) 
	   & vlTOPp->main__DOT__wb_addr);
    vlTOPp->main__DOT__sdramscopei__DOT__write_to_control 
	= (((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
	    & (IData)(vlTOPp->main__DOT__wb_we)) & 
	   (~ vlTOPp->main__DOT__wb_addr));
    vlTOPp->main__DOT__sdrami__DOT__bus_cyc = (((IData)(vlTOPp->main__DOT__wb_cyc) 
						& (IData)(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3)) 
					       & (~ (IData)(vlTOPp->main__DOT__sdram_stall)));
    vlTOPp->o_debug = (((IData)(vlTOPp->main__DOT__wb_cyc) 
			<< 0x1fU) | (((IData)(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3) 
				      << 0x1eU) | (
						   ((IData)(vlTOPp->main__DOT__wb_we) 
						    << 0x1dU) 
						   | ((0x10000000U 
						       & ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
							  << 0x1cU)) 
						      | (((IData)(vlTOPp->main__DOT__sdram_stall) 
							  << 0x1bU) 
							 | (((IData)(vlTOPp->o_ram_cs_n) 
							     << 0x1aU) 
							    | (((IData)(vlTOPp->o_ram_ras_n) 
								<< 0x19U) 
							       | (((IData)(vlTOPp->o_ram_cas_n) 
								   << 0x18U) 
								  | (((IData)(vlTOPp->o_ram_we_n) 
								      << 0x17U) 
								     | (((IData)(vlTOPp->o_ram_bs) 
									 << 0x15U) 
									| (((IData)(vlTOPp->o_ram_drive_data) 
									    << 0x14U) 
									   | (((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
									       << 0x13U) 
									      | (((IData)(vlTOPp->main__DOT__sdrami__DOT__trigger) 
										<< 0x12U) 
										| ((0x3ff00U 
										& ((IData)(vlTOPp->o_ram_addr) 
										<< 8U)) 
										| (0xffU 
										& ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_we)
										 ? (IData)(vlTOPp->o_ram_data)
										 : 
										((0xf0U 
										& (vlTOPp->main__DOT__sdram_data 
										>> 0x10U)) 
										| (0xfU 
										& vlTOPp->main__DOT__sdram_data))))))))))))))))));
    vlTOPp->main__DOT__genbus__DOT__hx_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__hx_stb) 
					       & (IData)(vlTOPp->main__DOT__genbus__DOT__nl_busy));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
	   & (0x1dU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				 >> 0x16U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
	   & (0x1fU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				 >> 0x16U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU 
	= ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
	       >> 4U)) & (7U != (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				       >> 1U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond 
	= ((1U & (((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				     >> 1U))) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
		  | (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		     >> 0x1fU))) ? 8U : (((0U == (7U 
						  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						     >> 0x13U))) 
					  << 3U) | 
					 (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x13U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I 
	= (0x7fffffU & ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0x7fff00U & (VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI) 
								  >> 7U)))) 
					  << 8U)) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI))
			 : ((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					      >> 1U)))
			     ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword
			     : ((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))
				 ? ((0x7fe000U & (VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
									  >> 0xcU)))) 
						  << 0xdU)) 
				    | (0x1fffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
				 : ((0x40000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
				     ? ((0x7fc000U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
								    >> 0xdU)))) 
					    << 0xeU)) 
					| (0x3fffU 
					   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
				     : ((0x7c0000U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
								    >> 0x11U)))) 
					    << 0x12U)) 
					| (0x3ffffU 
					   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem 
	= ((2U == (3U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
			 >> 3U))) & (0U != (3U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						  >> 1U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB 
	= ((0x10U & (((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			    >> 0x1fU)) & (0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
		       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
		       ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			  >> 0xdU) : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		     << 4U)) | (0xfU & ((0x80000000U 
					 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
					 ? (((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						 >> 0x17U)) 
					     & (2U 
						== 
						(3U 
						 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						    >> 0x19U))))
					     ? 0xdU
					     : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x13U))
					 : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					    >> 0xeU))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR 
	= ((0x10U & (((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			    >> 0x1fU)) & (0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
		       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
		       ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			  >> 0x12U) : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		     << 4U)) | (0xfU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					>> 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond 
	= ((0xfU & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F) 
		     >> 4U) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)
			        ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
			        : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags)))) 
	   == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F)));
    // ALWAYS at cpu/zipcpu.v:478
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled 
	= (1U & (((((((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce)) 
			| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid)) 
		      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid)) 
		     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag)) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
		  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy)) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall 
	= (1U & (((((((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce)) 
			| (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid))) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
		      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag)) 
		     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt)) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
		  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy)) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB 
	= ((((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)) 
	     | ((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		      >> 0x1fU)) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				    >> 0x12U)) & (0xcU 
						  != 
						  (0xfU 
						   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						      >> 1U)))) 
		& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)))) 
	    | (((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		 >> 0x1fU) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			      >> 0x17U)) & (0xcU != 
					    (0xfU & 
					     ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					      >> 1U))))) 
	   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU) & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
	   == (0xfU | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
		       << 4U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
	   == (0xeU | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
		       << 4U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem)) 
	    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall))) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)));
    // ALWAYS at cpu/zipcpu.v:650
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional 
	= (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall)) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid)) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu));
    // ALWAYS at cpu/memops.v:101
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned 
	= ((5U == (0xdU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				    << 1U)) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
	    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3)
	    : ((6U == ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				<< 1U)) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))
	        ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3)
	        : ((9U == (0xdU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
					    << 1U)) 
				   | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))) 
		   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
	   & ((5U == (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
			    >> 1U))) | (0xcU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags 
	= (0x50000000U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger) 
			   << 0x1fU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
					 << 0x1bU) 
					| (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
					    << 0x1aU) 
					   | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_break) 
					       << 0x19U) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
						  << 0x18U) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
						     << 0x17U) 
						    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag) 
							<< 0x16U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
							   << 0x15U) 
							  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i) 
							      << 0x14U) 
							     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache) 
								 << 0x13U) 
								| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
								    << 0x12U) 
								   | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) 
								       << 0x11U) 
								      | ((0x10000U 
									  & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)) 
									     << 0x10U)) 
									 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) 
									     << 0xfU) 
									    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled) 
										<< 0xeU) 
									       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) 
										<< 0xdU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid) 
										<< 0xcU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
										<< 0xaU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy) 
										<< 9U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR) 
										<< 8U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal) 
										<< 7U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF) 
										<< 6U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
										<< 5U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we) 
										<< 4U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy) 
										<< 3U) 
										| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
										<< 1U)))))))))))))))))))))))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned)));
}

VL_INLINE_OPT void Vmain::_sequent__TOP__3(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_sequent__TOP__3\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vtableidx2,3,0);
    VL_SIG8(__Vtableidx3,7,0);
    VL_SIG8(__Vtableidx4,6,0);
    VL_SIG8(__Vdly__main__DOT__r_wb_sio_ack,0,0);
    VL_SIG8(__Vdly__main__DOT__r_wb_dio_ack,1,0);
    VL_SIG8(__Vdly__main__DOT__sdramscopei__DOT__counter,3,0);
    VL_SIG8(__Vdly__main__DOT__sdramscopei__DOT__waddr,3,0);
    VL_SIG8(__Vdly__main__DOT__sdramscopei__DOT__dr_primed,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdramscopei__DOT__mem__v0,3,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdramscopei__DOT__mem__v0,0,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__in_refresh_clk,2,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__r_pending,0,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__r_we,0,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v0,0,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__r_barrell_ack,5,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__nxt_dmod,0,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v1,0,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v3,0,0);
    VL_SIG8(__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v4,2,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v4,0,0);
    VL_SIG8(__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v5,2,0);
    VL_SIG8(__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v6,2,0);
    VL_SIG8(__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v7,2,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__clocks_til_idle,2,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v8,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v8,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v9,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v9,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v10,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v10,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v11,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v11,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v12,1,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v12,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v12,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v0,1,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v13,1,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v13,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v13,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v14,1,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v14,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v14,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v15,1,0);
    VL_SIG8(__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v15,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v1,1,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__maintenance_clocks,3,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero,0,0);
    VL_SIG8(__Vdly__main__DOT__sdrami__DOT__m_state,1,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe,0,0);
    VL_SIG8(__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__regset__v0,4,0);
    VL_SIG8(__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__regset__v0,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__r_clear_icache,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight,1,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count,5,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit,4,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl,0,0);
    VL_SIG8(__Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl,0,0);
    VL_SIG8(__Vdly__main__DOT__watchdogi__DOT__r_running,0,0);
    VL_SIG8(__Vdly__main__DOT__hbi_pp__DOT__pp_clk_transfer,5,0);
    VL_SIG8(__Vdly__main__DOT__pp_tx_busy,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__ps_full,0,0);
    VL_SIG8(__Vdly__main__DOT__hb_cyc,0,0);
    VL_SIG8(__Vdly__main__DOT__hb_stb,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__wbexec__DOT__inc,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addints__DOT__int_state,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addints__DOT__loaded,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addints__DOT__int_loaded,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__idl_stb,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len,3,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state,0,0);
    VL_SIG8(__Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr,0,0);
    VL_SIG8(__Vdly__main__DOT__wb_cyc,0,0);
    VL_SIG8(__Vdly__main__DOT__wb_stb,0,0);
    VL_SIG8(__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we,0,0);
    VL_SIG8(__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel,3,0);
    VL_SIG8(__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb,0,0);
    VL_SIG8(__Vdly__main__DOT__hb_dwbi_err,0,0);
    VL_SIG8(__Vdly__main__DOT__bustimeri__DOT__r_zero,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0,4,0);
    VL_SIG8(__Vdlyvval__main__DOT__bkrami__DOT__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__main__DOT__bkrami__DOT__mem__v0,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1,4,0);
    VL_SIG8(__Vdlyvval__main__DOT__bkrami__DOT__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__main__DOT__bkrami__DOT__mem__v1,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2,4,0);
    VL_SIG8(__Vdlyvval__main__DOT__bkrami__DOT__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__main__DOT__bkrami__DOT__mem__v2,0,0);
    VL_SIG8(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3,4,0);
    VL_SIG8(__Vdlyvval__main__DOT__bkrami__DOT__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__main__DOT__bkrami__DOT__mem__v3,0,0);
    VL_SIG8(__Vdly__main__DOT__sdramscopei__DOT__raddr,3,0);
    VL_SIG16(__Vdly__main__DOT__sdrami__DOT__refresh_clk,9,0);
    VL_SIG16(__Vdlyvval__main__DOT__sdrami__DOT__bank_row__v0,12,0);
    VL_SIG16(__Vdlyvval__main__DOT__sdrami__DOT__bank_row__v1,12,0);
    VL_SIG16(__Vdly__main__DOT__sdrami__DOT__startup_idle,15,0);
    VL_SIG16(__Vdly__main__DOT__watchdogi__DOT__r_value,15,0);
    VL_SIG16(__Vdly__o_gpio,10,0);
    VL_SIG16(__Vdly__main__DOT__bustimeri__DOT__r_value,15,0);
    VL_SIG16(__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0,10,0);
    VL_SIG16(__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1,10,0);
    VL_SIG16(__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2,10,0);
    VL_SIG16(__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3,10,0);
    VL_SIG16(__Vdly__main__DOT__buspici__DOT__r_int_state,14,0);
    VL_SIG16(__Vdly__main__DOT__buspici__DOT__r_int_enable,14,0);
    VL_SIG(__Vdly__main__DOT__r_pwrcount_data,31,0);
    VL_SIG(__Vdlyvval__main__DOT__sdramscopei__DOT__mem__v0,31,0);
    VL_SIG(__Vdly__main__DOT__sdrami__DOT__fwd_addr,22,0);
    VL_SIG(__Vdly__main__DOT__sdrami__DOT__r_addr,22,0);
    VL_SIG(__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__regset__v0,31,0);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc,24,0);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr,22,0);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc,24,0);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc,24,0);
    VL_SIGW(__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial,65,0,3);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor,31,0);
    VL_SIG(__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result,31,0);
    VL_SIG(__Vdly__main__DOT__hb_tmp_addr,29,0);
    VL_SIG(__Vdly__main__DOT__genbus__DOT__addidles__DOT__idle_counter,22,0);
    VL_SIG(__Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_word,31,0);
    VL_SIG(__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr,22,0);
    VL_SIG(__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data,31,0);
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIG64(__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b,32,0);
    VL_SIG64(__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend,62,0);
    VL_SIG64(__Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word,33,0);
    VL_SIG64(__Vdly__main__DOT__genbus__DOT__idl_word,33,0);
    // Body
    __Vdly__main__DOT__sdrami__DOT__startup_idle = vlTOPp->main__DOT__sdrami__DOT__startup_idle;
    __Vdly__main__DOT__r_pwrcount_data = vlTOPp->main__DOT__r_pwrcount_data;
    __Vdly__main__DOT__hbi_pp__DOT__pp_clk_transfer 
	= vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer;
    __Vdly__main__DOT__sdrami__DOT__in_refresh_clk 
	= vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk;
    __Vdly__main__DOT__sdrami__DOT__refresh_clk = vlTOPp->main__DOT__sdrami__DOT__refresh_clk;
    __Vdly__main__DOT__sdrami__DOT__m_state = vlTOPp->main__DOT__sdrami__DOT__m_state;
    __Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero 
	= vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero;
    __Vdly__main__DOT__sdrami__DOT__maintenance_clocks 
	= vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight;
    __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len 
	= vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len;
    __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_word 
	= vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word;
    __Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word 
	= vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word;
    __Vdly__main__DOT__pp_tx_busy = vlTOPp->main__DOT__pp_tx_busy;
    __Vdly__main__DOT__genbus__DOT__wbexec__DOT__inc 
	= vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc;
    __Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr 
	= vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr;
    __Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state 
	= vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state;
    __Vdly__main__DOT__hb_tmp_addr = vlTOPp->main__DOT__hb_tmp_addr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl;
    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel 
	= vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel;
    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data 
	= vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data;
    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr 
	= vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr;
    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we 
	= vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we;
    __Vdly__main__DOT__buspici__DOT__r_int_enable = vlTOPp->main__DOT__buspici__DOT__r_int_enable;
    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb 
	= vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb;
    __Vdly__main__DOT__wb_cyc = vlTOPp->main__DOT__wb_cyc;
    __Vdly__main__DOT__buspici__DOT__r_int_state = vlTOPp->main__DOT__buspici__DOT__r_int_state;
    __Vdly__main__DOT__hb_dwbi_err = vlTOPp->main__DOT__hb_dwbi_err;
    __Vdly__main__DOT__wb_stb = vlTOPp->main__DOT__wb_stb;
    __Vdly__main__DOT__genbus__DOT__addints__DOT__int_state 
	= vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state;
    __Vdly__main__DOT__hb_cyc = vlTOPp->main__DOT__hb_cyc;
    __Vdly__main__DOT__hb_stb = vlTOPp->main__DOT__hb_stb;
    __Vdly__main__DOT__r_wb_sio_ack = vlTOPp->main__DOT__r_wb_sio_ack;
    __Vdly__main__DOT__r_wb_dio_ack = vlTOPp->main__DOT__r_wb_dio_ack;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl;
    __Vdly__main__DOT__watchdogi__DOT__r_running = vlTOPp->main__DOT__watchdogi__DOT__r_running;
    __Vdly__main__DOT__watchdogi__DOT__r_value = vlTOPp->main__DOT__watchdogi__DOT__r_value;
    __Vdly__main__DOT__sdrami__DOT__clocks_til_idle 
	= vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle;
    __Vdly__main__DOT__sdrami__DOT__nxt_dmod = vlTOPp->main__DOT__sdrami__DOT__nxt_dmod;
    __Vdly__main__DOT__sdrami__DOT__r_barrell_ack = vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack;
    __Vdly__o_gpio = vlTOPp->o_gpio;
    __Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__regset__v0 = 0U;
    __Vdly__main__DOT__bustimeri__DOT__r_zero = vlTOPp->main__DOT__bustimeri__DOT__r_zero;
    __Vdlyvset__main__DOT__sdramscopei__DOT__mem__v0 = 0U;
    __Vdly__main__DOT__bustimeri__DOT__r_value = vlTOPp->main__DOT__bustimeri__DOT__r_value;
    __Vdly__main__DOT__sdramscopei__DOT__dr_primed 
	= vlTOPp->main__DOT__sdramscopei__DOT__dr_primed;
    __Vdly__main__DOT__sdramscopei__DOT__waddr = vlTOPp->main__DOT__sdramscopei__DOT__waddr;
    __Vdly__main__DOT__sdramscopei__DOT__raddr = vlTOPp->main__DOT__sdramscopei__DOT__raddr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U] 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U];
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U] 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U];
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U] 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U];
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b;
    __Vdly__main__DOT__sdramscopei__DOT__counter = vlTOPp->main__DOT__sdramscopei__DOT__counter;
    __Vdly__main__DOT__genbus__DOT__ps_full = vlTOPp->main__DOT__genbus__DOT__ps_full;
    __Vdly__main__DOT__sdrami__DOT__r_addr = vlTOPp->main__DOT__sdrami__DOT__r_addr;
    __Vdly__main__DOT__sdrami__DOT__fwd_addr = vlTOPp->main__DOT__sdrami__DOT__fwd_addr;
    __Vdly__main__DOT__sdrami__DOT__r_we = vlTOPp->main__DOT__sdrami__DOT__r_we;
    __Vdly__main__DOT__sdrami__DOT__r_pending = vlTOPp->main__DOT__sdrami__DOT__r_pending;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    __Vdlyvset__main__DOT__bkrami__DOT__mem__v0 = 0U;
    __Vdlyvset__main__DOT__bkrami__DOT__mem__v1 = 0U;
    __Vdlyvset__main__DOT__bkrami__DOT__mem__v2 = 0U;
    __Vdlyvset__main__DOT__bkrami__DOT__mem__v3 = 0U;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v0 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v1 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v3 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v4 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v8 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v9 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v10 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v11 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v13 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v14 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v12 = 0U;
    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v15 = 0U;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_clear_icache 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag;
    __Vdly__main__DOT__genbus__DOT__addidles__DOT__idle_counter 
	= vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter;
    __Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt 
	= vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i;
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc;
    __Vdly__main__DOT__genbus__DOT__addints__DOT__loaded 
	= vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded;
    __Vdly__main__DOT__genbus__DOT__idl_stb = vlTOPp->main__DOT__genbus__DOT__idl_stb;
    __Vdly__main__DOT__genbus__DOT__addints__DOT__int_loaded 
	= vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded;
    __Vdly__main__DOT__genbus__DOT__idl_word = vlTOPp->main__DOT__genbus__DOT__idl_word;
    // ALWAYS at wbsdram.v:460
    if ((0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__startup_idle))) {
	__Vdly__main__DOT__sdrami__DOT__startup_idle 
	    = (0xffffU & ((IData)(vlTOPp->main__DOT__sdrami__DOT__startup_idle) 
			  - (IData)(1U)));
    }
    // ALWAYS at main.v:1016
    if ((0x80000000U & vlTOPp->main__DOT__r_pwrcount_data)) {
	__Vdly__main__DOT__r_pwrcount_data = ((0x80000000U 
					       & __Vdly__main__DOT__r_pwrcount_data) 
					      | (0x7fffffffU 
						 & ((IData)(1U) 
						    + vlTOPp->main__DOT__r_pwrcount_data)));
    } else {
	__Vdly__main__DOT__r_pwrcount_data = ((IData)(1U) 
					      + vlTOPp->main__DOT__r_pwrcount_data);
    }
    // ALWAYS at ../pport/pport.v:85
    __Vdly__main__DOT__hbi_pp__DOT__pp_clk_transfer 
	= ((0x3eU & ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer) 
		     << 1U)) | (IData)(vlTOPp->i_pp_clk));
    // ALWAYS at wbsdram.v:134
    if (vlTOPp->main__DOT__sdrami__DOT__refresh_cmd) {
	__Vdly__main__DOT__sdrami__DOT__in_refresh_clk = 6U;
    } else {
	if ((0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk))) {
	    __Vdly__main__DOT__sdrami__DOT__in_refresh_clk 
		= (7U & ((IData)(vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk) 
			 - (IData)(1U)));
	}
    }
    // ALWAYS at wbsdram.v:119
    if (vlTOPp->main__DOT__sdrami__DOT__refresh_cmd) {
	__Vdly__main__DOT__sdrami__DOT__refresh_clk = 0x139U;
    } else {
	if ((0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_clk))) {
	    __Vdly__main__DOT__sdrami__DOT__refresh_clk 
		= (0x3ffU & ((IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_clk) 
			     - (IData)(1U)));
	}
    }
    // ALWAYS at cpu/ziptimer.v:175
    vlTOPp->main__DOT__bustimer_ack = ((~ (IData)(vlTOPp->i_reset)) 
				       & (IData)(vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5));
    // ALWAYS at cpu/ziptimer.v:175
    vlTOPp->main__DOT__watchdog_ack = ((~ (IData)(vlTOPp->i_reset)) 
				       & (IData)(vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5));
    // ALWAYS at wbgpio.v:89
    vlTOPp->main__DOT__gpioi__DOT__r_gpio = vlTOPp->main__DOT__gpioi__DOT__q_gpio;
    // ALWAYS at cpu/ziptimer.v:168
    vlTOPp->main__DOT__bustimer_int = ((~ ((IData)(vlTOPp->i_reset) 
					   | (IData)(vlTOPp->main__DOT__bustimeri__DOT__wb_write))) 
				       & (1U == (IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value)));
    // ALWAYS at wbgpio.v:89
    vlTOPp->main__DOT__gpio_int = ((IData)(vlTOPp->main__DOT__gpioi__DOT__x_gpio) 
				   != (IData)(vlTOPp->main__DOT__gpioi__DOT__q_gpio));
    // ALWAYS at cpu/dblfetch.v:120
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
	if ((1U == ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb) 
		      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall))) 
		     << 1U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight 
		= (3U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight) 
			 - (IData)(1U)));
	} else {
	    if ((2U == ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb) 
			  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall))) 
			 << 1U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight 
		    = (3U & ((IData)(1U) + (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight)));
	    }
	}
    } else {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight = 0U;
    }
    // ALWAYS at main.v:601
    vlTOPp->main__DOT__hb_many_ack = ((0U != (((IData)(vlTOPp->main__DOT__hb_dwb_ack) 
					       << 1U) 
					      | (IData)(vlTOPp->main__DOT__swic__DOT__dbg_ack))) 
				      & ((2U != (((IData)(vlTOPp->main__DOT__hb_dwb_ack) 
						  << 1U) 
						 | (IData)(vlTOPp->main__DOT__swic__DOT__dbg_ack))) 
					 & ((1U != 
					     (((IData)(vlTOPp->main__DOT__hb_dwb_ack) 
					       << 1U) 
					      | (IData)(vlTOPp->main__DOT__swic__DOT__dbg_ack))) 
					    & (IData)(vlTOPp->main__DOT__hb_cyc))));
    // ALWAYS at cpu/zipcpu.v:856
    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Av 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset
	    [vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR];
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset
	    [vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB];
    }
    // ALWAYS at wbscope.v:355
    vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack 
	= ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_pre_wb_ack) 
	   & (IData)(vlTOPp->main__DOT__wb_cyc));
    // ALWAYS at ../pport/pport.v:154
    vlTOPp->main__DOT__hbi_pp__DOT__r_dbg = ((IData)(vlTOPp->main__DOT__genbus__DOT__ps_full) 
					     & (~ (IData)(vlTOPp->main__DOT__pp_tx_busy)));
    // ALWAYS at wbsdram.v:591
    vlTOPp->main__DOT__sdrami__DOT__last_ram_data = vlTOPp->main__DOT__sdrami__DOT__ram_data;
    // ALWAYS at ../hexbus/hbdeword.v:83
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb) 
	 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb)))) {
	__Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_word 
	    = (IData)(vlTOPp->main__DOT__genbus__DOT__idl_word);
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_busy)))) {
	    __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_word 
		= (0xfffffff0U & (vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word 
				  << 4U));
	}
    }
    // ALWAYS at ../hexbus/hbdeword.v:95
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb) 
	 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb)))) {
	vlTOPp->main__DOT__genbus__DOT__hb_bits = (0x1fU 
						   & ((3U 
						       == 
						       (3U 
							& (IData)(
								  (vlTOPp->main__DOT__genbus__DOT__idl_word 
								   >> 0x20U))))
						       ? (IData)(
								 (vlTOPp->main__DOT__genbus__DOT__idl_word 
								  >> 0x1dU))
						       : 
						      (0x10U 
						       | (3U 
							  & (IData)(
								    (vlTOPp->main__DOT__genbus__DOT__idl_word 
								     >> 0x20U))))));
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_busy)))) {
	    vlTOPp->main__DOT__genbus__DOT__hb_bits 
		= (0xfU & (vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word 
			   >> 0x1cU));
	}
    }
    // ALWAYS at main.v:423
    __Vtableidx1 = ((0x40U & ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
			      << 6U)) | (((IData)(vlTOPp->main__DOT__bkram_ack) 
					  << 5U) | 
					 (((IData)(vlTOPp->main__DOT__r_wb_sio_ack) 
					   << 4U) | 
					  (((IData)(vlTOPp->main__DOT__console_ack) 
					    << 3U) 
					   | (((IData)(vlTOPp->main__DOT__wb_cyc) 
					       << 2U) 
					      | ((2U 
						  & (IData)(vlTOPp->main__DOT__r_wb_dio_ack)) 
						 | (IData)(vlTOPp->main__DOT__sdramscope_ack)))))));
    vlTOPp->main__DOT__wb_many_ack = vlTOPp->__Vtable1_main__DOT__wb_many_ack
	[__Vtableidx1];
    // ALWAYS at cpu/wbpriarbiter.v:102
    if (vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11) {
	if ((((IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11) 
	      & (IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12)) 
	     & (~ (IData)(vlTOPp->main__DOT__zip_cyc)))) {
	    vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner = 0U;
	}
    } else {
	vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner = 1U;
    }
    // ALWAYS at ../hexbus/hbpack.v:88
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word = VL_ULL(0);
    } else {
	if (vlTOPp->main__DOT__genbus__DOT__dec_stb) {
	    if ((0x10U & (IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits))) {
		__Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word 
		    = ((VL_ULL(0xffffffff) & __Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word) 
		       | ((QData)((IData)((3U & (IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits)))) 
			  << 0x20U));
		__Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word 
		    = (VL_ULL(0x300000000) & __Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word);
	    } else {
		__Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word 
		    = ((VL_ULL(0x300000000) & __Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word) 
		       | (IData)((IData)(((0xfffffff0U 
					   & ((IData)(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word) 
					      << 4U)) 
					  | (0xfU & (IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits))))));
	    }
	}
    }
    // ALWAYS at ../pport/pport.v:130
    __Vdly__main__DOT__pp_tx_busy = (((IData)(vlTOPp->main__DOT__hbi_pp__DOT__loaded) 
				      | ((IData)(vlTOPp->main__DOT__genbus__DOT__ps_full) 
					 & (~ (IData)(vlTOPp->main__DOT__pp_tx_busy)))) 
				     | (((0U != (0x1fU 
						 & ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer) 
						    >> 1U))) 
					 | (IData)(vlTOPp->o_pp_clkfb)) 
					& (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir))));
    // ALWAYS at cpu/zipcpu.v:1489
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val 
	= vlTOPp->main__DOT__hb_data;
    // ALWAYS at ../hexbus/hbexec.v:194
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr) 
	 & (~ (IData)(vlTOPp->main__DOT__hb_cyc)))) {
	__Vdly__main__DOT__hb_tmp_addr = (0x3fffffffU 
					  & ((1U & (IData)(
							   (vlTOPp->main__DOT__genbus__DOT__iw_word 
							    >> 1U)))
					      ? ((IData)(
							 (vlTOPp->main__DOT__genbus__DOT__iw_word 
							  >> 2U)) 
						 + vlTOPp->main__DOT__hb_tmp_addr)
					      : (IData)(
							(vlTOPp->main__DOT__genbus__DOT__iw_word 
							 >> 2U))));
	__Vdly__main__DOT__genbus__DOT__wbexec__DOT__inc 
	    = (1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__iw_word)));
    } else {
	if (((IData)(vlTOPp->main__DOT__hb_stb) & (~ (IData)(vlTOPp->main__DOT__hb_stall)))) {
	    __Vdly__main__DOT__hb_tmp_addr = (0x3fffffffU 
					      & (vlTOPp->main__DOT__hb_tmp_addr 
						 + (IData)(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc)));
	}
    }
    // ALWAYS at cpu/memops.v:152
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))) 
	      & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl) 
		 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl) 
		    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall)))));
    // ALWAYS at cpu/memops.v:140
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl))) 
	      & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl)
		  ? ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl) 
		     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall))
		  : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb))));
    // ALWAYS at cpu/icontrol.v:107
    if (((IData)(vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3) 
	 & (vlTOPp->main__DOT__wb_data >> 0x1fU))) {
	__Vdly__main__DOT__buspici__DOT__r_int_enable 
	    = (0x7fffU & ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_enable) 
			  | (vlTOPp->main__DOT__wb_data 
			     >> 0x10U)));
    } else {
	if (((IData)(vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3) 
	     & (~ (vlTOPp->main__DOT__wb_data >> 0x1fU)))) {
	    __Vdly__main__DOT__buspici__DOT__r_int_enable 
		= ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_enable) 
		   & (~ (vlTOPp->main__DOT__wb_data 
			 >> 0x10U)));
	}
    }
    // ALWAYS at cpu/icontrol.v:99
    __Vdly__main__DOT__buspici__DOT__r_int_state = 
	((IData)(vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3)
	  ? ((IData)(vlTOPp->main__DOT__bus_int_vector) 
	     | ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
		& (~ vlTOPp->main__DOT__wb_data))) : (IData)(vlTOPp->main__DOT__buspici__DOT__nxt_int_state));
    // ALWAYS at ../hexbus/hbints.v:63
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__addints__DOT__int_state = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state)))) {
	    __Vdly__main__DOT__genbus__DOT__addints__DOT__int_state = 1U;
	} else {
	    if ((1U & ((~ (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt)) 
		       & (~ (IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt))))) {
		__Vdly__main__DOT__genbus__DOT__addints__DOT__int_state = 0U;
	    }
	}
    }
    // ALWAYS at wbsdram.v:615
    vlTOPp->main__DOT__sdrami__DOT__trigger = ((((0xffffU 
						  & vlTOPp->main__DOT__sdram_data) 
						 == 
						 (0xffffU 
						  & (vlTOPp->main__DOT__sdram_data 
						     >> 0x10U))) 
						& (IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack)) 
					       & (~ (IData)(vlTOPp->main__DOT__wb_we)));
    // ALWAYS at cpu/wbdblpriarb.v:134
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner = 1U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
	    if ((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl)) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))) 
		 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner = 0U;
	    }
	} else {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner = 1U;
	}
    }
    // ALWAYS at ../hexbus/hbexec.v:121
    __Vtableidx4 = ((((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
		      & (~ (IData)((vlTOPp->main__DOT__genbus__DOT__iw_word 
				    >> 0x21U)))) << 6U) 
		    | (((IData)(vlTOPp->main__DOT__hb_ack) 
			<< 5U) | (((IData)(vlTOPp->main__DOT__hb_stall) 
				   << 4U) | (((IData)(vlTOPp->main__DOT__hb_stb) 
					      << 3U) 
					     | (((IData)(vlTOPp->main__DOT__hb_cyc) 
						 << 2U) 
						| (((IData)(vlTOPp->main__DOT__hb_err) 
						    << 1U) 
						   | (IData)(vlTOPp->main__DOT__genbus__DOT__w_reset)))))));
    if ((1U & vlTOPp->__Vtablechg4[__Vtableidx4])) {
	__Vdly__main__DOT__hb_cyc = vlTOPp->__Vtable4_main__DOT__hb_cyc
	    [__Vtableidx4];
    }
    if ((2U & vlTOPp->__Vtablechg4[__Vtableidx4])) {
	__Vdly__main__DOT__hb_stb = vlTOPp->__Vtable4_main__DOT__hb_stb
	    [__Vtableidx4];
    }
    // ALWAYS at cpu/zipcpu.v:1008
    __Vtableidx2 = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_F;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F 
	= vlTOPp->__Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F
	[__Vtableidx2];
    // ALWAYS at main.v:446
    __Vdly__main__DOT__r_wb_sio_ack = ((IData)(vlTOPp->main__DOT__wb_stb) 
				       & (4U == (0xfU 
						 & (vlTOPp->main__DOT__wb_addr 
						    >> 0x13U))));
    // ALWAYS at main.v:465
    __Vdly__main__DOT__r_wb_dio_ack = ((1U & ((IData)(vlTOPp->i_reset) 
					      | (~ (IData)(vlTOPp->main__DOT__wb_cyc))))
				        ? 0U : ((2U 
						 & ((IData)(vlTOPp->main__DOT__r_wb_dio_ack) 
						    << 1U)) 
						| ((IData)(vlTOPp->main__DOT__wb_stb) 
						   & (2U 
						      == 
						      (0xfU 
						       & (vlTOPp->main__DOT__wb_addr 
							  >> 0x13U))))));
    // ALWAYS at cpu/memops.v:122
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl = 0U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl) 
	     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))) {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl = 0U;
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl = 0U;
	    }
	} else {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl = 0U;
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb;
	}
    }
    // ALWAYS at cpu/ziptimer.v:99
    if (vlTOPp->i_reset) {
	__Vdly__main__DOT__watchdogi__DOT__r_running = 0U;
    } else {
	if (vlTOPp->main__DOT__watchdogi__DOT__wb_write) {
	    __Vdly__main__DOT__watchdogi__DOT__r_running 
		= (0U != (0xffffU & vlTOPp->main__DOT__wb_data));
	} else {
	    if (vlTOPp->main__DOT__watchdogi__DOT__r_zero) {
		__Vdly__main__DOT__watchdogi__DOT__r_running = 0U;
	    }
	}
    }
    // ALWAYS at cpu/ziptimer.v:138
    if (vlTOPp->i_reset) {
	__Vdly__main__DOT__watchdogi__DOT__r_value = 0U;
    } else {
	if (vlTOPp->main__DOT__watchdogi__DOT__wb_write) {
	    __Vdly__main__DOT__watchdogi__DOT__r_value 
		= (0xffffU & vlTOPp->main__DOT__wb_data);
	} else {
	    if (vlTOPp->main__DOT__watchdogi__DOT__r_running) {
		if ((1U & (~ (IData)(vlTOPp->main__DOT__watchdogi__DOT__r_zero)))) {
		    __Vdly__main__DOT__watchdogi__DOT__r_value 
			= (0xffffU & ((IData)(vlTOPp->main__DOT__watchdogi__DOT__r_value) 
				      - (IData)(1U)));
		}
	    }
	}
    }
    // ALWAYS at wbgpio.v:80
    if (((IData)(vlTOPp->main__DOT__wb_stb) & ((4U 
						== 
						(0xfU 
						 & (vlTOPp->main__DOT__wb_addr 
						    >> 0x13U))) 
					       & (2U 
						  == 
						  (7U 
						   & vlTOPp->main__DOT__wb_addr))))) {
	__Vdly__o_gpio = (0x7ffU & (((IData)(vlTOPp->o_gpio) 
				     & (~ (vlTOPp->main__DOT__wb_data 
					   >> 0x10U))) 
				    | (vlTOPp->main__DOT__wb_data 
				       & (vlTOPp->main__DOT__wb_data 
					  >> 0x10U))));
    }
    // ALWAYS at cpu/zipcpu.v:1808
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) {
	__Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__regset__v0 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl;
	__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__regset__v0 = 1U;
	__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__regset__v0 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id;
    }
    // ALWAYS at cpu/zipcpu.v:838
    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
		  == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB) 
		  == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl;
    }
    // ALWAYS at cpu/ziptimer.v:152
    if (vlTOPp->i_reset) {
	__Vdly__main__DOT__bustimeri__DOT__r_zero = 1U;
    } else {
	if (vlTOPp->main__DOT__bustimeri__DOT__wb_write) {
	    __Vdly__main__DOT__bustimeri__DOT__r_zero 
		= (0U == (0xffffU & vlTOPp->main__DOT__wb_data));
	} else {
	    if (vlTOPp->main__DOT__bustimeri__DOT__r_running) {
		if ((1U == (IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value))) {
		    __Vdly__main__DOT__bustimeri__DOT__r_zero = 1U;
		} else {
		    if (((IData)(vlTOPp->main__DOT__bustimeri__DOT__r_zero) 
			 & (IData)(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload))) {
			__Vdly__main__DOT__bustimeri__DOT__r_zero = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at wbscope.v:307
    if ((1U & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped)))) {
	__Vdlyvval__main__DOT__sdramscopei__DOT__mem__v0 
	    = vlTOPp->main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe;
	__Vdlyvset__main__DOT__sdramscopei__DOT__mem__v0 = 1U;
	__Vdlyvdim0__main__DOT__sdramscopei__DOT__mem__v0 
	    = vlTOPp->main__DOT__sdramscopei__DOT__waddr;
    }
    // ALWAYS at cpu/ziptimer.v:138
    if (vlTOPp->i_reset) {
	__Vdly__main__DOT__bustimeri__DOT__r_value = 0U;
    } else {
	if (vlTOPp->main__DOT__bustimeri__DOT__wb_write) {
	    __Vdly__main__DOT__bustimeri__DOT__r_value 
		= (0xffffU & vlTOPp->main__DOT__wb_data);
	} else {
	    if (vlTOPp->main__DOT__bustimeri__DOT__r_running) {
		if (vlTOPp->main__DOT__bustimeri__DOT__r_zero) {
		    if (vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload) {
			__Vdly__main__DOT__bustimeri__DOT__r_value 
			    = vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count;
		    }
		} else {
		    __Vdly__main__DOT__bustimeri__DOT__r_value 
			= (0xffffU & ((IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value) 
				      - (IData)(1U)));
		}
	    }
	}
    }
    // ALWAYS at wbscope.v:407
    vlTOPp->main__DOT__sdramscopei__DOT__br_level_interrupt 
	= ((~ ((~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		   >> 2U)) | (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
				 >> 2U)))) & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped) 
					      & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))));
    // ALWAYS at wbscope.v:259
    if ((4U & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped)))) {
	    __Vdly__main__DOT__sdramscopei__DOT__waddr 
		= (0xfU & ((IData)(1U) + (IData)(vlTOPp->main__DOT__sdramscopei__DOT__waddr)));
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed)))) {
		__Vdly__main__DOT__sdramscopei__DOT__dr_primed 
		    = (0xfU == (IData)(vlTOPp->main__DOT__sdramscopei__DOT__waddr));
	    }
	}
    } else {
	__Vdly__main__DOT__sdramscopei__DOT__waddr = 0U;
	__Vdly__main__DOT__sdramscopei__DOT__dr_primed = 0U;
    }
    // ALWAYS at wbscope.v:355
    if ((1U & ((~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		   >> 2U)) | (IData)(vlTOPp->main__DOT__sdramscopei__DOT__write_to_control)))) {
	__Vdly__main__DOT__sdramscopei__DOT__raddr = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__read_from_data) 
	     & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped))) {
	    __Vdly__main__DOT__sdramscopei__DOT__raddr 
		= (0xfU & ((IData)(1U) + (IData)(vlTOPp->main__DOT__sdramscopei__DOT__raddr)));
	}
    }
    // ALWAYS at cpu/div.v:223
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)) 
	   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
	      & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit))));
    // ALWAYS at cpu/div.v:330
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)) 
	   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
	      & (VL_ULL(0) == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff)));
    // ALWAYS at cpu/div.v:313
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result 
		= (0xfffffffeU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
				  << 1U));
	    if ((1U & (~ (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff 
				  >> 0x20U))))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result 
		    = (1U | __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result);
	    }
	} else {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign)
		    ? VL_NEGATE_I(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result)
		    : 0U);
	}
    }
    // ALWAYS at cpu/memops.v:229
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_wreg 
	    = (0x1fU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14));
    }
    // ALWAYS at cpu/zipcpu.v:2318
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	      & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))));
    // ALWAYS at cpu/slowmpy.v:101
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U] 
	    = ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U] 
		<< 0x1fU) | (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U] 
			     >> 1U));
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b 
	    = (VL_ULL(0x1ffffffff) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b 
				      >> 1U));
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count 
	    = (0x3fU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count) 
			- (IData)(1U)));
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U] 
	    = (IData)((VL_ULL(0x3ffffffff) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done)
					       ? ((VL_ULL(0x1ffffffff) 
						   & (((QData)((IData)(
								       vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U])) 
						       << 0x1fU) 
						      | ((QData)((IData)(
									 vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U])) 
							 >> 1U))) 
						  + 
						  (((QData)((IData)(
								    (1U 
								     & (IData)(
									       (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
										>> 0x20U))))) 
						    << 0x20U) 
						   | (QData)((IData)(
								     (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire))))))
					       : ((VL_ULL(0x1ffffffff) 
						   & (((QData)((IData)(
								       vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U])) 
						       << 0x1fU) 
						      | ((QData)((IData)(
									 vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U])) 
							 >> 1U))) 
						  + 
						  (((QData)((IData)(
								    (1U 
								     & (~ (IData)(
										(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
										>> 0x20U)))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire)))))));
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U] 
	    = (IData)(((VL_ULL(0x3ffffffff) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done)
					        ? (
						   (VL_ULL(0x1ffffffff) 
						    & (((QData)((IData)(
									vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U])) 
							<< 0x1fU) 
						       | ((QData)((IData)(
									  vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U])) 
							  >> 1U))) 
						   + 
						   (((QData)((IData)(
								     (1U 
								      & (IData)(
										(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
										>> 0x20U))))) 
						     << 0x20U) 
						    | (QData)((IData)(
								      (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire))))))
					        : (
						   (VL_ULL(0x1ffffffff) 
						    & (((QData)((IData)(
									vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U])) 
							<< 0x1fU) 
						       | ((QData)((IData)(
									  vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U])) 
							  >> 1U))) 
						   + 
						   (((QData)((IData)(
								     (1U 
								      & (~ (IData)(
										(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
										>> 0x20U)))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire)))))) 
		       >> 0x20U));
    } else {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count = 0x20U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b 
	    = (((QData)((IData)((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					  >> 0x1fU))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)));
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U] = 0U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U] = 0U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U] = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a 
	    = (((QData)((IData)((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
					  >> 0x1fU))))) 
		<< 0x20U) | (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)));
    }
    // ALWAYS at wbscope.v:231
    if ((4U & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) {
	if (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered) 
	     & (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped)))) {
	    __Vdly__main__DOT__sdramscopei__DOT__counter 
		= (0xfU & ((IData)(1U) + (IData)(vlTOPp->main__DOT__sdramscopei__DOT__counter)));
	}
    } else {
	__Vdly__main__DOT__sdramscopei__DOT__counter = 0U;
    }
    // ALWAYS at cpu/cpuops.v:102
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl 
	    = (((0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)) 
		& ((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			  >> 0x1fU)) != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					       >> 0x1fU)))) 
	       | ((2U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)) 
		  & ((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			    >> 0x1fU)) == (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
						 >> 0x1fU)))));
    }
    // ALWAYS at cpu/cpuops.v:95
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl 
	    = (((((0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)) 
		  & ((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			    >> 0x1fU)) != (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
						 >> 0x1fU)))) 
		 | ((2U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)) 
		    & ((1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			      >> 0x1fU)) == (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
						   >> 0x1fU))))) 
		| (6U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) 
	       | (5U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)));
    }
    // ALWAYS at ../pport/pport.v:144
    if ((1U & (~ (IData)(vlTOPp->main__DOT__pp_tx_busy)))) {
	vlTOPp->o_pp_data = ((IData)(vlTOPp->main__DOT__genbus__DOT__ps_full)
			      ? (IData)(vlTOPp->main__DOT__genbus__DOT__ps_data)
			      : 0xffU);
    }
    // ALWAYS at wbsdram.v:562
    vlTOPp->o_ram_data = (0xffffU & ((IData)(vlTOPp->main__DOT__sdrami__DOT__nxt_dmod)
				      ? vlTOPp->main__DOT__sdrami__DOT__r_data
				      : (vlTOPp->main__DOT__sdrami__DOT__r_data 
					 >> 0x10U)));
    // ALWAYS at wbsdram.v:568
    vlTOPp->o_ram_dqm = (3U & ((IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_mode)
			        ? 3U : ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_we)
					 ? ((IData)(vlTOPp->main__DOT__sdrami__DOT__nxt_dmod)
					     ? (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__r_sel))
					     : (~ ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_sel) 
						   >> 2U)))
					 : 0U)));
    // ALWAYS at cpu/cpuops.v:136
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign 
	    = (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
		     >> 0x1fU));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c = 0U;
	if ((8U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
		= ((4U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
		    ? ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
		        ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv
		        : ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
			    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv
			    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[0U]))
		    : ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
		        ? ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
			    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U]
			    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U])
		        : ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
			    ? ((0xffff0000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av) 
			       | (0xffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))
			    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result)));
	} else {
	    if ((4U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
		if ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
		    if ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result 
				       >> 1U));
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c 
			    = (1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result));
		    } else {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c 
			    = (1U & (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result 
					     >> 0x20U)));
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result);
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result 
				       >> 1U));
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c 
			    = (1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result));
		    } else {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			       ^ vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
		    }
		}
	    } else {
		if ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
		    if ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			       | vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
		    } else {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c 
			    = (1U & (IData)((VL_ULL(1) 
					     & (((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						 + (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))) 
						>> 0x20U))));
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			       + vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
		    }
		} else {
		    if ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			       & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
		    } else {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c 
			    = (1U & (IData)((VL_ULL(1) 
					     & (((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						 - (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))) 
						>> 0x20U))));
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			    = (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
			       - vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
		    }
		}
	    }
	}
    } else {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi)
	        ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U]
	        : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[0U]);
    }
    // ALWAYS at cpu/div.v:206
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit 
	= (0x1fU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)
		     ? 0U : (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
			      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign)))
			      ? ((IData)(1U) + (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit))
			      : 0U)));
    // ALWAYS at cpu/div.v:248
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z = 1U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign))) 
	     & (~ (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff 
			   >> 0x20U))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z = 0U;
	}
    }
    // ALWAYS at cpu/div.v:259
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign) {
	if ((1U & (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
			   >> 0x1fU)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend = VL_ULL(0x7fffffffffffffff);
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
		= ((VL_ULL(0x7fffffff00000000) & __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend) 
		   | (IData)((IData)(VL_NEGATE_I((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend)))));
	}
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
		= (VL_ULL(0x7ffffffffffffffe) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
						 << 1U));
	    if ((1U & (~ (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff 
				  >> 0x20U))))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
		    = ((VL_ULL(0xffffffff) & __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend) 
		       | ((QData)((IData)((0x7fffffffU 
					   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff)))) 
			  << 0x20U));
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
		    = (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av));
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2049
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 0U;
    } else {
	if (((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
	      & (~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		    >> 5U))) & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = 1U;
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		  & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
		    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
		       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			  >> 9U));
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:1865
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	     & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en 
		= (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			 >> 7U));
	}
    }
    // ALWAYS at memdev.v:123
    if (((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb) 
	 & ((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel) 
	    >> 3U))) {
	__Vdlyvval__main__DOT__bkrami__DOT__mem__v0 
	    = (0xffU & (vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data 
			>> 0x18U));
	__Vdlyvset__main__DOT__bkrami__DOT__mem__v0 = 1U;
	__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0 = 0x18U;
	__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0 
	    = vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr;
    }
    if (((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb) 
	 & ((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel) 
	    >> 2U))) {
	__Vdlyvval__main__DOT__bkrami__DOT__mem__v1 
	    = (0xffU & (vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data 
			>> 0x10U));
	__Vdlyvset__main__DOT__bkrami__DOT__mem__v1 = 1U;
	__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1 = 0x10U;
	__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1 
	    = vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr;
    }
    if (((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb) 
	 & ((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel) 
	    >> 1U))) {
	__Vdlyvval__main__DOT__bkrami__DOT__mem__v2 
	    = (0xffU & (vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data 
			>> 8U));
	__Vdlyvset__main__DOT__bkrami__DOT__mem__v2 = 1U;
	__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2 = 8U;
	__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2 
	    = vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr;
    }
    if (((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb) 
	 & (IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel))) {
	__Vdlyvval__main__DOT__bkrami__DOT__mem__v3 
	    = (0xffU & vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data);
	__Vdlyvset__main__DOT__bkrami__DOT__mem__v3 = 1U;
	__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3 = 0U;
	__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3 
	    = vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr;
    }
    // ALWAYS at cpu/div.v:282
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy))) {
	    if ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor)) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
		    = VL_NEGATE_I(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor);
	    }
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
		    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv;
	    }
	}
    }
    // ALWAYS at cpu/div.v:302
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
	= (1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)) 
		 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign)
		     ? ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
			 >> 0x1fU) ^ (IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
					      >> 0x1fU)))
		     : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
			& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign) 
			   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor)))))));
    // ALWAYS at cpu/zipcpu.v:1842
    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	 & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags 
	    = (0xfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl);
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
		    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags)
		    : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags));
	}
    }
    // ALWAYS at cpu/zipcpu.v:1833
    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	 & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags 
	    = (0xfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl);
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
		    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags)
		    : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags));
	}
    }
    // ALWAYS at cpu/div.v:172
    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid = 1U;
	} else {
	    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) {
		if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) {
		    __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid 
			= (1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign)));
		}
	    } else {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid 
		    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
	    }
	}
    }
    // ALWAYS at cpu/dblfetch.v:145
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
	    = (0x7fffffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
			    >> 2U));
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr 
		= (0x7fffffU & ((IData)(1U) + vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr));
	}
    }
    // ALWAYS at cpu/memops.v:232
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result 
	= ((8U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
	    ? ((4U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
	        ? ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
		    ? ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
		        ? (0xffU & vlTOPp->main__DOT__hb_dwbi_idata)
		        : (0xffU & (vlTOPp->main__DOT__hb_dwbi_idata 
				    >> 8U))) : ((1U 
						 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
						 ? 
						(0xffU 
						 & (vlTOPp->main__DOT__hb_dwbi_idata 
						    >> 0x10U))
						 : 
						(0xffU 
						 & (vlTOPp->main__DOT__hb_dwbi_idata 
						    >> 0x18U))))
	        : ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op))
		    ? (0xffffU & vlTOPp->main__DOT__hb_dwbi_idata)
		    : (0xffffU & (vlTOPp->main__DOT__hb_dwbi_idata 
				  >> 0x10U)))) : vlTOPp->main__DOT__hb_dwbi_idata);
    // ALWAYS at cpu/dblfetch.v:177
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
		= ((3U & __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc) 
		   | (0x1fffffcU & (((IData)(1U) + 
				     (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
				      >> 2U)) << 2U)));
	}
    }
    // ALWAYS at cpu/dblfetch.v:203
    if ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid = 0U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc)) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid));
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid = 0U;
	    }
	}
    }
    // ALWAYS at cpu/dblfetch.v:87
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err)))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) {
	    if ((1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb)) 
		       | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall))))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb 
		    = (1U & (~ ((0U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight)) 
				| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
				   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))));
	    }
	    if ((((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb))) 
		   & (1U >= (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight))) 
		  | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb)) 
		     & (0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight)))) 
		 | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 0U;
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 0U;
	    }
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
		  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle)) 
		 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
		     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled))) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal))))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc = 1U;
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb = 1U;
	    }
	}
    }
    // ALWAYS at cpu/dblfetch.v:184
    if ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal = 0U;
    } else {
	if ((1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)) 
		   | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled))))) {
	    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
		    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal));
	    } else {
		if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
		     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err))) {
		    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal = 1U;
		}
	    }
	}
    }
    // ALWAYS at cpu/idecode.v:429
    if (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)) 
	 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
	    = (0x1fffffeU & __Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc);
	if ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)) {
	    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
		    = ((1U & __Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc) 
		       | (0x1fffffeU & (((IData)(1U) 
					 + (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
					    >> 1U)) 
					<< 1U)));
	    } else {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
		    = (2U | (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc));
	    }
	} else {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
		= (0x1fffffcU & (((IData)(1U) + (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
						 >> 2U)) 
				 << 2U));
	}
    }
    // ALWAYS at cpu/zipcpu.v:1155
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim_immv 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv;
    }
    // ALWAYS at cpu/zipcpu.v:1437
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_wF) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond)) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)));
    // ALWAYS at cpu/zipcpu.v:1551
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid = 1U;
	} else {
	    if ((1U & (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
			& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy))) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid = 0U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2246
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase;
	} else {
	    if (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
		  & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
		 & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
		    >> 4U))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase 
		    = (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			     >> 1U));
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2464
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall 
	= (1U & ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
		 | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)) 
		    | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we)) 
		       | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall))))));
    // ALWAYS at cpu/zipcpu.v:2329
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_clear_icache 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache)) 
	      | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		  & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))) 
		 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		    >> 0xeU))));
    // ALWAYS at cpu/zipcpu.v:1471
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_reg 
	= (0x1fU & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted) 
		     & (IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we))
		     ? (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr)
		     : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14)));
    // ALWAYS at cpu/zipcpu.v:2223
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase = 0U;
    } else {
	if ((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid)) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase;
	}
    }
    // ALWAYS at cpu/zipcpu.v:1972
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
    } else {
	if ((1U & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt)) 
		   | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 0U;
	} else {
	    if (vlTOPp->main__DOT__buspici__DOT__r_interrupt) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
	    } else {
		if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) {
		    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal) 
			  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step)) 
			 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break))) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
		    }
		} else {
		    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break) {
			vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
		    } else {
			if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
			     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step))) {
			    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = 1U;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2133
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 0U;
    } else {
	if (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
	     & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubus_err_flag) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 0xaU));
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err) 
		 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2114
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv) 
	     & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 0xaU));
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:1491
    __Vdly__main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe 
	= ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)) 
	      | (IData)(vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache)));
    // ALWAYS at cpu/zipcpu.v:2152
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv) 
	     & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 0xbU));
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2170
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag = 0U;
    } else {
	if (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
	     & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 0xbU));
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error) 
		 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2537
    vlTOPp->main__DOT__zip_debug = ((1U & ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
					     | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce))) 
					    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger)) 
					   | (IData)(vlTOPp->main__DOT__swic__DOT__cpu_break)))
				     ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags
				     : (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid) 
					 | (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
					     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal))) 
					    & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR) 
						& (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid)) 
					       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid))))
					 ? (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger) 
					     << 0x1fU) 
					    | ((0x3c000000U 
						& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
						   << 0x1aU)) 
					       | (0x3ffffffU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl)))
					 : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)
					     ? (0x40000000U 
						| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger) 
						    << 0x1fU) 
						   | vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc))
					     : (((IData)(vlTOPp->main__DOT__zip_stb) 
						 | (IData)(vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb))
						 ? 
						(0x60000000U 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger) 
						     << 0x1fU) 
						    | (((IData)(vlTOPp->main__DOT__zip_stb) 
							<< 0x1cU) 
						       | (((IData)(vlTOPp->main__DOT__zip_we) 
							   << 0x1bU) 
							  | (0x7ffffffU 
							     & ((IData)(vlTOPp->main__DOT__zip_we)
								 ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data
								 : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr))))))
						 : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags))));
    // ALWAYS at ../hexbus/hbints.v:72
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state)))) {
	    __Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt = 1U;
	} else {
	    if ((((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
		  & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy))) 
		 & (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded))) {
		__Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt = 0U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2061
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 0U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break)) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = 1U;
	} else {
	    if (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
		 & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak 
		    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubreak) 
		       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			  >> 7U));
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2095
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 0U;
    } else {
	if (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
	     & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_u) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 8U));
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2076
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv) 
	     & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i) 
		   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		      >> 8U));
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i = 1U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2300
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc = 0xa00000U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce)) 
	     & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))) {
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
		= (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl);
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt) 
		 | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		    & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe))))) {
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
		    = (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc);
	    } else {
		if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt) 
		     | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
			& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache) 
			   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe))))) {
		    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
			= (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc);
		} else {
		    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
			  & ((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
				    >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) 
			 & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))) {
			__Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
			    = (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl);
		    } else {
			if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
			     | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)) 
				& (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)))) {
			    __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc 
				= (0x1fffffcU & (((IData)(1U) 
						  + 
						  (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
						   >> 2U)) 
						 << 2U));
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at ../hexbus/hbints.v:81
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__addints__DOT__loaded = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__ow_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__int_busy)))) {
	    __Vdly__main__DOT__genbus__DOT__addints__DOT__loaded = 1U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
		 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy)))) {
		__Vdly__main__DOT__genbus__DOT__addints__DOT__loaded = 0U;
	    }
	}
    }
    // ALWAYS at ../hexbus/hbidle.v:80
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__idl_stb = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy)))) {
	    __Vdly__main__DOT__genbus__DOT__idl_stb = 1U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb) 
		 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb)))) {
		__Vdly__main__DOT__genbus__DOT__idl_stb = 1U;
	    } else {
		if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb)))) {
		    __Vdly__main__DOT__genbus__DOT__idl_stb = 0U;
		}
	    }
	}
    }
    // ALWAYS at ../hexbus/hbidle.v:91
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
	 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy)))) {
	__Vdly__main__DOT__genbus__DOT__idl_word = vlTOPp->main__DOT__genbus__DOT__int_word;
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb)))) {
	    __Vdly__main__DOT__genbus__DOT__idl_word = VL_ULL(0x360000000);
	}
    }
    vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_word 
	= __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_word;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl;
    vlTOPp->o_gpio = __Vdly__o_gpio;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_result;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_addr;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_stb;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__div_valid;
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_state 
	= __Vdly__main__DOT__genbus__DOT__addints__DOT__int_state;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__ill_err_i;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_pc;
    // ALWAYS at wbgpio.v:89
    vlTOPp->main__DOT__gpioi__DOT__q_gpio = vlTOPp->main__DOT__gpioi__DOT__x_gpio;
    // ALWAYS at wbscope.v:355
    vlTOPp->main__DOT__sdramscopei__DOT__br_pre_wb_ack 
	= vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7;
    vlTOPp->o_pp_dbg = vlTOPp->main__DOT__hbi_pp__DOT__r_dbg;
    // ALWAYS at wbsdram.v:589
    vlTOPp->main__DOT__sdrami__DOT__ram_data = vlTOPp->i_ram_data;
    // ALWAYS at ../pport/pport.v:105
    vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_dir = vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir;
    // ALWAYS at ../pport/pport.v:123
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__ps_full) 
	 & (~ (IData)(vlTOPp->main__DOT__pp_tx_busy)))) {
	vlTOPp->main__DOT__hbi_pp__DOT__loaded = 1U;
    } else {
	if (((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir)))) {
	    vlTOPp->main__DOT__hbi_pp__DOT__loaded = 0U;
	}
    }
    vlTOPp->main__DOT__swic__DOT__cpu_lcl_stb = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
						 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F 
	= ((0x80U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F) 
		     << 4U)) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_F));
    // ALWAYS at cpu/ziptimer.v:152
    if (vlTOPp->i_reset) {
	vlTOPp->main__DOT__watchdogi__DOT__r_zero = 1U;
    } else {
	if (vlTOPp->main__DOT__watchdogi__DOT__wb_write) {
	    vlTOPp->main__DOT__watchdogi__DOT__r_zero 
		= (0U == (0xffffU & vlTOPp->main__DOT__wb_data));
	} else {
	    if (vlTOPp->main__DOT__watchdogi__DOT__r_running) {
		if ((1U == (IData)(vlTOPp->main__DOT__watchdogi__DOT__r_value))) {
		    vlTOPp->main__DOT__watchdogi__DOT__r_zero = 1U;
		}
	    }
	}
    }
    // ALWAYS at wbscope.v:293
    vlTOPp->main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe 
	= vlTOPp->main__DOT__sdram_debug;
    // ALWAYS at cpu/ziptimer.v:126
    if (vlTOPp->main__DOT__bustimeri__DOT__wb_write) {
	vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count 
	    = (0xffffU & vlTOPp->main__DOT__wb_data);
    }
    // ALWAYS at cpu/ziptimer.v:99
    if (vlTOPp->i_reset) {
	vlTOPp->main__DOT__bustimeri__DOT__r_running = 0U;
    } else {
	if (vlTOPp->main__DOT__bustimeri__DOT__wb_write) {
	    vlTOPp->main__DOT__bustimeri__DOT__r_running 
		= (0U != (0xffffU & vlTOPp->main__DOT__wb_data));
	} else {
	    if (((IData)(vlTOPp->main__DOT__bustimeri__DOT__r_zero) 
		 & (~ (IData)(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload)))) {
		vlTOPp->main__DOT__bustimeri__DOT__r_running = 0U;
	    }
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire 
	= ((1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b))
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a
	    : VL_ULL(0));
    // ALWAYS at ../hexbus/hbconsole.v:171
    if (vlTOPp->main__DOT__genbus__DOT__ps_full) {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__pp_tx_busy)))) {
	    __Vdly__main__DOT__genbus__DOT__ps_full 
		= vlTOPp->main__DOT__genbus__DOT__fnl_stb;
	    vlTOPp->main__DOT__genbus__DOT__ps_data 
		= (0x80U | (IData)(vlTOPp->main__DOT__genbus__DOT__fnl_byte));
	}
    } else {
	if (vlTOPp->main__DOT__genbus__DOT__fnl_stb) {
	    __Vdly__main__DOT__genbus__DOT__ps_full = 1U;
	    vlTOPp->main__DOT__genbus__DOT__ps_data 
		= (0x80U | (IData)(vlTOPp->main__DOT__genbus__DOT__fnl_byte));
	} else {
	    if (vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) {
		__Vdly__main__DOT__genbus__DOT__ps_full = 1U;
		vlTOPp->main__DOT__genbus__DOT__ps_data 
		    = vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data;
	    }
	}
    }
    // ALWAYS at wbsdram.v:184
    __Vdly__main__DOT__sdrami__DOT__fwd_addr = (0x7fff00U 
						& __Vdly__main__DOT__sdrami__DOT__fwd_addr);
    if (vlTOPp->main__DOT__sdrami__DOT__bus_cyc) {
	__Vdly__main__DOT__sdrami__DOT__r_pending = 1U;
	__Vdly__main__DOT__sdrami__DOT__r_we = vlTOPp->main__DOT__wb_we;
	__Vdly__main__DOT__sdrami__DOT__r_addr = vlTOPp->main__DOT__wb_addr;
	vlTOPp->main__DOT__sdrami__DOT__r_data = vlTOPp->main__DOT__wb_data;
	vlTOPp->main__DOT__sdrami__DOT__r_sel = vlTOPp->main__DOT__wb_sel;
	__Vdly__main__DOT__sdrami__DOT__fwd_addr = 
	    ((0xffU & __Vdly__main__DOT__sdrami__DOT__fwd_addr) 
	     | (0x7fff00U & (((IData)(1U) + (vlTOPp->main__DOT__wb_addr 
					     >> 8U)) 
			     << 8U)));
    } else {
	if ((((~ (IData)(vlTOPp->o_ram_cs_n)) & (IData)(vlTOPp->o_ram_ras_n)) 
	     & (~ (IData)(vlTOPp->o_ram_cas_n)))) {
	    __Vdly__main__DOT__sdrami__DOT__r_pending = 0U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__wb_cyc)))) {
		__Vdly__main__DOT__sdrami__DOT__r_pending = 0U;
	    }
	}
    }
    // ALWAYS at cpu/slowmpy.v:124
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done) {
	__Vtemp2[0U] = 0U;
	__Vtemp2[1U] = 2U;
	__Vtemp2[2U] = 2U;
	VL_ADD_W(3, __Vtemp3, __Vtemp2, vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial);
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[0U] 
	    = __Vtemp3[0U];
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[1U] 
	    = __Vtemp3[1U];
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result[2U] 
	    = (3U & __Vtemp3[2U]);
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__unused_aux 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux;
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
		!= (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
			  >> 0x1fU)))) << 3U) | ((4U 
						  & ((4U 
						      & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
							 >> 0x1dU)) 
						     ^ 
						     (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl) 
						       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign) 
							  != 
							  (1U 
							   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result 
							      >> 0x1fU)))) 
						      << 2U))) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c) 
						     << 1U) 
						    | (0U 
						       == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result))));
    // ALWAYS at cpu/mpyop.v:312
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi 
	    = (1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
		     >> 1U));
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_flags 
	= ((4U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result 
		  >> 0x1dU)) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
				 << 1U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z)));
    // ALWAYS at memdev.v:107
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_sel 
	= vlTOPp->main__DOT__wb_sel;
    // ALWAYS at memdev.v:103
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_data 
	= vlTOPp->main__DOT__wb_data;
    // ALWAYS at memdev.v:90
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_wstb 
	= ((IData)(vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4) 
	   & (IData)(vlTOPp->main__DOT__wb_we));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend 
						   >> 0x1fU))) 
				  - (QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor))));
    // ALWAYS at cpu/div.v:237
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn)) 
	      & ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
		  | vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv) 
		 >> 0x1fU)));
    vlTOPp->main__DOT__zip_stb = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				   ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
				   : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    // ALWAYS at cpu/dblfetch.v:138
    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
	 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle = 1U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle = 0U;
	}
    }
    // ALWAYS at cpu/dblfetch.v:219
    if ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache)) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal = 0U;
    } else {
	if (((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err)) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal = 1U;
	}
    }
    // ALWAYS at cpu/zipcpu.v:1128
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_wF 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wF) 
	   & ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
		  >> 6U)) | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR))));
    // ALWAYS at cpu/zipcpu.v:1956
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step = 0U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) 
	     & (0x1eU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step 
		= (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			 >> 6U));
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubus_err_flag 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag;
    // ALWAYS at cpu/zipbones.v:169
    vlTOPp->main__DOT__swic__DOT__cmd_clear_pf_cache 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__dbg_cmd_write) 
	   & (vlTOPp->main__DOT__hb_data >> 0xbU));
    // ALWAYS at cpu/div.v:191
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2)) 
	   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor)));
    // ALWAYS at cpu/cpuops.v:182
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2)) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
	       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op))) 
	      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone)));
    // ALWAYS at cpu/zipcpu.v:2495
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__cpu_break));
    // ALWAYS at cpu/memops.v:210
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl)) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack)) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we))));
    // ALWAYS at cpu/zipcpu.v:1435
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond)) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ubreak 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak;
    // ALWAYS at cpu/zipcpu.v:1079
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_break) 
		   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal)));
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_u 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u;
    // ALWAYS at cpu/zipcpu.v:1483
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & ((IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_we) 
	      & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc 
	= ((0xf800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_pc) 
	   | (0x7fffffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_pc 
			   >> 2U)));
    // ALWAYS at cpu/zipcpu.v:2278
    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	  & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
	     >> 4U)) & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc 
	    = (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl);
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	     & ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal))) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc;
	}
    }
    // ALWAYS at cpu/zipcpu.v:2289
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc = 0xa00000U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	      & (~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
		    >> 4U))) & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc 
		= (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl);
	} else {
	    if ((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
		 & ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid) 
		      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
		     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal))) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc 
		    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc;
	    }
	}
    }
    // ALWAYS at ../hexbus/hbidle.v:71
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__w_reset) 
	 | (IData)(vlTOPp->main__DOT__genbus__DOT__int_stb))) {
	vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb = 0U;
	__Vdly__main__DOT__genbus__DOT__addidles__DOT__idle_counter = 0U;
    } else {
	vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_stb 
	    = (1U & (((IData)(1U) + vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter) 
		     >> 0x17U));
	__Vdly__main__DOT__genbus__DOT__addidles__DOT__idle_counter 
	    = (0x7fffffU & ((IData)(1U) + vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter));
    }
    // ALWAYS at ../hexbus/hbints.v:102
    if (((IData)(vlTOPp->main__DOT__genbus__DOT__ow_stb) 
	 & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__int_busy)))) {
	__Vdly__main__DOT__genbus__DOT__addints__DOT__int_loaded = 0U;
	vlTOPp->main__DOT__genbus__DOT__int_word = vlTOPp->main__DOT__genbus__DOT__ow_word;
    } else {
	if ((1U & ((~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy)) 
		   | (~ (IData)(vlTOPp->main__DOT__genbus__DOT__int_stb))))) {
	    vlTOPp->main__DOT__genbus__DOT__int_word = VL_ULL(0x340000000);
	    __Vdly__main__DOT__genbus__DOT__addints__DOT__int_loaded = 1U;
	}
    }
    vlTOPp->main__DOT__watchdogi__DOT__r_running = __Vdly__main__DOT__watchdogi__DOT__r_running;
    vlTOPp->main__DOT__bustimeri__DOT__r_zero = __Vdly__main__DOT__bustimeri__DOT__r_zero;
    vlTOPp->main__DOT__genbus__DOT__ps_full = __Vdly__main__DOT__genbus__DOT__ps_full;
    vlTOPp->main__DOT__pp_tx_busy = __Vdly__main__DOT__pp_tx_busy;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U] 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[0U];
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U] 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[1U];
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U] 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial[2U];
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__dcd_pc;
    vlTOPp->main__DOT__genbus__DOT__addidles__DOT__idle_counter 
	= __Vdly__main__DOT__genbus__DOT__addidles__DOT__idle_counter;
    // ALWAYS at wbgpio.v:89
    vlTOPp->main__DOT__gpioi__DOT__x_gpio = vlTOPp->i_gpio;
    // ALWAYS at ../hexbus/hbnewline.v:82
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state = 0U;
	__Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr = 1U;
	vlTOPp->main__DOT__genbus__DOT__fnl_stb = 0U;
	vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 0U;
	vlTOPp->main__DOT__genbus__DOT__fnl_byte = 0x7fU;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__hx_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__nl_busy)))) {
	    vlTOPp->main__DOT__genbus__DOT__fnl_stb 
		= vlTOPp->main__DOT__genbus__DOT__hx_stb;
	    vlTOPp->main__DOT__genbus__DOT__fnl_byte 
		= vlTOPp->main__DOT__genbus__DOT__hx_byte;
	    __Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state 
		= (0xdU == (IData)(vlTOPp->main__DOT__genbus__DOT__hx_byte));
	    __Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr 
		= (0xdU == (IData)(vlTOPp->main__DOT__genbus__DOT__hx_byte));
	    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 1U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8)))) {
		if (vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr) {
		    if (vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state) {
			__Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state = 0U;
			vlTOPp->main__DOT__genbus__DOT__fnl_byte = 0xaU;
			vlTOPp->main__DOT__genbus__DOT__fnl_stb = 1U;
			vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 1U;
		    } else {
			vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 0U;
			vlTOPp->main__DOT__genbus__DOT__fnl_stb = 0U;
			vlTOPp->main__DOT__genbus__DOT__fnl_byte = 0x7fU;
		    }
		} else {
		    __Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state = 1U;
		    vlTOPp->main__DOT__genbus__DOT__fnl_byte = 0xdU;
		    __Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr 
			= (1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_stb)));
		    vlTOPp->main__DOT__genbus__DOT__fnl_stb 
			= (1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_stb)));
		    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded = 0U;
		}
	    }
	}
    }
    // ALWAYS at cpu/slowmpy.v:80
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = 0U;
	__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy = 0U;
    } else {
	if (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy)) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = 0U;
	    __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy = 1U;
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux = 0U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy) 
		 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = 1U;
		__Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy = 0U;
	    } else {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = 0U;
	    }
	}
    }
    // ALWAYS at cpu/memops.v:167
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we 
	    = (1U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data 
	    = ((8U == (0xcU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
					<< 1U)) | (3U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
	        ? ((0xffff0000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
				   << 0x10U)) | (0xffffU 
						 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av))
	        : ((0xcU == (0xcU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
					      << 1U)) 
				     | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
		    ? ((0xff000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
				       << 0x18U)) | 
		       ((0xff0000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
				      << 0x10U)) | 
			((0xff00U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
				     << 8U)) | (0xffU 
						& vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av))))
		    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_addr 
	    = (0x7fffffU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    >> 2U));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel 
	    = ((4U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
	        ? ((2U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))
		    ? ((2U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
		        ? ((1U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
			    ? 1U : 2U) : ((1U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
					   ? 4U : 8U))
		    : ((2U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
		        ? 3U : 0xcU)) : 0xfU);
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op 
	    = ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
			<< 1U)) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv));
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result
	    : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
	        ? ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid)
		    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_result
		    : 0U) : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)
			      ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val
			      : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result)));
    // ALWAYS at cpu/zipcpu.v:1559
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
    // ALWAYS at cpu/zipcpu.v:1114
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal;
	}
    }
    // ALWAYS at ../hexbus/hbints.v:90
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	vlTOPp->main__DOT__genbus__DOT__int_stb = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__ow_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__int_busy)))) {
	    vlTOPp->main__DOT__genbus__DOT__int_stb = 1U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt) 
		 & ((~ (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded)) 
		    | (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy)))) {
		vlTOPp->main__DOT__genbus__DOT__int_stb = 1U;
	    } else {
		if ((1U & ((~ (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded)) 
			   | (~ (IData)(vlTOPp->main__DOT__genbus__DOT__idl_busy))))) {
		    vlTOPp->main__DOT__genbus__DOT__int_stb = 0U;
		}
	    }
	}
    }
    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__last_cr 
	= __Vdly__main__DOT__genbus__DOT__addnl__DOT__last_cr;
    vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state 
	= __Vdly__main__DOT__genbus__DOT__addnl__DOT__cr_state;
    vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8 
	= ((IData)(vlTOPp->main__DOT__pp_tx_busy) & (IData)(vlTOPp->main__DOT__genbus__DOT__ps_full));
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__pending_interrupt 
	= __Vdly__main__DOT__genbus__DOT__addints__DOT__pending_interrupt;
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__int_loaded 
	= __Vdly__main__DOT__genbus__DOT__addints__DOT__int_loaded;
    vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded 
	= __Vdly__main__DOT__genbus__DOT__addints__DOT__loaded;
    // ALWAYS at ../hexbus/hbgenhex.v:113
    if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_busy)))) {
	vlTOPp->main__DOT__genbus__DOT__hx_byte = (0x7fU 
						   & (IData)(vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char));
    }
    vlTOPp->main__DOT__genbus__DOT__nl_busy = ((((IData)(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8) 
						 & (IData)(vlTOPp->main__DOT__genbus__DOT__fnl_stb)) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__loaded)) 
					       | ((IData)(vlTOPp->main__DOT__genbus__DOT__addnl__DOT__cr_state) 
						  & (~ (IData)(vlTOPp->main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8))));
    // ALWAYS at ../hexbus/hbgenhex.v:74
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	vlTOPp->main__DOT__genbus__DOT__hx_stb = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_busy)))) {
	    vlTOPp->main__DOT__genbus__DOT__hx_stb 
		= vlTOPp->main__DOT__genbus__DOT__hb_stb;
	}
    }
    // ALWAYS at cpu/slowmpy.v:74
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done 
	= (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2)) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy)) 
	   & (0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count)));
    vlTOPp->main__DOT__zip_addr = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_addr
				    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_addr);
    vlTOPp->main__DOT__zip_we = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
				 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    // ALWAYS at cpu/zipcpu.v:949
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
	= ((0x20U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15))
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v
	    : ((0x40U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15))
	        ? (0xe0800000U | ((0x7f0000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av) 
				  | ((0x10U & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15))
				      ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
				      : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags))))
	        : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av));
    vlTOPp->main__DOT__genbus__DOT__int_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__int_stb) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__addints__DOT__loaded));
    // ALWAYS at ../hexbus/hbexec.v:278
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	vlTOPp->main__DOT__genbus__DOT__ow_stb = 1U;
	vlTOPp->main__DOT__genbus__DOT__ow_word = VL_ULL(0x300000000);
    } else {
	if (vlTOPp->main__DOT__hb_err) {
	    vlTOPp->main__DOT__genbus__DOT__ow_stb = 1U;
	    vlTOPp->main__DOT__genbus__DOT__ow_word = VL_ULL(0x320000000);
	} else {
	    if (vlTOPp->main__DOT__hb_cyc) {
		vlTOPp->main__DOT__genbus__DOT__ow_stb 
		    = vlTOPp->main__DOT__hb_ack;
		vlTOPp->main__DOT__genbus__DOT__ow_word 
		    = ((IData)(vlTOPp->main__DOT__hb_we)
		        ? VL_ULL(0x100000000) : (QData)((IData)(vlTOPp->main__DOT__hb_idata)));
	    } else {
		vlTOPp->main__DOT__genbus__DOT__ow_stb 
		    = vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__newaddr;
		vlTOPp->main__DOT__genbus__DOT__ow_word 
		    = (((QData)((IData)((0x80000000U 
					 | vlTOPp->main__DOT__hb_tmp_addr))) 
			<< 2U) | (QData)((IData)((1U 
						  & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc))))));
	    }
	}
    }
    // ALWAYS at ../hexbus/hbgenhex.v:81
    vlTOPp->__Vtableidx5 = vlTOPp->main__DOT__genbus__DOT__hb_bits;
    vlTOPp->main__DOT__genbus__DOT__genhex__DOT__w_gx_char 
	= vlTOPp->__Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char
	[vlTOPp->__Vtableidx5];
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr 
	= ((0xf800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr) 
	   | vlTOPp->main__DOT__zip_addr);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Av 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Av);
    vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__inc 
	= __Vdly__main__DOT__genbus__DOT__wbexec__DOT__inc;
    // ALWAYS at ../hexbus/hbdeword.v:64
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	__Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len = 0U;
	vlTOPp->main__DOT__genbus__DOT__hb_stb = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb) 
	     & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hb_busy)))) {
	    vlTOPp->main__DOT__genbus__DOT__hb_stb = 1U;
	    __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len 
		= ((3U == (3U & (IData)((vlTOPp->main__DOT__genbus__DOT__idl_word 
					 >> 0x20U))))
		    ? 0U : 8U);
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__genbus__DOT__hx_busy)))) {
		vlTOPp->main__DOT__genbus__DOT__hb_stb 
		    = (0U != (IData)(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len));
		if ((0U != (IData)(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len))) {
		    __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len 
			= (0xfU & ((IData)(vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len) 
				   - (IData)(1U)));
		}
	    }
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done 
	= (0U == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count));
    // ALWAYS at main.v:629
    vlTOPp->main__DOT__hb_ack = ((IData)(vlTOPp->main__DOT__hb_cyc) 
				 & ((IData)(vlTOPp->main__DOT__hb_dwb_ack) 
				    | (IData)(vlTOPp->main__DOT__swic__DOT__dbg_ack)));
    // ALWAYS at ../hexbus/hbexec.v:194
    vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__newaddr 
	= (((~ (IData)(vlTOPp->main__DOT__genbus__DOT__w_reset)) 
	    & (IData)(vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr)) 
	   & (~ (IData)(vlTOPp->main__DOT__hb_cyc)));
    // ALWAYS at ../hexbus/hbexec.v:184
    if ((1U & (~ (IData)(vlTOPp->main__DOT__hb_cyc)))) {
	vlTOPp->main__DOT__hb_we = ((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
				    & (1U == (3U & (IData)(
							   (vlTOPp->main__DOT__genbus__DOT__iw_word 
							    >> 0x20U)))));
    }
    // ALWAYS at main.v:650
    vlTOPp->main__DOT__hb_idata = ((IData)(vlTOPp->main__DOT__hb_dwb_ack)
				    ? vlTOPp->main__DOT__hb_dwbi_idata
				    : ((1U & vlTOPp->main__DOT__hb_tmp_addr)
				        ? vlTOPp->main__DOT__swic__DOT__cpu_dbg_data
				        : (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
					    << 0x10U) 
					   | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc) 
					       << 0xcU) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
						  << 0xaU) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted) 
						     << 9U) 
						    | (((IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt) 
							<< 7U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
							   << 6U) 
							  | (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr)))))))));
    vlTOPp->main__DOT__genbus__DOT__unpackx__DOT__r_len 
	= __Vdly__main__DOT__genbus__DOT__unpackx__DOT__r_len;
    vlTOPp->main__DOT__genbus__DOT__idl_word = __Vdly__main__DOT__genbus__DOT__idl_word;
    vlTOPp->main__DOT__genbus__DOT__hx_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__hx_stb) 
					       & (IData)(vlTOPp->main__DOT__genbus__DOT__nl_busy));
    vlTOPp->main__DOT__genbus__DOT__idl_stb = __Vdly__main__DOT__genbus__DOT__idl_stb;
    vlTOPp->main__DOT__hb_cyc = __Vdly__main__DOT__hb_cyc;
    vlTOPp->main__DOT__hb_tmp_addr = __Vdly__main__DOT__hb_tmp_addr;
    vlTOPp->main__DOT__genbus__DOT__hb_busy = vlTOPp->main__DOT__genbus__DOT__hb_stb;
    vlTOPp->main__DOT__genbus__DOT__idl_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__idl_stb) 
						& (IData)(vlTOPp->main__DOT__genbus__DOT__hb_stb));
    // ALWAYS at cpu/zipbones.v:233
    vlTOPp->main__DOT__swic__DOT__dbg_ack = ((IData)(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16) 
					     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__dbg_stall)));
    // ALWAYS at ../hexbus/hbpack.v:84
    vlTOPp->main__DOT__genbus__DOT__iw_stb = ((~ (IData)(vlTOPp->main__DOT__genbus__DOT__w_reset)) 
					      & (((IData)(vlTOPp->main__DOT__genbus__DOT__dec_stb) 
						  & (IData)(vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded)) 
						 & ((IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits) 
						    >> 4U)));
    vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11 
	= ((IData)(vlTOPp->main__DOT__hb_cyc) & (~ 
						 (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)));
    // ALWAYS at cpu/zipcpu.v:2401
    vlTOPp->main__DOT__swic__DOT__cpu_dbg_data = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg;
    if ((0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr)))) {
	vlTOPp->main__DOT__swic__DOT__cpu_dbg_data 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc;
    } else {
	if ((0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr)))) {
	    vlTOPp->main__DOT__swic__DOT__cpu_dbg_data 
		= ((0xffff8000U & vlTOPp->main__DOT__swic__DOT__cpu_dbg_data) 
		   | ((0x10U & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr))
		       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
		       : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags)));
	    vlTOPp->main__DOT__swic__DOT__cpu_dbg_data 
		= (0xffff7fffU & vlTOPp->main__DOT__swic__DOT__cpu_dbg_data);
	    vlTOPp->main__DOT__swic__DOT__cpu_dbg_data 
		= (0xe0800000U | (0x7fffffU & vlTOPp->main__DOT__swic__DOT__cpu_dbg_data));
	    vlTOPp->main__DOT__swic__DOT__cpu_dbg_data 
		= ((0xffffffdfU & vlTOPp->main__DOT__swic__DOT__cpu_dbg_data) 
		   | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
		      << 5U));
	}
    }
    // ALWAYS at cpu/zipcpu.v:2435
    vlTOPp->main__DOT__swic__DOT__cpu_dbg_cc = (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_break) 
						 << 3U) 
						| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err) 
						    << 2U) 
						   | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
						       << 1U) 
						      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep))));
    // ALWAYS at cpu/zipcpu.v:2453
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted 
	= ((((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
	       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc))) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
	    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy))) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy)));
    // ALWAYS at ../hexbus/hbpack.v:75
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__genbus__DOT__dec_stb) 
	     & (4U == (7U & ((IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits) 
			     >> 2U))))) {
	    vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded = 1U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__genbus__DOT__dec_stb) 
		 & ((IData)(vlTOPp->main__DOT__genbus__DOT__dec_bits) 
		    >> 4U))) {
		vlTOPp->main__DOT__genbus__DOT__packxi__DOT__cmd_loaded = 0U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:2398
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset
	[vlTOPp->main__DOT__swic__DOT__cmd_addr];
    // ALWAYS at cpu/memops.v:217
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset)) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl))
	       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err)
	       : (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3) 
		   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned))));
    // ALWAYS at cpu/zipcpu.v:1930
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep = 0U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	      & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
	     & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep 
		= (1U & ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			  >> 4U) & ((~ (IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt)) 
				    | (~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
					  >> 5U)))));
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		  & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
		 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		    >> 5U))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep 
		    = (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			     >> 4U));
	    }
	}
    }
    vlTOPp->main__DOT__swic__DOT__dbg_stall = (1U & 
					       ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_halted)) 
						& vlTOPp->main__DOT__hb_tmp_addr));
    // ALWAYS at cpu/cpuops.v:163
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2)) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
	       & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op)) 
	      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy)));
    // ALWAYS at cpu/zipbones.v:158
    if (vlTOPp->main__DOT__cpu_reset) {
	vlTOPp->main__DOT__swic__DOT__cmd_halt = 1U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	    vlTOPp->main__DOT__swic__DOT__cmd_halt = 1U;
	} else {
	    if (vlTOPp->main__DOT__swic__DOT__dbg_cmd_write) {
		vlTOPp->main__DOT__swic__DOT__cmd_halt 
		    = (1U & ((vlTOPp->main__DOT__hb_data 
			      >> 0xaU) & (~ (vlTOPp->main__DOT__hb_data 
					     >> 8U))));
	    } else {
		if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_step) 
		     | (IData)(vlTOPp->main__DOT__swic__DOT__cpu_break))) {
		    vlTOPp->main__DOT__swic__DOT__cmd_halt = 1U;
		}
	    }
	}
    }
    // ALWAYS at cpu/div.v:148
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy = 1U;
	} else {
	    if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign))) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy = 0U;
	    } else {
		if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy)))) {
		    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy = 0U;
		}
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:1447
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
    } else {
	if ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
	      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce)) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase;
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = 0U;
	    }
	}
    }
    // ALWAYSPOST at cpu/zipcpu.v:1810
    if (__Vdlyvset__main__DOT__swic__DOT__thecpu__DOT__regset__v0) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__regset[__Vdlyvdim0__main__DOT__swic__DOT__thecpu__DOT__regset__v0] 
	    = __Vdlyvval__main__DOT__swic__DOT__thecpu__DOT__regset__v0;
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_result
	    : ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv)
	        ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_val
	        : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_result));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign;
    // ALWAYS at ../hexbus/hbdechex.v:60
    __Vtableidx3 = vlTOPp->main__DOT__pp_rx_data;
    vlTOPp->main__DOT__genbus__DOT__dec_bits = vlTOPp->__Vtable3_main__DOT__genbus__DOT__dec_bits
	[__Vtableidx3];
    // ALWAYS at cpu/zipbones.v:177
    if (vlTOPp->main__DOT__swic__DOT__dbg_cmd_write) {
	vlTOPp->main__DOT__swic__DOT__cmd_addr = (0x1fU 
						  & vlTOPp->main__DOT__hb_data);
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl));
    // ALWAYS at cpu/icontrol.v:125
    vlTOPp->main__DOT__buspici__DOT__r_interrupt = 
	((IData)(vlTOPp->main__DOT__buspici__DOT__r_gie) 
	 & (IData)(vlTOPp->main__DOT__buspici__DOT__w_any));
    // ALWAYS at main.v:822
    vlTOPp->main__DOT__cpu_reset = ((IData)(vlTOPp->main__DOT__watchdog_reset) 
				    | (IData)(vlTOPp->i_reset));
    // ALWAYS at cpu/zipbones.v:173
    vlTOPp->main__DOT__swic__DOT__cmd_step = ((IData)(vlTOPp->main__DOT__swic__DOT__dbg_cmd_write) 
					      & (vlTOPp->main__DOT__hb_data 
						 >> 8U));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid) 
	   & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
	      & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy))));
    // ALWAYS at cpu/div.v:133
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 1U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = 0U;
	    }
	}
    }
    // ALWAYS at cpu/zipcpu.v:1211
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase) 
		   & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR)) 
		      | (~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14) 
			    >> 5U))));
	}
    }
    // ALWAYS at cpu/zipcpu.v:1035
    if (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid 
		= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid;
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu 
		= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid) 
		   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_ALU) 
		      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal)));
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem 
		= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_M) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal))) 
		   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid));
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div 
		= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_DIV) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal))) 
		   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid));
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu = 0U;
	} else {
	    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid = 0U;
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu = 0U;
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem = 0U;
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div = 0U;
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu = 0U;
	    }
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_debug_pc) 
	   | ((0x10U & (IData)(vlTOPp->main__DOT__swic__DOT__cmd_addr))
	       ? ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U)) : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ipc) 
				| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
				   << 1U))));
    // ALWAYS at cpu/ziptimer.v:168
    vlTOPp->main__DOT__watchdog_reset = ((~ ((IData)(vlTOPp->i_reset) 
					     | (IData)(vlTOPp->main__DOT__watchdogi__DOT__wb_write))) 
					 & (1U == (IData)(vlTOPp->main__DOT__watchdogi__DOT__r_value)));
    // ALWAYS at cpu/div.v:158
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor 
	    = (0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv);
    }
    // ALWAYS at cpu/idecode.v:389
    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) 
	       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)));
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
	     & (7U == (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
			     >> 1U))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = 1U;
	}
	if (((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		   >> 0x1fU)) & (3U == (3U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					      >> 0x19U)))) 
	      & (7U != (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
			      >> 1U)))) & (0U != (3U 
						  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						     >> 0x17U))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = 1U;
	}
	if (((7U == (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
			   >> 1U))) & (0xdU == (0xfU 
						& ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						   >> 1U))))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = 1U;
	}
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = 1U;
	}
    }
    // ALWAYS at cpu/idecode.v:743
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2)) 
	   & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)) 
	      & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase))));
    // ALWAYS at cpu/zipcpu.v:988
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
	     >> 5U) & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB))
	    ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v 
	       + (0xfffffffcU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I 
				 << 2U))) : (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB)
					       ? ((0x40U 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))
						   ? 
						  (0xe0800000U 
						   | ((0x7f0000U 
						       & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv) 
						      | ((0x10U 
							  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16))
							  ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
							  : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags))))
						   : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv)
					       : 0U) 
					     + vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I));
    // ALWAYS at cpu/idecode.v:367
    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase = 0U;
    } else {
	if (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase 
		= (1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_phase)) 
			 & ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction 
			     >> 0x1fU) & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal)))));
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase = 0U;
	    }
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_Bv 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B)
	    ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv);
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_illegal;
    // ALWAYS at cpu/idecode.v:458
    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_F 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wF 
	    = ((8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
			       >> 1U))) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond) 
					    >> 3U) 
					   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
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
							>> 1U)))))));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn 
	    = (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14 
	    = (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc) 
		<< 6U) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc) 
			   << 5U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR)));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15 
	    = (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc) 
		<< 6U) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc) 
			   << 5U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR)));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16 
	    = ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
		 & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB)))) 
		<< 6U) | ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB) 
			    & (0xfU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB)))) 
			   << 5U) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB)));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_wR 
	    = (1U & (~ (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto) 
			 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
			| (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					  >> 1U))))));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rA 
	    = ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div) 
		 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU) 
		     & (8U != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
		    & (0xdU != (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)))) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto)) 
	       | (8U == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				 >> 1U))));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_rB 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_zI 
	    = (0U == vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I);
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_ALU 
	    = (((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU) 
		  | (0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				      >> 1U)))) | (8U 
						   == 
						   (0xfU 
						    & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						       >> 1U)))) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_M 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_DIV 
	    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_FP = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_break 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
	       & (0x1cU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				     >> 0x16U))));
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_lock = 0U;
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half 
	    = (0x7fffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword);
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim 
	    = (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
		& (0x1eU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				      >> 0x16U)))) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop));
	if ((((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				>> 1U))) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop)) 
	     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn = 0xdU;
	}
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv 
	    = (0x7fffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword);
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result 
	= (VL_ULL(0x1ffffffff) & ((0U != (0x7ffffffU 
					  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					     >> 5U)))
				   ? VL_NEGATE_Q((QData)((IData)(
								 (1U 
								  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
								     >> 0x1fU)))))
				   : VL_SHIFTRS_QQI(33,33,5, 
						    ((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						     << 1U), 
						    (0x1fU 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result 
	= (VL_ULL(0x1ffffffff) & (((0U != (0x3ffffffU 
					   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					      >> 6U))) 
				   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
				       >> 5U) & (0U 
						 != 
						 (0x1fU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
				   ? VL_ULL(0) : ((0x20U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
						   ? (QData)((IData)(
								     (1U 
								      & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av 
									 >> 0x1fU))))
						   : 
						  (((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						    << 1U) 
						   >> 
						   (0x1fU 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result 
	= (VL_ULL(0x1ffffffff) & (((0U != (0x3ffffffU 
					   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
					      >> 6U))) 
				   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
				       >> 5U) & (0U 
						 != 
						 (0x1fU 
						  & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
				   ? VL_ULL(0) : ((0x20U 
						   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)
						   ? 
						  ((QData)((IData)(
								   (1U 
								    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av))) 
						   << 0x20U)
						   : 
						  ((QData)((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Av)) 
						   << 
						   (0x1fU 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffeU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (1U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1fU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffdU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (2U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1dU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffffbU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (4U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffff7U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (8U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		    >> 0x19U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffefU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x17U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffdfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x15U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffffbfU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x13U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffff7fU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
		       >> 0x11U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffeffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x100U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xfU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffdffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x200U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xdU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffffbffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x400U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 0xbU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffff7ffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x800U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			>> 9U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffefffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x1000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 7U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffdfffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x2000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 5U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffffbfffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x4000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 3U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffff7fffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x8000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			 >> 1U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffeffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 1U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffdffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 3U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfffbffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 5U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfff7ffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			  << 7U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffefffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x100000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 9U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffdfffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x200000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xbU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xffbfffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x400000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xdU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xff7fffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x800000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			   << 0xfU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfeffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x1000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x11U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfdffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x2000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x13U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xfbffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x4000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x15U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xf7ffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x8000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			    << 0x17U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xefffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x10000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x19U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xdfffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x20000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0xbfffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x40000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1dU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result 
	= ((0x7fffffffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result) 
	   | (0x80000000U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv 
			     << 0x1fU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_phase 
	= vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase;
    // ALWAYS at cpu/dblfetch.v:167
    if ((1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid)) 
	       | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled))))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction 
	    = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid)
	        ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word
	        : vlTOPp->main__DOT__hb_dwbi_idata);
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_I 
	= ((0xffc00000U & (VL_NEGATE_I((IData)((1U 
						& (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I 
						   >> 0x16U)))) 
			   << 0x16U)) | (0x3fffffU 
					 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)
	    ? (0x80000000U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half) 
			       << 0x10U) | (0xffffU 
					    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction)))
	    : vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_instruction);
    // ALWAYS at cpu/dblfetch.v:158
    if ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid = 0U;
    } else {
	if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err)))) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid = 1U;
	} else {
	    if ((1U & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled)))) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid 
		    = vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid;
	    }
	}
    }
    // ALWAYS at cpu/dblfetch.v:213
    if (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc) 
	 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack))) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word 
	    = vlTOPp->main__DOT__hb_dwbi_idata;
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div 
	= ((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU)) & (7U == (0xfU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					    >> 0x17U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI 
	= (0xffU & ((6U == (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				  >> 0x18U))) ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						 >> 0x10U)
		     : ((0x800000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0xfcU & (VL_NEGATE_I((IData)(
							  (1U 
							   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
							      >> 0x12U)))) 
				      << 2U)) | (3U 
						 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						    >> 0x10U)))
			 : ((0x80U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				      >> 0xfU)) | (0x7fU 
						   & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						      >> 0x10U))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special 
	= ((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU)) & (7U == (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					  >> 0x18U))));
    // ALWAYS at cpu/idecode.v:184
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op 
	= (0x1fU & ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
		     ? ((0x4000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0x2000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			     ? ((0x1000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
				 ? 0xdU : 0x18U) : 
			    ((0x1000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			      ? 0x13U : 0x12U)) : (
						   (0x2000000U 
						    & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						    ? 
						   ((0x1000000U 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						     ? 0x10U
						     : 2U)
						    : 
						   ((0x1000000U 
						     & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
						     ? 1U
						     : 0U)))
		     : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			>> 0x16U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__pf_cyc;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
	   & (0x1dU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				 >> 0x16U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special) 
	   & (0x1fU == (0x1fU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				 >> 0x16U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU 
	= ((~ ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
	       >> 4U)) & (7U != (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				       >> 1U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond 
	= ((1U & (((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
				     >> 1U))) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)) 
		  | (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		     >> 0x1fU))) ? 8U : (((0U == (7U 
						  & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						     >> 0x13U))) 
					  << 3U) | 
					 (7U & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x13U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I 
	= (0x7fffffU & ((0x80000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
			 ? ((0x7fff00U & (VL_NEGATE_I((IData)(
							      (1U 
							       & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI) 
								  >> 7U)))) 
					  << 8U)) | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI))
			 : ((0xcU == (0xfU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					      >> 1U)))
			     ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword
			     : ((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))
				 ? ((0x7fe000U & (VL_NEGATE_I((IData)(
								      (1U 
								       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
									  >> 0xcU)))) 
						  << 0xdU)) 
				    | (0x1fffU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
				 : ((0x40000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
				     ? ((0x7fc000U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
								    >> 0xdU)))) 
					    << 0xeU)) 
					| (0x3fffU 
					   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword))
				     : ((0x7c0000U 
					 & (VL_NEGATE_I((IData)(
								(1U 
								 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
								    >> 0x11U)))) 
					    << 0x12U)) 
					| (0x3ffffU 
					   & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem 
	= ((2U == (3U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
			 >> 3U))) & (0U != (3U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						  >> 1U))));
    // ALWAYS at cpu/zipcpu.v:2341
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache)) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe)) 
	   | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt) 
	      | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt) 
		 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
			== (1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
				  >> 4U)))) & (0xfU 
					       == (0xfU 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))))));
    vlTOPp->main__DOT__zip_cyc = ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)
				   ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl)
				   : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    // ALWAYS at cpu/busdelay.v:121
    vlTOPp->main__DOT__hb_dwbi_idata = vlTOPp->main__DOT__wb_idata;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB 
	= ((((0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op)) 
	     | ((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		      >> 0x1fU)) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
				    >> 0x12U)) & (0xcU 
						  != 
						  (0xfU 
						   & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
						      >> 1U)))) 
		& (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special)))) 
	    | (((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
		 >> 0x1fU) & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			      >> 0x17U)) & (0xcU != 
					    (0xfU & 
					     ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op) 
					      >> 1U))))) 
	   | ((vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
	       >> 0x1fU) & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache 
	= __Vdly__main__DOT__swic__DOT__thecpu__DOT__r_clear_icache;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)
	    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_wreg)
	    : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_reg));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_op_valid 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF) 
	     & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid))) 
	    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dbgv) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_valid)) 
	   | (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal))) 
	      & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR) 
		  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_valid)) 
		 | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_valid) 
		    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error))))));
    // ALWAYS at cpu/zipcpu.v:2028
    if (vlTOPp->main__DOT__swic__DOT__cmd_reset) {
	vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie = 0U;
    } else {
	if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt) {
	    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie = 0U;
	} else {
	    if (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt) {
		vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie = 1U;
	    }
	}
    }
    // ALWAYS at main.v:547
    vlTOPp->main__DOT__wb_idata = ((4U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
				    ? ((2U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
				        ? vlTOPp->main__DOT__sdram_data
				        : ((1U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
					    ? vlTOPp->main__DOT__sdram_data
					    : vlTOPp->main__DOT__bkram_data))
				    : ((2U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
				        ? ((1U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
					    ? vlTOPp->main__DOT__r_wb_sio_data
					    : vlTOPp->main__DOT__console_data)
				        : ((1U & (IData)(vlTOPp->main__DOT__r_wb_bus_select))
					    ? vlTOPp->main__DOT__r_wb_dio_data
					    : vlTOPp->main__DOT__sdramscopei__DOT__o_bus_data)));
    vlTOPp->main__DOT__sdram_data = (((IData)(vlTOPp->main__DOT__sdrami__DOT__last_ram_data) 
				      << 0x10U) | (IData)(vlTOPp->main__DOT__sdrami__DOT__ram_data));
    // ALWAYS at cpu/zipbones.v:154
    vlTOPp->main__DOT__swic__DOT__cmd_reset = ((IData)(vlTOPp->main__DOT__swic__DOT__dbg_cmd_write) 
					       & (vlTOPp->main__DOT__hb_data 
						  >> 6U));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB 
	= ((0x10U & (((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			    >> 0x1fU)) & (0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
		       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
		       ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			  >> 0xdU) : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		     << 4U)) | (0xfU & ((0x80000000U 
					 & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword)
					 ? (((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						 >> 0x17U)) 
					     & (2U 
						== 
						(3U 
						 & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						    >> 0x19U))))
					     ? 0xdU
					     : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
						>> 0x13U))
					 : (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					    >> 0xeU))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt 
	= (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
	    & (~ (IData)(vlTOPp->main__DOT__buspici__DOT__r_interrupt))) 
	   & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
	       & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
		  >> 5U)) & (0xeU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))));
    // ALWAYS at cpu/zipcpu.v:903
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcA_v) 
	   | (((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15) 
		      >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
	       ? (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc)
	       : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U))));
    // ALWAYS at cpu/zipcpu.v:966
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v 
	= ((0xfe000000U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_pcB_v) 
	   | (((1U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16) 
		      >> 4U)) == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
	       ? (0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc)
	       : ((0x1fffffcU & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc) 
		  | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 1U))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
	   & ((((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy))) 
		| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error)) 
	       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err)) 
	      | ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
		   & (~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl 
			 >> 5U))) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id) 
				     >> 4U)) & (0xeU 
						== 
						(0xfU 
						 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR 
	= ((0x10U & (((((~ (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			    >> 0x1fU)) & (0xdU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op))) 
		       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
		       ? (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
			  >> 0x12U) : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
		     << 4U)) | (0xfU & (vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword 
					>> 0x1bU)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase) 
	    << 0xdU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag) 
			 << 0xbU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag) 
				      << 0xaU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
						   << 9U) 
						  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i) 
						      << 8U) 
						     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en) 
							 << 7U) 
							| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
							    << 4U) 
							   | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
							       & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)))
							       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags)
							       : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__iflags)))))))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags 
	= (0x20U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase) 
		     << 0xdU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag) 
				  << 0xbU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag) 
					       << 0xaU) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
						  << 9U) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u) 
						     << 8U) 
						    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak) 
							<< 7U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__step) 
							   << 6U) 
							  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
							      << 4U) 
							     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce) 
								 & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))
								 ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_flags)
								 : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__flags)))))))))));
    vlTOPp->main__DOT__swic__DOT__cpu_break = (((((
						   (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__break_en) 
						     | (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie))) 
						    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break)) 
						   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))) 
						  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
						 | ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__bus_err))) 
						| ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_error))) 
					       | (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)) 
						   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal)) 
						  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc))));
    // ALWAYS at memdev.v:117
    vlTOPp->main__DOT__bkram_data = vlTOPp->main__DOT__bkrami__DOT__mem
	[vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr];
    // ALWAYS at main.v:529
    if (((IData)(vlTOPp->main__DOT__wb_stb) & (~ (IData)(vlTOPp->main__DOT__wb_stall)))) {
	if ((0x400000U & vlTOPp->main__DOT__wb_addr)) {
	    vlTOPp->main__DOT__r_wb_bus_select = 5U;
	} else {
	    if ((0x200000U & vlTOPp->main__DOT__wb_addr)) {
		if ((1U & (~ (vlTOPp->main__DOT__wb_addr 
			      >> 0x14U)))) {
		    vlTOPp->main__DOT__r_wb_bus_select 
			= ((0x80000U & vlTOPp->main__DOT__wb_addr)
			    ? 4U : 3U);
		}
	    } else {
		if ((0x100000U & vlTOPp->main__DOT__wb_addr)) {
		    vlTOPp->main__DOT__r_wb_bus_select 
			= ((0x80000U & vlTOPp->main__DOT__wb_addr)
			    ? 2U : 1U);
		} else {
		    if ((0x80000U & vlTOPp->main__DOT__wb_addr)) {
			vlTOPp->main__DOT__r_wb_bus_select = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at main.v:479
    vlTOPp->main__DOT__r_wb_dio_data = ((IData)(vlTOPp->main__DOT__r_wb_dio_bus_select)
					 ? (IData)(vlTOPp->main__DOT__watchdogi__DOT__r_value)
					 : (((IData)(vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload) 
					     << 0x1fU) 
					    | (IData)(vlTOPp->main__DOT__bustimeri__DOT__r_value)));
    // ALWAYS at main.v:450
    vlTOPp->main__DOT__r_wb_sio_data = ((4U & vlTOPp->main__DOT__wb_addr)
					 ? 0x20200109U
					 : ((2U & vlTOPp->main__DOT__wb_addr)
					     ? ((1U 
						 & vlTOPp->main__DOT__wb_addr)
						 ? vlTOPp->main__DOT__r_pwrcount_data
						 : 
						(((IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits) 
						  << 0x10U) 
						 | (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits)))
					     : ((1U 
						 & vlTOPp->main__DOT__wb_addr)
						 ? vlTOPp->main__DOT__buspic_data
						 : 
						(vlTOPp->main__DOT__r_buserr_addr 
						 << 2U))));
    // ALWAYS at wbscope.v:385
    vlTOPp->main__DOT__sdramscopei__DOT__o_bus_data 
	= ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__read_address)
	    ? ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped)
	        ? vlTOPp->main__DOT__sdramscopei__DOT__nxt_mem
	        : vlTOPp->main__DOT__sdram_debug) : 
	   (0x400000U | ((0x80000000U & ((~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
					     >> 2U)) 
					 << 0x1fU)) 
			 | (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped) 
			     << 0x1eU) | (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered) 
					   << 0x1dU) 
					  | (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed) 
					      << 0x1cU) 
					     | ((0x8000000U 
						 & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
						    << 0x1aU)) 
						| ((0x4000000U 
						    & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
						       << 0x1aU)) 
						   | (((0U 
							== (IData)(vlTOPp->main__DOT__sdramscopei__DOT__raddr)) 
						       << 0x19U) 
						      | vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff)))))))));
    // ALWAYS at ../hexbus/console.v:356
    vlTOPp->main__DOT__console_data = ((2U & (IData)(vlTOPp->main__DOT__consolei__DOT__r_wb_addr))
				        ? ((1U & (IData)(vlTOPp->main__DOT__consolei__DOT__r_wb_addr))
					    ? ((0x6000U 
						& (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
						   << 0xdU)) 
					       | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
						      << 0xaU) 
						     | (((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
							 << 8U) 
							| ((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)
							    ? (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data)
							    : 0U)))))
					    : (((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err) 
						<< 0xcU) 
					       | ((0x100U 
						   & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)) 
						      << 8U)) 
						  | (IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data))))
				        : ((1U & (IData)(vlTOPp->main__DOT__consolei__DOT__r_wb_addr))
					    ? ((0x70000U 
						& (VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
						   << 0x10U)) 
					       | (7U 
						  & VL_NEGATE_I((IData)((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full)))))
					    : 0U));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
	   == (0xfU | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
		       << 4U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR) 
	   == (0xeU | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
		       << 4U)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond 
	= ((0xfU & (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F) 
		     >> 4U) & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie)
			        ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_uflags)
			        : (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__w_iflags)))) 
	   == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_F)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce 
	= (1U & (((((~ (IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase)) 
		   & (~ (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce) 
			  & (0xeU == (0xfU & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__wr_reg_id)))) 
			 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc)))) 
		  & (~ (IData)(vlTOPp->main__DOT__swic__DOT__cpu_break))) 
		 & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep))));
    // ALWAYSPOST at memdev.v:126
    if (__Vdlyvset__main__DOT__bkrami__DOT__mem__v0) {
	vlTOPp->main__DOT__bkrami__DOT__mem[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0))) 
		& vlTOPp->main__DOT__bkrami__DOT__mem
		[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v0]) 
	       | ((IData)(__Vdlyvval__main__DOT__bkrami__DOT__mem__v0) 
		  << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v0)));
    }
    if (__Vdlyvset__main__DOT__bkrami__DOT__mem__v1) {
	vlTOPp->main__DOT__bkrami__DOT__mem[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1))) 
		& vlTOPp->main__DOT__bkrami__DOT__mem
		[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v1]) 
	       | ((IData)(__Vdlyvval__main__DOT__bkrami__DOT__mem__v1) 
		  << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v1)));
    }
    if (__Vdlyvset__main__DOT__bkrami__DOT__mem__v2) {
	vlTOPp->main__DOT__bkrami__DOT__mem[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2))) 
		& vlTOPp->main__DOT__bkrami__DOT__mem
		[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v2]) 
	       | ((IData)(__Vdlyvval__main__DOT__bkrami__DOT__mem__v2) 
		  << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v2)));
    }
    if (__Vdlyvset__main__DOT__bkrami__DOT__mem__v3) {
	vlTOPp->main__DOT__bkrami__DOT__mem[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3))) 
		& vlTOPp->main__DOT__bkrami__DOT__mem
		[__Vdlyvdim0__main__DOT__bkrami__DOT__mem__v3]) 
	       | ((IData)(__Vdlyvval__main__DOT__bkrami__DOT__mem__v3) 
		  << (IData)(__Vdlyvlsb__main__DOT__bkrami__DOT__mem__v3)));
    }
    vlTOPp->main__DOT__watchdogi__DOT__r_value = __Vdly__main__DOT__watchdogi__DOT__r_value;
    vlTOPp->main__DOT__bustimeri__DOT__r_value = __Vdly__main__DOT__bustimeri__DOT__r_value;
    vlTOPp->main__DOT__r_pwrcount_data = __Vdly__main__DOT__r_pwrcount_data;
    vlTOPp->main__DOT__gpioi__DOT__hi_bits = ((0xfffcU 
					       & (IData)(vlTOPp->main__DOT__gpioi__DOT__hi_bits)) 
					      | (IData)(vlTOPp->main__DOT__gpioi__DOT__r_gpio));
    vlTOPp->main__DOT__gpioi__DOT__low_bits = ((0xf800U 
						& (IData)(vlTOPp->main__DOT__gpioi__DOT__low_bits)) 
					       | (IData)(vlTOPp->o_gpio));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_reset) 
	    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache));
    // ALWAYS at ../hexbus/hbexec.v:241
    if ((1U & ((~ (IData)(vlTOPp->main__DOT__hb_stb)) 
	       | (~ (IData)(vlTOPp->main__DOT__hb_stall))))) {
	vlTOPp->main__DOT__hb_data = (IData)(vlTOPp->main__DOT__genbus__DOT__iw_word);
    }
    // ALWAYS at cpu/zipcpu.v:478
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled 
	= (1U & (((((((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce)) 
			| (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid)) 
		      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid)) 
		     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag)) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
		  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy)) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall 
	= (1U & (((((((((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce)) 
			| (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid))) 
		       | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i)) 
		      | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag)) 
		     | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag)) 
		    | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt)) 
		   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy)) 
		  | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_busy)) 
		 | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_break)));
    // ALWAYS at memdev.v:105
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_addr 
	= (0x7ffU & vlTOPp->main__DOT__wb_addr);
    // ALWAYS at cpu/ziptimer.v:115
    if (vlTOPp->i_reset) {
	vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload = 0U;
    } else {
	if (vlTOPp->main__DOT__bustimeri__DOT__wb_write) {
	    vlTOPp->main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload 
		= ((vlTOPp->main__DOT__wb_data >> 0x1fU) 
		   & (0U != (0xffffU & vlTOPp->main__DOT__wb_data)));
	}
    }
    // ALWAYS at main.v:472
    vlTOPp->main__DOT__r_wb_dio_bus_select = (1U & vlTOPp->main__DOT__wb_addr);
    // ALWAYS at cpu/icontrol.v:139
    vlTOPp->main__DOT__buspic_data = (((IData)(vlTOPp->main__DOT__buspici__DOT__r_gie) 
				       << 0x1fU) | 
				      (((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_enable) 
					<< 0x10U) | 
				       (((IData)(vlTOPp->main__DOT__buspici__DOT__w_any) 
					 << 0xfU) | (IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state))));
    // ALWAYS at main.v:995
    if (vlTOPp->main__DOT__wb_err) {
	vlTOPp->main__DOT__r_buserr_addr = vlTOPp->main__DOT__wb_addr;
    }
    // ALWAYS at wbscope.v:373
    vlTOPp->main__DOT__sdramscopei__DOT__nxt_mem = 
	vlTOPp->main__DOT__sdramscopei__DOT__mem[vlTOPp->main__DOT__sdramscopei__DOT__this_addr];
    // ALWAYS at wbscope.v:134
    vlTOPp->main__DOT__sdramscopei__DOT__read_address 
	= (1U & vlTOPp->main__DOT__wb_addr);
    // ALWAYS at wbscope.v:238
    vlTOPp->main__DOT__sdramscopei__DOT__dr_stopped 
	= ((~ ((~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered)) 
	       | (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		     >> 2U)))) & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__counter) 
				  >= (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff)));
    // ALWAYS at ../hexbus/console.v:340
    vlTOPp->main__DOT__consolei__DOT__r_wb_addr = (3U 
						   & vlTOPp->main__DOT__wb_addr);
    // ALWAYS at ../hexbus/console.v:164
    if (vlTOPp->main__DOT__w_console_rx_stb) {
	vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data 
	    = vlTOPp->main__DOT__w_console_rx_data;
    }
    // ALWAYS at ../hexbus/console.v:277
    if (((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	   & (IData)(vlTOPp->main__DOT__wb_we)) & (~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write))) 
	 & (3U == (3U & vlTOPp->main__DOT__wb_addr)))) {
	vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data 
	    = (0x7fU & vlTOPp->main__DOT__wb_data);
    }
    // ALWAYS at ../hexbus/console.v:289
    if ((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	  & (IData)(vlTOPp->main__DOT__wb_we)) & (0U 
						  == 
						  (3U 
						   & vlTOPp->main__DOT__wb_addr)))) {
	vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err = 0U;
    } else {
	if (((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	       & (IData)(vlTOPp->main__DOT__wb_we)) 
	      & (vlTOPp->main__DOT__wb_data >> 0xcU)) 
	     & (3U == (3U & vlTOPp->main__DOT__wb_addr)))) {
	    vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err = 0U;
	} else {
	    if ((((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
		    & (IData)(vlTOPp->main__DOT__wb_we)) 
		   & (3U == (3U & vlTOPp->main__DOT__wb_addr))) 
		  & (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)) 
		 & (IData)(vlTOPp->main__DOT__w_console_busy))) {
		vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err = 1U;
	    }
	}
    }
    // ALWAYS at ../hexbus/console.v:168
    if (((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full) 
	 & (IData)(vlTOPp->main__DOT__w_console_rx_stb))) {
	vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err = 1U;
    } else {
	if (((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	     & (2U == (3U & vlTOPp->main__DOT__wb_addr)))) {
	    vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err = 0U;
	}
    }
    vlTOPp->main__DOT__hb_stb = __Vdly__main__DOT__hb_stb;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stalled 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled) 
	   | (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce 
	= ((((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
	     & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem)) 
	    & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall))) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc)));
    // ALWAYS at cpu/zipcpu.v:650
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional 
	= (((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_stall)) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid)) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_mem)));
    vlTOPp->main__DOT__buspici__DOT__r_int_enable = __Vdly__main__DOT__buspici__DOT__r_int_enable;
    vlTOPp->main__DOT__buspici__DOT__r_int_state = __Vdly__main__DOT__buspici__DOT__r_int_state;
    // ALWAYSPOST at wbscope.v:309
    if (__Vdlyvset__main__DOT__sdramscopei__DOT__mem__v0) {
	vlTOPp->main__DOT__sdramscopei__DOT__mem[__Vdlyvdim0__main__DOT__sdramscopei__DOT__mem__v0] 
	    = __Vdlyvval__main__DOT__sdramscopei__DOT__mem__v0;
    }
    vlTOPp->main__DOT__sdramscopei__DOT__counter = __Vdly__main__DOT__sdramscopei__DOT__counter;
    vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12 
	= ((IData)(vlTOPp->main__DOT__hb_stb) & (~ 
						 (vlTOPp->main__DOT__hb_tmp_addr 
						  >> 0x17U)));
    vlTOPp->main__DOT____Vcellinp__swic____pinNumber16 
	= ((IData)(vlTOPp->main__DOT__hb_stb) & (vlTOPp->main__DOT__hb_tmp_addr 
						 >> 0x17U));
    // ALWAYS at ../hexbus/hbpack.v:107
    if (vlTOPp->main__DOT__genbus__DOT__w_reset) {
	vlTOPp->main__DOT__genbus__DOT__iw_word = VL_ULL(0);
    } else {
	if (vlTOPp->main__DOT__genbus__DOT__dec_stb) {
	    vlTOPp->main__DOT__genbus__DOT__iw_word 
		= vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word;
	}
    }
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__div_ce 
	= (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_div) 
	    & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__set_cond));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid_alu));
    vlTOPp->main__DOT__buspici__DOT__w_any = (0U != 
					      ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
					       & (IData)(vlTOPp->main__DOT__buspici__DOT__r_int_enable)));
    // ALWAYS at cpu/icontrol.v:116
    if (vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3) {
	vlTOPp->main__DOT__buspici__DOT__r_gie = (1U 
						  & (vlTOPp->main__DOT__wb_data 
						     >> 0x1fU));
    }
    // ALWAYS at wbscope.v:366
    vlTOPp->main__DOT__sdramscopei__DOT__this_addr 
	= (0xfU & ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__read_from_data)
		    ? ((IData)(1U) + ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__raddr) 
				      + (IData)(vlTOPp->main__DOT__sdramscopei__DOT__waddr)))
		    : ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__raddr) 
		       + (IData)(vlTOPp->main__DOT__sdramscopei__DOT__waddr))));
    // ALWAYS at wbscope.v:215
    if ((4U & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) {
	if (((IData)(vlTOPp->main__DOT__sdramscopei__DOT__dr_primed) 
	     & (((~ (IData)(vlTOPp->o_ram_we_n)) & 
		 (~ (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config))) 
		| ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		   >> 1U)))) {
	    vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered = 1U;
	}
    } else {
	vlTOPp->main__DOT__sdramscopei__DOT__dr_triggered = 0U;
    }
    // ALWAYS at ../hexbus/hbconsole.v:82
    vlTOPp->main__DOT__w_console_rx_data = (0x7fU & (IData)(vlTOPp->main__DOT__pp_rx_data));
    // ALWAYS at ../hexbus/console.v:157
    if (vlTOPp->main__DOT__w_console_rx_stb) {
	vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full = 1U;
    } else {
	if ((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	      & (2U == (3U & vlTOPp->main__DOT__wb_addr))) 
	     & (~ (IData)(vlTOPp->main__DOT__wb_we)))) {
	    vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full = 0U;
	}
    }
    vlTOPp->main__DOT__swic__DOT__dbg_cmd_write = (
						   ((IData)(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16) 
						    & (IData)(vlTOPp->main__DOT__hb_we)) 
						   & (~ vlTOPp->main__DOT__hb_tmp_addr));
    vlTOPp->main__DOT__swic__DOT__cpu_dbg_we = (((IData)(vlTOPp->main__DOT____Vcellinp__swic____pinNumber16) 
						 & (IData)(vlTOPp->main__DOT__hb_we)) 
						& vlTOPp->main__DOT__hb_tmp_addr);
    vlTOPp->main__DOT__genbus__DOT__packxi__DOT__r_word 
	= __Vdly__main__DOT__genbus__DOT__packxi__DOT__r_word;
    // ALWAYS at cpu/memops.v:101
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned 
	= ((5U == (0xdU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				    << 1U)) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv))))
	    ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3)
	    : ((6U == ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
				<< 1U)) | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))
	        ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3)
	        : ((9U == (0xdU & ((0xcU & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
					    << 1U)) 
				   | (3U & vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_op_Bv)))) 
		   & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
	   & ((5U == (7U & ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn) 
			    >> 1U))) | (0xcU == (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_opn))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_flags 
	= (0x50000000U | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__debug_trigger) 
			   << 0x1fU) | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__master_ce) 
					 << 0x1bU) 
					| (((IData)(vlTOPp->main__DOT__swic__DOT__cmd_halt) 
					    << 0x1aU) 
					   | (((IData)(vlTOPp->main__DOT__swic__DOT__cpu_break) 
					       << 0x19U) 
					      | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__sleep) 
						  << 0x18U) 
						 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie) 
						     << 0x17U) 
						    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag) 
							<< 0x16U) 
						       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap) 
							   << 0x15U) 
							  | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__ill_err_i) 
							      << 0x14U) 
							     | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__r_clear_icache) 
								 << 0x13U) 
								| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_valid) 
								    << 0x12U) 
								   | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_illegal) 
								       << 0x11U) 
								      | ((0x10000U 
									  & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled)) 
									     << 0x10U)) 
									 | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) 
									     << 0xfU) 
									    | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_stalled) 
										<< 0xeU) 
									       | (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid) 
										<< 0xdU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid) 
										<< 0xcU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce) 
										<< 0xaU) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy) 
										<< 9U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wR) 
										<< 8U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__op_illegal) 
										<< 7U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__alu_wF) 
										<< 6U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ce) 
										<< 5U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_we) 
										<< 4U) 
										| (((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_busy) 
										<< 3U) 
										| ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__new_pc) 
										<< 1U)))))))))))))))))))))))))));
    vlTOPp->main__DOT__sdramscopei__DOT__raddr = __Vdly__main__DOT__sdramscopei__DOT__raddr;
    vlTOPp->main__DOT__sdramscopei__DOT__waddr = __Vdly__main__DOT__sdramscopei__DOT__waddr;
    vlTOPp->main__DOT__sdramscopei__DOT__dr_primed 
	= __Vdly__main__DOT__sdramscopei__DOT__dr_primed;
    vlTOPp->main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr 
	= ((IData)(vlTOPp->main__DOT__genbus__DOT__iw_stb) 
	   & (2U == (3U & (IData)((vlTOPp->main__DOT__genbus__DOT__iw_word 
				   >> 0x20U)))));
    // ALWAYS at ../hexbus/hbdechex.v:57
    vlTOPp->main__DOT__genbus__DOT__dec_stb = ((IData)(vlTOPp->main__DOT__pp_rx_stb) 
					       & (0x7fU 
						  != 
						  (0x7fU 
						   & (IData)(vlTOPp->main__DOT__pp_rx_data))));
    // ALWAYS at ../hexbus/hbdechex.v:53
    vlTOPp->main__DOT__genbus__DOT__w_reset = ((IData)(vlTOPp->main__DOT__pp_rx_stb) 
					       & (0x54U 
						  == 
						  (0x7fU 
						   & (IData)(vlTOPp->main__DOT__pp_rx_data))));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3) 
	   & (~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned)));
    // ALWAYS at wbscope.v:147
    if (vlTOPp->main__DOT__sdramscopei__DOT__write_to_control) {
	vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff 
	    = (0xfU & vlTOPp->main__DOT__wb_data);
	vlTOPp->main__DOT__sdramscopei__DOT__br_config 
	    = ((4U & (vlTOPp->main__DOT__wb_data >> 0x1dU)) 
	       | (3U & (vlTOPp->main__DOT__wb_data 
			>> 0x1aU)));
    } else {
	if (vlTOPp->main__DOT__sdramscopei__DOT__bw_reset_complete) {
	    vlTOPp->main__DOT__sdramscopei__DOT__br_config 
		= (4U | (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config));
	}
    }
    // ALWAYS at wbsdram.v:268
    if (vlTOPp->main__DOT__sdrami__DOT__maintenance_mode) {
	__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v0 = 1U;
	__Vdly__main__DOT__sdrami__DOT__r_barrell_ack = 0U;
	vlTOPp->main__DOT__sdram_stall = 1U;
	vlTOPp->o_ram_cs_n = vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n;
	__Vdly__main__DOT__sdrami__DOT__nxt_dmod = 0U;
	__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v1 = 1U;
	vlTOPp->o_ram_ras_n = vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n;
	__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v3 = 1U;
	vlTOPp->o_ram_cas_n = vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n;
	vlTOPp->o_ram_we_n = vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n;
	vlTOPp->o_ram_drive_data = vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod;
	vlTOPp->o_ram_addr = vlTOPp->main__DOT__sdrami__DOT__m_ram_addr;
	vlTOPp->o_ram_bs = 0U;
    } else {
	vlTOPp->main__DOT__sdram_stall = ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
					  | (IData)(vlTOPp->main__DOT__sdrami__DOT__bus_cyc));
	__Vdly__main__DOT__sdrami__DOT__r_barrell_ack 
	    = (0x3fU & ((IData)(vlTOPp->main__DOT__wb_cyc)
			 ? ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
			    >> 1U) : 0U));
	__Vdly__main__DOT__sdrami__DOT__nxt_dmod = 0U;
	vlTOPp->o_ram_drive_data = vlTOPp->main__DOT__sdrami__DOT__nxt_dmod;
	__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v4 
	    = ((4U & vlTOPp->main__DOT__sdrami__DOT__bank_active
		[0U]) | (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
			       [0U] >> 1U)));
	__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v4 = 1U;
	__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v5 
	    = ((4U & vlTOPp->main__DOT__sdrami__DOT__bank_active
		[1U]) | (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
			       [1U] >> 1U)));
	__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v6 
	    = ((4U & vlTOPp->main__DOT__sdrami__DOT__bank_active
		[2U]) | (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
			       [2U] >> 1U)));
	__Vdlyvval__main__DOT__sdrami__DOT__bank_active__v7 
	    = ((4U & vlTOPp->main__DOT__sdrami__DOT__bank_active
		[3U]) | (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
			       [3U] >> 1U)));
	vlTOPp->o_ram_cs_n = (1U & (~ (IData)(vlTOPp->main__DOT__wb_cyc)));
	if ((0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle))) {
	    __Vdly__main__DOT__sdrami__DOT__clocks_til_idle 
		= (7U & ((IData)(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle) 
			 - (IData)(1U)));
	}
	vlTOPp->o_ram_ras_n = 1U;
	vlTOPp->o_ram_cas_n = 1U;
	vlTOPp->o_ram_we_n = 1U;
	if ((1U & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__nxt_dmod)))) {
	    if ((1U & ((~ (IData)(vlTOPp->main__DOT__wb_cyc)) 
		       | (IData)(vlTOPp->main__DOT__sdrami__DOT__need_refresh)))) {
		if ((1U & (~ (((((2U == (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
					       [0U] 
					       >> 1U))) 
				 | (2U == (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
						 [1U] 
						 >> 1U)))) 
				| (2U == (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
						[2U] 
						>> 1U)))) 
			       | (2U == (3U & (vlTOPp->main__DOT__sdrami__DOT__bank_active
					       [3U] 
					       >> 1U)))) 
			      | (0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle)))))) {
		    if ((4U & (((vlTOPp->main__DOT__sdrami__DOT__bank_active
				 [0U] | vlTOPp->main__DOT__sdrami__DOT__bank_active
				 [1U]) | vlTOPp->main__DOT__sdrami__DOT__bank_active
				[2U]) | vlTOPp->main__DOT__sdrami__DOT__bank_active
			       [3U]))) {
			vlTOPp->o_ram_cs_n = 0U;
			__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v8 = 1U;
			__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v8 = 2U;
			vlTOPp->o_ram_ras_n = 0U;
			__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v9 = 1U;
			__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v9 = 2U;
			vlTOPp->o_ram_cas_n = 1U;
			__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v10 = 1U;
			__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v10 = 2U;
			vlTOPp->o_ram_we_n = 0U;
			__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v11 = 1U;
			__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v11 = 2U;
			vlTOPp->o_ram_addr = (0x400U 
					      | (IData)(vlTOPp->o_ram_addr));
		    } else {
			if ((1U & (~ ((((0U != vlTOPp->main__DOT__sdrami__DOT__bank_active
					 [0U]) | (0U 
						  != 
						  vlTOPp->main__DOT__sdrami__DOT__bank_active
						  [1U])) 
				       | (0U != vlTOPp->main__DOT__sdrami__DOT__bank_active
					  [2U])) | 
				      (0U != vlTOPp->main__DOT__sdrami__DOT__bank_active
				       [3U]))))) {
			    if (((~ (IData)(vlTOPp->main__DOT__sdrami__DOT__in_refresh)) 
				 & ((0U == (3U & ((IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_clk) 
						  >> 8U))) 
				    | (IData)(vlTOPp->main__DOT__sdrami__DOT__need_refresh)))) {
				vlTOPp->o_ram_cs_n = 0U;
				vlTOPp->o_ram_ras_n = 0U;
				vlTOPp->o_ram_cas_n = 0U;
				vlTOPp->o_ram_we_n = 1U;
			    }
			}
		    }
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__in_refresh)))) {
		    if ((((IData)(vlTOPp->main__DOT__sdrami__DOT__pending) 
			  & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid))) 
			 & (0U == vlTOPp->main__DOT__sdrami__DOT__bank_active
			    [(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
				    >> 8U))]))) {
			vlTOPp->o_ram_cs_n = 0U;
			__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v12 = 1U;
			__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v12 = 2U;
			__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v12 
			    = (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
				     >> 8U));
			__Vdlyvval__main__DOT__sdrami__DOT__bank_row__v0 
			    = (0x1fffU & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					  >> 0xaU));
			__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v0 
			    = (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
				     >> 8U));
			vlTOPp->o_ram_ras_n = 0U;
			vlTOPp->o_ram_cas_n = 1U;
			vlTOPp->o_ram_we_n = 1U;
			vlTOPp->o_ram_addr = (0x1fffU 
					      & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						 >> 0xaU));
			vlTOPp->o_ram_bs = (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						  >> 8U));
		    } else {
			if ((((IData)(vlTOPp->main__DOT__sdrami__DOT__pending) 
			      & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid))) 
			     & (7U == vlTOPp->main__DOT__sdrami__DOT__bank_active
				[(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					>> 8U))]))) {
			    vlTOPp->o_ram_cs_n = 0U;
			    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v13 = 1U;
			    __Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v13 = 2U;
			    __Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v13 
				= (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					 >> 8U));
			    vlTOPp->o_ram_ras_n = 0U;
			    vlTOPp->o_ram_cas_n = 1U;
			    vlTOPp->o_ram_we_n = 0U;
			    vlTOPp->o_ram_addr = (0x1bffU 
						  & (IData)(vlTOPp->o_ram_addr));
			    vlTOPp->o_ram_bs = (3U 
						& (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						   >> 8U));
			} else {
			    if ((((((IData)(vlTOPp->main__DOT__sdrami__DOT__pending) 
				    & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__r_we))) 
				   & (vlTOPp->main__DOT__sdrami__DOT__bank_active
				      [(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					      >> 8U))] 
				      >> 2U)) & (IData)(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid)) 
				 & (4U > (IData)(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle)))) {
				vlTOPp->o_ram_cs_n = 0U;
				__Vdly__main__DOT__sdrami__DOT__clocks_til_idle = 4U;
				vlTOPp->main__DOT__sdram_stall = 0U;
				__Vdly__main__DOT__sdrami__DOT__r_barrell_ack 
				    = (0x20U | (IData)(__Vdly__main__DOT__sdrami__DOT__r_barrell_ack));
				vlTOPp->o_ram_ras_n = 1U;
				vlTOPp->o_ram_cas_n = 0U;
				vlTOPp->o_ram_we_n = 1U;
				vlTOPp->o_ram_addr 
				    = (0x1feU & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						 << 1U));
				vlTOPp->o_ram_bs = 
				    (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					   >> 8U));
			    } else {
				if ((((((IData)(vlTOPp->main__DOT__sdrami__DOT__pending) 
					& (IData)(vlTOPp->main__DOT__sdrami__DOT__r_we)) 
				       & (vlTOPp->main__DOT__sdrami__DOT__bank_active
					  [(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						  >> 8U))] 
					  >> 2U)) & (IData)(vlTOPp->main__DOT__sdrami__DOT__r_bank_valid)) 
				     & (0U == (IData)(vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle)))) {
				    vlTOPp->o_ram_cs_n = 0U;
				    __Vdly__main__DOT__sdrami__DOT__clocks_til_idle = 1U;
				    vlTOPp->main__DOT__sdram_stall = 0U;
				    __Vdly__main__DOT__sdrami__DOT__r_barrell_ack 
					= (2U | (IData)(__Vdly__main__DOT__sdrami__DOT__r_barrell_ack));
				    __Vdly__main__DOT__sdrami__DOT__nxt_dmod = 1U;
				    vlTOPp->o_ram_ras_n = 1U;
				    vlTOPp->o_ram_cas_n = 0U;
				    vlTOPp->o_ram_we_n = 0U;
				    vlTOPp->o_ram_addr 
					= (0x1feU & 
					   (vlTOPp->main__DOT__sdrami__DOT__r_addr 
					    << 1U));
				    vlTOPp->o_ram_bs 
					= (3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						 >> 8U));
				    vlTOPp->o_ram_drive_data = 1U;
				} else {
				    if ((((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
					  & (0xf0U 
					     <= (0xffU 
						 & vlTOPp->main__DOT__sdrami__DOT__r_addr))) 
					 & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__fwd_bank_valid)))) {
					if ((3U == 
					     (3U & 
					      (vlTOPp->main__DOT__sdrami__DOT__bank_active
					       [(3U 
						 & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
						    >> 8U))] 
					       >> 1U)))) {
					    vlTOPp->o_ram_cs_n = 0U;
					    __Vdlyvset__main__DOT__sdrami__DOT__bank_active__v14 = 1U;
					    __Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v14 = 2U;
					    __Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v14 
						= (3U 
						   & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
						      >> 8U));
					    vlTOPp->o_ram_ras_n = 0U;
					    vlTOPp->o_ram_cas_n = 1U;
					    vlTOPp->o_ram_we_n = 0U;
					    vlTOPp->o_ram_addr 
						= (0x1bffU 
						   & (IData)(vlTOPp->o_ram_addr));
					    vlTOPp->o_ram_bs 
						= (3U 
						   & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
						      >> 8U));
					} else {
					    if ((0U 
						 == 
						 vlTOPp->main__DOT__sdrami__DOT__bank_active
						 [(3U 
						   & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
						      >> 8U))])) {
						vlTOPp->o_ram_cs_n = 0U;
						__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v15 = 1U;
						__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v15 
						    = 
						    (3U 
						     & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
							>> 8U));
						__Vdlyvval__main__DOT__sdrami__DOT__bank_row__v1 
						    = 
						    (0x1fffU 
						     & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
							>> 0xaU));
						__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v1 
						    = 
						    (3U 
						     & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
							>> 8U));
						vlTOPp->o_ram_ras_n = 0U;
						vlTOPp->o_ram_cas_n = 1U;
						vlTOPp->o_ram_we_n = 1U;
						vlTOPp->o_ram_addr 
						    = 
						    (0x1fffU 
						     & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
							>> 0xaU));
						vlTOPp->o_ram_bs 
						    = 
						    (3U 
						     & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
							>> 8U));
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
	if ((1U & (~ (IData)(vlTOPp->main__DOT__wb_cyc)))) {
	    __Vdly__main__DOT__sdrami__DOT__r_barrell_ack = 0U;
	}
    }
    // ALWAYS at ../hexbus/hbconsole.v:80
    vlTOPp->main__DOT__w_console_rx_stb = ((IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write) 
					   & (~ ((IData)(vlTOPp->main__DOT__pp_rx_data) 
						 >> 7U)));
    vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff 
	= ((0xffff0U & vlTOPp->main__DOT__sdramscopei__DOT__full_holdoff) 
	   | (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_holdoff));
    vlTOPp->main__DOT__sdrami__DOT__nxt_dmod = __Vdly__main__DOT__sdrami__DOT__nxt_dmod;
    vlTOPp->main__DOT__sdrami__DOT__clocks_til_idle 
	= __Vdly__main__DOT__sdrami__DOT__clocks_til_idle;
    vlTOPp->main__DOT__sdrami__DOT__r_we = __Vdly__main__DOT__sdrami__DOT__r_we;
    vlTOPp->main__DOT__sdrami__DOT__r_pending = __Vdly__main__DOT__sdrami__DOT__r_pending;
    // ALWAYS at ../pport/pport.v:114
    vlTOPp->main__DOT__pp_rx_stb = ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_stb) 
				    & (IData)(vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir));
    vlTOPp->main__DOT__sdramscopei__DOT__bw_reset_complete 
	= (1U & (~ ((IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_config) 
		    >> 2U)));
    // ALWAYS at wbsdram.v:140
    vlTOPp->main__DOT__sdrami__DOT__in_refresh = ((0U 
						   != (IData)(vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk)) 
						  | (IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_cmd));
    // ALWAYS at wbsdram.v:128
    vlTOPp->main__DOT__sdrami__DOT__need_refresh = 
	((0U == (IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_clk)) 
	 & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__refresh_cmd)));
    // ALWAYS at wbsdram.v:229
    vlTOPp->main__DOT__sdrami__DOT__fwd_bank_valid 
	= ((vlTOPp->main__DOT__sdrami__DOT__bank_active
	    [(3U & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
		    >> 8U))] >> 2U) & (vlTOPp->main__DOT__sdrami__DOT__bank_row
				       [(3U & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
					       >> 8U))] 
				       == (0x1fffU 
					   & (vlTOPp->main__DOT__sdrami__DOT__fwd_addr 
					      >> 0xaU))));
    vlTOPp->main__DOT__sdrami__DOT__pending = ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
					       & (IData)(vlTOPp->main__DOT__sdram_stall));
    // ALWAYS at wbsdram.v:486
    if ((1U & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero)))) {
	__Vdly__main__DOT__sdrami__DOT__maintenance_clocks 
	    = (0xfU & ((IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks) 
		       - (IData)(1U)));
	__Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero 
	    = (1U == (IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks));
    }
    vlTOPp->main__DOT__sdrami__DOT__m_ram_addr = 0x21U;
    if ((1U == (IData)(vlTOPp->main__DOT__sdrami__DOT__m_state))) {
	vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 1U;
	vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod = 0U;
	vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 1U;
	vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 1U;
	vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 1U;
	if ((1U & (~ (IData)(vlTOPp->main__DOT__sdrami__DOT__startup_hold)))) {
	    __Vdly__main__DOT__sdrami__DOT__m_state = 2U;
	    __Vdly__main__DOT__sdrami__DOT__maintenance_clocks = 3U;
	    __Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero = 0U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 0U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 0U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 0U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_addr 
		= (0x400U | (IData)(vlTOPp->main__DOT__sdrami__DOT__m_ram_addr));
	}
    } else {
	if ((2U == (IData)(vlTOPp->main__DOT__sdrami__DOT__m_state))) {
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 1U;
	    vlTOPp->main__DOT__sdrami__DOT__m_ram_addr 
		= (0x400U | (IData)(vlTOPp->main__DOT__sdrami__DOT__m_ram_addr));
	    if (vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero) {
		vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_addr 
		    = (0x1bffU & (IData)(vlTOPp->main__DOT__sdrami__DOT__m_ram_addr));
		__Vdly__main__DOT__sdrami__DOT__m_state = 3U;
		__Vdly__main__DOT__sdrami__DOT__maintenance_clocks = 0xcU;
		__Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero = 0U;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->main__DOT__sdrami__DOT__m_state))) {
		vlTOPp->main__DOT__sdrami__DOT__m_ram_cs_n 
		    = ((0xaU < (IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks)) 
		       | (2U >= (IData)(vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks)));
		vlTOPp->main__DOT__sdrami__DOT__m_ram_ras_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_cas_n = 0U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_we_n = 1U;
		vlTOPp->main__DOT__sdrami__DOT__m_ram_dmod = 0U;
		if (vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero) {
		    vlTOPp->main__DOT__sdrami__DOT__maintenance_mode = 0U;
		}
	    }
	}
    }
    // ALWAYS at wbsdram.v:219
    vlTOPp->main__DOT__sdrami__DOT__r_bank_valid = 
	((IData)(vlTOPp->main__DOT__sdrami__DOT__bus_cyc)
	  ? ((vlTOPp->main__DOT__sdrami__DOT__bank_active
	      [(3U & (vlTOPp->main__DOT__wb_addr >> 8U))] 
	      >> 2U) & (vlTOPp->main__DOT__sdrami__DOT__bank_row
			[(3U & (vlTOPp->main__DOT__wb_addr 
				>> 8U))] == (0x1fffU 
					     & (vlTOPp->main__DOT__wb_addr 
						>> 0xaU))))
	  : ((vlTOPp->main__DOT__sdrami__DOT__bank_active
	      [(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
		      >> 8U))] >> 2U) & (vlTOPp->main__DOT__sdrami__DOT__bank_row
					 [(3U & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						 >> 8U))] 
					 == (0x1fffU 
					     & (vlTOPp->main__DOT__sdrami__DOT__r_addr 
						>> 0xaU)))));
    // ALWAYS at ../pport/pport.v:117
    if (vlTOPp->main__DOT__hbi_pp__DOT__pp_stb) {
	vlTOPp->main__DOT__pp_rx_data = vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_data;
    }
    // ALWAYS at ../hexbus/console.v:277
    if ((((IData)(vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4) 
	  & (IData)(vlTOPp->main__DOT__wb_we)) & (3U 
						  == 
						  (3U 
						   & vlTOPp->main__DOT__wb_addr)))) {
	vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write = 1U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->main__DOT__w_console_busy)))) {
	    vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write = 0U;
	}
    }
    vlTOPp->main__DOT__sdrami__DOT__in_refresh_clk 
	= __Vdly__main__DOT__sdrami__DOT__in_refresh_clk;
    vlTOPp->main__DOT__sdrami__DOT__refresh_clk = __Vdly__main__DOT__sdrami__DOT__refresh_clk;
    vlTOPp->main__DOT__sdrami__DOT__refresh_cmd = (
						   (((~ (IData)(vlTOPp->o_ram_cs_n)) 
						     & (~ (IData)(vlTOPp->o_ram_ras_n))) 
						    & (~ (IData)(vlTOPp->o_ram_cas_n))) 
						   & (IData)(vlTOPp->o_ram_we_n));
    vlTOPp->main__DOT__sdrami__DOT__fwd_addr = __Vdly__main__DOT__sdrami__DOT__fwd_addr;
    vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks 
	= __Vdly__main__DOT__sdrami__DOT__maintenance_clocks;
    vlTOPp->main__DOT__sdrami__DOT__maintenance_clocks_zero 
	= __Vdly__main__DOT__sdrami__DOT__maintenance_clocks_zero;
    vlTOPp->main__DOT__sdrami__DOT__m_state = __Vdly__main__DOT__sdrami__DOT__m_state;
    vlTOPp->main__DOT__sdrami__DOT__r_addr = __Vdly__main__DOT__sdrami__DOT__r_addr;
    // ALWAYSPOST at wbsdram.v:376
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v12) {
	vlTOPp->main__DOT__sdrami__DOT__bank_row[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v0] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_row__v0;
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v15) {
	vlTOPp->main__DOT__sdrami__DOT__bank_row[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_row__v1] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_row__v1;
    }
    // ALWAYSPOST at wbsdram.v:271
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v0) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[0U] = 0U;
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v1) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[1U] = 0U;
	vlTOPp->main__DOT__sdrami__DOT__bank_active[2U] = 0U;
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v3) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[3U] = 0U;
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v4) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[0U] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_active__v4;
	vlTOPp->main__DOT__sdrami__DOT__bank_active[1U] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_active__v5;
	vlTOPp->main__DOT__sdrami__DOT__bank_active[2U] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_active__v6;
	vlTOPp->main__DOT__sdrami__DOT__bank_active[3U] 
	    = __Vdlyvval__main__DOT__sdrami__DOT__bank_active__v7;
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v8) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[0U] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v8))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [0U]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v9) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[1U] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v9))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [1U]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v10) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[2U] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v10))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [2U]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v11) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[3U] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v11))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [3U]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v12) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v12] 
	    = (vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v12] 
	       | ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v12)));
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v13) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v13] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v13))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v13]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v14) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v14] 
	    = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__main__DOT__sdrami__DOT__bank_active__v14))) 
	       & vlTOPp->main__DOT__sdrami__DOT__bank_active
	       [__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v14]);
    }
    if (__Vdlyvset__main__DOT__sdrami__DOT__bank_active__v15) {
	vlTOPp->main__DOT__sdrami__DOT__bank_active[__Vdlyvdim0__main__DOT__sdrami__DOT__bank_active__v15] = 4U;
    }
    vlTOPp->main__DOT__w_console_busy = ((IData)(vlTOPp->main__DOT__genbus__DOT__fnl_stb) 
					 | (IData)(vlTOPp->main__DOT__genbus__DOT__ps_full));
    // ALWAYS at ../pport/pport.v:102
    if ((1U & (~ (IData)(vlTOPp->o_pp_clkfb)))) {
	vlTOPp->main__DOT__hbi_pp__DOT__stb_pp_dir 
	    = vlTOPp->i_pp_dir;
    }
    // ALWAYS at wbsdram.v:463
    vlTOPp->main__DOT__sdrami__DOT__startup_hold = 
	(0U != (IData)(vlTOPp->main__DOT__sdrami__DOT__startup_idle));
    // ALWAYS at ../pport/pport.v:98
    if ((1U & (~ (IData)(vlTOPp->o_pp_clkfb)))) {
	vlTOPp->main__DOT__hbi_pp__DOT__ck_pp_data 
	    = vlTOPp->i_pp_data;
    }
    // ALWAYS at ../pport/pport.v:94
    vlTOPp->main__DOT__hbi_pp__DOT__pp_stb = ((0x1fU 
					       == (0x1fU 
						   & ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer) 
						      >> 1U))) 
					      & (~ (IData)(vlTOPp->o_pp_clkfb)));
    vlTOPp->main__DOT__bus_int_vector = (((IData)(vlTOPp->main__DOT__bustimer_int) 
					  << 3U) | 
					 (((IData)(vlTOPp->main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full) 
					   << 2U) | 
					  ((2U & ((~ (IData)(vlTOPp->main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write)) 
						  << 1U)) 
					   | (IData)(vlTOPp->main__DOT__gpio_int))));
    // ALWAYS at cpu/busdelay.v:121
    __Vdly__main__DOT__wb_cyc = ((((IData)(vlTOPp->main__DOT__hb_dwbi_cyc) 
				   & (~ (IData)(vlTOPp->i_reset))) 
				  & (~ (IData)(vlTOPp->main__DOT__hb_dwbi_err))) 
				 & ((~ (IData)(vlTOPp->main__DOT__wb_err)) 
				    | (~ (IData)(vlTOPp->main__DOT__wb_cyc))));
    if ((1U & ((~ (IData)(vlTOPp->main__DOT__wb_stall)) 
	       | (~ (IData)(vlTOPp->main__DOT__wb_stb))))) {
	if (vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb) {
	    vlTOPp->main__DOT__wb_we = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we;
	    vlTOPp->main__DOT__wb_addr = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr;
	    vlTOPp->main__DOT__wb_data = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data;
	    vlTOPp->main__DOT__wb_sel = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel;
	    __Vdly__main__DOT__wb_stb = 1U;
	} else {
	    vlTOPp->main__DOT__wb_we = vlTOPp->main__DOT__hb_dwbi_we;
	    vlTOPp->main__DOT__wb_addr = vlTOPp->main__DOT__hb_dwbi_addr;
	    vlTOPp->main__DOT__wb_data = vlTOPp->main__DOT__hb_dwbi_odata;
	    vlTOPp->main__DOT__wb_sel = vlTOPp->main__DOT__hb_dwbi_sel;
	    __Vdly__main__DOT__wb_stb = vlTOPp->main__DOT__hb_dwbi_stb;
	}
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we 
	    = vlTOPp->main__DOT__hb_dwbi_we;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr 
	    = vlTOPp->main__DOT__hb_dwbi_addr;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data 
	    = vlTOPp->main__DOT__hb_dwbi_odata;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel 
	    = vlTOPp->main__DOT__hb_dwbi_sel;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb = 0U;
    } else {
	if ((1U & ((~ (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb)) 
		   & (~ (IData)(vlTOPp->main__DOT__hb_dwbi_stall))))) {
	    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we 
		= vlTOPp->main__DOT__hb_dwbi_we;
	    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr 
		= vlTOPp->main__DOT__hb_dwbi_addr;
	    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data 
		= vlTOPp->main__DOT__hb_dwbi_odata;
	    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel 
		= vlTOPp->main__DOT__hb_dwbi_sel;
	    __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb 
		= vlTOPp->main__DOT__hb_dwbi_stb;
	}
    }
    if ((1U & (((~ (IData)(vlTOPp->main__DOT__hb_dwbi_cyc)) 
		| ((IData)(vlTOPp->main__DOT__wb_err) 
		   & (IData)(vlTOPp->main__DOT__wb_cyc))) 
	       | (IData)(vlTOPp->main__DOT__hb_dwbi_err)))) {
	__Vdly__main__DOT__wb_stb = 0U;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb = 0U;
    }
    vlTOPp->main__DOT__hb_dwbi_ack = ((~ (((IData)(vlTOPp->i_reset) 
					   | (~ (IData)(vlTOPp->main__DOT__hb_dwbi_cyc))) 
					  | (IData)(vlTOPp->main__DOT__hb_dwbi_err))) 
				      & (((IData)(vlTOPp->main__DOT__wb_ack) 
					  & (IData)(vlTOPp->main__DOT__wb_cyc)) 
					 & (~ (IData)(vlTOPp->main__DOT__wb_err))));
    __Vdly__main__DOT__hb_dwbi_err = ((IData)(vlTOPp->main__DOT__hb_dwbi_cyc) 
				      & ((IData)(vlTOPp->main__DOT__wb_err) 
					 & (IData)(vlTOPp->main__DOT__wb_cyc)));
    if (vlTOPp->i_reset) {
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb = 0U;
	__Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we = 0U;
	__Vdly__main__DOT__wb_stb = 0U;
	__Vdly__main__DOT__hb_dwbi_err = 0U;
	vlTOPp->main__DOT__hb_dwbi_ack = 0U;
    }
    vlTOPp->main__DOT__sdrami__DOT__startup_idle = __Vdly__main__DOT__sdrami__DOT__startup_idle;
    vlTOPp->main__DOT__buspici__DOT__nxt_int_state 
	= ((IData)(vlTOPp->main__DOT__buspici__DOT__r_int_state) 
	   | (IData)(vlTOPp->main__DOT__bus_int_vector));
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we 
	= __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we;
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr 
	= __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr;
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data 
	= __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data;
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel 
	= __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel;
    vlTOPp->main__DOT__hb_dwbi_sel = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_sel)
				       : 0xfU);
    vlTOPp->main__DOT__hb_dwbi_cyc = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__zip_cyc)
				       : (IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber11));
    vlTOPp->main__DOT__hb_dwbi_we = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				      ? (IData)(vlTOPp->main__DOT__zip_we)
				      : (IData)(vlTOPp->main__DOT__hb_we));
    vlTOPp->main__DOT__hb_dwbi_addr = (0x7fffffU & 
				       ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
					 ? vlTOPp->main__DOT__zip_addr
					 : vlTOPp->main__DOT__hb_tmp_addr));
    vlTOPp->main__DOT__hb_dwbi_odata = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
					 ? vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_data
					 : vlTOPp->main__DOT__hb_data);
    vlTOPp->main__DOT__hb_dwbi_stb = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)
				       ? (IData)(vlTOPp->main__DOT__zip_stb)
				       : (IData)(vlTOPp->main__DOT____Vcellinp__bus_arbiter____pinNumber12));
    vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb 
	= __Vdly__main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb;
    vlTOPp->main__DOT__hb_dwbi_err = __Vdly__main__DOT__hb_dwbi_err;
    vlTOPp->main__DOT__wb_stb = __Vdly__main__DOT__wb_stb;
    // ALWAYS at ../pport/pport.v:89
    if ((0x1fU == (0x1fU & ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer) 
			    >> 1U)))) {
	vlTOPp->o_pp_clkfb = 1U;
    } else {
	if ((0U == (0x1fU & ((IData)(vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer) 
			     >> 1U)))) {
	    vlTOPp->o_pp_clkfb = 0U;
	}
    }
    vlTOPp->main__DOT__hb_dwb_ack = ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
				     & (IData)(vlTOPp->main__DOT__hb_dwbi_ack));
    vlTOPp->main__DOT__zip_ack = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				  & (IData)(vlTOPp->main__DOT__hb_dwbi_ack));
    vlTOPp->main__DOT__hb_dwbi_stall = vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb;
    vlTOPp->main__DOT__hb_stall = (((~ (vlTOPp->main__DOT__hb_tmp_addr 
					>> 0x17U)) 
				    & ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				       | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb))) 
				   | ((vlTOPp->main__DOT__hb_tmp_addr 
				       >> 0x17U) & (IData)(vlTOPp->main__DOT__swic__DOT__dbg_stall)));
    vlTOPp->main__DOT__zip_stall = (1U & ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
					  | (IData)(vlTOPp->main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb)));
    vlTOPp->main__DOT__hb_err = ((((IData)(vlTOPp->main__DOT__hb_stb) 
				   & (0U == ((2U & 
					      ((~ (vlTOPp->main__DOT__hb_tmp_addr 
						   >> 0x17U)) 
					       << 1U)) 
					     | (1U 
						& (vlTOPp->main__DOT__hb_tmp_addr 
						   >> 0x17U))))) 
				  | (IData)(vlTOPp->main__DOT__hb_many_ack)) 
				 | ((~ (IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner)) 
				    & (IData)(vlTOPp->main__DOT__hb_dwbi_err)));
    vlTOPp->main__DOT__zip_err = ((IData)(vlTOPp->main__DOT__bus_arbiter__DOT__r_a_owner) 
				  & (IData)(vlTOPp->main__DOT__hb_dwbi_err));
    vlTOPp->main__DOT__wb_stall = ((8U == (8U & (vlTOPp->main__DOT__wb_addr 
						 >> 0x13U))) 
				   & (IData)(vlTOPp->main__DOT__sdram_stall));
    vlTOPp->main__DOT____Vcellinp__buspici____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((4U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & (1U 
						    == 
						    (7U 
						     & vlTOPp->main__DOT__wb_addr))));
    vlTOPp->main__DOT__wb_err = (((IData)(vlTOPp->main__DOT__wb_stb) 
				  & (0U == (((1U == 
					      (0xfU 
					       & (vlTOPp->main__DOT__wb_addr 
						  >> 0x13U))) 
					     << 5U) 
					    | (((2U 
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
							       >> 0x13U)))))))))) 
				 | (IData)(vlTOPp->main__DOT__wb_many_ack));
    vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((2U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & vlTOPp->main__DOT__wb_addr));
    vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & ((2U 
						  == 
						  (0xfU 
						   & (vlTOPp->main__DOT__wb_addr 
						      >> 0x13U))) 
						 & (~ vlTOPp->main__DOT__wb_addr)));
    vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (1U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (8U 
						 == 
						 (8U 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    // ALWAYS at main.v:503
    vlTOPp->main__DOT__wb_ack = ((IData)(vlTOPp->main__DOT__wb_cyc) 
				 & ((IData)(vlTOPp->main__DOT__sdramscope_ack) 
				    | (((IData)(vlTOPp->main__DOT__r_wb_dio_ack) 
					>> 1U) | ((IData)(vlTOPp->main__DOT__console_ack) 
						  | ((IData)(vlTOPp->main__DOT__r_wb_sio_ack) 
						     | ((IData)(vlTOPp->main__DOT__bkram_ack) 
							| (IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack)))))));
    vlTOPp->main__DOT__hbi_pp__DOT__pp_clk_transfer 
	= __Vdly__main__DOT__hbi_pp__DOT__pp_clk_transfer;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_ack 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   & (IData)(vlTOPp->main__DOT__zip_ack));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_ack 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
	   & (IData)(vlTOPp->main__DOT__zip_ack));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_stall 
	= (1U & ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
		 | (IData)(vlTOPp->main__DOT__zip_stall)));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_stall 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   | (IData)(vlTOPp->main__DOT__zip_stall));
    vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24 
	= ((IData)(vlTOPp->main__DOT__zip_err) | ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
						  & (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl)));
    vlTOPp->main__DOT__watchdogi__DOT__wb_write = ((IData)(vlTOPp->main__DOT____Vcellinp__watchdogi____pinNumber5) 
						   & (IData)(vlTOPp->main__DOT__wb_we));
    vlTOPp->main__DOT__bustimeri__DOT__wb_write = ((IData)(vlTOPp->main__DOT____Vcellinp__bustimeri____pinNumber5) 
						   & (IData)(vlTOPp->main__DOT__wb_we));
    vlTOPp->main__DOT__sdramscopei__DOT__read_from_data 
	= (((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
	    & (~ (IData)(vlTOPp->main__DOT__wb_we))) 
	   & vlTOPp->main__DOT__wb_addr);
    vlTOPp->main__DOT__sdramscopei__DOT__write_to_control 
	= (((IData)(vlTOPp->main__DOT____Vcellinp__sdramscopei____pinNumber7) 
	    & (IData)(vlTOPp->main__DOT__wb_we)) & 
	   (~ vlTOPp->main__DOT__wb_addr));
    vlTOPp->main__DOT__r_wb_dio_ack = __Vdly__main__DOT__r_wb_dio_ack;
    vlTOPp->main__DOT__r_wb_sio_ack = __Vdly__main__DOT__r_wb_sio_ack;
    vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack = __Vdly__main__DOT__sdrami__DOT__r_barrell_ack;
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__mem_err 
	= ((IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
    vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pf_err 
	= ((~ (IData)(vlTOPp->main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner)) 
	   & (IData)(vlTOPp->main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24));
    // ALWAYS at memdev.v:146
    vlTOPp->main__DOT__bkram_ack = ((IData)(vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_stb) 
				    & (IData)(vlTOPp->main__DOT__wb_cyc));
    // ALWAYS at ../hexbus/console.v:349
    vlTOPp->main__DOT__console_ack = ((IData)(vlTOPp->main__DOT__consolei__DOT__r_wb_ack) 
				      & (IData)(vlTOPp->main__DOT__wb_cyc));
    vlTOPp->main__DOT__wb_cyc = __Vdly__main__DOT__wb_cyc;
    // ALWAYS at memdev.v:94
    vlTOPp->main__DOT__bkrami__DOT__genblk2__DOT__last_stb 
	= vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4;
    // ALWAYS at ../hexbus/console.v:346
    vlTOPp->main__DOT__consolei__DOT__r_wb_ack = vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4;
    vlTOPp->main__DOT__sdramscope_ack = ((IData)(vlTOPp->main__DOT__wb_cyc) 
					 & (IData)(vlTOPp->main__DOT__sdramscopei__DOT__br_wb_ack));
    vlTOPp->main__DOT__sdrami__DOT__bus_cyc = (((IData)(vlTOPp->main__DOT__wb_cyc) 
						& (IData)(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3)) 
					       & (~ (IData)(vlTOPp->main__DOT__sdram_stall)));
    vlTOPp->o_debug = (((IData)(vlTOPp->main__DOT__wb_cyc) 
			<< 0x1fU) | (((IData)(vlTOPp->main__DOT____Vcellinp__sdrami____pinNumber3) 
				      << 0x1eU) | (
						   ((IData)(vlTOPp->main__DOT__wb_we) 
						    << 0x1dU) 
						   | ((0x10000000U 
						       & ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
							  << 0x1cU)) 
						      | (((IData)(vlTOPp->main__DOT__sdram_stall) 
							  << 0x1bU) 
							 | (((IData)(vlTOPp->o_ram_cs_n) 
							     << 0x1aU) 
							    | (((IData)(vlTOPp->o_ram_ras_n) 
								<< 0x19U) 
							       | (((IData)(vlTOPp->o_ram_cas_n) 
								   << 0x18U) 
								  | (((IData)(vlTOPp->o_ram_we_n) 
								      << 0x17U) 
								     | (((IData)(vlTOPp->o_ram_bs) 
									 << 0x15U) 
									| (((IData)(vlTOPp->o_ram_drive_data) 
									    << 0x14U) 
									   | (((IData)(vlTOPp->main__DOT__sdrami__DOT__r_pending) 
									       << 0x13U) 
									      | (((IData)(vlTOPp->main__DOT__sdrami__DOT__trigger) 
										<< 0x12U) 
										| ((0x3ff00U 
										& ((IData)(vlTOPp->o_ram_addr) 
										<< 8U)) 
										| (0xffU 
										& ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_we)
										 ? (IData)(vlTOPp->o_ram_data)
										 : 
										((0xf0U 
										& (vlTOPp->main__DOT__sdram_data 
										>> 0x10U)) 
										| (0xfU 
										& vlTOPp->main__DOT__sdram_data))))))))))))))))));
    vlTOPp->main__DOT____Vcellinp__bkrami____pinNumber4 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (5U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
    vlTOPp->main__DOT____Vcellinp__consolei____pinNumber4 
	= ((IData)(vlTOPp->main__DOT__wb_stb) & (3U 
						 == 
						 (0xfU 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U))));
}

VL_INLINE_OPT void Vmain::_combo__TOP__4(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_combo__TOP__4\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->main__DOT__sdram_debug = ((0x40000000U 
				       & ((~ (IData)(vlTOPp->o_ram_cs_n)) 
					  << 0x1eU)) 
				      | (((IData)(vlTOPp->main__DOT__wb_cyc) 
					  << 0x1dU) 
					 | ((((IData)(vlTOPp->main__DOT__wb_stb) 
					      & (8U 
						 == 
						 (8U 
						  & (vlTOPp->main__DOT__wb_addr 
						     >> 0x13U)))) 
					     << 0x1cU) 
					    | (((IData)(vlTOPp->main__DOT__wb_we) 
						<< 0x1bU) 
					       | (((IData)(vlTOPp->main__DOT__sdram_stall) 
						   << 0x1aU) 
						  | ((0x2000000U 
						      & ((IData)(vlTOPp->main__DOT__sdrami__DOT__r_barrell_ack) 
							 << 0x19U)) 
						     | (((IData)(vlTOPp->o_ram_cs_n) 
							 << 0x18U) 
							| (((IData)(vlTOPp->o_ram_ras_n) 
							    << 0x17U) 
							   | (((IData)(vlTOPp->o_ram_we_n) 
							       << 0x16U) 
							      | (((IData)(vlTOPp->o_ram_cas_n) 
								  << 0x15U) 
								 | ((0x1f0000U 
								     & ((IData)(vlTOPp->o_ram_addr) 
									<< 0x10U)) 
								    | ((IData)(vlTOPp->o_ram_we_n)
								        ? (IData)(vlTOPp->o_ram_data)
								        : (IData)(vlTOPp->i_ram_data)))))))))))));
}

void Vmain::_eval(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_eval\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

void Vmain::_eval_initial(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_eval_initial\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vmain::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::final\n"); );
    // Variables
    Vmain__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmain::_eval_settle(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_eval_settle\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vmain::_change_request(Vmain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_change_request\n"); );
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmain::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
	Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_reset & 0xfeU))) {
	Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((i_pp_clk & 0xfeU))) {
	Verilated::overWidthError("i_pp_clk");}
    if (VL_UNLIKELY((i_pp_dir & 0xfeU))) {
	Verilated::overWidthError("i_pp_dir");}
    if (VL_UNLIKELY((i_gpio & 0xfcU))) {
	Verilated::overWidthError("i_gpio");}
}
#endif // VL_DEBUG

void Vmain::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_reset = VL_RAND_RESET_I(1);
    o_ram_cke = VL_RAND_RESET_I(1);
    o_ram_cs_n = VL_RAND_RESET_I(1);
    o_ram_ras_n = VL_RAND_RESET_I(1);
    o_ram_cas_n = VL_RAND_RESET_I(1);
    o_ram_we_n = VL_RAND_RESET_I(1);
    o_ram_bs = VL_RAND_RESET_I(2);
    o_ram_addr = VL_RAND_RESET_I(13);
    i_ram_data = VL_RAND_RESET_I(16);
    o_ram_data = VL_RAND_RESET_I(16);
    o_ram_dqm = VL_RAND_RESET_I(2);
    o_debug = VL_RAND_RESET_I(32);
    o_ram_drive_data = VL_RAND_RESET_I(1);
    i_pp_clk = VL_RAND_RESET_I(1);
    i_pp_dir = VL_RAND_RESET_I(1);
    i_pp_data = VL_RAND_RESET_I(8);
    o_pp_data = VL_RAND_RESET_I(8);
    o_pp_clkfb = VL_RAND_RESET_I(1);
    o_pp_dbg = VL_RAND_RESET_I(1);
    i_gpio = VL_RAND_RESET_I(2);
    o_gpio = VL_RAND_RESET_I(11);
    main__DOT__ram_data = VL_RAND_RESET_I(16);
    main__DOT__watchdog_reset = VL_RAND_RESET_I(1);
    main__DOT__gpio_int = VL_RAND_RESET_I(1);
    main__DOT__bustimer_int = VL_RAND_RESET_I(1);
    main__DOT__zip_debug = VL_RAND_RESET_I(32);
    main__DOT__zip_halted = VL_RAND_RESET_I(1);
    main__DOT__cpu_reset = VL_RAND_RESET_I(1);
    main__DOT__wbubus_dbg = VL_RAND_RESET_I(1);
    main__DOT__pp_rx_stb = VL_RAND_RESET_I(1);
    main__DOT__pp_tx_busy = VL_RAND_RESET_I(1);
    main__DOT__pp_rx_data = VL_RAND_RESET_I(8);
    main__DOT__hb_dwbi_cyc = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_stb = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_we = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_ack = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_stall = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_err = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_addr = VL_RAND_RESET_I(23);
    main__DOT__hb_dwbi_odata = VL_RAND_RESET_I(32);
    main__DOT__hb_dwbi_idata = VL_RAND_RESET_I(32);
    main__DOT__hb_dwbi_sel = VL_RAND_RESET_I(4);
    main__DOT__w_console_rx_stb = VL_RAND_RESET_I(1);
    main__DOT__w_console_busy = VL_RAND_RESET_I(1);
    main__DOT__w_console_rx_data = VL_RAND_RESET_I(7);
    main__DOT__r_buserr_addr = VL_RAND_RESET_I(23);
    main__DOT__r_pwrcount_data = VL_RAND_RESET_I(32);
    main__DOT__bus_int_vector = VL_RAND_RESET_I(15);
    main__DOT__wb_cyc = VL_RAND_RESET_I(1);
    main__DOT__wb_stb = VL_RAND_RESET_I(1);
    main__DOT__wb_we = VL_RAND_RESET_I(1);
    main__DOT__wb_stall = VL_RAND_RESET_I(1);
    main__DOT__wb_err = VL_RAND_RESET_I(1);
    main__DOT__wb_many_ack = VL_RAND_RESET_I(1);
    main__DOT__wb_addr = VL_RAND_RESET_I(23);
    main__DOT__wb_data = VL_RAND_RESET_I(32);
    main__DOT__wb_idata = VL_RAND_RESET_I(32);
    main__DOT__wb_sel = VL_RAND_RESET_I(4);
    main__DOT__wb_ack = VL_RAND_RESET_I(1);
    main__DOT__buserr_ack = VL_RAND_RESET_I(1);
    main__DOT__buserr_stall = VL_RAND_RESET_I(1);
    main__DOT__buspic_ack = VL_RAND_RESET_I(1);
    main__DOT__buspic_stall = VL_RAND_RESET_I(1);
    main__DOT__buspic_data = VL_RAND_RESET_I(32);
    main__DOT__gpio_ack = VL_RAND_RESET_I(1);
    main__DOT__gpio_stall = VL_RAND_RESET_I(1);
    main__DOT__pwrcount_ack = VL_RAND_RESET_I(1);
    main__DOT__pwrcount_stall = VL_RAND_RESET_I(1);
    main__DOT__bustimer_ack = VL_RAND_RESET_I(1);
    main__DOT__watchdog_ack = VL_RAND_RESET_I(1);
    main__DOT__sdramscope_ack = VL_RAND_RESET_I(1);
    main__DOT__console_ack = VL_RAND_RESET_I(1);
    main__DOT__console_data = VL_RAND_RESET_I(32);
    main__DOT__bkram_ack = VL_RAND_RESET_I(1);
    main__DOT__bkram_data = VL_RAND_RESET_I(32);
    main__DOT__sdram_stall = VL_RAND_RESET_I(1);
    main__DOT__sdram_data = VL_RAND_RESET_I(32);
    main__DOT__zip_cyc = VL_RAND_RESET_I(1);
    main__DOT__zip_stb = VL_RAND_RESET_I(1);
    main__DOT__zip_we = VL_RAND_RESET_I(1);
    main__DOT__zip_stall = VL_RAND_RESET_I(1);
    main__DOT__zip_err = VL_RAND_RESET_I(1);
    main__DOT__zip_addr = VL_RAND_RESET_I(23);
    main__DOT__zip_ack = VL_RAND_RESET_I(1);
    main__DOT__zip_dwb_ack = VL_RAND_RESET_I(1);
    main__DOT__zip_dwb_stall = VL_RAND_RESET_I(1);
    main__DOT__zip_dwb_err = VL_RAND_RESET_I(1);
    main__DOT__hb_cyc = VL_RAND_RESET_I(1);
    main__DOT__hb_stb = VL_RAND_RESET_I(1);
    main__DOT__hb_we = VL_RAND_RESET_I(1);
    main__DOT__hb_stall = VL_RAND_RESET_I(1);
    main__DOT__hb_err = VL_RAND_RESET_I(1);
    main__DOT__hb_many_ack = VL_RAND_RESET_I(1);
    main__DOT__hb_data = VL_RAND_RESET_I(32);
    main__DOT__hb_idata = VL_RAND_RESET_I(32);
    main__DOT__hb_ack = VL_RAND_RESET_I(1);
    main__DOT__hb_dwb_ack = VL_RAND_RESET_I(1);
    main__DOT__r_wb_sio_ack = VL_RAND_RESET_I(1);
    main__DOT__r_wb_sio_data = VL_RAND_RESET_I(32);
    main__DOT__r_wb_dio_ack = VL_RAND_RESET_I(2);
    main__DOT__r_wb_dio_bus_select = VL_RAND_RESET_I(1);
    main__DOT__r_wb_dio_data = VL_RAND_RESET_I(32);
    main__DOT__r_wb_bus_select = VL_RAND_RESET_I(3);
    main__DOT__sdram_debug = VL_RAND_RESET_I(32);
    main__DOT____Vcellinp__sdramscopei____pinNumber7 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__sdrami____pinNumber3 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__swic____pinNumber16 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__watchdogi____pinNumber5 = VL_RAND_RESET_I(1);
    main__DOT__hb_tmp_addr = VL_RAND_RESET_I(30);
    main__DOT____Vcellinp__bus_arbiter____pinNumber12 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__bus_arbiter____pinNumber11 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__consolei____pinNumber4 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__bustimeri____pinNumber5 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__bkrami____pinNumber4 = VL_RAND_RESET_I(1);
    main__DOT____Vcellinp__buspici____pinNumber3 = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__read_from_data = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__write_to_control = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__read_address = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__raddr = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    main__DOT__sdramscopei__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    main__DOT__sdramscopei__DOT__bw_reset_complete = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__br_config = VL_RAND_RESET_I(3);
    main__DOT__sdramscopei__DOT__br_holdoff = VL_RAND_RESET_I(4);
    main__DOT__sdramscopei__DOT__dr_triggered = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__dr_primed = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__counter = VL_RAND_RESET_I(4);
    main__DOT__sdramscopei__DOT__dr_stopped = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__waddr = VL_RAND_RESET_I(4);
    main__DOT__sdramscopei__DOT__br_wb_ack = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__br_pre_wb_ack = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__this_addr = VL_RAND_RESET_I(4);
    main__DOT__sdramscopei__DOT__nxt_mem = VL_RAND_RESET_I(32);
    main__DOT__sdramscopei__DOT__full_holdoff = VL_RAND_RESET_I(20);
    main__DOT__sdramscopei__DOT__o_bus_data = VL_RAND_RESET_I(32);
    main__DOT__sdramscopei__DOT__br_level_interrupt = VL_RAND_RESET_I(1);
    main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe = VL_RAND_RESET_I(32);
    main__DOT__sdrami__DOT__need_refresh = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__refresh_clk = VL_RAND_RESET_I(10);
    main__DOT__sdrami__DOT__refresh_cmd = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__in_refresh = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__in_refresh_clk = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    main__DOT__sdrami__DOT__bank_active[__Vi0] = VL_RAND_RESET_I(3);
    }}
    main__DOT__sdrami__DOT__r_barrell_ack = VL_RAND_RESET_I(6);
    main__DOT__sdrami__DOT__r_pending = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__r_we = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__r_addr = VL_RAND_RESET_I(23);
    main__DOT__sdrami__DOT__r_data = VL_RAND_RESET_I(32);
    main__DOT__sdrami__DOT__r_sel = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    main__DOT__sdrami__DOT__bank_row[__Vi0] = VL_RAND_RESET_I(13);
    }}
    main__DOT__sdrami__DOT__clocks_til_idle = VL_RAND_RESET_I(3);
    main__DOT__sdrami__DOT__m_state = VL_RAND_RESET_I(2);
    main__DOT__sdrami__DOT__bus_cyc = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__nxt_dmod = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__pending = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__fwd_addr = VL_RAND_RESET_I(23);
    main__DOT__sdrami__DOT__r_bank_valid = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__fwd_bank_valid = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__maintenance_mode = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_cs_n = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_ras_n = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_cas_n = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_we_n = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_dmod = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__m_ram_addr = VL_RAND_RESET_I(13);
    main__DOT__sdrami__DOT__startup_hold = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__startup_idle = VL_RAND_RESET_I(16);
    main__DOT__sdrami__DOT__maintenance_clocks = VL_RAND_RESET_I(4);
    main__DOT__sdrami__DOT__maintenance_clocks_zero = VL_RAND_RESET_I(1);
    main__DOT__sdrami__DOT__ram_data = VL_RAND_RESET_I(16);
    main__DOT__sdrami__DOT__last_ram_data = VL_RAND_RESET_I(16);
    main__DOT__sdrami__DOT__trigger = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__dbg_stall = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__dbg_ack = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cpu_break = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__dbg_cmd_write = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cmd_reset = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cmd_halt = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cmd_step = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cmd_clear_pf_cache = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cmd_addr = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__cpu_dbg_cc = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__cpu_lcl_stb = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cpu_dbg_we = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__cpu_dbg_data = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    main__DOT__swic__DOT__thecpu__DOT__regset[__Vi0] = VL_RAND_RESET_I(32);
    }}
    main__DOT__swic__DOT__thecpu__DOT__flags = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__iflags = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__w_uflags = VL_RAND_RESET_I(15);
    main__DOT__swic__DOT__thecpu__DOT__w_iflags = VL_RAND_RESET_I(15);
    main__DOT__swic__DOT__thecpu__DOT__break_en = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__step = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__sleep = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__r_halted = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ubreak = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ill_err_u = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ill_err_i = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ubus_err_flag = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__master_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__master_stall = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_pc = VL_RAND_RESET_I(25);
    main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc = VL_RAND_RESET_I(25);
    main__DOT__swic__DOT__thecpu__DOT__new_pc = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_stalled = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_cyc = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_stb = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_ack = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_stall = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_err = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_addr = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__pf_instruction = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pf_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_illegal = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf_stalled = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_valid_mem = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_valid_alu = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_valid_div = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_opn = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__dcd_F = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__dcd_wR = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_rA = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_rB = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_ALU = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_M = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_DIV = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_FP = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_wF = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_break = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_lock = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_pc = VL_RAND_RESET_I(25);
    main__DOT__swic__DOT__thecpu__DOT__dcd_I = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__dcd_zI = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dcd_illegal = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_reg = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__r_op_Av = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__r_op_Bv = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__w_op_Av = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__w_op_Bv = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__w_pcB_v = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__w_pcA_v = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__op_wF = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__r_op_F = VL_RAND_RESET_I(7);
    main__DOT__swic__DOT__thecpu__DOT__op_F = VL_RAND_RESET_I(8);
    main__DOT__swic__DOT__thecpu__DOT__r_op_break = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__w_op_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_illegal = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_sim = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__op_sim_immv = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_result = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__alu_flags = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__alu_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__set_cond = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_wR = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__alu_wF = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_ack = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_stall = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_err = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__bus_err = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_we = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_wreg = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__mem_busy = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__mem_addr = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__mem_data = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__mem_result = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__mem_sel = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__div_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__div_error = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__div_busy = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__div_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__div_result = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__div_flags = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dbgv = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__dbg_val = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__wr_reg_id = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__ipc = VL_RAND_RESET_I(25);
    main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__r_clear_icache = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16 = VL_RAND_RESET_I(7);
    main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15 = VL_RAND_RESET_I(7);
    main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14 = VL_RAND_RESET_I(7);
    main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2 = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pre_op_Av = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2 = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__w_debug_pc = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__debug_trigger = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__debug_flags = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__dbg_pc = VL_RAND_RESET_I(28);
    main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr = VL_RAND_RESET_I(28);
    main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2 = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3 = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc = VL_RAND_RESET_I(25);
    main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight = VL_RAND_RESET_I(2);
    main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond = VL_RAND_RESET_I(4);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half = VL_RAND_RESET_I(15);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I = VL_RAND_RESET_I(23);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI = VL_RAND_RESET_I(8);
    main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__unused_aux = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66,main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count = VL_RAND_RESET_I(6);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66,main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor = VL_RAND_RESET_I(32);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend = VL_RAND_RESET_Q(63);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff = VL_RAND_RESET_Q(33);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit = VL_RAND_RESET_I(5);
    main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb = VL_RAND_RESET_I(1);
    main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op = VL_RAND_RESET_I(4);
    main__DOT__watchdogi__DOT__r_running = VL_RAND_RESET_I(1);
    main__DOT__watchdogi__DOT__wb_write = VL_RAND_RESET_I(1);
    main__DOT__watchdogi__DOT__r_value = VL_RAND_RESET_I(16);
    main__DOT__watchdogi__DOT__r_zero = VL_RAND_RESET_I(1);
    main__DOT__gpioi__DOT__x_gpio = VL_RAND_RESET_I(2);
    main__DOT__gpioi__DOT__q_gpio = VL_RAND_RESET_I(2);
    main__DOT__gpioi__DOT__r_gpio = VL_RAND_RESET_I(2);
    main__DOT__gpioi__DOT__hi_bits = VL_RAND_RESET_I(16);
    main__DOT__gpioi__DOT__low_bits = VL_RAND_RESET_I(16);
    main__DOT__hbi_pp__DOT__stb_pp_dir = VL_RAND_RESET_I(1);
    main__DOT__hbi_pp__DOT__ck_pp_dir = VL_RAND_RESET_I(1);
    main__DOT__hbi_pp__DOT__pp_stb = VL_RAND_RESET_I(1);
    main__DOT__hbi_pp__DOT__pp_clk_transfer = VL_RAND_RESET_I(6);
    main__DOT__hbi_pp__DOT__ck_pp_data = VL_RAND_RESET_I(8);
    main__DOT__hbi_pp__DOT__loaded = VL_RAND_RESET_I(1);
    main__DOT__hbi_pp__DOT__r_dbg = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__w_reset = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__dec_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__dec_bits = VL_RAND_RESET_I(5);
    main__DOT__genbus__DOT__iw_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__iw_word = VL_RAND_RESET_Q(34);
    main__DOT__genbus__DOT__ow_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__ow_word = VL_RAND_RESET_Q(34);
    main__DOT__genbus__DOT__int_busy = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__idl_busy = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__int_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__int_word = VL_RAND_RESET_Q(34);
    main__DOT__genbus__DOT__hb_busy = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__idl_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__idl_word = VL_RAND_RESET_Q(34);
    main__DOT__genbus__DOT__hb_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__hx_busy = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__hb_bits = VL_RAND_RESET_I(5);
    main__DOT__genbus__DOT__hx_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__nl_busy = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__hx_byte = VL_RAND_RESET_I(7);
    main__DOT__genbus__DOT__fnl_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__fnl_byte = VL_RAND_RESET_I(7);
    main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8 = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__ps_full = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__ps_data = VL_RAND_RESET_I(8);
    main__DOT__genbus__DOT__packxi__DOT__cmd_loaded = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__packxi__DOT__r_word = VL_RAND_RESET_Q(34);
    main__DOT__genbus__DOT__wbexec__DOT__newaddr = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__wbexec__DOT__inc = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addints__DOT__int_state = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addints__DOT__pending_interrupt = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addints__DOT__loaded = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addints__DOT__int_loaded = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addidles__DOT__idle_stb = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addidles__DOT__idle_counter = VL_RAND_RESET_I(23);
    main__DOT__genbus__DOT__unpackx__DOT__r_len = VL_RAND_RESET_I(4);
    main__DOT__genbus__DOT__unpackx__DOT__r_word = VL_RAND_RESET_I(32);
    main__DOT__genbus__DOT__genhex__DOT__w_gx_char = VL_RAND_RESET_I(8);
    main__DOT__genbus__DOT__addnl__DOT__last_cr = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addnl__DOT__cr_state = VL_RAND_RESET_I(1);
    main__DOT__genbus__DOT__addnl__DOT__loaded = VL_RAND_RESET_I(1);
    main__DOT__bus_arbiter__DOT__r_a_owner = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we = VL_RAND_RESET_I(1);
    main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr = VL_RAND_RESET_I(23);
    main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data = VL_RAND_RESET_I(32);
    main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel = VL_RAND_RESET_I(4);
    main__DOT__consolei__DOT__r_wb_addr = VL_RAND_RESET_I(2);
    main__DOT__consolei__DOT__r_wb_ack = VL_RAND_RESET_I(1);
    main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data = VL_RAND_RESET_I(7);
    main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full = VL_RAND_RESET_I(1);
    main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err = VL_RAND_RESET_I(1);
    main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data = VL_RAND_RESET_I(7);
    main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err = VL_RAND_RESET_I(1);
    main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write = VL_RAND_RESET_I(1);
    main__DOT__bustimeri__DOT__r_running = VL_RAND_RESET_I(1);
    main__DOT__bustimeri__DOT__wb_write = VL_RAND_RESET_I(1);
    main__DOT__bustimeri__DOT__r_value = VL_RAND_RESET_I(16);
    main__DOT__bustimeri__DOT__r_zero = VL_RAND_RESET_I(1);
    main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload = VL_RAND_RESET_I(1);
    main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
	    main__DOT__bkrami__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    main__DOT__bkrami__DOT__genblk2__DOT__last_wstb = VL_RAND_RESET_I(1);
    main__DOT__bkrami__DOT__genblk2__DOT__last_stb = VL_RAND_RESET_I(1);
    main__DOT__bkrami__DOT__genblk2__DOT__last_addr = VL_RAND_RESET_I(11);
    main__DOT__bkrami__DOT__genblk2__DOT__last_data = VL_RAND_RESET_I(32);
    main__DOT__bkrami__DOT__genblk2__DOT__last_sel = VL_RAND_RESET_I(4);
    main__DOT__buspici__DOT__r_int_state = VL_RAND_RESET_I(15);
    main__DOT__buspici__DOT__r_int_enable = VL_RAND_RESET_I(15);
    main__DOT__buspici__DOT__nxt_int_state = VL_RAND_RESET_I(15);
    main__DOT__buspici__DOT__r_interrupt = VL_RAND_RESET_I(1);
    main__DOT__buspici__DOT__r_gie = VL_RAND_RESET_I(1);
    main__DOT__buspici__DOT__w_any = VL_RAND_RESET_I(1);
    __Vtable1_main__DOT__wb_many_ack[0] = 0U;
    __Vtable1_main__DOT__wb_many_ack[1] = 0U;
    __Vtable1_main__DOT__wb_many_ack[2] = 0U;
    __Vtable1_main__DOT__wb_many_ack[3] = 0U;
    __Vtable1_main__DOT__wb_many_ack[4] = 0U;
    __Vtable1_main__DOT__wb_many_ack[5] = 0U;
    __Vtable1_main__DOT__wb_many_ack[6] = 0U;
    __Vtable1_main__DOT__wb_many_ack[7] = 1U;
    __Vtable1_main__DOT__wb_many_ack[8] = 0U;
    __Vtable1_main__DOT__wb_many_ack[9] = 0U;
    __Vtable1_main__DOT__wb_many_ack[10] = 0U;
    __Vtable1_main__DOT__wb_many_ack[11] = 0U;
    __Vtable1_main__DOT__wb_many_ack[12] = 0U;
    __Vtable1_main__DOT__wb_many_ack[13] = 1U;
    __Vtable1_main__DOT__wb_many_ack[14] = 1U;
    __Vtable1_main__DOT__wb_many_ack[15] = 1U;
    __Vtable1_main__DOT__wb_many_ack[16] = 0U;
    __Vtable1_main__DOT__wb_many_ack[17] = 0U;
    __Vtable1_main__DOT__wb_many_ack[18] = 0U;
    __Vtable1_main__DOT__wb_many_ack[19] = 0U;
    __Vtable1_main__DOT__wb_many_ack[20] = 0U;
    __Vtable1_main__DOT__wb_many_ack[21] = 1U;
    __Vtable1_main__DOT__wb_many_ack[22] = 1U;
    __Vtable1_main__DOT__wb_many_ack[23] = 1U;
    __Vtable1_main__DOT__wb_many_ack[24] = 0U;
    __Vtable1_main__DOT__wb_many_ack[25] = 0U;
    __Vtable1_main__DOT__wb_many_ack[26] = 0U;
    __Vtable1_main__DOT__wb_many_ack[27] = 0U;
    __Vtable1_main__DOT__wb_many_ack[28] = 1U;
    __Vtable1_main__DOT__wb_many_ack[29] = 1U;
    __Vtable1_main__DOT__wb_many_ack[30] = 1U;
    __Vtable1_main__DOT__wb_many_ack[31] = 1U;
    __Vtable1_main__DOT__wb_many_ack[32] = 0U;
    __Vtable1_main__DOT__wb_many_ack[33] = 0U;
    __Vtable1_main__DOT__wb_many_ack[34] = 0U;
    __Vtable1_main__DOT__wb_many_ack[35] = 0U;
    __Vtable1_main__DOT__wb_many_ack[36] = 0U;
    __Vtable1_main__DOT__wb_many_ack[37] = 1U;
    __Vtable1_main__DOT__wb_many_ack[38] = 1U;
    __Vtable1_main__DOT__wb_many_ack[39] = 1U;
    __Vtable1_main__DOT__wb_many_ack[40] = 0U;
    __Vtable1_main__DOT__wb_many_ack[41] = 0U;
    __Vtable1_main__DOT__wb_many_ack[42] = 0U;
    __Vtable1_main__DOT__wb_many_ack[43] = 0U;
    __Vtable1_main__DOT__wb_many_ack[44] = 1U;
    __Vtable1_main__DOT__wb_many_ack[45] = 1U;
    __Vtable1_main__DOT__wb_many_ack[46] = 1U;
    __Vtable1_main__DOT__wb_many_ack[47] = 1U;
    __Vtable1_main__DOT__wb_many_ack[48] = 0U;
    __Vtable1_main__DOT__wb_many_ack[49] = 0U;
    __Vtable1_main__DOT__wb_many_ack[50] = 0U;
    __Vtable1_main__DOT__wb_many_ack[51] = 0U;
    __Vtable1_main__DOT__wb_many_ack[52] = 1U;
    __Vtable1_main__DOT__wb_many_ack[53] = 1U;
    __Vtable1_main__DOT__wb_many_ack[54] = 1U;
    __Vtable1_main__DOT__wb_many_ack[55] = 1U;
    __Vtable1_main__DOT__wb_many_ack[56] = 0U;
    __Vtable1_main__DOT__wb_many_ack[57] = 0U;
    __Vtable1_main__DOT__wb_many_ack[58] = 0U;
    __Vtable1_main__DOT__wb_many_ack[59] = 0U;
    __Vtable1_main__DOT__wb_many_ack[60] = 1U;
    __Vtable1_main__DOT__wb_many_ack[61] = 1U;
    __Vtable1_main__DOT__wb_many_ack[62] = 1U;
    __Vtable1_main__DOT__wb_many_ack[63] = 1U;
    __Vtable1_main__DOT__wb_many_ack[64] = 0U;
    __Vtable1_main__DOT__wb_many_ack[65] = 0U;
    __Vtable1_main__DOT__wb_many_ack[66] = 0U;
    __Vtable1_main__DOT__wb_many_ack[67] = 0U;
    __Vtable1_main__DOT__wb_many_ack[68] = 0U;
    __Vtable1_main__DOT__wb_many_ack[69] = 1U;
    __Vtable1_main__DOT__wb_many_ack[70] = 1U;
    __Vtable1_main__DOT__wb_many_ack[71] = 1U;
    __Vtable1_main__DOT__wb_many_ack[72] = 0U;
    __Vtable1_main__DOT__wb_many_ack[73] = 0U;
    __Vtable1_main__DOT__wb_many_ack[74] = 0U;
    __Vtable1_main__DOT__wb_many_ack[75] = 0U;
    __Vtable1_main__DOT__wb_many_ack[76] = 1U;
    __Vtable1_main__DOT__wb_many_ack[77] = 1U;
    __Vtable1_main__DOT__wb_many_ack[78] = 1U;
    __Vtable1_main__DOT__wb_many_ack[79] = 1U;
    __Vtable1_main__DOT__wb_many_ack[80] = 0U;
    __Vtable1_main__DOT__wb_many_ack[81] = 0U;
    __Vtable1_main__DOT__wb_many_ack[82] = 0U;
    __Vtable1_main__DOT__wb_many_ack[83] = 0U;
    __Vtable1_main__DOT__wb_many_ack[84] = 1U;
    __Vtable1_main__DOT__wb_many_ack[85] = 1U;
    __Vtable1_main__DOT__wb_many_ack[86] = 1U;
    __Vtable1_main__DOT__wb_many_ack[87] = 1U;
    __Vtable1_main__DOT__wb_many_ack[88] = 0U;
    __Vtable1_main__DOT__wb_many_ack[89] = 0U;
    __Vtable1_main__DOT__wb_many_ack[90] = 0U;
    __Vtable1_main__DOT__wb_many_ack[91] = 0U;
    __Vtable1_main__DOT__wb_many_ack[92] = 1U;
    __Vtable1_main__DOT__wb_many_ack[93] = 1U;
    __Vtable1_main__DOT__wb_many_ack[94] = 1U;
    __Vtable1_main__DOT__wb_many_ack[95] = 1U;
    __Vtable1_main__DOT__wb_many_ack[96] = 0U;
    __Vtable1_main__DOT__wb_many_ack[97] = 0U;
    __Vtable1_main__DOT__wb_many_ack[98] = 0U;
    __Vtable1_main__DOT__wb_many_ack[99] = 0U;
    __Vtable1_main__DOT__wb_many_ack[100] = 1U;
    __Vtable1_main__DOT__wb_many_ack[101] = 1U;
    __Vtable1_main__DOT__wb_many_ack[102] = 1U;
    __Vtable1_main__DOT__wb_many_ack[103] = 1U;
    __Vtable1_main__DOT__wb_many_ack[104] = 0U;
    __Vtable1_main__DOT__wb_many_ack[105] = 0U;
    __Vtable1_main__DOT__wb_many_ack[106] = 0U;
    __Vtable1_main__DOT__wb_many_ack[107] = 0U;
    __Vtable1_main__DOT__wb_many_ack[108] = 1U;
    __Vtable1_main__DOT__wb_many_ack[109] = 1U;
    __Vtable1_main__DOT__wb_many_ack[110] = 1U;
    __Vtable1_main__DOT__wb_many_ack[111] = 1U;
    __Vtable1_main__DOT__wb_many_ack[112] = 0U;
    __Vtable1_main__DOT__wb_many_ack[113] = 0U;
    __Vtable1_main__DOT__wb_many_ack[114] = 0U;
    __Vtable1_main__DOT__wb_many_ack[115] = 0U;
    __Vtable1_main__DOT__wb_many_ack[116] = 1U;
    __Vtable1_main__DOT__wb_many_ack[117] = 1U;
    __Vtable1_main__DOT__wb_many_ack[118] = 1U;
    __Vtable1_main__DOT__wb_many_ack[119] = 1U;
    __Vtable1_main__DOT__wb_many_ack[120] = 0U;
    __Vtable1_main__DOT__wb_many_ack[121] = 0U;
    __Vtable1_main__DOT__wb_many_ack[122] = 0U;
    __Vtable1_main__DOT__wb_many_ack[123] = 0U;
    __Vtable1_main__DOT__wb_many_ack[124] = 1U;
    __Vtable1_main__DOT__wb_many_ack[125] = 1U;
    __Vtable1_main__DOT__wb_many_ack[126] = 1U;
    __Vtable1_main__DOT__wb_many_ack[127] = 1U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[0] = 0U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[1] = 0x11U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[2] = 0x44U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[3] = 0x22U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[4] = 8U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[5] = 0x10U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[6] = 0x40U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[7] = 0x20U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[8] = 0U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[9] = 0x11U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[10] = 0x44U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[11] = 0x22U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[12] = 8U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[13] = 0x10U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[14] = 0x40U;
    __Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[15] = 0x20U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[0] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[1] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[2] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[3] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[4] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[5] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[6] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[7] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[8] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[9] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[10] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[11] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[12] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[13] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[14] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[15] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[16] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[17] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[18] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[19] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[20] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[21] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[22] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[23] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[24] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[25] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[26] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[27] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[28] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[29] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[30] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[31] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[32] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[33] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[34] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[35] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[36] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[37] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[38] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[39] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[40] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[41] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[42] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[43] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[44] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[45] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[46] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[47] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[48] = 0U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[49] = 1U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[50] = 2U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[51] = 3U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[52] = 4U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[53] = 5U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[54] = 6U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[55] = 7U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[56] = 8U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[57] = 9U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[58] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[59] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[60] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[61] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[62] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[63] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[64] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[65] = 0x12U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[66] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[67] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[68] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[69] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[70] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[71] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[72] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[73] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[74] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[75] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[76] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[77] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[78] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[79] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[80] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[81] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[82] = 0x10U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[83] = 0x13U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[84] = 0x16U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[85] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[86] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[87] = 0x11U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[88] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[89] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[90] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[91] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[92] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[93] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[94] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[95] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[96] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[97] = 0xaU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[98] = 0xbU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[99] = 0xcU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[100] = 0xdU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[101] = 0xeU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[102] = 0xfU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[103] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[104] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[105] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[106] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[107] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[108] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[109] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[110] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[111] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[112] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[113] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[114] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[115] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[116] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[117] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[118] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[119] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[120] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[121] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[122] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[123] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[124] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[125] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[126] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[127] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[128] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[129] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[130] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[131] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[132] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[133] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[134] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[135] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[136] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[137] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[138] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[139] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[140] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[141] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[142] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[143] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[144] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[145] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[146] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[147] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[148] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[149] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[150] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[151] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[152] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[153] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[154] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[155] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[156] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[157] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[158] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[159] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[160] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[161] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[162] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[163] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[164] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[165] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[166] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[167] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[168] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[169] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[170] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[171] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[172] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[173] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[174] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[175] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[176] = 0U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[177] = 1U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[178] = 2U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[179] = 3U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[180] = 4U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[181] = 5U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[182] = 6U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[183] = 7U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[184] = 8U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[185] = 9U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[186] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[187] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[188] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[189] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[190] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[191] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[192] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[193] = 0x12U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[194] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[195] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[196] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[197] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[198] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[199] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[200] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[201] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[202] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[203] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[204] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[205] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[206] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[207] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[208] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[209] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[210] = 0x10U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[211] = 0x13U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[212] = 0x16U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[213] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[214] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[215] = 0x11U;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[216] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[217] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[218] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[219] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[220] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[221] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[222] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[223] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[224] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[225] = 0xaU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[226] = 0xbU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[227] = 0xcU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[228] = 0xdU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[229] = 0xeU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[230] = 0xfU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[231] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[232] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[233] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[234] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[235] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[236] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[237] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[238] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[239] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[240] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[241] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[242] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[243] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[244] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[245] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[246] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[247] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[248] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[249] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[250] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[251] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[252] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[253] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[254] = 0x1fU;
    __Vtable3_main__DOT__genbus__DOT__dec_bits[255] = 0x1fU;
    __Vtablechg4[0] = 0U;
    __Vtablechg4[1] = 3U;
    __Vtablechg4[2] = 0U;
    __Vtablechg4[3] = 3U;
    __Vtablechg4[4] = 0U;
    __Vtablechg4[5] = 3U;
    __Vtablechg4[6] = 3U;
    __Vtablechg4[7] = 3U;
    __Vtablechg4[8] = 2U;
    __Vtablechg4[9] = 3U;
    __Vtablechg4[10] = 2U;
    __Vtablechg4[11] = 3U;
    __Vtablechg4[12] = 2U;
    __Vtablechg4[13] = 3U;
    __Vtablechg4[14] = 3U;
    __Vtablechg4[15] = 3U;
    __Vtablechg4[16] = 0U;
    __Vtablechg4[17] = 3U;
    __Vtablechg4[18] = 0U;
    __Vtablechg4[19] = 3U;
    __Vtablechg4[20] = 0U;
    __Vtablechg4[21] = 3U;
    __Vtablechg4[22] = 3U;
    __Vtablechg4[23] = 3U;
    __Vtablechg4[24] = 0U;
    __Vtablechg4[25] = 3U;
    __Vtablechg4[26] = 0U;
    __Vtablechg4[27] = 3U;
    __Vtablechg4[28] = 0U;
    __Vtablechg4[29] = 3U;
    __Vtablechg4[30] = 3U;
    __Vtablechg4[31] = 3U;
    __Vtablechg4[32] = 0U;
    __Vtablechg4[33] = 3U;
    __Vtablechg4[34] = 0U;
    __Vtablechg4[35] = 3U;
    __Vtablechg4[36] = 1U;
    __Vtablechg4[37] = 3U;
    __Vtablechg4[38] = 3U;
    __Vtablechg4[39] = 3U;
    __Vtablechg4[40] = 3U;
    __Vtablechg4[41] = 3U;
    __Vtablechg4[42] = 3U;
    __Vtablechg4[43] = 3U;
    __Vtablechg4[44] = 3U;
    __Vtablechg4[45] = 3U;
    __Vtablechg4[46] = 3U;
    __Vtablechg4[47] = 3U;
    __Vtablechg4[48] = 0U;
    __Vtablechg4[49] = 3U;
    __Vtablechg4[50] = 0U;
    __Vtablechg4[51] = 3U;
    __Vtablechg4[52] = 1U;
    __Vtablechg4[53] = 3U;
    __Vtablechg4[54] = 3U;
    __Vtablechg4[55] = 3U;
    __Vtablechg4[56] = 0U;
    __Vtablechg4[57] = 3U;
    __Vtablechg4[58] = 0U;
    __Vtablechg4[59] = 3U;
    __Vtablechg4[60] = 0U;
    __Vtablechg4[61] = 3U;
    __Vtablechg4[62] = 3U;
    __Vtablechg4[63] = 3U;
    __Vtablechg4[64] = 3U;
    __Vtablechg4[65] = 3U;
    __Vtablechg4[66] = 3U;
    __Vtablechg4[67] = 3U;
    __Vtablechg4[68] = 0U;
    __Vtablechg4[69] = 3U;
    __Vtablechg4[70] = 3U;
    __Vtablechg4[71] = 3U;
    __Vtablechg4[72] = 2U;
    __Vtablechg4[73] = 3U;
    __Vtablechg4[74] = 2U;
    __Vtablechg4[75] = 3U;
    __Vtablechg4[76] = 2U;
    __Vtablechg4[77] = 3U;
    __Vtablechg4[78] = 3U;
    __Vtablechg4[79] = 3U;
    __Vtablechg4[80] = 3U;
    __Vtablechg4[81] = 3U;
    __Vtablechg4[82] = 3U;
    __Vtablechg4[83] = 3U;
    __Vtablechg4[84] = 0U;
    __Vtablechg4[85] = 3U;
    __Vtablechg4[86] = 3U;
    __Vtablechg4[87] = 3U;
    __Vtablechg4[88] = 0U;
    __Vtablechg4[89] = 3U;
    __Vtablechg4[90] = 0U;
    __Vtablechg4[91] = 3U;
    __Vtablechg4[92] = 0U;
    __Vtablechg4[93] = 3U;
    __Vtablechg4[94] = 3U;
    __Vtablechg4[95] = 3U;
    __Vtablechg4[96] = 3U;
    __Vtablechg4[97] = 3U;
    __Vtablechg4[98] = 3U;
    __Vtablechg4[99] = 3U;
    __Vtablechg4[100] = 1U;
    __Vtablechg4[101] = 3U;
    __Vtablechg4[102] = 3U;
    __Vtablechg4[103] = 3U;
    __Vtablechg4[104] = 3U;
    __Vtablechg4[105] = 3U;
    __Vtablechg4[106] = 3U;
    __Vtablechg4[107] = 3U;
    __Vtablechg4[108] = 3U;
    __Vtablechg4[109] = 3U;
    __Vtablechg4[110] = 3U;
    __Vtablechg4[111] = 3U;
    __Vtablechg4[112] = 3U;
    __Vtablechg4[113] = 3U;
    __Vtablechg4[114] = 3U;
    __Vtablechg4[115] = 3U;
    __Vtablechg4[116] = 1U;
    __Vtablechg4[117] = 3U;
    __Vtablechg4[118] = 3U;
    __Vtablechg4[119] = 3U;
    __Vtablechg4[120] = 0U;
    __Vtablechg4[121] = 3U;
    __Vtablechg4[122] = 0U;
    __Vtablechg4[123] = 3U;
    __Vtablechg4[124] = 0U;
    __Vtablechg4[125] = 3U;
    __Vtablechg4[126] = 3U;
    __Vtablechg4[127] = 3U;
    __Vtable4_main__DOT__hb_cyc[0] = 0U;
    __Vtable4_main__DOT__hb_cyc[1] = 0U;
    __Vtable4_main__DOT__hb_cyc[2] = 0U;
    __Vtable4_main__DOT__hb_cyc[3] = 0U;
    __Vtable4_main__DOT__hb_cyc[4] = 0U;
    __Vtable4_main__DOT__hb_cyc[5] = 0U;
    __Vtable4_main__DOT__hb_cyc[6] = 0U;
    __Vtable4_main__DOT__hb_cyc[7] = 0U;
    __Vtable4_main__DOT__hb_cyc[8] = 0U;
    __Vtable4_main__DOT__hb_cyc[9] = 0U;
    __Vtable4_main__DOT__hb_cyc[10] = 0U;
    __Vtable4_main__DOT__hb_cyc[11] = 0U;
    __Vtable4_main__DOT__hb_cyc[12] = 0U;
    __Vtable4_main__DOT__hb_cyc[13] = 0U;
    __Vtable4_main__DOT__hb_cyc[14] = 0U;
    __Vtable4_main__DOT__hb_cyc[15] = 0U;
    __Vtable4_main__DOT__hb_cyc[16] = 0U;
    __Vtable4_main__DOT__hb_cyc[17] = 0U;
    __Vtable4_main__DOT__hb_cyc[18] = 0U;
    __Vtable4_main__DOT__hb_cyc[19] = 0U;
    __Vtable4_main__DOT__hb_cyc[20] = 0U;
    __Vtable4_main__DOT__hb_cyc[21] = 0U;
    __Vtable4_main__DOT__hb_cyc[22] = 0U;
    __Vtable4_main__DOT__hb_cyc[23] = 0U;
    __Vtable4_main__DOT__hb_cyc[24] = 0U;
    __Vtable4_main__DOT__hb_cyc[25] = 0U;
    __Vtable4_main__DOT__hb_cyc[26] = 0U;
    __Vtable4_main__DOT__hb_cyc[27] = 0U;
    __Vtable4_main__DOT__hb_cyc[28] = 0U;
    __Vtable4_main__DOT__hb_cyc[29] = 0U;
    __Vtable4_main__DOT__hb_cyc[30] = 0U;
    __Vtable4_main__DOT__hb_cyc[31] = 0U;
    __Vtable4_main__DOT__hb_cyc[32] = 0U;
    __Vtable4_main__DOT__hb_cyc[33] = 0U;
    __Vtable4_main__DOT__hb_cyc[34] = 0U;
    __Vtable4_main__DOT__hb_cyc[35] = 0U;
    __Vtable4_main__DOT__hb_cyc[36] = 0U;
    __Vtable4_main__DOT__hb_cyc[37] = 0U;
    __Vtable4_main__DOT__hb_cyc[38] = 0U;
    __Vtable4_main__DOT__hb_cyc[39] = 0U;
    __Vtable4_main__DOT__hb_cyc[40] = 0U;
    __Vtable4_main__DOT__hb_cyc[41] = 0U;
    __Vtable4_main__DOT__hb_cyc[42] = 0U;
    __Vtable4_main__DOT__hb_cyc[43] = 0U;
    __Vtable4_main__DOT__hb_cyc[44] = 0U;
    __Vtable4_main__DOT__hb_cyc[45] = 0U;
    __Vtable4_main__DOT__hb_cyc[46] = 0U;
    __Vtable4_main__DOT__hb_cyc[47] = 0U;
    __Vtable4_main__DOT__hb_cyc[48] = 0U;
    __Vtable4_main__DOT__hb_cyc[49] = 0U;
    __Vtable4_main__DOT__hb_cyc[50] = 0U;
    __Vtable4_main__DOT__hb_cyc[51] = 0U;
    __Vtable4_main__DOT__hb_cyc[52] = 0U;
    __Vtable4_main__DOT__hb_cyc[53] = 0U;
    __Vtable4_main__DOT__hb_cyc[54] = 0U;
    __Vtable4_main__DOT__hb_cyc[55] = 0U;
    __Vtable4_main__DOT__hb_cyc[56] = 0U;
    __Vtable4_main__DOT__hb_cyc[57] = 0U;
    __Vtable4_main__DOT__hb_cyc[58] = 0U;
    __Vtable4_main__DOT__hb_cyc[59] = 0U;
    __Vtable4_main__DOT__hb_cyc[60] = 0U;
    __Vtable4_main__DOT__hb_cyc[61] = 0U;
    __Vtable4_main__DOT__hb_cyc[62] = 0U;
    __Vtable4_main__DOT__hb_cyc[63] = 0U;
    __Vtable4_main__DOT__hb_cyc[64] = 1U;
    __Vtable4_main__DOT__hb_cyc[65] = 0U;
    __Vtable4_main__DOT__hb_cyc[66] = 1U;
    __Vtable4_main__DOT__hb_cyc[67] = 0U;
    __Vtable4_main__DOT__hb_cyc[68] = 0U;
    __Vtable4_main__DOT__hb_cyc[69] = 0U;
    __Vtable4_main__DOT__hb_cyc[70] = 0U;
    __Vtable4_main__DOT__hb_cyc[71] = 0U;
    __Vtable4_main__DOT__hb_cyc[72] = 0U;
    __Vtable4_main__DOT__hb_cyc[73] = 0U;
    __Vtable4_main__DOT__hb_cyc[74] = 0U;
    __Vtable4_main__DOT__hb_cyc[75] = 0U;
    __Vtable4_main__DOT__hb_cyc[76] = 0U;
    __Vtable4_main__DOT__hb_cyc[77] = 0U;
    __Vtable4_main__DOT__hb_cyc[78] = 0U;
    __Vtable4_main__DOT__hb_cyc[79] = 0U;
    __Vtable4_main__DOT__hb_cyc[80] = 1U;
    __Vtable4_main__DOT__hb_cyc[81] = 0U;
    __Vtable4_main__DOT__hb_cyc[82] = 1U;
    __Vtable4_main__DOT__hb_cyc[83] = 0U;
    __Vtable4_main__DOT__hb_cyc[84] = 0U;
    __Vtable4_main__DOT__hb_cyc[85] = 0U;
    __Vtable4_main__DOT__hb_cyc[86] = 0U;
    __Vtable4_main__DOT__hb_cyc[87] = 0U;
    __Vtable4_main__DOT__hb_cyc[88] = 0U;
    __Vtable4_main__DOT__hb_cyc[89] = 0U;
    __Vtable4_main__DOT__hb_cyc[90] = 0U;
    __Vtable4_main__DOT__hb_cyc[91] = 0U;
    __Vtable4_main__DOT__hb_cyc[92] = 0U;
    __Vtable4_main__DOT__hb_cyc[93] = 0U;
    __Vtable4_main__DOT__hb_cyc[94] = 0U;
    __Vtable4_main__DOT__hb_cyc[95] = 0U;
    __Vtable4_main__DOT__hb_cyc[96] = 1U;
    __Vtable4_main__DOT__hb_cyc[97] = 0U;
    __Vtable4_main__DOT__hb_cyc[98] = 1U;
    __Vtable4_main__DOT__hb_cyc[99] = 0U;
    __Vtable4_main__DOT__hb_cyc[100] = 0U;
    __Vtable4_main__DOT__hb_cyc[101] = 0U;
    __Vtable4_main__DOT__hb_cyc[102] = 0U;
    __Vtable4_main__DOT__hb_cyc[103] = 0U;
    __Vtable4_main__DOT__hb_cyc[104] = 0U;
    __Vtable4_main__DOT__hb_cyc[105] = 0U;
    __Vtable4_main__DOT__hb_cyc[106] = 0U;
    __Vtable4_main__DOT__hb_cyc[107] = 0U;
    __Vtable4_main__DOT__hb_cyc[108] = 0U;
    __Vtable4_main__DOT__hb_cyc[109] = 0U;
    __Vtable4_main__DOT__hb_cyc[110] = 0U;
    __Vtable4_main__DOT__hb_cyc[111] = 0U;
    __Vtable4_main__DOT__hb_cyc[112] = 1U;
    __Vtable4_main__DOT__hb_cyc[113] = 0U;
    __Vtable4_main__DOT__hb_cyc[114] = 1U;
    __Vtable4_main__DOT__hb_cyc[115] = 0U;
    __Vtable4_main__DOT__hb_cyc[116] = 0U;
    __Vtable4_main__DOT__hb_cyc[117] = 0U;
    __Vtable4_main__DOT__hb_cyc[118] = 0U;
    __Vtable4_main__DOT__hb_cyc[119] = 0U;
    __Vtable4_main__DOT__hb_cyc[120] = 0U;
    __Vtable4_main__DOT__hb_cyc[121] = 0U;
    __Vtable4_main__DOT__hb_cyc[122] = 0U;
    __Vtable4_main__DOT__hb_cyc[123] = 0U;
    __Vtable4_main__DOT__hb_cyc[124] = 0U;
    __Vtable4_main__DOT__hb_cyc[125] = 0U;
    __Vtable4_main__DOT__hb_cyc[126] = 0U;
    __Vtable4_main__DOT__hb_cyc[127] = 0U;
    __Vtable4_main__DOT__hb_stb[0] = 0U;
    __Vtable4_main__DOT__hb_stb[1] = 0U;
    __Vtable4_main__DOT__hb_stb[2] = 0U;
    __Vtable4_main__DOT__hb_stb[3] = 0U;
    __Vtable4_main__DOT__hb_stb[4] = 0U;
    __Vtable4_main__DOT__hb_stb[5] = 0U;
    __Vtable4_main__DOT__hb_stb[6] = 0U;
    __Vtable4_main__DOT__hb_stb[7] = 0U;
    __Vtable4_main__DOT__hb_stb[8] = 0U;
    __Vtable4_main__DOT__hb_stb[9] = 0U;
    __Vtable4_main__DOT__hb_stb[10] = 0U;
    __Vtable4_main__DOT__hb_stb[11] = 0U;
    __Vtable4_main__DOT__hb_stb[12] = 0U;
    __Vtable4_main__DOT__hb_stb[13] = 0U;
    __Vtable4_main__DOT__hb_stb[14] = 0U;
    __Vtable4_main__DOT__hb_stb[15] = 0U;
    __Vtable4_main__DOT__hb_stb[16] = 0U;
    __Vtable4_main__DOT__hb_stb[17] = 0U;
    __Vtable4_main__DOT__hb_stb[18] = 0U;
    __Vtable4_main__DOT__hb_stb[19] = 0U;
    __Vtable4_main__DOT__hb_stb[20] = 0U;
    __Vtable4_main__DOT__hb_stb[21] = 0U;
    __Vtable4_main__DOT__hb_stb[22] = 0U;
    __Vtable4_main__DOT__hb_stb[23] = 0U;
    __Vtable4_main__DOT__hb_stb[24] = 0U;
    __Vtable4_main__DOT__hb_stb[25] = 0U;
    __Vtable4_main__DOT__hb_stb[26] = 0U;
    __Vtable4_main__DOT__hb_stb[27] = 0U;
    __Vtable4_main__DOT__hb_stb[28] = 0U;
    __Vtable4_main__DOT__hb_stb[29] = 0U;
    __Vtable4_main__DOT__hb_stb[30] = 0U;
    __Vtable4_main__DOT__hb_stb[31] = 0U;
    __Vtable4_main__DOT__hb_stb[32] = 0U;
    __Vtable4_main__DOT__hb_stb[33] = 0U;
    __Vtable4_main__DOT__hb_stb[34] = 0U;
    __Vtable4_main__DOT__hb_stb[35] = 0U;
    __Vtable4_main__DOT__hb_stb[36] = 0U;
    __Vtable4_main__DOT__hb_stb[37] = 0U;
    __Vtable4_main__DOT__hb_stb[38] = 0U;
    __Vtable4_main__DOT__hb_stb[39] = 0U;
    __Vtable4_main__DOT__hb_stb[40] = 0U;
    __Vtable4_main__DOT__hb_stb[41] = 0U;
    __Vtable4_main__DOT__hb_stb[42] = 0U;
    __Vtable4_main__DOT__hb_stb[43] = 0U;
    __Vtable4_main__DOT__hb_stb[44] = 0U;
    __Vtable4_main__DOT__hb_stb[45] = 0U;
    __Vtable4_main__DOT__hb_stb[46] = 0U;
    __Vtable4_main__DOT__hb_stb[47] = 0U;
    __Vtable4_main__DOT__hb_stb[48] = 0U;
    __Vtable4_main__DOT__hb_stb[49] = 0U;
    __Vtable4_main__DOT__hb_stb[50] = 0U;
    __Vtable4_main__DOT__hb_stb[51] = 0U;
    __Vtable4_main__DOT__hb_stb[52] = 0U;
    __Vtable4_main__DOT__hb_stb[53] = 0U;
    __Vtable4_main__DOT__hb_stb[54] = 0U;
    __Vtable4_main__DOT__hb_stb[55] = 0U;
    __Vtable4_main__DOT__hb_stb[56] = 0U;
    __Vtable4_main__DOT__hb_stb[57] = 0U;
    __Vtable4_main__DOT__hb_stb[58] = 0U;
    __Vtable4_main__DOT__hb_stb[59] = 0U;
    __Vtable4_main__DOT__hb_stb[60] = 0U;
    __Vtable4_main__DOT__hb_stb[61] = 0U;
    __Vtable4_main__DOT__hb_stb[62] = 0U;
    __Vtable4_main__DOT__hb_stb[63] = 0U;
    __Vtable4_main__DOT__hb_stb[64] = 1U;
    __Vtable4_main__DOT__hb_stb[65] = 0U;
    __Vtable4_main__DOT__hb_stb[66] = 1U;
    __Vtable4_main__DOT__hb_stb[67] = 0U;
    __Vtable4_main__DOT__hb_stb[68] = 0U;
    __Vtable4_main__DOT__hb_stb[69] = 0U;
    __Vtable4_main__DOT__hb_stb[70] = 0U;
    __Vtable4_main__DOT__hb_stb[71] = 0U;
    __Vtable4_main__DOT__hb_stb[72] = 0U;
    __Vtable4_main__DOT__hb_stb[73] = 0U;
    __Vtable4_main__DOT__hb_stb[74] = 0U;
    __Vtable4_main__DOT__hb_stb[75] = 0U;
    __Vtable4_main__DOT__hb_stb[76] = 0U;
    __Vtable4_main__DOT__hb_stb[77] = 0U;
    __Vtable4_main__DOT__hb_stb[78] = 0U;
    __Vtable4_main__DOT__hb_stb[79] = 0U;
    __Vtable4_main__DOT__hb_stb[80] = 1U;
    __Vtable4_main__DOT__hb_stb[81] = 0U;
    __Vtable4_main__DOT__hb_stb[82] = 1U;
    __Vtable4_main__DOT__hb_stb[83] = 0U;
    __Vtable4_main__DOT__hb_stb[84] = 0U;
    __Vtable4_main__DOT__hb_stb[85] = 0U;
    __Vtable4_main__DOT__hb_stb[86] = 0U;
    __Vtable4_main__DOT__hb_stb[87] = 0U;
    __Vtable4_main__DOT__hb_stb[88] = 0U;
    __Vtable4_main__DOT__hb_stb[89] = 0U;
    __Vtable4_main__DOT__hb_stb[90] = 0U;
    __Vtable4_main__DOT__hb_stb[91] = 0U;
    __Vtable4_main__DOT__hb_stb[92] = 0U;
    __Vtable4_main__DOT__hb_stb[93] = 0U;
    __Vtable4_main__DOT__hb_stb[94] = 0U;
    __Vtable4_main__DOT__hb_stb[95] = 0U;
    __Vtable4_main__DOT__hb_stb[96] = 1U;
    __Vtable4_main__DOT__hb_stb[97] = 0U;
    __Vtable4_main__DOT__hb_stb[98] = 1U;
    __Vtable4_main__DOT__hb_stb[99] = 0U;
    __Vtable4_main__DOT__hb_stb[100] = 0U;
    __Vtable4_main__DOT__hb_stb[101] = 0U;
    __Vtable4_main__DOT__hb_stb[102] = 0U;
    __Vtable4_main__DOT__hb_stb[103] = 0U;
    __Vtable4_main__DOT__hb_stb[104] = 0U;
    __Vtable4_main__DOT__hb_stb[105] = 0U;
    __Vtable4_main__DOT__hb_stb[106] = 0U;
    __Vtable4_main__DOT__hb_stb[107] = 0U;
    __Vtable4_main__DOT__hb_stb[108] = 0U;
    __Vtable4_main__DOT__hb_stb[109] = 0U;
    __Vtable4_main__DOT__hb_stb[110] = 0U;
    __Vtable4_main__DOT__hb_stb[111] = 0U;
    __Vtable4_main__DOT__hb_stb[112] = 1U;
    __Vtable4_main__DOT__hb_stb[113] = 0U;
    __Vtable4_main__DOT__hb_stb[114] = 1U;
    __Vtable4_main__DOT__hb_stb[115] = 0U;
    __Vtable4_main__DOT__hb_stb[116] = 0U;
    __Vtable4_main__DOT__hb_stb[117] = 0U;
    __Vtable4_main__DOT__hb_stb[118] = 0U;
    __Vtable4_main__DOT__hb_stb[119] = 0U;
    __Vtable4_main__DOT__hb_stb[120] = 0U;
    __Vtable4_main__DOT__hb_stb[121] = 0U;
    __Vtable4_main__DOT__hb_stb[122] = 0U;
    __Vtable4_main__DOT__hb_stb[123] = 0U;
    __Vtable4_main__DOT__hb_stb[124] = 0U;
    __Vtable4_main__DOT__hb_stb[125] = 0U;
    __Vtable4_main__DOT__hb_stb[126] = 0U;
    __Vtable4_main__DOT__hb_stb[127] = 0U;
    __Vtableidx5 = VL_RAND_RESET_I(5);
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[0] = 0x30U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[1] = 0x31U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[2] = 0x32U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[3] = 0x33U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[4] = 0x34U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[5] = 0x35U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[6] = 0x36U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[7] = 0x37U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[8] = 0x38U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[9] = 0x39U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[10] = 0x61U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[11] = 0x62U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[12] = 0x63U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[13] = 0x64U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[14] = 0x65U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[15] = 0x66U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[16] = 0x52U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[17] = 0x4bU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[18] = 0x41U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[19] = 0x53U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[20] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[21] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[22] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[23] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[24] = 0x54U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[25] = 0x45U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[26] = 0x49U;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[27] = 0x5aU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[28] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[29] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[30] = 0xdU;
    __Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[31] = 0xdU;
    __Vclklast__TOP__i_clk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
