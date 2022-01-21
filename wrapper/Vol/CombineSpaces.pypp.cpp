// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CombineSpaces.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/properties.h"

#include "SireStream/datastream.h"

#include "combinedspace.h"

#include "combinespaces.h"

#include "space.h"

#include "combinespaces.h"

SireVol::CombineSpaces __copy__(const SireVol::CombineSpaces &other){ return SireVol::CombineSpaces(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_CombineSpaces_class(){

    { //::SireVol::CombineSpaces
        typedef bp::class_< SireVol::CombineSpaces, bp::bases< SireBase::CombineProperties, SireBase::Property > > CombineSpaces_exposer_t;
        CombineSpaces_exposer_t CombineSpaces_exposer = CombineSpaces_exposer_t( "CombineSpaces", "This is a property which creates a SireVol::CombinedSpace object\nof the specified properties (which must all be space objects\nthemselves)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope CombineSpaces_scope( CombineSpaces_exposer );
        CombineSpaces_exposer.def( bp::init< SireBase::PropertyName const & >(( bp::arg("source") ), "Construct to use just as single space, from the supplied source") );
        CombineSpaces_exposer.def( bp::init< SireBase::PropertyName const &, SireBase::PropertyName const & >(( bp::arg("source0"), bp::arg("source1") ), "Construct to combine together the two spaces specified by the\ntwo supplied sources") );
        CombineSpaces_exposer.def( bp::init< QList< SireBase::PropertyName > const & >(( bp::arg("sources") ), "Construct to combine together the spaces from the passed sources") );
        CombineSpaces_exposer.def( bp::init< QVector< SireBase::PropertyName > const & >(( bp::arg("sources") ), "Construct to combine together the spaces from the passed sources") );
        CombineSpaces_exposer.def( bp::init< QList< QString > const & >(( bp::arg("sources") ), "Construct to combine together the spaces from the passed sources") );
        CombineSpaces_exposer.def( bp::init< QVector< QString > const & >(( bp::arg("sources") ), "Construct to combine together the spaces from the passed sources") );
        CombineSpaces_exposer.def( bp::init< SireVol::CombineSpaces const & >(( bp::arg("other") ), "Copy constructor") );
        CombineSpaces_exposer.def( bp::self != bp::self );
        { //::SireVol::CombineSpaces::operator=
        
            typedef ::SireVol::CombineSpaces & ( ::SireVol::CombineSpaces::*assign_function_type)( ::SireVol::CombineSpaces const & ) ;
            assign_function_type assign_function_value( &::SireVol::CombineSpaces::operator= );
            
            CombineSpaces_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CombineSpaces_exposer.def( bp::self == bp::self );
        { //::SireVol::CombineSpaces::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::CombineSpaces::typeName );
            
            CombineSpaces_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireVol::CombineSpaces::updateFrom
        
            typedef void ( ::SireVol::CombineSpaces::*updateFrom_function_type)( ::SireBase::Properties const & ) ;
            updateFrom_function_type updateFrom_function_value( &::SireVol::CombineSpaces::updateFrom );
            
            CombineSpaces_exposer.def( 
                "updateFrom"
                , updateFrom_function_value
                , ( bp::arg("properties") )
                , "Update this combined space by extracting the required space\nproperties from properties\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\nThrow: SireError::incompatible_error\n" );
        
        }
        CombineSpaces_exposer.staticmethod( "typeName" );
        CombineSpaces_exposer.def( "__copy__", &__copy__);
        CombineSpaces_exposer.def( "__deepcopy__", &__copy__);
        CombineSpaces_exposer.def( "clone", &__copy__);
        CombineSpaces_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::CombineSpaces >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombineSpaces_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::CombineSpaces >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombineSpaces_exposer.def( "__getstate_manages_dict__", true);
        CombineSpaces_exposer.def( "__safe_for_unpickling__", true);
        CombineSpaces_exposer.def( "__setstate__", &__setstate__base64< ::SireVol::CombineSpaces > );
        CombineSpaces_exposer.def( "__getstate__", &__getstate__base64< ::SireVol::CombineSpaces > );
        CombineSpaces_exposer.def( "__str__", &__str__< ::SireVol::CombineSpaces > );
        CombineSpaces_exposer.def( "__repr__", &__str__< ::SireVol::CombineSpaces > );
        CombineSpaces_exposer.def( "__len__", &__len_size< ::SireVol::CombineSpaces > );
    }

}
