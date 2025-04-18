/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SMMUv3.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/smmu_v3.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include <vector>
#include "dev/arm/smmu_v3_deviceifc.hh"
#include "dev/arm/base_gic.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/addr_range.hh"
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
#include "sim/system.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
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
#include <string>
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
py::module_ m = m_internal.def_submodule("param_SMMUv3");
    py::class_<SMMUv3Params, ClockedObjectParams, std::unique_ptr<SMMUv3Params, py::nodelete>>(m, "SMMUv3Params")
        .def(py::init<>())
        .def("create", &SMMUv3Params::create)
        .def_readwrite("cfg_assoc", &SMMUv3Params::cfg_assoc)
        .def_readwrite("cfg_enable", &SMMUv3Params::cfg_enable)
        .def_readwrite("cfg_entries", &SMMUv3Params::cfg_entries)
        .def_readwrite("cfg_lat", &SMMUv3Params::cfg_lat)
        .def_readwrite("cfg_policy", &SMMUv3Params::cfg_policy)
        .def_readwrite("cfg_slots", &SMMUv3Params::cfg_slots)
        .def_readwrite("device_interfaces", &SMMUv3Params::device_interfaces)
        .def_readwrite("eventq_irq", &SMMUv3Params::eventq_irq)
        .def_readwrite("ifc_smmu_lat", &SMMUv3Params::ifc_smmu_lat)
        .def_readwrite("ipa_assoc", &SMMUv3Params::ipa_assoc)
        .def_readwrite("ipa_enable", &SMMUv3Params::ipa_enable)
        .def_readwrite("ipa_entries", &SMMUv3Params::ipa_entries)
        .def_readwrite("ipa_lat", &SMMUv3Params::ipa_lat)
        .def_readwrite("ipa_policy", &SMMUv3Params::ipa_policy)
        .def_readwrite("ipa_slots", &SMMUv3Params::ipa_slots)
        .def_readwrite("ptw_slots", &SMMUv3Params::ptw_slots)
        .def_readwrite("reg_map", &SMMUv3Params::reg_map)
        .def_readwrite("request_port_width", &SMMUv3Params::request_port_width)
        .def_readwrite("sample_period", &SMMUv3Params::sample_period)
        .def_readwrite("smmu_aidr", &SMMUv3Params::smmu_aidr)
        .def_readwrite("smmu_idr0", &SMMUv3Params::smmu_idr0)
        .def_readwrite("smmu_idr1", &SMMUv3Params::smmu_idr1)
        .def_readwrite("smmu_idr2", &SMMUv3Params::smmu_idr2)
        .def_readwrite("smmu_idr3", &SMMUv3Params::smmu_idr3)
        .def_readwrite("smmu_idr4", &SMMUv3Params::smmu_idr4)
        .def_readwrite("smmu_idr5", &SMMUv3Params::smmu_idr5)
        .def_readwrite("smmu_ifc_lat", &SMMUv3Params::smmu_ifc_lat)
        .def_readwrite("smmu_iidr", &SMMUv3Params::smmu_iidr)
        .def_readwrite("system", &SMMUv3Params::system)
        .def_readwrite("tlb_assoc", &SMMUv3Params::tlb_assoc)
        .def_readwrite("tlb_enable", &SMMUv3Params::tlb_enable)
        .def_readwrite("tlb_entries", &SMMUv3Params::tlb_entries)
        .def_readwrite("tlb_lat", &SMMUv3Params::tlb_lat)
        .def_readwrite("tlb_policy", &SMMUv3Params::tlb_policy)
        .def_readwrite("tlb_slots", &SMMUv3Params::tlb_slots)
        .def_readwrite("walk_S1L0", &SMMUv3Params::walk_S1L0)
        .def_readwrite("walk_S1L1", &SMMUv3Params::walk_S1L1)
        .def_readwrite("walk_S1L2", &SMMUv3Params::walk_S1L2)
        .def_readwrite("walk_S1L3", &SMMUv3Params::walk_S1L3)
        .def_readwrite("walk_S2L0", &SMMUv3Params::walk_S2L0)
        .def_readwrite("walk_S2L1", &SMMUv3Params::walk_S2L1)
        .def_readwrite("walk_S2L2", &SMMUv3Params::walk_S2L2)
        .def_readwrite("walk_S2L3", &SMMUv3Params::walk_S2L3)
        .def_readwrite("walk_assoc", &SMMUv3Params::walk_assoc)
        .def_readwrite("walk_enable", &SMMUv3Params::walk_enable)
        .def_readwrite("walk_lat", &SMMUv3Params::walk_lat)
        .def_readwrite("walk_policy", &SMMUv3Params::walk_policy)
        .def_readwrite("walk_slots", &SMMUv3Params::walk_slots)
        .def_readwrite("wc_nonfinal_enable", &SMMUv3Params::wc_nonfinal_enable)
        .def_readwrite("wc_s1_levels", &SMMUv3Params::wc_s1_levels)
        .def_readwrite("wc_s2_levels", &SMMUv3Params::wc_s2_levels)
        .def_readwrite("xlate_slots", &SMMUv3Params::xlate_slots)
        .def_readwrite("port_request_connection_count", &SMMUv3Params::port_request_connection_count)
        .def_readwrite("port_walker_connection_count", &SMMUv3Params::port_walker_connection_count)
        .def_readwrite("port_control_connection_count", &SMMUv3Params::port_control_connection_count)
        ;

    py::class_<gem5::SMMUv3, gem5::ClockedObject, std::unique_ptr<gem5::SMMUv3, py::nodelete>>(m, "gem5_COLONS_SMMUv3")
        ;

}

static EmbeddedPyBind embed_obj("SMMUv3", module_init, "ClockedObject");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummySMMUv3ParamsClass
{
  public:
    gem5::SMMUv3 *create() const;
};

template <class CxxClass, class Enable=void>
class DummySMMUv3Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySMMUv3Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SMMUv3Params &>>>
{
  public:
    using Params = SMMUv3Params;
    static gem5::SMMUv3 *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummySMMUv3Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SMMUv3Params &>>>
{
  public:
    using Params = DummySMMUv3ParamsClass;
    static gem5::SMMUv3 *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::SMMUv3 *
DummySMMUv3Shunt<gem5::SMMUv3>::Params::create() const
{
    return DummySMMUv3Shunt<gem5::SMMUv3>::create(*this);
}

} // namespace gem5
