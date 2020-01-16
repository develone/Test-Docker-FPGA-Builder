// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmain__Syms.h"
#include "Vmain.h"

// FUNCTIONS
Vmain__Syms::Vmain__Syms(Vmain* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scope names
    __Vscope_main__swic__thecpu.configure(this,name(),"main.swic.thecpu");
    __Vscope_main__swic__thecpu__instruction_decoder.configure(this,name(),"main.swic.thecpu.instruction_decoder");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_main__swic__thecpu.varInsert(__Vfinal,"alu_ce", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__alu_ce), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_main__swic__thecpu.varInsert(__Vfinal,"dcd_pc", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__dcd_pc), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,24,0);
	__Vscope_main__swic__thecpu.varInsert(__Vfinal,"op_sim", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_main__swic__thecpu.varInsert(__Vfinal,"op_sim_immv", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__op_sim_immv), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,22,0);
	__Vscope_main__swic__thecpu.varInsert(__Vfinal,"op_valid", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__op_valid), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_main__swic__thecpu__instruction_decoder.varInsert(__Vfinal,"o_sim", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_main__swic__thecpu__instruction_decoder.varInsert(__Vfinal,"o_sim_immv", &(TOPp->main__DOT__swic__DOT__thecpu__DOT__instruction_decoder__DOT__o_sim_immv), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,22,0);
    }
}
