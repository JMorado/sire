// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Rational.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "maths.h"

#include "rational.h"

#include <QDataStream>

#include <boost/rational.hpp>

#include "rational.h"

SireMaths::Rational __copy__(const SireMaths::Rational &other){ return SireMaths::Rational(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Rational_class(){

    { //::SireMaths::Rational
        typedef bp::class_< SireMaths::Rational > Rational_exposer_t;
        Rational_exposer_t Rational_exposer = Rational_exposer_t( "Rational", "Thin wrapper around boost::rational - cannot use directly as it kills\ncompilers", bp::init< >("") );
        bp::scope Rational_scope( Rational_exposer );
        Rational_exposer.def( bp::init< qint32 >(( bp::arg("number") ), "") );
        Rational_exposer.def( bp::init< qint32, qint32 >(( bp::arg("numerator"), bp::arg("denominator") ), "") );
        Rational_exposer.def( bp::init< SireMaths::Rational const & >(( bp::arg("other") ), "") );
        { //::SireMaths::Rational::denominator
        
            typedef ::qint32 ( ::SireMaths::Rational::*denominator_function_type)(  ) const;
            denominator_function_type denominator_function_value( &::SireMaths::Rational::denominator );
            
            Rational_exposer.def( 
                "denominator"
                , denominator_function_value
                , "" );
        
        }
        { //::SireMaths::Rational::numerator
        
            typedef ::qint32 ( ::SireMaths::Rational::*numerator_function_type)(  ) const;
            numerator_function_type numerator_function_value( &::SireMaths::Rational::numerator );
            
            Rational_exposer.def( 
                "numerator"
                , numerator_function_value
                , "" );
        
        }
        Rational_exposer.def( !bp::self );
        Rational_exposer.def( bp::self != bp::self );
        Rational_exposer.def( bp::self != bp::other< qint32 >() );
        Rational_exposer.def( -bp::self );
        Rational_exposer.def( bp::self < bp::self );
        Rational_exposer.def( bp::self < bp::other< qint32 >() );
        Rational_exposer.def( bp::self <= bp::self );
        Rational_exposer.def( bp::self <= bp::other< qint32 >() );
        { //::SireMaths::Rational::operator=
        
            typedef ::SireMaths::Rational & ( ::SireMaths::Rational::*assign_function_type)( ::SireMaths::Rational const & ) ;
            assign_function_type assign_function_value( &::SireMaths::Rational::operator= );
            
            Rational_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMaths::Rational::operator=
        
            typedef ::SireMaths::Rational & ( ::SireMaths::Rational::*assign_function_type)( ::qint32 ) ;
            assign_function_type assign_function_value( &::SireMaths::Rational::operator= );
            
            Rational_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("number") )
                , bp::return_self< >()
                , "" );
        
        }
        Rational_exposer.def( bp::self == bp::self );
        Rational_exposer.def( bp::self == bp::other< qint32 >() );
        Rational_exposer.def( bp::self > bp::self );
        Rational_exposer.def( bp::self > bp::other< qint32 >() );
        Rational_exposer.def( bp::self >= bp::self );
        Rational_exposer.def( bp::self >= bp::other< qint32 >() );
        { //::SireMaths::Rational::toString
        
            typedef ::QString ( ::SireMaths::Rational::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Rational::toString );
            
            Rational_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        Rational_exposer.def( "__copy__", &__copy__);
        Rational_exposer.def( "__deepcopy__", &__copy__);
        Rational_exposer.def( "clone", &__copy__);
        Rational_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Rational >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Rational_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Rational >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Rational_exposer.def( "__getstate_manages_dict__", true);
        Rational_exposer.def( "__safe_for_unpickling__", true);
        Rational_exposer.def( "__setstate__", &__setstate__base64< ::SireMaths::Rational > );
        Rational_exposer.def( "__getstate__", &__getstate__base64< ::SireMaths::Rational > );
        Rational_exposer.def( "__str__", &__str__< ::SireMaths::Rational > );
        Rational_exposer.def( "__repr__", &__str__< ::SireMaths::Rational > );
    }

}
