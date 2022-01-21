// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "SegCGID.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "groupgroupids.h"

#include "groupgroupids.h"

SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> __copy__(const SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> &other){ return SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_SegCGID_class(){

    { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >
        typedef bp::class_< SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >, bp::bases< SireMol::GroupAtomIDBase, SireMol::AtomID, SireID::ID > > SegCGID_exposer_t;
        SegCGID_exposer_t SegCGID_exposer = SegCGID_exposer_t( "SegCGID", "", bp::init< >("") );
        bp::scope SegCGID_scope( SegCGID_exposer );
        SegCGID_exposer.def( bp::init< SireMol::SegID const &, SireMol::CGID const & >(( bp::arg("group0"), bp::arg("group1") ), "") );
        SegCGID_exposer.def( bp::init< SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > const & >(( bp::arg("other") ), "") );
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::hash
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef ::uint ( ::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::hash );
            
            SegCGID_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::isNull
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef bool ( ::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::isNull );
            
            SegCGID_exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::map
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::map );
            
            SegCGID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        SegCGID_exposer.def( bp::self != bp::self );
        SegCGID_exposer.def( bp::self == bp::other< SireID::ID >() );
        SegCGID_exposer.def( bp::self == bp::self );
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::toString
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef ::QString ( ::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::toString );
            
            SegCGID_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::typeName
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::typeName );
            
            SegCGID_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::what
        
            typedef SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID > exported_class_t;
            typedef char const * ( ::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::GroupGroupID< SireMol::SegID, SireMol::CGID >::what );
            
            SegCGID_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        SegCGID_exposer.staticmethod( "typeName" );
        SegCGID_exposer.def( "__copy__", &__copy__);
        SegCGID_exposer.def( "__deepcopy__", &__copy__);
        SegCGID_exposer.def( "clone", &__copy__);
        SegCGID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegCGID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SegCGID_exposer.def( "__getstate_manages_dict__", true);
        SegCGID_exposer.def( "__safe_for_unpickling__", true);
        SegCGID_exposer.def( "__setstate__", &__setstate__base64< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> > );
        SegCGID_exposer.def( "__getstate__", &__getstate__base64< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> > );
        SegCGID_exposer.def( "__str__", &__str__< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> > );
        SegCGID_exposer.def( "__repr__", &__str__< ::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID> > );
        SegCGID_exposer.def( "__hash__", &::SireMol::GroupGroupID<SireMol::SegID, SireMol::CGID>::hash );
    }

}
