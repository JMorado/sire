// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Perturbations.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/identities.h"

#include "SireCAS/values.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "geometryperturbation.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "perturbation.h"

#include "perturbation.h"

SireMol::Perturbations __copy__(const SireMol::Perturbations &other){ return SireMol::Perturbations(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Perturbations_class(){

    { //::SireMol::Perturbations
        typedef bp::class_< SireMol::Perturbations, bp::bases< SireMol::Perturbation, SireBase::Property > > Perturbations_exposer_t;
        Perturbations_exposer_t Perturbations_exposer = Perturbations_exposer_t( "Perturbations", "This class holds a collection of perturbations that can\nbe applied to a molecule\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope Perturbations_scope( Perturbations_exposer );
        Perturbations_exposer.def( bp::init< SireMol::Perturbation const & >(( bp::arg("perturbation") ), "Construct just to perform the passed perturbation") );
        Perturbations_exposer.def( bp::init< QList< SireBase::PropPtr< SireMol::Perturbation > > const & >(( bp::arg("perturbations") ), "Construct to perform the passed perturbations") );
        Perturbations_exposer.def( bp::init< SireMol::Perturbations const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::Perturbations::children
        
            typedef ::QList< SireBase::PropPtr< SireMol::Perturbation > > ( ::SireMol::Perturbations::*children_function_type)(  ) const;
            children_function_type children_function_value( &::SireMol::Perturbations::children );
            
            Perturbations_exposer.def( 
                "children"
                , children_function_value
                , "Return a list of all of the children of this perturbation\n(and the children of these children etc.)" );
        
        }
        Perturbations_exposer.def( bp::self != bp::self );
        { //::SireMol::Perturbations::operator=
        
            typedef ::SireMol::Perturbations & ( ::SireMol::Perturbations::*assign_function_type)( ::SireMol::Perturbations const & ) ;
            assign_function_type assign_function_value( &::SireMol::Perturbations::operator= );
            
            Perturbations_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Perturbations_exposer.def( bp::self == bp::self );
        { //::SireMol::Perturbations::perturbations
        
            typedef ::QList< SireBase::PropPtr< SireMol::Perturbation > > ( ::SireMol::Perturbations::*perturbations_function_type)(  ) const;
            perturbations_function_type perturbations_function_value( &::SireMol::Perturbations::perturbations );
            
            Perturbations_exposer.def( 
                "perturbations"
                , perturbations_function_value
                , "Return a list of all perturbations performed by this object" );
        
        }
        { //::SireMol::Perturbations::recreate
        
            typedef ::SireMol::PerturbationPtr ( ::SireMol::Perturbations::*recreate_function_type)( ::SireCAS::Expression const & ) const;
            recreate_function_type recreate_function_value( &::SireMol::Perturbations::recreate );
            
            Perturbations_exposer.def( 
                "recreate"
                , recreate_function_value
                , ( bp::arg("mapping_function") )
                , "Return a re-created version of this set of perturbations where all child\nperturbations are changed to use the passed mapping function" );
        
        }
        { //::SireMol::Perturbations::recreate
        
            typedef ::SireMol::PerturbationPtr ( ::SireMol::Perturbations::*recreate_function_type)( ::SireBase::PropertyMap const & ) const;
            recreate_function_type recreate_function_value( &::SireMol::Perturbations::recreate );
            
            Perturbations_exposer.def( 
                "recreate"
                , recreate_function_value
                , ( bp::arg("map") )
                , "Return a re-created version of this set of perturbations where all child\nperturbations are changed to use the passed property map" );
        
        }
        { //::SireMol::Perturbations::recreate
        
            typedef ::SireMol::PerturbationPtr ( ::SireMol::Perturbations::*recreate_function_type)( ::SireCAS::Expression const &,::SireBase::PropertyMap const & ) const;
            recreate_function_type recreate_function_value( &::SireMol::Perturbations::recreate );
            
            Perturbations_exposer.def( 
                "recreate"
                , recreate_function_value
                , ( bp::arg("mapping_function"), bp::arg("map") )
                , "Return a re-created version of this set of perturbations where all child\nperturbations are changed to use the passed mapping function and property map" );
        
        }
        { //::SireMol::Perturbations::requiredProperties
        
            typedef ::QSet< QString > ( ::SireMol::Perturbations::*requiredProperties_function_type)(  ) const;
            requiredProperties_function_type requiredProperties_function_value( &::SireMol::Perturbations::requiredProperties );
            
            Perturbations_exposer.def( 
                "requiredProperties"
                , requiredProperties_function_value
                , "Return all of the properties that are needed or affected by\nthese perturbations" );
        
        }
        { //::SireMol::Perturbations::requiredSymbols
        
            typedef ::QSet< SireCAS::Symbol > ( ::SireMol::Perturbations::*requiredSymbols_function_type)(  ) const;
            requiredSymbols_function_type requiredSymbols_function_value( &::SireMol::Perturbations::requiredSymbols );
            
            Perturbations_exposer.def( 
                "requiredSymbols"
                , requiredSymbols_function_value
                , "Return all of the symbols that need to be input to these perturbations" );
        
        }
        { //::SireMol::Perturbations::substitute
        
            typedef ::SireMol::PerturbationPtr ( ::SireMol::Perturbations::*substitute_function_type)( ::SireCAS::Identities const & ) const;
            substitute_function_type substitute_function_value( &::SireMol::Perturbations::substitute );
            
            Perturbations_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , "Substitute the identities in identities in all of the mapping functions\nused by this perturbation. This is useful if, for example, you want to\nswitch from using lambda to control the perturbation to using alpha, e.g.\n" );
        
        }
        { //::SireMol::Perturbations::substitute
        
            typedef ::SireMol::PerturbationPtr ( ::SireMol::Perturbations::*substitute_function_type)( ::SireCAS::Symbol const &,::SireCAS::Symbol const & ) const;
            substitute_function_type substitute_function_value( &::SireMol::Perturbations::substitute );
            
            Perturbations_exposer.def( 
                "substitute"
                , substitute_function_value
                , ( bp::arg("old_symbol"), bp::arg("new_symbol") )
                , "" );
        
        }
        { //::SireMol::Perturbations::toString
        
            typedef ::QString ( ::SireMol::Perturbations::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Perturbations::toString );
            
            Perturbations_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::Perturbations::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Perturbations::typeName );
            
            Perturbations_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::Perturbations::wouldChange
        
            typedef bool ( ::SireMol::Perturbations::*wouldChange_function_type)( ::SireMol::Molecule const &,::SireCAS::Values const & ) const;
            wouldChange_function_type wouldChange_function_value( &::SireMol::Perturbations::wouldChange );
            
            Perturbations_exposer.def( 
                "wouldChange"
                , wouldChange_function_value
                , ( bp::arg("molecule"), bp::arg("values") )
                , "Return whether or not these perturbations with the passed values would\nchange the molecule molecule" );
        
        }
        Perturbations_exposer.staticmethod( "typeName" );
        Perturbations_exposer.def( "__copy__", &__copy__);
        Perturbations_exposer.def( "__deepcopy__", &__copy__);
        Perturbations_exposer.def( "clone", &__copy__);
        Perturbations_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Perturbations >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Perturbations_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Perturbations >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Perturbations_exposer.def( "__getstate_manages_dict__", true);
        Perturbations_exposer.def( "__safe_for_unpickling__", true);
        Perturbations_exposer.def( "__setstate__", &__setstate__base64< ::SireMol::Perturbations > );
        Perturbations_exposer.def( "__getstate__", &__getstate__base64< ::SireMol::Perturbations > );
        Perturbations_exposer.def( "__str__", &__str__< ::SireMol::Perturbations > );
        Perturbations_exposer.def( "__repr__", &__str__< ::SireMol::Perturbations > );
    }

}
