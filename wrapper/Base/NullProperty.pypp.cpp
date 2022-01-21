// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "NullProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireError/getbacktrace.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "property.h"

#include "propertylist.h"

#include <QDebug>

#include <QMutex>

#include "property.h"

SireBase::NullProperty __copy__(const SireBase::NullProperty &other){ return SireBase::NullProperty(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_NullProperty_class(){

    { //::SireBase::NullProperty
        typedef bp::class_< SireBase::NullProperty, bp::bases< SireBase::Property > > NullProperty_exposer_t;
        NullProperty_exposer_t NullProperty_exposer = NullProperty_exposer_t( "NullProperty", "This is a null property", bp::init< >("") );
        bp::scope NullProperty_scope( NullProperty_exposer );
        NullProperty_exposer.def( bp::init< SireBase::NullProperty const & >(( bp::arg("other") ), "") );
        { //::SireBase::NullProperty::toString
        
            typedef ::QString ( ::SireBase::NullProperty::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::NullProperty::toString );
            
            NullProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireBase::NullProperty::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireBase::NullProperty::typeName );
            
            NullProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        NullProperty_exposer.staticmethod( "typeName" );
        NullProperty_exposer.def( "__copy__", &__copy__);
        NullProperty_exposer.def( "__deepcopy__", &__copy__);
        NullProperty_exposer.def( "clone", &__copy__);
        NullProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::NullProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::NullProperty >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullProperty_exposer.def( "__getstate_manages_dict__", true);
        NullProperty_exposer.def( "__safe_for_unpickling__", true);
        NullProperty_exposer.def( "__setstate__", &__setstate__base64< ::SireBase::NullProperty > );
        NullProperty_exposer.def( "__getstate__", &__getstate__base64< ::SireBase::NullProperty > );
        NullProperty_exposer.def( "__str__", &__str__< ::SireBase::NullProperty > );
        NullProperty_exposer.def( "__repr__", &__str__< ::SireBase::NullProperty > );
    }

}
