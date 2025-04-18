/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/InstPBTrace.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/inst_pb_trace.hh"

#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_InstPBTrace");
    py::class_<InstPBTraceParams, InstTracerParams, std::unique_ptr<InstPBTraceParams, py::nodelete>>(m, "InstPBTraceParams")
        .def(py::init<>())
        .def("create", &InstPBTraceParams::create)
        .def_readwrite("file_name", &InstPBTraceParams::file_name)
        ;

    py::class_<gem5::trace::InstPBTrace, gem5::trace::InstTracer, std::unique_ptr<gem5::trace::InstPBTrace, py::nodelete>>(m, "gem5_COLONS_trace_COLONS_InstPBTrace")
        ;

}

static EmbeddedPyBind embed_obj("InstPBTrace", module_init, "InstTracer");

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
class DummyInstPBTraceParamsClass
{
  public:
    gem5::trace::InstPBTrace *create() const;
};

template <class CxxClass, class Enable=void>
class DummyInstPBTraceShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyInstPBTraceShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const InstPBTraceParams &>>>
{
  public:
    using Params = InstPBTraceParams;
    static gem5::trace::InstPBTrace *
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
class DummyInstPBTraceShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const InstPBTraceParams &>>>
{
  public:
    using Params = DummyInstPBTraceParamsClass;
    static gem5::trace::InstPBTrace *
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
[[maybe_unused]] gem5::trace::InstPBTrace *
DummyInstPBTraceShunt<gem5::trace::InstPBTrace>::Params::create() const
{
    return DummyInstPBTraceShunt<gem5::trace::InstPBTrace>::create(*this);
}

} // namespace gem5
