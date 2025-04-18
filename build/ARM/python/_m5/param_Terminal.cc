/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Terminal.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/serial/terminal.hh"

#include "base/types.hh"
#include "enums/TerminalDump.hh"
#include "base/socket.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Terminal");
    py::class_<TerminalParams, SerialDeviceParams, std::unique_ptr<TerminalParams, py::nodelete>>(m, "TerminalParams")
        .def(py::init<>())
        .def("create", &TerminalParams::create)
        .def_readwrite("number", &TerminalParams::number)
        .def_readwrite("outfile", &TerminalParams::outfile)
        .def_readwrite("port", &TerminalParams::port)
        ;

    py::class_<gem5::Terminal, gem5::SerialDevice, std::unique_ptr<gem5::Terminal, py::nodelete>>(m, "gem5_COLONS_Terminal")
        ;

}

static EmbeddedPyBind embed_obj("Terminal", module_init, "SerialDevice");

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
class DummyTerminalParamsClass
{
  public:
    gem5::Terminal *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTerminalShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTerminalShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TerminalParams &>>>
{
  public:
    using Params = TerminalParams;
    static gem5::Terminal *
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
class DummyTerminalShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TerminalParams &>>>
{
  public:
    using Params = DummyTerminalParamsClass;
    static gem5::Terminal *
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
[[maybe_unused]] gem5::Terminal *
DummyTerminalShunt<gem5::Terminal>::Params::create() const
{
    return DummyTerminalShunt<gem5::Terminal>::create(*this);
}

} // namespace gem5
