/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__CHIGenericController__
#define __PARAMS__CHIGenericController__

namespace gem5 {
namespace ruby {
class CHIGenericController;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"

#include "params/RubyController.hh"

namespace gem5
{
struct CHIGenericControllerParams
    : public RubyControllerParams
{
    gem5::ruby::MessageBuffer * datIn;
    gem5::ruby::MessageBuffer * datOut;
    int data_channel_size;
    gem5::ruby::MessageBuffer * reqIn;
    gem5::ruby::MessageBuffer * reqOut;
    gem5::ruby::MessageBuffer * rspIn;
    gem5::ruby::MessageBuffer * rspOut;
    gem5::ruby::MessageBuffer * snpIn;
    gem5::ruby::MessageBuffer * snpOut;
};

} // namespace gem5

#endif // __PARAMS__CHIGenericController__
