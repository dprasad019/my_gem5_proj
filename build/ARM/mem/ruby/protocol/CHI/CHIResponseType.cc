/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/CHI/CHIResponseType.hh"

namespace gem5
{

namespace ruby
{

namespace CHI
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const CHIResponseType& obj)
{
    out << CHIResponseType_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
CHIResponseType_to_string(const CHIResponseType& obj)
{
    switch(obj) {
      case CHIResponseType_Comp_I:
        return "Comp_I";
      case CHIResponseType_Comp_UC:
        return "Comp_UC";
      case CHIResponseType_Comp_UD_PD:
        return "Comp_UD_PD";
      case CHIResponseType_Comp_SC:
        return "Comp_SC";
      case CHIResponseType_CompAck:
        return "CompAck";
      case CHIResponseType_CompDBIDResp:
        return "CompDBIDResp";
      case CHIResponseType_DBIDResp:
        return "DBIDResp";
      case CHIResponseType_Comp:
        return "Comp";
      case CHIResponseType_ReadReceipt:
        return "ReadReceipt";
      case CHIResponseType_RespSepData:
        return "RespSepData";
      case CHIResponseType_SnpResp_I:
        return "SnpResp_I";
      case CHIResponseType_SnpResp_I_Fwded_UC:
        return "SnpResp_I_Fwded_UC";
      case CHIResponseType_SnpResp_I_Fwded_UD_PD:
        return "SnpResp_I_Fwded_UD_PD";
      case CHIResponseType_SnpResp_SC:
        return "SnpResp_SC";
      case CHIResponseType_SnpResp_SC_Fwded_SC:
        return "SnpResp_SC_Fwded_SC";
      case CHIResponseType_SnpResp_SC_Fwded_SD_PD:
        return "SnpResp_SC_Fwded_SD_PD";
      case CHIResponseType_SnpResp_UC_Fwded_I:
        return "SnpResp_UC_Fwded_I";
      case CHIResponseType_SnpResp_UD_Fwded_I:
        return "SnpResp_UD_Fwded_I";
      case CHIResponseType_SnpResp_SC_Fwded_I:
        return "SnpResp_SC_Fwded_I";
      case CHIResponseType_SnpResp_SD_Fwded_I:
        return "SnpResp_SD_Fwded_I";
      case CHIResponseType_RetryAck:
        return "RetryAck";
      case CHIResponseType_PCrdGrant:
        return "PCrdGrant";
      case CHIResponseType_null:
        return "null";
      default:
        panic("Invalid range for type CHIResponseType");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
CHIResponseType
string_to_CHIResponseType(const std::string& str)
{
    if (str == "Comp_I") {
        return CHIResponseType_Comp_I;
    } else if (str == "Comp_UC") {
        return CHIResponseType_Comp_UC;
    } else if (str == "Comp_UD_PD") {
        return CHIResponseType_Comp_UD_PD;
    } else if (str == "Comp_SC") {
        return CHIResponseType_Comp_SC;
    } else if (str == "CompAck") {
        return CHIResponseType_CompAck;
    } else if (str == "CompDBIDResp") {
        return CHIResponseType_CompDBIDResp;
    } else if (str == "DBIDResp") {
        return CHIResponseType_DBIDResp;
    } else if (str == "Comp") {
        return CHIResponseType_Comp;
    } else if (str == "ReadReceipt") {
        return CHIResponseType_ReadReceipt;
    } else if (str == "RespSepData") {
        return CHIResponseType_RespSepData;
    } else if (str == "SnpResp_I") {
        return CHIResponseType_SnpResp_I;
    } else if (str == "SnpResp_I_Fwded_UC") {
        return CHIResponseType_SnpResp_I_Fwded_UC;
    } else if (str == "SnpResp_I_Fwded_UD_PD") {
        return CHIResponseType_SnpResp_I_Fwded_UD_PD;
    } else if (str == "SnpResp_SC") {
        return CHIResponseType_SnpResp_SC;
    } else if (str == "SnpResp_SC_Fwded_SC") {
        return CHIResponseType_SnpResp_SC_Fwded_SC;
    } else if (str == "SnpResp_SC_Fwded_SD_PD") {
        return CHIResponseType_SnpResp_SC_Fwded_SD_PD;
    } else if (str == "SnpResp_UC_Fwded_I") {
        return CHIResponseType_SnpResp_UC_Fwded_I;
    } else if (str == "SnpResp_UD_Fwded_I") {
        return CHIResponseType_SnpResp_UD_Fwded_I;
    } else if (str == "SnpResp_SC_Fwded_I") {
        return CHIResponseType_SnpResp_SC_Fwded_I;
    } else if (str == "SnpResp_SD_Fwded_I") {
        return CHIResponseType_SnpResp_SD_Fwded_I;
    } else if (str == "RetryAck") {
        return CHIResponseType_RetryAck;
    } else if (str == "PCrdGrant") {
        return CHIResponseType_PCrdGrant;
    } else if (str == "null") {
        return CHIResponseType_null;
    } else {
        panic("Invalid string conversion for %s, type CHIResponseType", str);
    }
}

// Code to increment an enumeration type
CHIResponseType&
operator++(CHIResponseType& e)
{
    assert(e < CHIResponseType_NUM);
    return e = CHIResponseType(e+1);
}

} // namespace CHI
} // namespace ruby
} // namespace gem5
