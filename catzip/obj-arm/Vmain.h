// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmain_H_
#define _Vmain_H_

#include "verilated.h"
#include "Vmain__Dpi.h"

class Vmain__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vmain) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset,0,0);
    VL_OUT8(o_ram_cke,0,0);
    VL_OUT8(o_ram_cs_n,0,0);
    VL_OUT8(o_ram_ras_n,0,0);
    VL_OUT8(o_ram_cas_n,0,0);
    VL_OUT8(o_ram_we_n,0,0);
    VL_OUT8(o_ram_bs,1,0);
    VL_OUT8(o_ram_dqm,1,0);
    VL_OUT8(o_ram_drive_data,0,0);
    VL_IN8(i_pp_clk,0,0);
    VL_IN8(i_pp_dir,0,0);
    VL_IN8(i_pp_data,7,0);
    VL_OUT8(o_pp_data,7,0);
    VL_OUT8(o_pp_clkfb,0,0);
    VL_OUT8(o_pp_dbg,0,0);
    VL_IN8(i_gpio,1,0);
    VL_OUT16(o_ram_addr,12,0);
    VL_IN16(i_ram_data,15,0);
    VL_OUT16(o_ram_data,15,0);
    VL_OUT16(o_gpio,10,0);
    VL_OUT(o_debug,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	VL_SIG8(main__DOT__watchdog_reset,0,0);
	VL_SIG8(main__DOT__gpio_int,0,0);
	VL_SIG8(main__DOT__bustimer_int,0,0);
	VL_SIG8(main__DOT__zip_halted,0,0);
	VL_SIG8(main__DOT__cpu_reset,0,0);
	VL_SIG8(main__DOT__wbubus_dbg,0,0);
	VL_SIG8(main__DOT__pp_rx_stb,0,0);
	VL_SIG8(main__DOT__pp_tx_busy,0,0);
	VL_SIG8(main__DOT__pp_rx_data,7,0);
	VL_SIG8(main__DOT__hb_dwbi_cyc,0,0);
	VL_SIG8(main__DOT__hb_dwbi_stb,0,0);
	VL_SIG8(main__DOT__hb_dwbi_we,0,0);
	VL_SIG8(main__DOT__hb_dwbi_ack,0,0);
	VL_SIG8(main__DOT__hb_dwbi_stall,0,0);
	VL_SIG8(main__DOT__hb_dwbi_err,0,0);
	VL_SIG8(main__DOT__hb_dwbi_sel,3,0);
	VL_SIG8(main__DOT__w_console_rx_stb,0,0);
	VL_SIG8(main__DOT__w_console_busy,0,0);
	VL_SIG8(main__DOT__w_console_rx_data,6,0);
	VL_SIG8(main__DOT__wb_cyc,0,0);
	VL_SIG8(main__DOT__wb_stb,0,0);
	VL_SIG8(main__DOT__wb_we,0,0);
	VL_SIG8(main__DOT__wb_stall,0,0);
	VL_SIG8(main__DOT__wb_err,0,0);
	VL_SIG8(main__DOT__wb_many_ack,0,0);
	VL_SIG8(main__DOT__wb_sel,3,0);
	VL_SIG8(main__DOT__wb_ack,0,0);
	VL_SIG8(main__DOT__buserr_ack,0,0);
	VL_SIG8(main__DOT__buserr_stall,0,0);
	VL_SIG8(main__DOT__buspic_ack,0,0);
	VL_SIG8(main__DOT__buspic_stall,0,0);
	VL_SIG8(main__DOT__gpio_ack,0,0);
	VL_SIG8(main__DOT__gpio_stall,0,0);
	VL_SIG8(main__DOT__pwrcount_ack,0,0);
	VL_SIG8(main__DOT__pwrcount_stall,0,0);
	VL_SIG8(main__DOT__bustimer_ack,0,0);
	VL_SIG8(main__DOT__watchdog_ack,0,0);
	VL_SIG8(main__DOT__sdramscope_ack,0,0);
	VL_SIG8(main__DOT__console_ack,0,0);
	VL_SIG8(main__DOT__bkram_ack,0,0);
	VL_SIG8(main__DOT__sdram_stall,0,0);
	VL_SIG8(main__DOT__zip_cyc,0,0);
	VL_SIG8(main__DOT__zip_stb,0,0);
	VL_SIG8(main__DOT__zip_we,0,0);
	VL_SIG8(main__DOT__zip_stall,0,0);
	VL_SIG8(main__DOT__zip_err,0,0);
	VL_SIG8(main__DOT__zip_ack,0,0);
	VL_SIG8(main__DOT__zip_dwb_ack,0,0);
	VL_SIG8(main__DOT__zip_dwb_stall,0,0);
	VL_SIG8(main__DOT__zip_dwb_err,0,0);
	VL_SIG8(main__DOT__hb_cyc,0,0);
	VL_SIG8(main__DOT__hb_stb,0,0);
	VL_SIG8(main__DOT__hb_we,0,0);
	VL_SIG8(main__DOT__hb_stall,0,0);
	VL_SIG8(main__DOT__hb_err,0,0);
	VL_SIG8(main__DOT__hb_many_ack,0,0);
	VL_SIG8(main__DOT__hb_ack,0,0);
	VL_SIG8(main__DOT__hb_dwb_ack,0,0);
	VL_SIG8(main__DOT__r_wb_sio_ack,0,0);
	VL_SIG8(main__DOT__r_wb_dio_ack,1,0);
	VL_SIG8(main__DOT__r_wb_dio_bus_select,0,0);
	VL_SIG8(main__DOT__r_wb_bus_select,2,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__read_from_data,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__write_to_control,0,0);
    };
    struct {
	VL_SIG8(main__DOT__sdramscopei__DOT__read_address,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__raddr,3,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__bw_reset_complete,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__br_config,2,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__br_holdoff,3,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__dr_triggered,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__dr_primed,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__counter,3,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__dr_stopped,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__waddr,3,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__br_wb_ack,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__br_pre_wb_ack,0,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__this_addr,3,0);
	VL_SIG8(main__DOT__sdramscopei__DOT__br_level_interrupt,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__need_refresh,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__refresh_cmd,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__in_refresh,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__in_refresh_clk,2,0);
	VL_SIG8(main__DOT__sdrami__DOT__r_barrell_ack,5,0);
	VL_SIG8(main__DOT__sdrami__DOT__r_pending,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__r_we,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__r_sel,3,0);
	VL_SIG8(main__DOT__sdrami__DOT__clocks_til_idle,2,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_state,1,0);
	VL_SIG8(main__DOT__sdrami__DOT__bus_cyc,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__nxt_dmod,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__pending,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__r_bank_valid,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__fwd_bank_valid,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__maintenance_mode,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_ram_cs_n,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_ram_ras_n,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_ram_cas_n,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_ram_we_n,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__m_ram_dmod,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__startup_hold,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__maintenance_clocks,3,0);
	VL_SIG8(main__DOT__sdrami__DOT__maintenance_clocks_zero,0,0);
	VL_SIG8(main__DOT__sdrami__DOT__trigger,0,0);
	VL_SIG8(main__DOT__swic__DOT__dbg_stall,0,0);
	VL_SIG8(main__DOT__swic__DOT__dbg_ack,0,0);
	VL_SIG8(main__DOT__swic__DOT__cpu_break,0,0);
	VL_SIG8(main__DOT__swic__DOT__dbg_cmd_write,0,0);
	VL_SIG8(main__DOT__swic__DOT__cmd_reset,0,0);
	VL_SIG8(main__DOT__swic__DOT__cmd_halt,0,0);
	VL_SIG8(main__DOT__swic__DOT__cmd_step,0,0);
	VL_SIG8(main__DOT__swic__DOT__cmd_clear_pf_cache,0,0);
	VL_SIG8(main__DOT__swic__DOT__cmd_addr,4,0);
	VL_SIG8(main__DOT__swic__DOT__cpu_dbg_cc,3,0);
	VL_SIG8(main__DOT__swic__DOT__cpu_lcl_stb,0,0);
	VL_SIG8(main__DOT__swic__DOT__cpu_dbg_we,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__flags,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__iflags,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__break_en,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__step,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__sleep,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_halted,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__ubreak,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__ill_err_u,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__ill_err_i,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__ibus_err_flag,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__ubus_err_flag,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__master_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__master_stall,0,0);
    };
    struct {
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__new_pc,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_stalled,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_cyc,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_stb,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_ack,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_stall,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_err,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_illegal,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf_stalled,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_valid_mem,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_valid_alu,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_valid_div,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_valid_fpu,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_opn,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_F,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_wR,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_rA,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_rB,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_ALU,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_M,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_DIV,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_FP,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_wF,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_break,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_lock,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_zI,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dcd_illegal,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_reg,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_wF,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_op_F,6,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_F,7,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_op_break,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__w_op_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_illegal,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__op_sim,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_alu_pc_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_pc_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_pc_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_flags,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__set_cond,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_wR,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__alu_wF,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_ack,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_stall,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_err,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__bus_err,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_we,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_wreg,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_busy,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__mem_sel,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__div_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__div_error,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__div_busy,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__div_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__div_flags,3,0);
    };
    struct {
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__adf_ce_unconditional,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dbgv,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__dbg_clear_pipe,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__wr_reg_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__wr_flags_ce,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__wr_reg_id,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__w_switch_to_interrupt,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__w_release_from_interrupt,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__last_write_to_cc,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_clear_icache,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_A,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_flag_B,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__r_dbg_stall,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__debug_trigger,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__GEN_ALU_PHASE__DOT__r_alu_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__SET_GIE__DOT__r_gie,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_trap,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_idiv_err_flag,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVERR__DOT__r_udiv_err_flag,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf__DOT__invalid_bus_cycle,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf__DOT__inflight,1,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_illegal,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_ALU,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_noop,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_lock,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_special,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdB,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_pc,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_dcdR_cc,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cond,3,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_mem,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_sto,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_div,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_rB,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_cis_op,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_valid,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI,7,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__c,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__pre_sign,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__set_ovfl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__keep_sgn_on_ovfl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpyhi,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpybusy,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__mpydone,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__this_is_a_multiply_op,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__r_busy,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__unused_aux,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__count,5,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__aux,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__almost_done,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pre_done,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__pformem__DOT__r_a_owner,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_busy,0,0);
    };
    struct {
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_sign,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_z,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_c,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__last_bit,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_bit,4,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__misaligned,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_gbl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_wb_cyc_lcl,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__gbl_stb,0,0);
	VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT__domem__DOT__r_op,3,0);
	VL_SIG8(main__DOT__watchdogi__DOT__r_running,0,0);
	VL_SIG8(main__DOT__watchdogi__DOT__wb_write,0,0);
	VL_SIG8(main__DOT__watchdogi__DOT__r_zero,0,0);
	VL_SIG8(main__DOT__gpioi__DOT__x_gpio,1,0);
	VL_SIG8(main__DOT__gpioi__DOT__q_gpio,1,0);
	VL_SIG8(main__DOT__gpioi__DOT__r_gpio,1,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__stb_pp_dir,0,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__ck_pp_dir,0,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__pp_stb,0,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__pp_clk_transfer,5,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__ck_pp_data,7,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__loaded,0,0);
	VL_SIG8(main__DOT__hbi_pp__DOT__r_dbg,0,0);
	VL_SIG8(main__DOT__genbus__DOT__w_reset,0,0);
	VL_SIG8(main__DOT__genbus__DOT__dec_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__dec_bits,4,0);
	VL_SIG8(main__DOT__genbus__DOT__iw_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__ow_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__int_busy,0,0);
	VL_SIG8(main__DOT__genbus__DOT__idl_busy,0,0);
	VL_SIG8(main__DOT__genbus__DOT__int_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__hb_busy,0,0);
	VL_SIG8(main__DOT__genbus__DOT__idl_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__hb_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__hx_busy,0,0);
	VL_SIG8(main__DOT__genbus__DOT__hb_bits,4,0);
	VL_SIG8(main__DOT__genbus__DOT__hx_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__nl_busy,0,0);
	VL_SIG8(main__DOT__genbus__DOT__hx_byte,6,0);
	VL_SIG8(main__DOT__genbus__DOT__fnl_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__fnl_byte,6,0);
	VL_SIG8(main__DOT__genbus__DOT__ps_full,0,0);
	VL_SIG8(main__DOT__genbus__DOT__ps_data,7,0);
	VL_SIG8(main__DOT__genbus__DOT__packxi__DOT__cmd_loaded,0,0);
	VL_SIG8(main__DOT__genbus__DOT__wbexec__DOT__newaddr,0,0);
	VL_SIG8(main__DOT__genbus__DOT__wbexec__DOT__inc,0,0);
	VL_SIG8(main__DOT__genbus__DOT__wbexec__DOT__i_cmd_addr,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addints__DOT__int_state,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addints__DOT__pending_interrupt,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addints__DOT__loaded,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addints__DOT__int_loaded,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addidles__DOT__idle_stb,0,0);
	VL_SIG8(main__DOT__genbus__DOT__unpackx__DOT__r_len,3,0);
	VL_SIG8(main__DOT__genbus__DOT__genhex__DOT__w_gx_char,7,0);
	VL_SIG8(main__DOT__genbus__DOT__addnl__DOT__last_cr,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addnl__DOT__cr_state,0,0);
	VL_SIG8(main__DOT__genbus__DOT__addnl__DOT__loaded,0,0);
	VL_SIG8(main__DOT__bus_arbiter__DOT__r_a_owner,0,0);
	VL_SIG8(main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_stb,0,0);
	VL_SIG8(main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_we,0,0);
	VL_SIG8(main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_sel,3,0);
	VL_SIG8(main__DOT__consolei__DOT__r_wb_addr,1,0);
    };
    struct {
	VL_SIG8(main__DOT__consolei__DOT__r_wb_ack,0,0);
	VL_SIG8(main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_data,6,0);
	VL_SIG8(main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_full,0,0);
	VL_SIG8(main__DOT__consolei__DOT__RX_NOFIFO__DOT__r_rx_fifo_err,0,0);
	VL_SIG8(main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_data,6,0);
	VL_SIG8(main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_err,0,0);
	VL_SIG8(main__DOT__consolei__DOT__TX_NOFIFO__DOT__r_txf_wb_write,0,0);
	VL_SIG8(main__DOT__bustimeri__DOT__r_running,0,0);
	VL_SIG8(main__DOT__bustimeri__DOT__wb_write,0,0);
	VL_SIG8(main__DOT__bustimeri__DOT__r_zero,0,0);
	VL_SIG8(main__DOT__bustimeri__DOT__genblk1__DOT__r_auto_reload,0,0);
	VL_SIG8(main__DOT__bkrami__DOT__genblk2__DOT__last_wstb,0,0);
	VL_SIG8(main__DOT__bkrami__DOT__genblk2__DOT__last_stb,0,0);
	VL_SIG8(main__DOT__bkrami__DOT__genblk2__DOT__last_sel,3,0);
	VL_SIG8(main__DOT__buspici__DOT__r_interrupt,0,0);
	VL_SIG8(main__DOT__buspici__DOT__r_gie,0,0);
	VL_SIG8(main__DOT__buspici__DOT__w_any,0,0);
	VL_SIG16(main__DOT__ram_data,15,0);
	VL_SIG16(main__DOT__bus_int_vector,14,0);
	VL_SIG16(main__DOT__sdrami__DOT__refresh_clk,9,0);
	VL_SIG16(main__DOT__sdrami__DOT__m_ram_addr,12,0);
	VL_SIG16(main__DOT__sdrami__DOT__startup_idle,15,0);
	VL_SIG16(main__DOT__sdrami__DOT__ram_data,15,0);
	VL_SIG16(main__DOT__sdrami__DOT__last_ram_data,15,0);
	VL_SIG16(main__DOT__swic__DOT__thecpu__DOT__w_uflags,14,0);
	VL_SIG16(main__DOT__swic__DOT__thecpu__DOT__w_iflags,14,0);
	VL_SIG16(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_nxt_half,14,0);
	VL_SIG16(main__DOT__watchdogi__DOT__r_value,15,0);
	VL_SIG16(main__DOT__gpioi__DOT__hi_bits,15,0);
	VL_SIG16(main__DOT__gpioi__DOT__low_bits,15,0);
	VL_SIG16(main__DOT__bustimeri__DOT__r_value,15,0);
	VL_SIG16(main__DOT__bustimeri__DOT__genblk1__DOT__r_interval_count,15,0);
	VL_SIG16(main__DOT__bkrami__DOT__genblk2__DOT__last_addr,10,0);
	VL_SIG16(main__DOT__buspici__DOT__r_int_state,14,0);
	VL_SIG16(main__DOT__buspici__DOT__r_int_enable,14,0);
	VL_SIG16(main__DOT__buspici__DOT__nxt_int_state,14,0);
	VL_SIG(main__DOT__zip_debug,31,0);
	VL_SIG(main__DOT__hb_dwbi_addr,22,0);
	VL_SIG(main__DOT__hb_dwbi_odata,31,0);
	VL_SIG(main__DOT__hb_dwbi_idata,31,0);
	VL_SIG(main__DOT__r_buserr_addr,22,0);
	VL_SIG(main__DOT__r_pwrcount_data,31,0);
	VL_SIG(main__DOT__wb_addr,22,0);
	VL_SIG(main__DOT__wb_data,31,0);
	VL_SIG(main__DOT__wb_idata,31,0);
	VL_SIG(main__DOT__buspic_data,31,0);
	VL_SIG(main__DOT__console_data,31,0);
	VL_SIG(main__DOT__bkram_data,31,0);
	VL_SIG(main__DOT__sdram_data,31,0);
	VL_SIG(main__DOT__zip_addr,22,0);
	VL_SIG(main__DOT__hb_data,31,0);
	VL_SIG(main__DOT__hb_idata,31,0);
	VL_SIG(main__DOT__r_wb_sio_data,31,0);
	VL_SIG(main__DOT__r_wb_dio_data,31,0);
	VL_SIG(main__DOT__sdram_debug,31,0);
	VL_SIG(main__DOT__hb_tmp_addr,29,0);
	VL_SIG(main__DOT__sdramscopei__DOT__nxt_mem,31,0);
	VL_SIG(main__DOT__sdramscopei__DOT__full_holdoff,19,0);
	VL_SIG(main__DOT__sdramscopei__DOT__o_bus_data,31,0);
	VL_SIG(main__DOT__sdramscopei__DOT__genblk4__DOT__genblk1__DOT__data_pipe,31,0);
	VL_SIG(main__DOT__sdrami__DOT__r_addr,22,0);
	VL_SIG(main__DOT__sdrami__DOT__r_data,31,0);
	VL_SIG(main__DOT__sdrami__DOT__fwd_addr,22,0);
	VL_SIG(main__DOT__swic__DOT__cpu_dbg_data,31,0);
    };
    struct {
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pf_pc,24,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pf_instruction_pc,24,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pf_addr,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pf_instruction,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__dcd_pc,24,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__dcd_I,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__r_op_Av,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__r_op_Bv,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__w_op_Av,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__w_op_Bv,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__w_pcB_v,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__w_pcA_v,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__op_sim_immv,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__alu_result,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__mem_addr,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__mem_data,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__mem_result,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__div_result,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__dbg_val,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__wr_gpreg_vl,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__wr_spreg_vl,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__ipc,24,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pre_rewrite_value,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pre_op_Av,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pre_op_Bv,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__w_debug_pc,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__debug_flags,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__dbg_pc,27,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__dbg_wb_addr,27,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__SET_USER_PC__DOT__r_upc,24,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__SETDBG__DOT__pre_dbg_reg,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__pf__DOT__cache_word,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__iword,31,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__r_I,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__w_I,22,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_brev_result,31,0);
	VL_SIGW(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__full_result,65,0,3);
	VL_SIGW(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__partial,65,0,3);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor,31,0);
	VL_SIG(main__DOT__genbus__DOT__addidles__DOT__idle_counter,22,0);
	VL_SIG(main__DOT__genbus__DOT__unpackx__DOT__r_word,31,0);
	VL_SIG(main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_addr,22,0);
	VL_SIG(main__DOT__hb_dwbi_delay__DOT__genblk1__DOT__r_data,31,0);
	VL_SIG(main__DOT__bkrami__DOT__genblk2__DOT__last_data,31,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsr_result,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_asr_result,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__w_lsl_result,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_a,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__p_b,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPN3__DOT__MPYSLOW__DOT__slowmpyi__DOT__pwire,32,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend,62,0);
	VL_SIG64(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT__thedivide__DOT__diff,32,0);
	VL_SIG64(main__DOT__genbus__DOT__iw_word,33,0);
	VL_SIG64(main__DOT__genbus__DOT__ow_word,33,0);
	VL_SIG64(main__DOT__genbus__DOT__int_word,33,0);
	VL_SIG64(main__DOT__genbus__DOT__idl_word,33,0);
	VL_SIG64(main__DOT__genbus__DOT__packxi__DOT__r_word,33,0);
	VL_SIG(main__DOT__sdramscopei__DOT__mem[16],31,0);
	VL_SIG8(main__DOT__sdrami__DOT__bank_active[4],2,0);
	VL_SIG16(main__DOT__sdrami__DOT__bank_row[4],12,0);
	VL_SIG(main__DOT__swic__DOT__thecpu__DOT__regset[32],31,0);
	VL_SIG(main__DOT__bkrami__DOT__mem[2048],31,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(main__DOT____Vcellinp__sdramscopei____pinNumber7,0,0);
    VL_SIG8(main__DOT____Vcellinp__sdrami____pinNumber3,0,0);
    VL_SIG8(main__DOT____Vcellinp__swic____pinNumber16,0,0);
    VL_SIG8(main__DOT____Vcellinp__watchdogi____pinNumber5,0,0);
    VL_SIG8(main__DOT____Vcellinp__bus_arbiter____pinNumber12,0,0);
    VL_SIG8(main__DOT____Vcellinp__bus_arbiter____pinNumber11,0,0);
    VL_SIG8(main__DOT____Vcellinp__consolei____pinNumber4,0,0);
    VL_SIG8(main__DOT____Vcellinp__bustimeri____pinNumber5,0,0);
    VL_SIG8(main__DOT____Vcellinp__bkrami____pinNumber4,0,0);
    VL_SIG8(main__DOT____Vcellinp__buspici____pinNumber3,0,0);
    VL_SIG8(main__DOT__swic__DOT____Vcellinp__thecpu____pinNumber24,0,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber16,6,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber15,6,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT____Vcellout__instruction_decoder____pinNumber14,6,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT____Vcellinp__instruction_decoder____pinNumber2,0,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT____Vcellinp__doalu____pinNumber2,0,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__DIVIDE__DOT____Vcellinp__thedivide____pinNumber2,0,0);
    VL_SIG8(main__DOT__swic__DOT__thecpu__DOT__NO_CACHE__DOT__MEM__DOT____Vcellinp__domem____pinNumber3,0,0);
    VL_SIG8(main__DOT__genbus__DOT____Vcellinp__addnl____pinNumber8,0,0);
    VL_SIG8(__Vtableidx5,4,0);
    VL_SIG8(__Vclklast__TOP__i_clk,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG8(__Vtablechg4[128],1,0);
    static VL_ST_SIG8(__Vtable1_main__DOT__wb_many_ack[128],0,0);
    static VL_ST_SIG8(__Vtable2_main__DOT__swic__DOT__thecpu__DOT__r_op_F[16],6,0);
    static VL_ST_SIG8(__Vtable3_main__DOT__genbus__DOT__dec_bits[256],4,0);
    static VL_ST_SIG8(__Vtable4_main__DOT__hb_cyc[128],0,0);
    static VL_ST_SIG8(__Vtable4_main__DOT__hb_stb[128],0,0);
    static VL_ST_SIG8(__Vtable5_main__DOT__genbus__DOT__genhex__DOT__w_gx_char[32],7,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmain__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmain);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmain(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmain();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmain__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmain__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmain__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vmain__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vmain__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vmain__Syms* __restrict vlSymsp);
    static void _eval_settle(Vmain__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vmain__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vmain__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vmain__Syms* __restrict vlSymsp);
    static void traceChgThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
