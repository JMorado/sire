// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AbortPacket.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "workpacket.h"

#include <QDebug>

#include <QTextStream>

#include "workpacket.h"

SireCluster::AbortPacket __copy__(const SireCluster::AbortPacket &other){ return SireCluster::AbortPacket(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireCluster::AbortPacket&){ return "SireCluster::AbortPacket";}

void register_AbortPacket_class(){

    { //::SireCluster::AbortPacket
        typedef bp::class_< SireCluster::AbortPacket, bp::bases< SireCluster::WorkPacketBase > > AbortPacket_exposer_t;
        AbortPacket_exposer_t AbortPacket_exposer = AbortPacket_exposer_t( "AbortPacket", bp::init< >() );
        bp::scope AbortPacket_scope( AbortPacket_exposer );
        AbortPacket_exposer.def( bp::init< SireCluster::AbortPacket const & >(( bp::arg("other") )) );
        { //::SireCluster::AbortPacket::hasFinished
        
            typedef bool ( ::SireCluster::AbortPacket::*hasFinished_function_type )(  ) const;
            hasFinished_function_type hasFinished_function_value( &::SireCluster::AbortPacket::hasFinished );
            
            AbortPacket_exposer.def( 
                "hasFinished"
                , hasFinished_function_value );
        
        }
        { //::SireCluster::AbortPacket::operator=
        
            typedef ::SireCluster::AbortPacket & ( ::SireCluster::AbortPacket::*assign_function_type )( ::SireCluster::AbortPacket const & ) ;
            assign_function_type assign_function_value( &::SireCluster::AbortPacket::operator= );
            
            AbortPacket_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireCluster::AbortPacket::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCluster::AbortPacket::typeName );
            
            AbortPacket_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireCluster::AbortPacket::wasAborted
        
            typedef bool ( ::SireCluster::AbortPacket::*wasAborted_function_type )(  ) const;
            wasAborted_function_type wasAborted_function_value( &::SireCluster::AbortPacket::wasAborted );
            
            AbortPacket_exposer.def( 
                "wasAborted"
                , wasAborted_function_value );
        
        }
        { //::SireCluster::AbortPacket::what
        
            typedef char const * ( ::SireCluster::AbortPacket::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireCluster::AbortPacket::what );
            
            AbortPacket_exposer.def( 
                "what"
                , what_function_value );
        
        }
        AbortPacket_exposer.staticmethod( "typeName" );
        AbortPacket_exposer.def( "__copy__", &__copy__);
        AbortPacket_exposer.def( "__deepcopy__", &__copy__);
        AbortPacket_exposer.def( "clone", &__copy__);
        AbortPacket_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCluster::AbortPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AbortPacket_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCluster::AbortPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AbortPacket_exposer.def( "__str__", &pvt_get_name);
        AbortPacket_exposer.def( "__repr__", &pvt_get_name);
    }

}
