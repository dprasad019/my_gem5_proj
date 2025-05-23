/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Process.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/process.hh"

#include <vector>
#include <string>
#include <string>
#include <vector>
#include "sim/emul_driver.hh"
#include "base/types.hh"
#include <vector>
#include <string>
#include <string>
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "sim/system.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Process");
    py::class_<ProcessParams, SimObjectParams, std::unique_ptr<ProcessParams, py::nodelete>>(m, "ProcessParams")
        .def(py::init<>())
        .def("create", &ProcessParams::create)
        .def_readwrite("cmd", &ProcessParams::cmd)
        .def_readwrite("cwd", &ProcessParams::cwd)
        .def_readwrite("drivers", &ProcessParams::drivers)
        .def_readwrite("egid", &ProcessParams::egid)
        .def_readwrite("env", &ProcessParams::env)
        .def_readwrite("errout", &ProcessParams::errout)
        .def_readwrite("euid", &ProcessParams::euid)
        .def_readwrite("executable", &ProcessParams::executable)
        .def_readwrite("gid", &ProcessParams::gid)
        .def_readwrite("input", &ProcessParams::input)
        .def_readwrite("kvmInSE", &ProcessParams::kvmInSE)
        .def_readwrite("maxStackSize", &ProcessParams::maxStackSize)
        .def_readwrite("output", &ProcessParams::output)
        .def_readwrite("pgid", &ProcessParams::pgid)
        .def_readwrite("pid", &ProcessParams::pid)
        .def_readwrite("ppid", &ProcessParams::ppid)
        .def_readwrite("release", &ProcessParams::release)
        .def_readwrite("simpoint", &ProcessParams::simpoint)
        .def_readwrite("system", &ProcessParams::system)
        .def_readwrite("uid", &ProcessParams::uid)
        .def_readwrite("useArchPT", &ProcessParams::useArchPT)
        ;

    py::class_<gem5::Process, gem5::SimObject, std::unique_ptr<gem5::Process, py::nodelete>>(m, "gem5_COLONS_Process")
        .def("map", &gem5::Process::map, py::arg("vaddr"), py::arg("paddr"), py::arg("size"), py::arg("cacheable") = false)
        ;

}

static EmbeddedPyBind embed_obj("Process", module_init, "SimObject");

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
class DummyProcessParamsClass
{
  public:
    gem5::Process *create() const;
};

template <class CxxClass, class Enable=void>
class DummyProcessShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyProcessShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ProcessParams &>>>
{
  public:
    using Params = ProcessParams;
    static gem5::Process *
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
class DummyProcessShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ProcessParams &>>>
{
  public:
    using Params = DummyProcessParamsClass;
    static gem5::Process *
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
[[maybe_unused]] gem5::Process *
DummyProcessShunt<gem5::Process>::Params::create() const
{
    return DummyProcessShunt<gem5::Process>::create(*this);
}

} // namespace gem5
