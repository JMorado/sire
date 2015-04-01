// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Beading.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atombeads.h"

#include "atomidx.h"

#include "atomselection.h"

#include "beadidx.h"

#include "beading.h"

#include "moleculedata.h"

#include "moleculeinfodata.h"

#include <boost/noncopyable.hpp>

#include "beading.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Beading_class(){

    { //::SireMol::Beading
        typedef bp::class_< SireMol::Beading, bp::bases< SireMol::MolViewProperty, SireBase::Property >, boost::noncopyable > Beading_exposer_t;
        Beading_exposer_t Beading_exposer = Beading_exposer_t( "Beading", bp::no_init );
        bp::scope Beading_scope( Beading_exposer );
        { //::SireMol::Beading::isCompatibleWith
        
            typedef bool ( ::SireMol::Beading::*isCompatibleWith_function_type )( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::Beading::isCompatibleWith );
            
            Beading_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::Beading::null
        
            typedef ::SireMol::NullBeading ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMol::Beading::null );
            
            Beading_exposer.def( 
                "null"
                , null_function_value );
        
        }
        { //::SireMol::Beading::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Beading::typeName );
            
            Beading_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        Beading_exposer.staticmethod( "null" );
        Beading_exposer.staticmethod( "typeName" );
        Beading_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Beading >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Beading_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Beading >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Beading_exposer.def( "__str__", &__str__< ::SireMol::Beading > );
        Beading_exposer.def( "__repr__", &__str__< ::SireMol::Beading > );
    }

}
