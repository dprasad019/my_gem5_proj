/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/CHI/Cache_State.hh"

namespace gem5
{

namespace ruby
{

namespace CHI
{

// Code to convert the current state to an access permission
AccessPermission Cache_State_to_permission(const Cache_State& obj)
{
    switch(obj) {
      case Cache_State_I:
        return AccessPermission_Invalid;
      case Cache_State_SC:
        return AccessPermission_Read_Only;
      case Cache_State_UC:
        return AccessPermission_Read_Write;
      case Cache_State_SD:
        return AccessPermission_Read_Only;
      case Cache_State_UD:
        return AccessPermission_Read_Write;
      case Cache_State_UD_T:
        return AccessPermission_Read_Write;
      case Cache_State_RU:
        return AccessPermission_Invalid;
      case Cache_State_RSC:
        return AccessPermission_Invalid;
      case Cache_State_RSD:
        return AccessPermission_Invalid;
      case Cache_State_RUSC:
        return AccessPermission_Invalid;
      case Cache_State_RUSD:
        return AccessPermission_Invalid;
      case Cache_State_SC_RSC:
        return AccessPermission_Read_Only;
      case Cache_State_SD_RSC:
        return AccessPermission_Read_Only;
      case Cache_State_SD_RSD:
        return AccessPermission_Read_Only;
      case Cache_State_UC_RSC:
        return AccessPermission_Read_Write;
      case Cache_State_UC_RU:
        return AccessPermission_Invalid;
      case Cache_State_UD_RU:
        return AccessPermission_Invalid;
      case Cache_State_UD_RSD:
        return AccessPermission_Read_Write;
      case Cache_State_UD_RSC:
        return AccessPermission_Read_Write;
      case Cache_State_DvmTlbi_Unconfirmed:
        return AccessPermission_Invalid;
      case Cache_State_DvmSync_Unsent:
        return AccessPermission_Invalid;
      case Cache_State_DvmSync_Unconfirmed:
        return AccessPermission_Invalid;
      case Cache_State_DvmTlbi_Waiting:
        return AccessPermission_Invalid;
      case Cache_State_DvmSync_Waiting:
        return AccessPermission_Invalid;
      case Cache_State_DvmOp_Finished:
        return AccessPermission_Invalid;
      case Cache_State_DvmExtTlbi_Partial:
        return AccessPermission_Invalid;
      case Cache_State_DvmExtTlbi_Executing:
        return AccessPermission_Invalid;
      case Cache_State_DvmExtSync_Partial:
        return AccessPermission_Invalid;
      case Cache_State_DvmExtSync_Executing:
        return AccessPermission_Invalid;
      case Cache_State_DvmExtOp_Finished:
        return AccessPermission_Invalid;
      case Cache_State_BUSY_INTR:
        return AccessPermission_Busy;
      case Cache_State_BUSY_BLKD:
        return AccessPermission_Busy;
      case Cache_State_null:
        return AccessPermission_Invalid;
      default:
        panic("Unknown state access permission converstion for Cache_State");
    }
    // Appease the compiler since this function has a return value
    return AccessPermission_Invalid;
}

} // namespace CHI

} // namespace ruby
} // namespace gem5

namespace gem5
{

namespace ruby
{

namespace CHI
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const Cache_State& obj)
{
    out << Cache_State_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
Cache_State_to_string(const Cache_State& obj)
{
    switch(obj) {
      case Cache_State_I:
        return "I";
      case Cache_State_SC:
        return "SC";
      case Cache_State_UC:
        return "UC";
      case Cache_State_SD:
        return "SD";
      case Cache_State_UD:
        return "UD";
      case Cache_State_UD_T:
        return "UD_T";
      case Cache_State_RU:
        return "RU";
      case Cache_State_RSC:
        return "RSC";
      case Cache_State_RSD:
        return "RSD";
      case Cache_State_RUSC:
        return "RUSC";
      case Cache_State_RUSD:
        return "RUSD";
      case Cache_State_SC_RSC:
        return "SC_RSC";
      case Cache_State_SD_RSC:
        return "SD_RSC";
      case Cache_State_SD_RSD:
        return "SD_RSD";
      case Cache_State_UC_RSC:
        return "UC_RSC";
      case Cache_State_UC_RU:
        return "UC_RU";
      case Cache_State_UD_RU:
        return "UD_RU";
      case Cache_State_UD_RSD:
        return "UD_RSD";
      case Cache_State_UD_RSC:
        return "UD_RSC";
      case Cache_State_DvmTlbi_Unconfirmed:
        return "DvmTlbi_Unconfirmed";
      case Cache_State_DvmSync_Unsent:
        return "DvmSync_Unsent";
      case Cache_State_DvmSync_Unconfirmed:
        return "DvmSync_Unconfirmed";
      case Cache_State_DvmTlbi_Waiting:
        return "DvmTlbi_Waiting";
      case Cache_State_DvmSync_Waiting:
        return "DvmSync_Waiting";
      case Cache_State_DvmOp_Finished:
        return "DvmOp_Finished";
      case Cache_State_DvmExtTlbi_Partial:
        return "DvmExtTlbi_Partial";
      case Cache_State_DvmExtTlbi_Executing:
        return "DvmExtTlbi_Executing";
      case Cache_State_DvmExtSync_Partial:
        return "DvmExtSync_Partial";
      case Cache_State_DvmExtSync_Executing:
        return "DvmExtSync_Executing";
      case Cache_State_DvmExtOp_Finished:
        return "DvmExtOp_Finished";
      case Cache_State_BUSY_INTR:
        return "BUSY_INTR";
      case Cache_State_BUSY_BLKD:
        return "BUSY_BLKD";
      case Cache_State_null:
        return "null";
      default:
        panic("Invalid range for type Cache_State");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
Cache_State
string_to_Cache_State(const std::string& str)
{
    if (str == "I") {
        return Cache_State_I;
    } else if (str == "SC") {
        return Cache_State_SC;
    } else if (str == "UC") {
        return Cache_State_UC;
    } else if (str == "SD") {
        return Cache_State_SD;
    } else if (str == "UD") {
        return Cache_State_UD;
    } else if (str == "UD_T") {
        return Cache_State_UD_T;
    } else if (str == "RU") {
        return Cache_State_RU;
    } else if (str == "RSC") {
        return Cache_State_RSC;
    } else if (str == "RSD") {
        return Cache_State_RSD;
    } else if (str == "RUSC") {
        return Cache_State_RUSC;
    } else if (str == "RUSD") {
        return Cache_State_RUSD;
    } else if (str == "SC_RSC") {
        return Cache_State_SC_RSC;
    } else if (str == "SD_RSC") {
        return Cache_State_SD_RSC;
    } else if (str == "SD_RSD") {
        return Cache_State_SD_RSD;
    } else if (str == "UC_RSC") {
        return Cache_State_UC_RSC;
    } else if (str == "UC_RU") {
        return Cache_State_UC_RU;
    } else if (str == "UD_RU") {
        return Cache_State_UD_RU;
    } else if (str == "UD_RSD") {
        return Cache_State_UD_RSD;
    } else if (str == "UD_RSC") {
        return Cache_State_UD_RSC;
    } else if (str == "DvmTlbi_Unconfirmed") {
        return Cache_State_DvmTlbi_Unconfirmed;
    } else if (str == "DvmSync_Unsent") {
        return Cache_State_DvmSync_Unsent;
    } else if (str == "DvmSync_Unconfirmed") {
        return Cache_State_DvmSync_Unconfirmed;
    } else if (str == "DvmTlbi_Waiting") {
        return Cache_State_DvmTlbi_Waiting;
    } else if (str == "DvmSync_Waiting") {
        return Cache_State_DvmSync_Waiting;
    } else if (str == "DvmOp_Finished") {
        return Cache_State_DvmOp_Finished;
    } else if (str == "DvmExtTlbi_Partial") {
        return Cache_State_DvmExtTlbi_Partial;
    } else if (str == "DvmExtTlbi_Executing") {
        return Cache_State_DvmExtTlbi_Executing;
    } else if (str == "DvmExtSync_Partial") {
        return Cache_State_DvmExtSync_Partial;
    } else if (str == "DvmExtSync_Executing") {
        return Cache_State_DvmExtSync_Executing;
    } else if (str == "DvmExtOp_Finished") {
        return Cache_State_DvmExtOp_Finished;
    } else if (str == "BUSY_INTR") {
        return Cache_State_BUSY_INTR;
    } else if (str == "BUSY_BLKD") {
        return Cache_State_BUSY_BLKD;
    } else if (str == "null") {
        return Cache_State_null;
    } else {
        panic("Invalid string conversion for %s, type Cache_State", str);
    }
}

// Code to increment an enumeration type
Cache_State&
operator++(Cache_State& e)
{
    assert(e < Cache_State_NUM);
    return e = Cache_State(e+1);
}

} // namespace CHI
} // namespace ruby
} // namespace gem5
