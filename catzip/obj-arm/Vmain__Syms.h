// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vmain__Syms_H_
#define _Vmain__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmain.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vmain__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmain*                         TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_main__swic__thecpu;
    VerilatedScope __Vscope_main__swic__thecpu__instruction_decoder;
    
    // CREATORS
    Vmain__Syms(Vmain* topp, const char* namep);
    ~Vmain__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
