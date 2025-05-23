/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:1160
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/DirectoryRequestType.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const DirectoryRequestType& obj)
{
    out << DirectoryRequestType_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
DirectoryRequestType_to_string(const DirectoryRequestType& obj)
{
    switch(obj) {
      case DirectoryRequestType_Default:
        return "Default";
      default:
        panic("Invalid range for type DirectoryRequestType");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
DirectoryRequestType
string_to_DirectoryRequestType(const std::string& str)
{
    if (str == "Default") {
        return DirectoryRequestType_Default;
    } else {
        panic("Invalid string conversion for %s, type DirectoryRequestType", str);
    }
}

// Code to increment an enumeration type
DirectoryRequestType&
operator++(DirectoryRequestType& e)
{
    assert(e < DirectoryRequestType_NUM);
    return e = DirectoryRequestType(e+1);
}
} // namespace ruby
} // namespace gem5
