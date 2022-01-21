// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AverageAndStddev.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "accumulator.h"

#include "histogram.h"

#include <QDebug>

#include <QMutex>

#include <cmath>

#include "accumulator.h"

SireMaths::AverageAndStddev __copy__(const SireMaths::AverageAndStddev &other){ return SireMaths::AverageAndStddev(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AverageAndStddev_class(){

    { //::SireMaths::AverageAndStddev
        typedef bp::class_< SireMaths::AverageAndStddev, bp::bases< SireMaths::Average, SireMaths::Accumulator, SireBase::Property > > AverageAndStddev_exposer_t;
        AverageAndStddev_exposer_t AverageAndStddev_exposer = AverageAndStddev_exposer_t( "AverageAndStddev", "This class is used to accumulate the mean average\nand standard deviation of a collection of values\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty average") );
        bp::scope AverageAndStddev_scope( AverageAndStddev_exposer );
        AverageAndStddev_exposer.def( bp::init< SireMaths::AverageAndStddev const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMaths::AverageAndStddev::accumulate
        
            typedef void ( ::SireMaths::AverageAndStddev::*accumulate_function_type)( double ) ;
            accumulate_function_type accumulate_function_value( &::SireMaths::AverageAndStddev::accumulate );
            
            AverageAndStddev_exposer.def( 
                "accumulate"
                , accumulate_function_value
                , ( bp::arg("value") )
                , "Accumulate the average and standard deviation" );
        
        }
        { //::SireMaths::AverageAndStddev::clear
        
            typedef void ( ::SireMaths::AverageAndStddev::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMaths::AverageAndStddev::clear );
            
            AverageAndStddev_exposer.def( 
                "clear"
                , clear_function_value
                , "Completely clear the statistics in this accumulator" );
        
        }
        { //::SireMaths::AverageAndStddev::meanOfSquares
        
            typedef double ( ::SireMaths::AverageAndStddev::*meanOfSquares_function_type)(  ) const;
            meanOfSquares_function_type meanOfSquares_function_value( &::SireMaths::AverageAndStddev::meanOfSquares );
            
            AverageAndStddev_exposer.def( 
                "meanOfSquares"
                , meanOfSquares_function_value
                , "Return the mean average of the squares" );
        
        }
        AverageAndStddev_exposer.def( bp::self != bp::self );
        AverageAndStddev_exposer.def( bp::self + bp::self );
        { //::SireMaths::AverageAndStddev::operator=
        
            typedef ::SireMaths::AverageAndStddev & ( ::SireMaths::AverageAndStddev::*assign_function_type)( ::SireMaths::AverageAndStddev const & ) ;
            assign_function_type assign_function_value( &::SireMaths::AverageAndStddev::operator= );
            
            AverageAndStddev_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AverageAndStddev_exposer.def( bp::self == bp::self );
        { //::SireMaths::AverageAndStddev::standardDeviation
        
            typedef double ( ::SireMaths::AverageAndStddev::*standardDeviation_function_type)(  ) const;
            standardDeviation_function_type standardDeviation_function_value( &::SireMaths::AverageAndStddev::standardDeviation );
            
            AverageAndStddev_exposer.def( 
                "standardDeviation"
                , standardDeviation_function_value
                , "Return the standard deviation of the average\n(calculated as the sqrt of the mean of the squares minus\nthe square of the mean)" );
        
        }
        { //::SireMaths::AverageAndStddev::standardError
        
            typedef double ( ::SireMaths::AverageAndStddev::*standardError_function_type)(  ) const;
            standardError_function_type standardError_function_value( &::SireMaths::AverageAndStddev::standardError );
            
            AverageAndStddev_exposer.def( 
                "standardError"
                , standardError_function_value
                , "Return the standard error on the average" );
        
        }
        { //::SireMaths::AverageAndStddev::standardError
        
            typedef double ( ::SireMaths::AverageAndStddev::*standardError_function_type)( int ) const;
            standardError_function_type standardError_function_value( &::SireMaths::AverageAndStddev::standardError );
            
            AverageAndStddev_exposer.def( 
                "standardError"
                , standardError_function_value
                , ( bp::arg("level") )
                , "Return the standard error calculated to the passed level\n(66, 90, 95 or 99%)" );
        
        }
        { //::SireMaths::AverageAndStddev::stddev
        
            typedef double ( ::SireMaths::AverageAndStddev::*stddev_function_type)(  ) const;
            stddev_function_type stddev_function_value( &::SireMaths::AverageAndStddev::stddev );
            
            AverageAndStddev_exposer.def( 
                "stddev"
                , stddev_function_value
                , "Return the standard deviation of the average\n(calculated as the sqrt of the mean of the squares minus\nthe square of the mean)" );
        
        }
        { //::SireMaths::AverageAndStddev::toString
        
            typedef ::QString ( ::SireMaths::AverageAndStddev::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::AverageAndStddev::toString );
            
            AverageAndStddev_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMaths::AverageAndStddev::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::AverageAndStddev::typeName );
            
            AverageAndStddev_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        AverageAndStddev_exposer.staticmethod( "typeName" );
        AverageAndStddev_exposer.def( "__copy__", &__copy__);
        AverageAndStddev_exposer.def( "__deepcopy__", &__copy__);
        AverageAndStddev_exposer.def( "clone", &__copy__);
        AverageAndStddev_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::AverageAndStddev >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AverageAndStddev_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::AverageAndStddev >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AverageAndStddev_exposer.def( "__getstate_manages_dict__", true);
        AverageAndStddev_exposer.def( "__safe_for_unpickling__", true);
        AverageAndStddev_exposer.def( "__setstate__", &__setstate__base64< ::SireMaths::AverageAndStddev > );
        AverageAndStddev_exposer.def( "__getstate__", &__getstate__base64< ::SireMaths::AverageAndStddev > );
        AverageAndStddev_exposer.def( "__str__", &__str__< ::SireMaths::AverageAndStddev > );
        AverageAndStddev_exposer.def( "__repr__", &__str__< ::SireMaths::AverageAndStddev > );
    }

}
