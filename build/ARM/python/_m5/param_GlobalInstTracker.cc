/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GlobalInstTracker.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/probes/inst_tracker.hh"

#include <vector>
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GlobalInstTracker");
    py::class_<GlobalInstTrackerParams, SimObjectParams, std::unique_ptr<GlobalInstTrackerParams, py::nodelete>>(m, "GlobalInstTrackerParams")
        .def(py::init<>())
        .def("create", &GlobalInstTrackerParams::create)
        .def_readwrite("inst_thresholds", &GlobalInstTrackerParams::inst_thresholds)
        ;

    py::class_<gem5::GlobalInstTracker, gem5::SimObject, std::unique_ptr<gem5::GlobalInstTracker, py::nodelete>>(m, "gem5_COLONS_GlobalInstTracker")
        .def("addThreshold", &gem5::GlobalInstTracker::addThreshold)
        .def("getCounter", &gem5::GlobalInstTracker::getCounter)
        .def("resetCounter", &gem5::GlobalInstTracker::resetCounter)
        .def("getThresholds", &gem5::GlobalInstTracker::getThresholds)
        .def("resetThresholds", &gem5::GlobalInstTracker::resetThresholds)
        ;

}

static EmbeddedPyBind embed_obj("GlobalInstTracker", module_init, "SimObject");

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
class DummyGlobalInstTrackerParamsClass
{
  public:
    gem5::GlobalInstTracker *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGlobalInstTrackerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGlobalInstTrackerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GlobalInstTrackerParams &>>>
{
  public:
    using Params = GlobalInstTrackerParams;
    static gem5::GlobalInstTracker *
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
class DummyGlobalInstTrackerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GlobalInstTrackerParams &>>>
{
  public:
    using Params = DummyGlobalInstTrackerParamsClass;
    static gem5::GlobalInstTracker *
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
[[maybe_unused]] gem5::GlobalInstTracker *
DummyGlobalInstTrackerShunt<gem5::GlobalInstTracker>::Params::create() const
{
    return DummyGlobalInstTrackerShunt<gem5::GlobalInstTracker>::create(*this);
}

} // namespace gem5
