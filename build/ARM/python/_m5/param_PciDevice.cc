/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PciDevice.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/pci/device.hh"

#include "dev/pci/device.hh"
#include "dev/pci/device.hh"
#include "dev/pci/device.hh"
#include "dev/pci/device.hh"
#include "dev/pci/device.hh"
#include "dev/pci/device.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "dev/pci/host.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PciDevice");
    py::class_<PciDeviceParams, DmaDeviceParams, std::unique_ptr<PciDeviceParams, py::nodelete>>(m, "PciDeviceParams")
        .def_readwrite("BAR0", &PciDeviceParams::BAR0)
        .def_readwrite("BAR1", &PciDeviceParams::BAR1)
        .def_readwrite("BAR2", &PciDeviceParams::BAR2)
        .def_readwrite("BAR3", &PciDeviceParams::BAR3)
        .def_readwrite("BAR4", &PciDeviceParams::BAR4)
        .def_readwrite("BAR5", &PciDeviceParams::BAR5)
        .def_readwrite("BIST", &PciDeviceParams::BIST)
        .def_readwrite("CacheLineSize", &PciDeviceParams::CacheLineSize)
        .def_readwrite("CapabilityPtr", &PciDeviceParams::CapabilityPtr)
        .def_readwrite("CardbusCIS", &PciDeviceParams::CardbusCIS)
        .def_readwrite("ClassCode", &PciDeviceParams::ClassCode)
        .def_readwrite("Command", &PciDeviceParams::Command)
        .def_readwrite("DeviceID", &PciDeviceParams::DeviceID)
        .def_readwrite("ExpansionROM", &PciDeviceParams::ExpansionROM)
        .def_readwrite("HeaderType", &PciDeviceParams::HeaderType)
        .def_readwrite("InterruptLine", &PciDeviceParams::InterruptLine)
        .def_readwrite("InterruptPin", &PciDeviceParams::InterruptPin)
        .def_readwrite("LatencyTimer", &PciDeviceParams::LatencyTimer)
        .def_readwrite("MSICAPBaseOffset", &PciDeviceParams::MSICAPBaseOffset)
        .def_readwrite("MSICAPCapId", &PciDeviceParams::MSICAPCapId)
        .def_readwrite("MSICAPMaskBits", &PciDeviceParams::MSICAPMaskBits)
        .def_readwrite("MSICAPMsgAddr", &PciDeviceParams::MSICAPMsgAddr)
        .def_readwrite("MSICAPMsgCtrl", &PciDeviceParams::MSICAPMsgCtrl)
        .def_readwrite("MSICAPMsgData", &PciDeviceParams::MSICAPMsgData)
        .def_readwrite("MSICAPMsgUpperAddr", &PciDeviceParams::MSICAPMsgUpperAddr)
        .def_readwrite("MSICAPNextCapability", &PciDeviceParams::MSICAPNextCapability)
        .def_readwrite("MSICAPPendingBits", &PciDeviceParams::MSICAPPendingBits)
        .def_readwrite("MSIXCAPBaseOffset", &PciDeviceParams::MSIXCAPBaseOffset)
        .def_readwrite("MSIXCAPCapId", &PciDeviceParams::MSIXCAPCapId)
        .def_readwrite("MSIXCAPNextCapability", &PciDeviceParams::MSIXCAPNextCapability)
        .def_readwrite("MSIXMsgCtrl", &PciDeviceParams::MSIXMsgCtrl)
        .def_readwrite("MSIXPbaOffset", &PciDeviceParams::MSIXPbaOffset)
        .def_readwrite("MSIXTableOffset", &PciDeviceParams::MSIXTableOffset)
        .def_readwrite("MaximumLatency", &PciDeviceParams::MaximumLatency)
        .def_readwrite("MinimumGrant", &PciDeviceParams::MinimumGrant)
        .def_readwrite("PMCAPBaseOffset", &PciDeviceParams::PMCAPBaseOffset)
        .def_readwrite("PMCAPCapId", &PciDeviceParams::PMCAPCapId)
        .def_readwrite("PMCAPCapabilities", &PciDeviceParams::PMCAPCapabilities)
        .def_readwrite("PMCAPCtrlStatus", &PciDeviceParams::PMCAPCtrlStatus)
        .def_readwrite("PMCAPNextCapability", &PciDeviceParams::PMCAPNextCapability)
        .def_readwrite("PXCAPBaseOffset", &PciDeviceParams::PXCAPBaseOffset)
        .def_readwrite("PXCAPCapId", &PciDeviceParams::PXCAPCapId)
        .def_readwrite("PXCAPCapabilities", &PciDeviceParams::PXCAPCapabilities)
        .def_readwrite("PXCAPDevCap2", &PciDeviceParams::PXCAPDevCap2)
        .def_readwrite("PXCAPDevCapabilities", &PciDeviceParams::PXCAPDevCapabilities)
        .def_readwrite("PXCAPDevCtrl", &PciDeviceParams::PXCAPDevCtrl)
        .def_readwrite("PXCAPDevCtrl2", &PciDeviceParams::PXCAPDevCtrl2)
        .def_readwrite("PXCAPDevStatus", &PciDeviceParams::PXCAPDevStatus)
        .def_readwrite("PXCAPLinkCap", &PciDeviceParams::PXCAPLinkCap)
        .def_readwrite("PXCAPLinkCtrl", &PciDeviceParams::PXCAPLinkCtrl)
        .def_readwrite("PXCAPLinkStatus", &PciDeviceParams::PXCAPLinkStatus)
        .def_readwrite("PXCAPNextCapability", &PciDeviceParams::PXCAPNextCapability)
        .def_readwrite("ProgIF", &PciDeviceParams::ProgIF)
        .def_readwrite("Revision", &PciDeviceParams::Revision)
        .def_readwrite("Status", &PciDeviceParams::Status)
        .def_readwrite("SubClassCode", &PciDeviceParams::SubClassCode)
        .def_readwrite("SubsystemID", &PciDeviceParams::SubsystemID)
        .def_readwrite("SubsystemVendorID", &PciDeviceParams::SubsystemVendorID)
        .def_readwrite("VendorID", &PciDeviceParams::VendorID)
        .def_readwrite("config_latency", &PciDeviceParams::config_latency)
        .def_readwrite("host", &PciDeviceParams::host)
        .def_readwrite("pci_bus", &PciDeviceParams::pci_bus)
        .def_readwrite("pci_dev", &PciDeviceParams::pci_dev)
        .def_readwrite("pci_func", &PciDeviceParams::pci_func)
        .def_readwrite("pio_latency", &PciDeviceParams::pio_latency)
        ;

    py::class_<gem5::PciDevice, gem5::DmaDevice, std::unique_ptr<gem5::PciDevice, py::nodelete>>(m, "gem5_COLONS_PciDevice")
        ;

}

static EmbeddedPyBind embed_obj("PciDevice", module_init, "DmaDevice");

} // namespace gem5
