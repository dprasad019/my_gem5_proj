/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ArmFsFreebsd.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/arm/freebsd/fs_workload.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ArmFsFreebsd");
    py::class_<ArmFsFreebsdParams, ArmFsWorkloadParams, std::unique_ptr<ArmFsFreebsdParams, py::nodelete>>(m, "ArmFsFreebsdParams")
        .def(py::init<>())
        .def("create", &ArmFsFreebsdParams::create)
        ;

    py::class_<gem5::ArmISA::FsFreebsd, gem5::ArmISA::FsWorkload, std::unique_ptr<gem5::ArmISA::FsFreebsd, py::nodelete>>(m, "gem5_COLONS_ArmISA_COLONS_FsFreebsd")
        ;

}

static EmbeddedPyBind embed_obj("ArmFsFreebsd", module_init, "ArmFsWorkload");

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
class DummyArmFsFreebsdParamsClass
{
  public:
    gem5::ArmISA::FsFreebsd *create() const;
};

template <class CxxClass, class Enable=void>
class DummyArmFsFreebsdShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyArmFsFreebsdShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ArmFsFreebsdParams &>>>
{
  public:
    using Params = ArmFsFreebsdParams;
    static gem5::ArmISA::FsFreebsd *
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
class DummyArmFsFreebsdShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ArmFsFreebsdParams &>>>
{
  public:
    using Params = DummyArmFsFreebsdParamsClass;
    static gem5::ArmISA::FsFreebsd *
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
[[maybe_unused]] gem5::ArmISA::FsFreebsd *
DummyArmFsFreebsdShunt<gem5::ArmISA::FsFreebsd>::Params::create() const
{
    return DummyArmFsFreebsdShunt<gem5::ArmISA::FsFreebsd>::create(*this);
}

} // namespace gem5
