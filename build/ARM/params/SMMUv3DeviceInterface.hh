/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__SMMUv3DeviceInterface__
#define __PARAMS__SMMUv3DeviceInterface__

namespace gem5 {
class SMMUv3DeviceInterface;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct SMMUv3DeviceInterfaceParams
    : public ClockedObjectParams
{
    gem5::SMMUv3DeviceInterface * create() const;
    unsigned port_width;
    bool prefetch_enable;
    bool prefetch_reserve_last_way;
    unsigned tlb_assoc;
    bool tlb_enable;
    unsigned tlb_entries;
    Cycles tlb_lat;
    std::string tlb_policy;
    Cycles tlb_slots;
    unsigned utlb_assoc;
    bool utlb_enable;
    unsigned utlb_entries;
    Cycles utlb_lat;
    std::string utlb_policy;
    Cycles utlb_slots;
    unsigned wrbuf_slots;
    unsigned xlate_slots;
    unsigned int port_device_port_connection_count;
    unsigned int port_ats_mem_side_port_connection_count;
    unsigned int port_ats_dev_side_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__SMMUv3DeviceInterface__
