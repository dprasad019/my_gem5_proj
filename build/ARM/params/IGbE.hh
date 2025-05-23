/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__IGbE__
#define __PARAMS__IGbE__

namespace gem5 {
class IGbE;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/inet.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/EtherDevice.hh"

namespace gem5
{
struct IGbEParams
    : public EtherDeviceParams
{
    gem5::IGbE * create() const;
    Tick fetch_comp_delay;
    Tick fetch_delay;
    networking::EthAddr hardware_address;
    uint16_t phy_epid;
    uint16_t phy_pid;
    int rx_desc_cache_size;
    uint64_t rx_fifo_size;
    Tick rx_write_delay;
    int tx_desc_cache_size;
    uint64_t tx_fifo_size;
    Tick tx_read_delay;
    Tick wb_comp_delay;
    Tick wb_delay;
};

} // namespace gem5

#endif // __PARAMS__IGbE__
