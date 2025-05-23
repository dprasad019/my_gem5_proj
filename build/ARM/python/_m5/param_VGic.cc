/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VGic.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/vgic.hh"

#include "dev/arm/base_gic.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "dev/platform.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VGic");
    py::class_<VGicParams, PioDeviceParams, std::unique_ptr<VGicParams, py::nodelete>>(m, "VGicParams")
        .def(py::init<>())
        .def("create", &VGicParams::create)
        .def_readwrite("gic", &VGicParams::gic)
        .def_readwrite("gicv_iidr", &VGicParams::gicv_iidr)
        .def_readwrite("hv_addr", &VGicParams::hv_addr)
        .def_readwrite("maint_int", &VGicParams::maint_int)
        .def_readwrite("pio_delay", &VGicParams::pio_delay)
        .def_readwrite("platform", &VGicParams::platform)
        .def_readwrite("vcpu_addr", &VGicParams::vcpu_addr)
        ;

    py::class_<gem5::VGic, gem5::PioDevice, std::unique_ptr<gem5::VGic, py::nodelete>>(m, "gem5_COLONS_VGic")
        ;

}

static EmbeddedPyBind embed_obj("VGic", module_init, "PioDevice");

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
class DummyVGicParamsClass
{
  public:
    gem5::VGic *create() const;
};

template <class CxxClass, class Enable=void>
class DummyVGicShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyVGicShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const VGicParams &>>>
{
  public:
    using Params = VGicParams;
    static gem5::VGic *
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
class DummyVGicShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const VGicParams &>>>
{
  public:
    using Params = DummyVGicParamsClass;
    static gem5::VGic *
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
[[maybe_unused]] gem5::VGic *
DummyVGicShunt<gem5::VGic>::Params::create() const
{
    return DummyVGicShunt<gem5::VGic>::create(*this);
}

} // namespace gem5
