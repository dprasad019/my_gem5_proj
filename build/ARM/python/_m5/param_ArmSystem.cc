/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ArmSystem.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/arm/system.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "arch/arm/system.hh"
#include "base/types.hh"
#include "arch/arm/semihosting.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ArmSystem");
    py::class_<ArmSystemParams, SystemParams, std::unique_ptr<ArmSystemParams, py::nodelete>>(m, "ArmSystemParams")
        .def(py::init<>())
        .def("create", &ArmSystemParams::create)
        .def_readwrite("auto_reset_addr", &ArmSystemParams::auto_reset_addr)
        .def_readwrite("gic_cpu_addr", &ArmSystemParams::gic_cpu_addr)
        .def_readwrite("have_large_asid_64", &ArmSystemParams::have_large_asid_64)
        .def_readwrite("highest_el_is_64", &ArmSystemParams::highest_el_is_64)
        .def_readwrite("multi_proc", &ArmSystemParams::multi_proc)
        .def_readwrite("phys_addr_range_64", &ArmSystemParams::phys_addr_range_64)
        .def_readwrite("release", &ArmSystemParams::release)
        .def_readwrite("reset_addr", &ArmSystemParams::reset_addr)
        .def_readwrite("semihosting", &ArmSystemParams::semihosting)
        .def_readwrite("sme_vl", &ArmSystemParams::sme_vl)
        .def_readwrite("sve_vl", &ArmSystemParams::sve_vl)
        ;

    py::class_<gem5::ArmSystem, gem5::System, std::unique_ptr<gem5::ArmSystem, py::nodelete>>(m, "gem5_COLONS_ArmSystem")
        ;

}

static EmbeddedPyBind embed_obj("ArmSystem", module_init, "System");

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
class DummyArmSystemParamsClass
{
  public:
    gem5::ArmSystem *create() const;
};

template <class CxxClass, class Enable=void>
class DummyArmSystemShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyArmSystemShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ArmSystemParams &>>>
{
  public:
    using Params = ArmSystemParams;
    static gem5::ArmSystem *
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
class DummyArmSystemShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ArmSystemParams &>>>
{
  public:
    using Params = DummyArmSystemParamsClass;
    static gem5::ArmSystem *
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
[[maybe_unused]] gem5::ArmSystem *
DummyArmSystemShunt<gem5::ArmSystem>::Params::create() const
{
    return DummyArmSystemShunt<gem5::ArmSystem>::create(*this);
}

} // namespace gem5
