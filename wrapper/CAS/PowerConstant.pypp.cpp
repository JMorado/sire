// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PowerConstant.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "expression.h"

#include "expressions.h"

#include "identities.h"

#include "integrationconstant.h"

#include "powerconstant.h"

#include "symbol.h"

#include "symbols.h"

#include "values.h"

#include <QDebug>

#include "powerconstant.h"

SireCAS::PowerConstant __copy__(const SireCAS::PowerConstant &other){ return SireCAS::PowerConstant(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_PowerConstant_class(){

    { //::SireCAS::PowerConstant
        typedef bp::class_< SireCAS::PowerConstant, bp::bases< SireCAS::PowerFunction, SireCAS::ExBase > > PowerConstant_exposer_t;
        PowerConstant_exposer_t PowerConstant_exposer = PowerConstant_exposer_t( "PowerConstant", "\nThis class represents a constant raised to a generic power, e.g. 10^x\n\nAuthor: Christopher Woods\n", bp::init< >("Create a null PowerConstant (0^0)") );
        bp::scope PowerConstant_scope( PowerConstant_exposer );
        PowerConstant_exposer.def( bp::init< double, SireCAS::Expression const & >(( bp::arg("val"), bp::arg("power") ), "Construct the PowerConstant val^power") );
        PowerConstant_exposer.def( bp::init< SireCAS::PowerConstant const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::PowerConstant::core
        
            typedef ::SireCAS::Expression ( ::SireCAS::PowerConstant::*core_function_type)(  ) const;
            core_function_type core_function_value( &::SireCAS::PowerConstant::core );
            
            PowerConstant_exposer.def( 
                "core"
                , core_function_value
                , "" );
        
        }
        { //::SireCAS::PowerConstant::evaluate
        
            typedef double ( ::SireCAS::PowerConstant::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::PowerConstant::evaluate );
            
            PowerConstant_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this function" );
        
        }
        { //::SireCAS::PowerConstant::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::PowerConstant::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::PowerConstant::evaluate );
            
            PowerConstant_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this function" );
        
        }
        { //::SireCAS::PowerConstant::hash
        
            typedef ::uint ( ::SireCAS::PowerConstant::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::PowerConstant::hash );
            
            PowerConstant_exposer.def( 
                "hash"
                , hash_function_value
                , "Return a hash of this power" );
        
        }
        PowerConstant_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::PowerConstant::power
        
            typedef ::SireCAS::Expression ( ::SireCAS::PowerConstant::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::PowerConstant::power );
            
            PowerConstant_exposer.def( 
                "power"
                , power_function_value
                , "" );
        
        }
        { //::SireCAS::PowerConstant::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::PowerConstant::typeName );
            
            PowerConstant_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::PowerConstant::what
        
            typedef char const * ( ::SireCAS::PowerConstant::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::PowerConstant::what );
            
            PowerConstant_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        PowerConstant_exposer.staticmethod( "typeName" );
        PowerConstant_exposer.def( "__copy__", &__copy__);
        PowerConstant_exposer.def( "__deepcopy__", &__copy__);
        PowerConstant_exposer.def( "clone", &__copy__);
        PowerConstant_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::PowerConstant >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PowerConstant_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::PowerConstant >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PowerConstant_exposer.def( "__getstate_manages_dict__", true);
        PowerConstant_exposer.def( "__safe_for_unpickling__", true);
        PowerConstant_exposer.def( "__setstate__", &__setstate__base64< ::SireCAS::PowerConstant > );
        PowerConstant_exposer.def( "__getstate__", &__getstate__base64< ::SireCAS::PowerConstant > );
        PowerConstant_exposer.def( "__str__", &__str__< ::SireCAS::PowerConstant > );
        PowerConstant_exposer.def( "__repr__", &__str__< ::SireCAS::PowerConstant > );
        PowerConstant_exposer.def( "__hash__", &::SireCAS::PowerConstant::hash );
    }

}
