/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Gicv3__
#define __PARAMS__Gicv3__

namespace gem5 {
class Gicv3;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Gicv3Its.hh"
#include <cstddef>
#include "params/ArmInterruptPin.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>

#include "params/BaseGic.hh"

namespace gem5
{
struct Gicv3Params
    : public BaseGicParams
{
    gem5::Gicv3 * create() const;
    unsigned cpu_max;
    Addr dist_addr;
    Tick dist_pio_delay;
    bool gicv4;
    uint32_t it_lines;
    gem5::Gicv3Its * its;
    gem5::ArmInterruptPinGen * maint_int;
    Addr redist_addr;
    Tick redist_pio_delay;
    bool reserved_is_res0;
};

} // namespace gem5

#endif // __PARAMS__Gicv3__
