// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Sinh.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "hyperbolicfuncs.h"

#include "identities.h"

#include "trigfuncs.h"

#include "hyperbolicfuncs.h"

SireCAS::Sinh __copy__(const SireCAS::Sinh &other){ return SireCAS::Sinh(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Sinh_class(){

    { //::SireCAS::Sinh
        typedef bp::class_< SireCAS::Sinh, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > Sinh_exposer_t;
        Sinh_exposer_t Sinh_exposer = Sinh_exposer_t( "Sinh", "Hyperbolic sine", bp::init< >("Null constructor") );
        bp::scope Sinh_scope( Sinh_exposer );
        Sinh_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        Sinh_exposer.def( bp::init< SireCAS::Sinh const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::Sinh::evaluate
        
            typedef double ( ::SireCAS::Sinh::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Sinh::evaluate );
            
            Sinh_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this function" );
        
        }
        { //::SireCAS::Sinh::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::Sinh::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Sinh::evaluate );
            
            Sinh_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Complex evaluation" );
        
        }
        Sinh_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Sinh::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Sinh::typeName );
            
            Sinh_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::Sinh::what
        
            typedef char const * ( ::SireCAS::Sinh::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Sinh::what );
            
            Sinh_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        Sinh_exposer.staticmethod( "typeName" );
        Sinh_exposer.def( "__copy__", &__copy__);
        Sinh_exposer.def( "__deepcopy__", &__copy__);
        Sinh_exposer.def( "clone", &__copy__);
        Sinh_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Sinh >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sinh_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Sinh >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sinh_exposer.def( "__getstate_manages_dict__", true);
        Sinh_exposer.def( "__safe_for_unpickling__", true);
        Sinh_exposer.def( "__setstate__", &__setstate__base64< ::SireCAS::Sinh > );
        Sinh_exposer.def( "__getstate__", &__getstate__base64< ::SireCAS::Sinh > );
        Sinh_exposer.def( "__str__", &__str__< ::SireCAS::Sinh > );
        Sinh_exposer.def( "__repr__", &__str__< ::SireCAS::Sinh > );
        Sinh_exposer.def( "__hash__", &::SireCAS::Sinh::hash );
    }

}
