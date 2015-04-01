// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Sphere.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "sphere.h"

#include "sphere.h"

SireMaths::Sphere __copy__(const SireMaths::Sphere &other){ return SireMaths::Sphere(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMaths::Sphere&){ return "SireMaths::Sphere";}

void register_Sphere_class(){

    { //::SireMaths::Sphere
        typedef bp::class_< SireMaths::Sphere > Sphere_exposer_t;
        Sphere_exposer_t Sphere_exposer = Sphere_exposer_t( "Sphere", bp::init< >() );
        bp::scope Sphere_scope( Sphere_exposer );
        Sphere_exposer.def( bp::init< double const & >(( bp::arg("radius") )) );
        Sphere_exposer.def( bp::init< SireMaths::Vector const &, double const & >(( bp::arg("position"), bp::arg("radius") )) );
        Sphere_exposer.def( bp::init< SireMaths::Sphere const & >(( bp::arg("other") )) );
        { //::SireMaths::Sphere::center
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::Sphere::*center_function_type )(  ) const;
            center_function_type center_function_value( &::SireMaths::Sphere::center );
            
            Sphere_exposer.def( 
                "center"
                , center_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        Sphere_exposer.def( bp::self != bp::self );
        Sphere_exposer.def( bp::self == bp::self );
        { //::SireMaths::Sphere::position
        
            typedef ::SireMaths::Vector const & ( ::SireMaths::Sphere::*position_function_type )(  ) const;
            position_function_type position_function_value( &::SireMaths::Sphere::position );
            
            Sphere_exposer.def( 
                "position"
                , position_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMaths::Sphere::radius
        
            typedef double ( ::SireMaths::Sphere::*radius_function_type )(  ) const;
            radius_function_type radius_function_value( &::SireMaths::Sphere::radius );
            
            Sphere_exposer.def( 
                "radius"
                , radius_function_value );
        
        }
        { //::SireMaths::Sphere::setCenter
        
            typedef void ( ::SireMaths::Sphere::*setCenter_function_type )( ::SireMaths::Vector const & ) ;
            setCenter_function_type setCenter_function_value( &::SireMaths::Sphere::setCenter );
            
            Sphere_exposer.def( 
                "setCenter"
                , setCenter_function_value
                , ( bp::arg("center") ) );
        
        }
        { //::SireMaths::Sphere::setPosition
        
            typedef void ( ::SireMaths::Sphere::*setPosition_function_type )( ::SireMaths::Vector const & ) ;
            setPosition_function_type setPosition_function_value( &::SireMaths::Sphere::setPosition );
            
            Sphere_exposer.def( 
                "setPosition"
                , setPosition_function_value
                , ( bp::arg("position") ) );
        
        }
        { //::SireMaths::Sphere::setRadius
        
            typedef void ( ::SireMaths::Sphere::*setRadius_function_type )( double ) ;
            setRadius_function_type setRadius_function_value( &::SireMaths::Sphere::setRadius );
            
            Sphere_exposer.def( 
                "setRadius"
                , setRadius_function_value
                , ( bp::arg("radius") ) );
        
        }
        { //::SireMaths::Sphere::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Sphere::typeName );
            
            Sphere_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMaths::Sphere::what
        
            typedef char const * ( ::SireMaths::Sphere::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireMaths::Sphere::what );
            
            Sphere_exposer.def( 
                "what"
                , what_function_value );
        
        }
        Sphere_exposer.staticmethod( "typeName" );
        Sphere_exposer.def( "__copy__", &__copy__);
        Sphere_exposer.def( "__deepcopy__", &__copy__);
        Sphere_exposer.def( "clone", &__copy__);
        Sphere_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Sphere >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sphere_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Sphere >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Sphere_exposer.def( "__str__", &pvt_get_name);
        Sphere_exposer.def( "__repr__", &pvt_get_name);
    }

}
