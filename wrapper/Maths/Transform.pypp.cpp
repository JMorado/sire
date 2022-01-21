// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Transform.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/accumulator.h"

#include "SireMaths/align.h"

#include "SireStream/datastream.h"

#include "align.h"

#include "tostring.h"

#include <QElapsedTimer>

#include <gsl/gsl_blas.h>

#include <gsl/gsl_linalg.h>

#include <gsl/gsl_matrix.h>

#include <gsl/gsl_vector.h>

#include "align.h"

SireMaths::Transform __copy__(const SireMaths::Transform &other){ return SireMaths::Transform(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Transform_class(){

    { //::SireMaths::Transform
        typedef bp::class_< SireMaths::Transform > Transform_exposer_t;
        Transform_exposer_t Transform_exposer = Transform_exposer_t( "Transform", "This class holds everything needed to apply a transformation on a set\nof points. This holds the amount by which to translate the points, together\nwith the center of rotation and amount by which to rotate\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor (no transformation)") );
        bp::scope Transform_scope( Transform_exposer );
        Transform_exposer.def( bp::init< SireMaths::Vector const & >(( bp::arg("delta") ), "Construct to only translate by delta") );
        Transform_exposer.def( bp::init< SireMaths::Quaternion const &, SireMaths::Vector const & >(( bp::arg("rotmat"), bp::arg("center") ), "Construct to only rotate using rotmat around the rotation center center") );
        Transform_exposer.def( bp::init< SireMaths::Matrix const &, SireMaths::Vector const & >(( bp::arg("rotmat"), bp::arg("center") ), "Construct to only rotate using rotmat around the rotation center center") );
        Transform_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Quaternion const &, SireMaths::Vector const & >(( bp::arg("delta"), bp::arg("rotmat"), bp::arg("center") ), "Construct to translate by delta and to rotate using rotmat around the rotation\ncenter center") );
        Transform_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Matrix const &, SireMaths::Vector const & >(( bp::arg("delta"), bp::arg("rotmat"), bp::arg("center") ), "Construct to translate by delta and to rotate using rotmat around the rotation\ncenter center") );
        Transform_exposer.def( bp::init< SireMaths::Transform const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMaths::Transform::apply
        
            typedef ::SireMaths::Vector ( ::SireMaths::Transform::*apply_function_type)( ::SireMaths::Vector const & ) const;
            apply_function_type apply_function_value( &::SireMaths::Transform::apply );
            
            Transform_exposer.def( 
                "apply"
                , apply_function_value
                , ( bp::arg("point") )
                , "Apply this transformation to the passed point, returning the result" );
        
        }
        { //::SireMaths::Transform::apply
        
            typedef ::QVector< SireMaths::Vector > ( ::SireMaths::Transform::*apply_function_type)( ::QVector< SireMaths::Vector > const & ) const;
            apply_function_type apply_function_value( &::SireMaths::Transform::apply );
            
            Transform_exposer.def( 
                "apply"
                , apply_function_value
                , ( bp::arg("points") )
                , "Apply this transformation to all of the passed points, returning the results" );
        
        }
        { //::SireMaths::Transform::isNull
        
            typedef bool ( ::SireMaths::Transform::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMaths::Transform::isNull );
            
            Transform_exposer.def( 
                "isNull"
                , isNull_function_value
                , "Return whether this is null (has no transformation)" );
        
        }
        { //::SireMaths::Transform::isZero
        
            typedef bool ( ::SireMaths::Transform::*isZero_function_type)(  ) const;
            isZero_function_type isZero_function_value( &::SireMaths::Transform::isZero );
            
            Transform_exposer.def( 
                "isZero"
                , isZero_function_value
                , "Return whether this is zero (has no transformation)" );
        
        }
        Transform_exposer.def( bp::self != bp::self );
        { //::SireMaths::Transform::operator()
        
            typedef ::SireMaths::Vector ( ::SireMaths::Transform::*__call___function_type)( ::SireMaths::Vector const & ) const;
            __call___function_type __call___function_value( &::SireMaths::Transform::operator() );
            
            Transform_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("point") )
                , "" );
        
        }
        { //::SireMaths::Transform::operator()
        
            typedef ::QVector< SireMaths::Vector > ( ::SireMaths::Transform::*__call___function_type)( ::QVector< SireMaths::Vector > const & ) const;
            __call___function_type __call___function_value( &::SireMaths::Transform::operator() );
            
            Transform_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("point") )
                , "" );
        
        }
        { //::SireMaths::Transform::operator=
        
            typedef ::SireMaths::Transform & ( ::SireMaths::Transform::*assign_function_type)( ::SireMaths::Transform const & ) ;
            assign_function_type assign_function_value( &::SireMaths::Transform::operator= );
            
            Transform_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Transform_exposer.def( bp::self == bp::self );
        { //::SireMaths::Transform::rotationCenter
        
            typedef ::SireMaths::Vector ( ::SireMaths::Transform::*rotationCenter_function_type)(  ) const;
            rotationCenter_function_type rotationCenter_function_value( &::SireMaths::Transform::rotationCenter );
            
            Transform_exposer.def( 
                "rotationCenter"
                , rotationCenter_function_value
                , "Return the center of rotation" );
        
        }
        { //::SireMaths::Transform::rotationMatrix
        
            typedef ::SireMaths::Matrix ( ::SireMaths::Transform::*rotationMatrix_function_type)(  ) const;
            rotationMatrix_function_type rotationMatrix_function_value( &::SireMaths::Transform::rotationMatrix );
            
            Transform_exposer.def( 
                "rotationMatrix"
                , rotationMatrix_function_value
                , "Return the rotation matrix" );
        
        }
        { //::SireMaths::Transform::rotationQuaternion
        
            typedef ::SireMaths::Quaternion ( ::SireMaths::Transform::*rotationQuaternion_function_type)(  ) const;
            rotationQuaternion_function_type rotationQuaternion_function_value( &::SireMaths::Transform::rotationQuaternion );
            
            Transform_exposer.def( 
                "rotationQuaternion"
                , rotationQuaternion_function_value
                , "Return the rotation matrix as a quaternion" );
        
        }
        { //::SireMaths::Transform::toString
        
            typedef ::QString ( ::SireMaths::Transform::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Transform::toString );
            
            Transform_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMaths::Transform::translationDelta
        
            typedef ::SireMaths::Vector ( ::SireMaths::Transform::*translationDelta_function_type)(  ) const;
            translationDelta_function_type translationDelta_function_value( &::SireMaths::Transform::translationDelta );
            
            Transform_exposer.def( 
                "translationDelta"
                , translationDelta_function_value
                , "Return the amount by which to translate" );
        
        }
        { //::SireMaths::Transform::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Transform::typeName );
            
            Transform_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMaths::Transform::what
        
            typedef char const * ( ::SireMaths::Transform::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::Transform::what );
            
            Transform_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        Transform_exposer.staticmethod( "typeName" );
        Transform_exposer.def( "__copy__", &__copy__);
        Transform_exposer.def( "__deepcopy__", &__copy__);
        Transform_exposer.def( "clone", &__copy__);
        Transform_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Transform >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Transform_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Transform >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Transform_exposer.def( "__getstate_manages_dict__", true);
        Transform_exposer.def( "__safe_for_unpickling__", true);
        Transform_exposer.def( "__setstate__", &__setstate__base64< ::SireMaths::Transform > );
        Transform_exposer.def( "__getstate__", &__getstate__base64< ::SireMaths::Transform > );
        Transform_exposer.def( "__str__", &__str__< ::SireMaths::Transform > );
        Transform_exposer.def( "__repr__", &__str__< ::SireMaths::Transform > );
    }

}
