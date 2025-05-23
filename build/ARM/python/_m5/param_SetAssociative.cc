/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SetAssociative.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/indexing_policies/set_associative.hh"

#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SetAssociative");
    py::class_<SetAssociativeParams, BaseIndexingPolicyParams, std::unique_ptr<SetAssociativeParams, py::nodelete>>(m, "SetAssociativeParams")
        .def(py::init<>())
        .def("create", &SetAssociativeParams::create)
        .def_readwrite("entry_size", &SetAssociativeParams::entry_size)
        .def_readwrite("size", &SetAssociativeParams::size)
        ;

    py::class_<gem5::SetAssociative, gem5::IndexingPolicyTemplate<gem5::AddrTypes>, std::unique_ptr<gem5::SetAssociative, py::nodelete>>(m, "gem5_COLONS_SetAssociative")
        ;

}

static EmbeddedPyBind embed_obj("SetAssociative", module_init, "BaseIndexingPolicy");

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
class DummySetAssociativeParamsClass
{
  public:
    gem5::SetAssociative *create() const;
};

template <class CxxClass, class Enable=void>
class DummySetAssociativeShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySetAssociativeShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SetAssociativeParams &>>>
{
  public:
    using Params = SetAssociativeParams;
    static gem5::SetAssociative *
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
class DummySetAssociativeShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SetAssociativeParams &>>>
{
  public:
    using Params = DummySetAssociativeParamsClass;
    static gem5::SetAssociative *
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
[[maybe_unused]] gem5::SetAssociative *
DummySetAssociativeShunt<gem5::SetAssociative>::Params::create() const
{
    return DummySetAssociativeShunt<gem5::SetAssociative>::create(*this);
}

} // namespace gem5
