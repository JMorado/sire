// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "LJ1264Parameter.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "lj1264parameter.h"

#include "lj1264parameter.h"

SireMM::LJ1264Parameter __copy__(const SireMM::LJ1264Parameter &other){ return SireMM::LJ1264Parameter(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_LJ1264Parameter_class(){

    { //::SireMM::LJ1264Parameter
        typedef bp::class_< SireMM::LJ1264Parameter > LJ1264Parameter_exposer_t;
        LJ1264Parameter_exposer_t LJ1264Parameter_exposer = LJ1264Parameter_exposer_t( "LJ1264Parameter", "This class holds a LJ 12-6-4 parameter. These are used\nbetween some atom-pairs to define a 12-6-4 potential\nwith functional form\n\nE_LJ = A  r^12 - B  r^6 - C  r^4\n", bp::init< >("Construct a dummy LJ parameter") );
        bp::scope LJ1264Parameter_scope( LJ1264Parameter_exposer );
        LJ1264Parameter_exposer.def( bp::init< double, double, double >(( bp::arg("a"), bp::arg("b"), bp::arg("c") ), "Construct from specified parameters - note that you must have\n  converted these into the correct internal units (kcal mol-1, Angstrom)\n") );
        LJ1264Parameter_exposer.def( bp::init< SireUnits::Dimension::GeneralUnit const &, SireUnits::Dimension::GeneralUnit const &, SireUnits::Dimension::GeneralUnit const & >(( bp::arg("a"), bp::arg("b"), bp::arg("c") ), "Construct from the passed (dimensioned) values") );
        LJ1264Parameter_exposer.def( bp::init< SireMM::LJParameter const & >(( bp::arg("ljparam") ), "Construct from a LJParameter") );
        LJ1264Parameter_exposer.def( bp::init< SireMM::LJPair const & >(( bp::arg("ljpair") ), "Construct from an LJPair") );
        LJ1264Parameter_exposer.def( bp::init< SireMM::LJ1264Parameter const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::LJ1264Parameter::A
        
            typedef double ( ::SireMM::LJ1264Parameter::*A_function_type)(  ) const;
            A_function_type A_function_value( &::SireMM::LJ1264Parameter::A );
            
            LJ1264Parameter_exposer.def( 
                "A"
                , A_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::AUnit
        
            typedef ::SireUnits::Dimension::GeneralUnit ( *AUnit_function_type )(  );
            AUnit_function_type AUnit_function_value( &::SireMM::LJ1264Parameter::AUnit );
            
            LJ1264Parameter_exposer.def( 
                "AUnit"
                , AUnit_function_value
                , bp::release_gil_policy()
                , "Return the correct physical units for the A parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::B
        
            typedef double ( ::SireMM::LJ1264Parameter::*B_function_type)(  ) const;
            B_function_type B_function_value( &::SireMM::LJ1264Parameter::B );
            
            LJ1264Parameter_exposer.def( 
                "B"
                , B_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::BUnit
        
            typedef ::SireUnits::Dimension::GeneralUnit ( *BUnit_function_type )(  );
            BUnit_function_type BUnit_function_value( &::SireMM::LJ1264Parameter::BUnit );
            
            LJ1264Parameter_exposer.def( 
                "BUnit"
                , BUnit_function_value
                , bp::release_gil_policy()
                , "Return the correct physical units for the B parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::C
        
            typedef double ( ::SireMM::LJ1264Parameter::*C_function_type)(  ) const;
            C_function_type C_function_value( &::SireMM::LJ1264Parameter::C );
            
            LJ1264Parameter_exposer.def( 
                "C"
                , C_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::CUnit
        
            typedef ::SireUnits::Dimension::GeneralUnit ( *CUnit_function_type )(  );
            CUnit_function_type CUnit_function_value( &::SireMM::LJ1264Parameter::CUnit );
            
            LJ1264Parameter_exposer.def( 
                "CUnit"
                , CUnit_function_value
                , bp::release_gil_policy()
                , "Return the correct physical units for the C parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::assertIsLJParameter
        
            typedef void ( ::SireMM::LJ1264Parameter::*assertIsLJParameter_function_type)(  ) const;
            assertIsLJParameter_function_type assertIsLJParameter_function_value( &::SireMM::LJ1264Parameter::assertIsLJParameter );
            
            LJ1264Parameter_exposer.def( 
                "assertIsLJParameter"
                , assertIsLJParameter_function_value
                , bp::release_gil_policy()
                , "Assert that this is a standard 12-6 LJ parameter (C is 0)" );
        
        }
        { //::SireMM::LJ1264Parameter::dummy
        
            typedef ::SireMM::LJ1264Parameter ( *dummy_function_type )(  );
            dummy_function_type dummy_function_value( &::SireMM::LJ1264Parameter::dummy );
            
            LJ1264Parameter_exposer.def( 
                "dummy"
                , dummy_function_value
                , bp::release_gil_policy()
                , "Return a dummy LJ1264Parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::hasC
        
            typedef bool ( ::SireMM::LJ1264Parameter::*hasC_function_type)(  ) const;
            hasC_function_type hasC_function_value( &::SireMM::LJ1264Parameter::hasC );
            
            LJ1264Parameter_exposer.def( 
                "hasC"
                , hasC_function_value
                , bp::release_gil_policy()
                , "Return whether or not this has a C parameter. If so,\n  then it is a 12-6-4 parameter. If not, then it is a standard\n  12-6 parameter.\n" );
        
        }
        { //::SireMM::LJ1264Parameter::isDummy
        
            typedef bool ( ::SireMM::LJ1264Parameter::*isDummy_function_type)(  ) const;
            isDummy_function_type isDummy_function_value( &::SireMM::LJ1264Parameter::isDummy );
            
            LJ1264Parameter_exposer.def( 
                "isDummy"
                , isDummy_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::isLJParameter
        
            typedef bool ( ::SireMM::LJ1264Parameter::*isLJParameter_function_type)(  ) const;
            isLJParameter_function_type isLJParameter_function_value( &::SireMM::LJ1264Parameter::isLJParameter );
            
            LJ1264Parameter_exposer.def( 
                "isLJParameter"
                , isLJParameter_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a standard 12-6 LJ parameter" );
        
        }
        LJ1264Parameter_exposer.def( bp::self != bp::self );
        { //::SireMM::LJ1264Parameter::operator=
        
            typedef ::SireMM::LJ1264Parameter & ( ::SireMM::LJ1264Parameter::*assign_function_type)( ::SireMM::LJ1264Parameter const & ) ;
            assign_function_type assign_function_value( &::SireMM::LJ1264Parameter::operator= );
            
            LJ1264Parameter_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        LJ1264Parameter_exposer.def( bp::self == bp::self );
        { //::SireMM::LJ1264Parameter::toLJPair
        
            typedef ::SireMM::LJPair ( ::SireMM::LJ1264Parameter::*toLJPair_function_type)(  ) const;
            toLJPair_function_type toLJPair_function_value( &::SireMM::LJ1264Parameter::toLJPair );
            
            LJ1264Parameter_exposer.def( 
                "toLJPair"
                , toLJPair_function_value
                , bp::release_gil_policy()
                , "Return this converted to a standard 12-6 LJ parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::toLJParameter
        
            typedef ::SireMM::LJParameter ( ::SireMM::LJ1264Parameter::*toLJParameter_function_type)(  ) const;
            toLJParameter_function_type toLJParameter_function_value( &::SireMM::LJ1264Parameter::toLJParameter );
            
            LJ1264Parameter_exposer.def( 
                "toLJParameter"
                , toLJParameter_function_value
                , bp::release_gil_policy()
                , "Return this converted to a standard 12-6 LJ parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::toString
        
            typedef ::QString ( ::SireMM::LJ1264Parameter::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::LJ1264Parameter::toString );
            
            LJ1264Parameter_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of the LJ parameter" );
        
        }
        { //::SireMM::LJ1264Parameter::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::LJ1264Parameter::typeName );
            
            LJ1264Parameter_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::what
        
            typedef char const * ( ::SireMM::LJ1264Parameter::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::LJ1264Parameter::what );
            
            LJ1264Parameter_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::LJ1264Parameter::zeroLJ
        
            typedef bool ( ::SireMM::LJ1264Parameter::*zeroLJ_function_type)(  ) const;
            zeroLJ_function_type zeroLJ_function_value( &::SireMM::LJ1264Parameter::zeroLJ );
            
            LJ1264Parameter_exposer.def( 
                "zeroLJ"
                , zeroLJ_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        LJ1264Parameter_exposer.staticmethod( "AUnit" );
        LJ1264Parameter_exposer.staticmethod( "BUnit" );
        LJ1264Parameter_exposer.staticmethod( "CUnit" );
        LJ1264Parameter_exposer.staticmethod( "dummy" );
        LJ1264Parameter_exposer.staticmethod( "typeName" );
        LJ1264Parameter_exposer.def( "__copy__", &__copy__<SireMM::LJ1264Parameter>);
        LJ1264Parameter_exposer.def( "__deepcopy__", &__copy__<SireMM::LJ1264Parameter>);
        LJ1264Parameter_exposer.def( "clone", &__copy__<SireMM::LJ1264Parameter>);
        LJ1264Parameter_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJ1264Parameter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJ1264Parameter_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJ1264Parameter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJ1264Parameter_exposer.def_pickle(sire_pickle_suite< ::SireMM::LJ1264Parameter >());
        LJ1264Parameter_exposer.def( "__str__", &__str__< ::SireMM::LJ1264Parameter > );
        LJ1264Parameter_exposer.def( "__repr__", &__str__< ::SireMM::LJ1264Parameter > );
    }

}
