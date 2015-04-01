// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ThreeAtomPerturbation.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/values.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "fouratomfunctions.h"

#include "internalperturbation.h"

#include "threeatomfunctions.h"

#include "twoatomfunctions.h"

#include "internalperturbation.h"

SireMM::ThreeAtomPerturbation __copy__(const SireMM::ThreeAtomPerturbation &other){ return SireMM::ThreeAtomPerturbation(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ThreeAtomPerturbation_class(){

    { //::SireMM::ThreeAtomPerturbation
        typedef bp::class_< SireMM::ThreeAtomPerturbation, bp::bases< SireMM::InternalPerturbation, SireMol::Perturbation, SireBase::Property > > ThreeAtomPerturbation_exposer_t;
        ThreeAtomPerturbation_exposer_t ThreeAtomPerturbation_exposer = ThreeAtomPerturbation_exposer_t( "ThreeAtomPerturbation", bp::init< >() );
        bp::scope ThreeAtomPerturbation_scope( ThreeAtomPerturbation_exposer );
        ThreeAtomPerturbation_exposer.def( bp::init< SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireCAS::Expression const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("initial_form"), bp::arg("final_form"), bp::arg("map")=SireBase::PropertyMap() )) );
        ThreeAtomPerturbation_exposer.def( bp::init< SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireCAS::Expression const &, SireCAS::Expression const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("initial_form"), bp::arg("final_form"), bp::arg("mapping_function"), bp::arg("map")=SireBase::PropertyMap() )) );
        ThreeAtomPerturbation_exposer.def( bp::init< SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireCAS::Expression const &, SireCAS::Identities const &, SireCAS::Identities const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("base_expression"), bp::arg("initial_forms"), bp::arg("final_forms"), bp::arg("map")=SireBase::PropertyMap() )) );
        ThreeAtomPerturbation_exposer.def( bp::init< SireMol::AtomID const &, SireMol::AtomID const &, SireMol::AtomID const &, SireCAS::Expression const &, SireCAS::Identities const &, SireCAS::Identities const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("base_expression"), bp::arg("initial_forms"), bp::arg("final_forms"), bp::arg("mapping_function"), bp::arg("map")=SireBase::PropertyMap() )) );
        ThreeAtomPerturbation_exposer.def( bp::init< SireMM::ThreeAtomPerturbation const & >(( bp::arg("other") )) );
        { //::SireMM::ThreeAtomPerturbation::atom0
        
            typedef ::SireMol::AtomID const & ( ::SireMM::ThreeAtomPerturbation::*atom0_function_type )(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::ThreeAtomPerturbation::atom0 );
            
            ThreeAtomPerturbation_exposer.def( 
                "atom0"
                , atom0_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::ThreeAtomPerturbation::atom1
        
            typedef ::SireMol::AtomID const & ( ::SireMM::ThreeAtomPerturbation::*atom1_function_type )(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::ThreeAtomPerturbation::atom1 );
            
            ThreeAtomPerturbation_exposer.def( 
                "atom1"
                , atom1_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::ThreeAtomPerturbation::atom2
        
            typedef ::SireMol::AtomID const & ( ::SireMM::ThreeAtomPerturbation::*atom2_function_type )(  ) const;
            atom2_function_type atom2_function_value( &::SireMM::ThreeAtomPerturbation::atom2 );
            
            ThreeAtomPerturbation_exposer.def( 
                "atom2"
                , atom2_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        ThreeAtomPerturbation_exposer.def( bp::self != bp::self );
        { //::SireMM::ThreeAtomPerturbation::operator=
        
            typedef ::SireMM::ThreeAtomPerturbation & ( ::SireMM::ThreeAtomPerturbation::*assign_function_type )( ::SireMM::ThreeAtomPerturbation const & ) ;
            assign_function_type assign_function_value( &::SireMM::ThreeAtomPerturbation::operator= );
            
            ThreeAtomPerturbation_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        ThreeAtomPerturbation_exposer.def( bp::self == bp::self );
        { //::SireMM::ThreeAtomPerturbation::requiredProperties
        
            typedef ::QSet< QString > ( ::SireMM::ThreeAtomPerturbation::*requiredProperties_function_type )(  ) const;
            requiredProperties_function_type requiredProperties_function_value( &::SireMM::ThreeAtomPerturbation::requiredProperties );
            
            ThreeAtomPerturbation_exposer.def( 
                "requiredProperties"
                , requiredProperties_function_value );
        
        }
        { //::SireMM::ThreeAtomPerturbation::toString
        
            typedef ::QString ( ::SireMM::ThreeAtomPerturbation::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMM::ThreeAtomPerturbation::toString );
            
            ThreeAtomPerturbation_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMM::ThreeAtomPerturbation::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::ThreeAtomPerturbation::typeName );
            
            ThreeAtomPerturbation_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::ThreeAtomPerturbation::wouldChange
        
            typedef bool ( ::SireMM::ThreeAtomPerturbation::*wouldChange_function_type )( ::SireMol::Molecule const &,::SireCAS::Values const & ) const;
            wouldChange_function_type wouldChange_function_value( &::SireMM::ThreeAtomPerturbation::wouldChange );
            
            ThreeAtomPerturbation_exposer.def( 
                "wouldChange"
                , wouldChange_function_value
                , ( bp::arg("molecule"), bp::arg("values") ) );
        
        }
        ThreeAtomPerturbation_exposer.staticmethod( "typeName" );
        ThreeAtomPerturbation_exposer.def( "__copy__", &__copy__);
        ThreeAtomPerturbation_exposer.def( "__deepcopy__", &__copy__);
        ThreeAtomPerturbation_exposer.def( "clone", &__copy__);
        ThreeAtomPerturbation_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::ThreeAtomPerturbation >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomPerturbation_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::ThreeAtomPerturbation >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomPerturbation_exposer.def( "__str__", &__str__< ::SireMM::ThreeAtomPerturbation > );
        ThreeAtomPerturbation_exposer.def( "__repr__", &__str__< ::SireMM::ThreeAtomPerturbation > );
    }

}
