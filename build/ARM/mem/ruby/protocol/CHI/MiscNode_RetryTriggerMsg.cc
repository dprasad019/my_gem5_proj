/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:666
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/CHI/MiscNode_RetryTriggerMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

namespace CHI
{

/** \brief Print the state of this object */
void
MiscNode_RetryTriggerMsg::print(std::ostream& out) const
{
    out << "[MiscNode_RetryTriggerMsg: ";
    out << "txnId = " << printAddress(m_txnId, block_size_bits) << " ";
    out << "event = " << m_event << " ";
    out << "retryDest = " << m_retryDest << " ";
    out << "]";
}
bool
MiscNode_RetryTriggerMsg::functionalRead(Packet* param_pkt)
{
return (false);

}
bool
MiscNode_RetryTriggerMsg::functionalRead(Packet* param_pkt, WriteMask& param_mask)
{
return (false);

}
bool
MiscNode_RetryTriggerMsg::functionalWrite(Packet* param_pkt)
{
return (false);

}

} // namespace CHI
} // namespace ruby
} // namespace gem5
