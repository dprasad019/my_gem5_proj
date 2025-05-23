/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TlmToGem5Bridge128__
#define __PARAMS__TlmToGem5Bridge128__

namespace sc_gem5 {
template <unsigned int BITWIDTH>
class TlmToGem5Bridge;
} // namespace sc_gem5

#include "params/TlmToGem5BridgeBase.hh"

namespace gem5
{
struct TlmToGem5Bridge128Params
    : public TlmToGem5BridgeBaseParams
{
    sc_gem5::TlmToGem5Bridge<128> * create() const;
    unsigned int port_tlm_connection_count;
};

} // namespace gem5

#endif // __PARAMS__TlmToGem5Bridge128__
