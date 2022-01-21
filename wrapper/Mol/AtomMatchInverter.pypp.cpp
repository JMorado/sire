// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomMatchInverter.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "atomidentifier.h"

#include "atomidx.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "atomname.h"

#include "atomselection.h"

#include "evaluator.h"

#include "moleculeinfodata.h"

#include "moleculeview.h"

#include "tostring.h"

#include "atommatcher.h"

SireMol::AtomMatchInverter __copy__(const SireMol::AtomMatchInverter &other){ return SireMol::AtomMatchInverter(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomMatchInverter_class(){

    { //::SireMol::AtomMatchInverter
        typedef bp::class_< SireMol::AtomMatchInverter, bp::bases< SireMol::AtomMatcher, SireBase::Property > > AtomMatchInverter_exposer_t;
        AtomMatchInverter_exposer_t AtomMatchInverter_exposer = AtomMatchInverter_exposer_t( "AtomMatchInverter", "This is a atom matcher that inverts the match of the sub-matcher.\nThis is useful when you want to match from molecule 1 to molecule 0\nas opposed to molecule 0 to molecule 1, and but dont want to change\nthe order of the match at the calling site\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope AtomMatchInverter_scope( AtomMatchInverter_exposer );
        AtomMatchInverter_exposer.def( bp::init< SireMol::AtomMatcher const & >(( bp::arg("matcher") ), "Constructor") );
        AtomMatchInverter_exposer.def( bp::init< SireMol::AtomMatchInverter const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::AtomMatchInverter::isNull
        
            typedef bool ( ::SireMol::AtomMatchInverter::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::AtomMatchInverter::isNull );
            
            AtomMatchInverter_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        AtomMatchInverter_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomMatchInverter::operator=
        
            typedef ::SireMol::AtomMatchInverter & ( ::SireMol::AtomMatchInverter::*assign_function_type)( ::SireMol::AtomMatchInverter const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomMatchInverter::operator= );
            
            AtomMatchInverter_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomMatchInverter_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomMatchInverter::toString
        
            typedef ::QString ( ::SireMol::AtomMatchInverter::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomMatchInverter::toString );
            
            AtomMatchInverter_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::AtomMatchInverter::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomMatchInverter::typeName );
            
            AtomMatchInverter_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::AtomMatchInverter::what
        
            typedef char const * ( ::SireMol::AtomMatchInverter::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomMatchInverter::what );
            
            AtomMatchInverter_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        AtomMatchInverter_exposer.staticmethod( "typeName" );
        AtomMatchInverter_exposer.def( "__copy__", &__copy__);
        AtomMatchInverter_exposer.def( "__deepcopy__", &__copy__);
        AtomMatchInverter_exposer.def( "clone", &__copy__);
        AtomMatchInverter_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomMatchInverter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMatchInverter_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomMatchInverter >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMatchInverter_exposer.def( "__getstate_manages_dict__", true);
        AtomMatchInverter_exposer.def( "__safe_for_unpickling__", true);
        AtomMatchInverter_exposer.def( "__setstate__", &__setstate__base64< ::SireMol::AtomMatchInverter > );
        AtomMatchInverter_exposer.def( "__getstate__", &__getstate__base64< ::SireMol::AtomMatchInverter > );
        AtomMatchInverter_exposer.def( "__str__", &__str__< ::SireMol::AtomMatchInverter > );
        AtomMatchInverter_exposer.def( "__repr__", &__str__< ::SireMol::AtomMatchInverter > );
    }

}
