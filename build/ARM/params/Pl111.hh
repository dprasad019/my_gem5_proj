/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Pl111__
#define __PARAMS__Pl111__

namespace gem5 {
class Pl111;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/VncInput.hh"

#include "params/AmbaDmaDevice.hh"

namespace gem5
{
struct Pl111Params
    : public AmbaDmaDeviceParams
{
    gem5::Pl111 * create() const;
    bool enable_capture;
    Tick pixel_clock;
    gem5::VncInput * vnc;
};

} // namespace gem5

#endif // __PARAMS__Pl111__
