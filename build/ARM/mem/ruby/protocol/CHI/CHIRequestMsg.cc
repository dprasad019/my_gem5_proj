/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/durgpras/gem5/src/mem/slicc/symbols/Type.py:666
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/CHI/CHIRequestMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

namespace CHI
{

/** \brief Print the state of this object */
void
CHIRequestMsg::print(std::ostream& out) const
{
    out << "[CHIRequestMsg: ";
    out << "addr = " << printAddress(m_addr, block_size_bits) << " ";
    out << "accAddr = " << printAddress(m_accAddr, block_size_bits) << " ";
    out << "accSize = " << m_accSize << " ";
    out << "type = " << m_type << " ";
    out << "requestor = " << m_requestor << " ";
    out << "fwdRequestor = " << m_fwdRequestor << " ";
    out << "dataToFwdRequestor = " << m_dataToFwdRequestor << " ";
    out << "retToSrc = " << m_retToSrc << " ";
    out << "allowRetry = " << m_allowRetry << " ";
    out << "Destination = " << m_Destination << " ";
    out << "seqReq = " << m_seqReq << " ";
    out << "isSeqReqValid = " << m_isSeqReqValid << " ";
    out << "is_local_pf = " << m_is_local_pf << " ";
    out << "is_remote_pf = " << m_is_remote_pf << " ";
    out << "atomic_op = " << m_atomic_op << " ";
    out << "usesTxnId = " << m_usesTxnId << " ";
    out << "txnId = " << printAddress(m_txnId, block_size_bits) << " ";
    out << "ns = " << m_ns << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "]";
}
bool
CHIRequestMsg::functionalRead(Packet* param_pkt)
{
return (false);

}
bool
CHIRequestMsg::functionalRead(Packet* param_pkt, WriteMask& param_mask)
{
return (false);

}
bool
CHIRequestMsg::functionalWrite(Packet* param_pkt)
{
return (false);

}

} // namespace CHI
} // namespace ruby
} // namespace gem5
