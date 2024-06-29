// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ThreeAtomFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/console.h"

#include "SireCAS/symbols.h"

#include "SireError/errors.h"

#include "SireMol/atommatcher.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "sireglobal.h"

#include "threeatomfunctions.h"

#include "threeatomfunctions.h"

SireMM::ThreeAtomFunction __copy__(const SireMM::ThreeAtomFunction &other){ return SireMM::ThreeAtomFunction(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ThreeAtomFunction_class(){

    { //::SireMM::ThreeAtomFunction
        typedef bp::class_< SireMM::ThreeAtomFunction, bp::bases< SireMM::AtomFunction > > ThreeAtomFunction_exposer_t;
        ThreeAtomFunction_exposer_t ThreeAtomFunction_exposer = ThreeAtomFunction_exposer_t( "ThreeAtomFunction", "This class holds a function that acts using the\ncoordinate information of just three atoms", bp::init< >("Constructor") );
        bp::scope ThreeAtomFunction_scope( ThreeAtomFunction_exposer );
        ThreeAtomFunction_exposer.def( bp::init< SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireCAS::Expression const & >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("function") ), "Construct for the specified pair of atoms with the specified function") );
        ThreeAtomFunction_exposer.def( bp::init< SireMM::ThreeAtomFunction const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::ThreeAtomFunction::atom0
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::ThreeAtomFunction::atom0 );
            
            ThreeAtomFunction_exposer.def( 
                "atom0"
                , atom0_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::ThreeAtomFunction::atom1
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::ThreeAtomFunction::atom1 );
            
            ThreeAtomFunction_exposer.def( 
                "atom1"
                , atom1_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMM::ThreeAtomFunction::atom2
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom2_function_type)(  ) const;
            atom2_function_type atom2_function_value( &::SireMM::ThreeAtomFunction::atom2 );
            
            ThreeAtomFunction_exposer.def( 
                "atom2"
                , atom2_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        ThreeAtomFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::ThreeAtomFunction::operator=
        
            typedef ::SireMM::ThreeAtomFunction & ( ::SireMM::ThreeAtomFunction::*assign_function_type)( ::SireMM::ThreeAtomFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::ThreeAtomFunction::operator= );
            
            ThreeAtomFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        ThreeAtomFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::ThreeAtomFunction::toString
        
            typedef ::QString ( ::SireMM::ThreeAtomFunction::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::ThreeAtomFunction::toString );
            
            ThreeAtomFunction_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation" );
        
        }
        ThreeAtomFunction_exposer.def( "__copy__", &__copy__<SireMM::ThreeAtomFunction>);
        ThreeAtomFunction_exposer.def( "__deepcopy__", &__copy__<SireMM::ThreeAtomFunction>);
        ThreeAtomFunction_exposer.def( "clone", &__copy__<SireMM::ThreeAtomFunction>);
        ThreeAtomFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::ThreeAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::ThreeAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunction_exposer.def_pickle(sire_pickle_suite< ::SireMM::ThreeAtomFunction >());
        ThreeAtomFunction_exposer.def( "__str__", &__str__< ::SireMM::ThreeAtomFunction > );
        ThreeAtomFunction_exposer.def( "__repr__", &__str__< ::SireMM::ThreeAtomFunction > );
    }

}
