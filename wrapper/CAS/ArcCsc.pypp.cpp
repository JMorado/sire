// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ArcCsc.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "identities.h"

#include "invtrigfuncs.h"

#include "trigfuncs.h"

#include "invtrigfuncs.h"

SireCAS::ArcCsc __copy__(const SireCAS::ArcCsc &other){ return SireCAS::ArcCsc(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ArcCsc_class(){

    { //::SireCAS::ArcCsc
        typedef bp::class_< SireCAS::ArcCsc, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > ArcCsc_exposer_t;
        ArcCsc_exposer_t ArcCsc_exposer = ArcCsc_exposer_t( "ArcCsc", "Inverse-cosecant", bp::init< >("Null constructor") );
        bp::scope ArcCsc_scope( ArcCsc_exposer );
        ArcCsc_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        ArcCsc_exposer.def( bp::init< SireCAS::ArcCsc const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ArcCsc::evaluate
        
            typedef double ( ::SireCAS::ArcCsc::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcCsc::evaluate );
            
            ArcCsc_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this function" );
        
        }
        { //::SireCAS::ArcCsc::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::ArcCsc::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcCsc::evaluate );
            
            ArcCsc_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Complex evaluation" );
        
        }
        ArcCsc_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::ArcCsc::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ArcCsc::typeName );
            
            ArcCsc_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::ArcCsc::what
        
            typedef char const * ( ::SireCAS::ArcCsc::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ArcCsc::what );
            
            ArcCsc_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ArcCsc_exposer.staticmethod( "typeName" );
        ArcCsc_exposer.def( "__copy__", &__copy__);
        ArcCsc_exposer.def( "__deepcopy__", &__copy__);
        ArcCsc_exposer.def( "clone", &__copy__);
        ArcCsc_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ArcCsc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcCsc_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ArcCsc >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcCsc_exposer.def( "__getstate_manages_dict__", true);
        ArcCsc_exposer.def( "__safe_for_unpickling__", true);
        ArcCsc_exposer.def( "__setstate__", &__setstate__base64< ::SireCAS::ArcCsc > );
        ArcCsc_exposer.def( "__getstate__", &__getstate__base64< ::SireCAS::ArcCsc > );
        ArcCsc_exposer.def( "__str__", &__str__< ::SireCAS::ArcCsc > );
        ArcCsc_exposer.def( "__repr__", &__str__< ::SireCAS::ArcCsc > );
        ArcCsc_exposer.def( "__hash__", &::SireCAS::ArcCsc::hash );
    }

}
