// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ComplexPower.pypp.hpp"

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

SireCAS::ComplexPower __copy__(const SireCAS::ComplexPower &other){ return SireCAS::ComplexPower(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ComplexPower_class(){

    { //::SireCAS::ComplexPower
        typedef bp::class_< SireCAS::ComplexPower, bp::bases< SireCAS::PowerFunction, SireCAS::ExBase > > ComplexPower_exposer_t;
        ComplexPower_exposer_t ComplexPower_exposer = ComplexPower_exposer_t( "ComplexPower", "This class represents an expression raised to a complex power", bp::init< >("Null constructor") );
        bp::scope ComplexPower_scope( ComplexPower_exposer );
        ComplexPower_exposer.def( bp::init< SireCAS::Expression const &, SireMaths::Complex const & >(( bp::arg("expression"), bp::arg("power") ), "Construct expression^power") );
        ComplexPower_exposer.def( bp::init< SireCAS::ComplexPower const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ComplexPower::evaluate
        
            typedef double ( ::SireCAS::ComplexPower::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ComplexPower::evaluate );
            
            ComplexPower_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this power" );
        
        }
        { //::SireCAS::ComplexPower::evaluate
        
            typedef ::SireMaths::Complex ( ::SireCAS::ComplexPower::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ComplexPower::evaluate );
            
            ComplexPower_exposer.def( 
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , "Evaluate this power" );
        
        }
        { //::SireCAS::ComplexPower::hash
        
            typedef ::uint ( ::SireCAS::ComplexPower::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireCAS::ComplexPower::hash );
            
            ComplexPower_exposer.def( 
                "hash"
                , hash_function_value
                , "Return a hash of this power" );
        
        }
        { //::SireCAS::ComplexPower::isComplex
        
            typedef bool ( ::SireCAS::ComplexPower::*isComplex_function_type)(  ) const;
            isComplex_function_type isComplex_function_value( &::SireCAS::ComplexPower::isComplex );
            
            ComplexPower_exposer.def( 
                "isComplex"
                , isComplex_function_value
                , "" );
        
        }
        ComplexPower_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::ComplexPower::power
        
            typedef ::SireCAS::Expression ( ::SireCAS::ComplexPower::*power_function_type)(  ) const;
            power_function_type power_function_value( &::SireCAS::ComplexPower::power );
            
            ComplexPower_exposer.def( 
                "power"
                , power_function_value
                , "" );
        
        }
        { //::SireCAS::ComplexPower::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ComplexPower::typeName );
            
            ComplexPower_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireCAS::ComplexPower::what
        
            typedef char const * ( ::SireCAS::ComplexPower::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ComplexPower::what );
            
            ComplexPower_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ComplexPower_exposer.staticmethod( "typeName" );
        ComplexPower_exposer.def( "__copy__", &__copy__);
        ComplexPower_exposer.def( "__deepcopy__", &__copy__);
        ComplexPower_exposer.def( "clone", &__copy__);
        ComplexPower_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ComplexPower >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ComplexPower_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ComplexPower >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ComplexPower_exposer.def( "__getstate_manages_dict__", true);
        ComplexPower_exposer.def( "__safe_for_unpickling__", true);
        ComplexPower_exposer.def( "__setstate__", &__setstate__base64< ::SireCAS::ComplexPower > );
        ComplexPower_exposer.def( "__getstate__", &__getstate__base64< ::SireCAS::ComplexPower > );
        ComplexPower_exposer.def( "__str__", &__str__< ::SireCAS::ComplexPower > );
        ComplexPower_exposer.def( "__repr__", &__str__< ::SireCAS::ComplexPower > );
        ComplexPower_exposer.def( "__hash__", &::SireCAS::ComplexPower::hash );
    }

}
