// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "DistanceComponent.pypp.hpp"

namespace bp = boost::python;

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireVol/space.h"

#include "delta.h"

#include "distancecomponent.h"

#include "distancecomponent.h"

SireSystem::DistanceComponent __copy__(const SireSystem::DistanceComponent &other){ return SireSystem::DistanceComponent(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_DistanceComponent_class(){

    { //::SireSystem::DistanceComponent
        typedef bp::class_< SireSystem::DistanceComponent, bp::bases< SireSystem::GeometryComponent, SireSystem::Constraint, SireBase::Property > > DistanceComponent_exposer_t;
        DistanceComponent_exposer_t DistanceComponent_exposer = DistanceComponent_exposer_t( "DistanceComponent", "This is a constraint that constrains a symbol to equal the\nvalue of an expression that involves a distance between atoms\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope DistanceComponent_scope( DistanceComponent_exposer );
        DistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\ndistance between the two points point0 and point1") );
        DistanceComponent_exposer.def( bp::init< SireCAS::Symbol const &, SireFF::PointRef const &, SireFF::PointRef const &, SireCAS::Expression const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("constrained_symbol"), bp::arg("point0"), bp::arg("point1"), bp::arg("geometry_expression"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to set the value of constrained_symbol equal to the\nexpression based on the distance between the two points\npoint0 and point1") );
        DistanceComponent_exposer.def( bp::init< SireSystem::DistanceComponent const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireSystem::DistanceComponent::nPoints
        
            typedef int ( ::SireSystem::DistanceComponent::*nPoints_function_type)(  ) const;
            nPoints_function_type nPoints_function_value( &::SireSystem::DistanceComponent::nPoints );
            
            DistanceComponent_exposer.def( 
                "nPoints"
                , nPoints_function_value
                , "Return the number of points (2)" );
        
        }
        DistanceComponent_exposer.def( bp::self != bp::self );
        { //::SireSystem::DistanceComponent::operator=
        
            typedef ::SireSystem::DistanceComponent & ( ::SireSystem::DistanceComponent::*assign_function_type)( ::SireSystem::DistanceComponent const & ) ;
            assign_function_type assign_function_value( &::SireSystem::DistanceComponent::operator= );
            
            DistanceComponent_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        DistanceComponent_exposer.def( bp::self == bp::self );
        { //::SireSystem::DistanceComponent::point
        
            typedef ::SireFF::Point const & ( ::SireSystem::DistanceComponent::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireSystem::DistanceComponent::point );
            
            DistanceComponent_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the ith point\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireSystem::DistanceComponent::point0
        
            typedef ::SireFF::Point const & ( ::SireSystem::DistanceComponent::*point0_function_type)(  ) const;
            point0_function_type point0_function_value( &::SireSystem::DistanceComponent::point0 );
            
            DistanceComponent_exposer.def( 
                "point0"
                , point0_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the first point between which the distance is calculated" );
        
        }
        { //::SireSystem::DistanceComponent::point1
        
            typedef ::SireFF::Point const & ( ::SireSystem::DistanceComponent::*point1_function_type)(  ) const;
            point1_function_type point1_function_value( &::SireSystem::DistanceComponent::point1 );
            
            DistanceComponent_exposer.def( 
                "point1"
                , point1_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the second point between which the distance is calculated" );
        
        }
        { //::SireSystem::DistanceComponent::r
        
            typedef ::SireCAS::Symbol const & ( *r_function_type )(  );
            r_function_type r_function_value( &::SireSystem::DistanceComponent::r );
            
            DistanceComponent_exposer.def( 
                "r"
                , r_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the symbol that represents the distance between the\ntwo points (r)" );
        
        }
        { //::SireSystem::DistanceComponent::toString
        
            typedef ::QString ( ::SireSystem::DistanceComponent::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireSystem::DistanceComponent::toString );
            
            DistanceComponent_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireSystem::DistanceComponent::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::DistanceComponent::typeName );
            
            DistanceComponent_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        DistanceComponent_exposer.staticmethod( "r" );
        DistanceComponent_exposer.staticmethod( "typeName" );
        DistanceComponent_exposer.def( "__copy__", &__copy__);
        DistanceComponent_exposer.def( "__deepcopy__", &__copy__);
        DistanceComponent_exposer.def( "clone", &__copy__);
        DistanceComponent_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::DistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DistanceComponent_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::DistanceComponent >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        DistanceComponent_exposer.def( "__getstate_manages_dict__", true);
        DistanceComponent_exposer.def( "__safe_for_unpickling__", true);
        DistanceComponent_exposer.def( "__setstate__", &__setstate__base64< ::SireSystem::DistanceComponent > );
        DistanceComponent_exposer.def( "__getstate__", &__getstate__base64< ::SireSystem::DistanceComponent > );
        DistanceComponent_exposer.def( "__str__", &__str__< ::SireSystem::DistanceComponent > );
        DistanceComponent_exposer.def( "__repr__", &__str__< ::SireSystem::DistanceComponent > );
    }

}
