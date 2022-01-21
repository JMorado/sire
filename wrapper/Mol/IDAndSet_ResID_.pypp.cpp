// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "IDAndSet_ResID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "chain.h"

#include "chainresid.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "resid.h"

#include "residentifier.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "withres.h"

#include "resid.h"

SireID::IDAndSet<SireMol::ResID> __copy__(const SireID::IDAndSet<SireMol::ResID> &other){ return SireID::IDAndSet<SireMol::ResID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_IDAndSet_ResID__class(){

    { //::SireID::IDAndSet< SireMol::ResID >
        typedef bp::class_< SireID::IDAndSet< SireMol::ResID >, bp::bases< SireMol::ResID, SireID::ID > > IDAndSet_ResID__exposer_t;
        IDAndSet_ResID__exposer_t IDAndSet_ResID__exposer = IDAndSet_ResID__exposer_t( "IDAndSet_ResID_", "", bp::init< >("") );
        bp::scope IDAndSet_ResID__scope( IDAndSet_ResID__exposer );
        IDAndSet_ResID__exposer.def( bp::init< SireMol::ResID const & >(( bp::arg("id") ), "") );
        IDAndSet_ResID__exposer.def( bp::init< SireMol::ResID const &, SireMol::ResID const & >(( bp::arg("id0"), bp::arg("id1") ), "") );
        IDAndSet_ResID__exposer.def( bp::init< QList< SireMol::ResIdentifier > const & >(( bp::arg("ids") ), "") );
        IDAndSet_ResID__exposer.def( bp::init< SireID::IDAndSet< SireMol::ResID > const & >(( bp::arg("ids") ), "") );
        IDAndSet_ResID__exposer.def( bp::init< SireID::IDAndSet< SireMol::ResID > const & >(( bp::arg("other") ), "") );
        { //::SireID::IDAndSet< SireMol::ResID >::IDs
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::QSet< SireMol::ResIdentifier > const & ( ::SireID::IDAndSet< SireMol::ResID >::*IDs_function_type)(  ) const;
            IDs_function_type IDs_function_value( &::SireID::IDAndSet< SireMol::ResID >::IDs );
            
            IDAndSet_ResID__exposer.def( 
                "IDs"
                , IDs_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::hash
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::uint ( ::SireID::IDAndSet< SireMol::ResID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::IDAndSet< SireMol::ResID >::hash );
            
            IDAndSet_ResID__exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::isNull
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef bool ( ::SireID::IDAndSet< SireMol::ResID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::IDAndSet< SireMol::ResID >::isNull );
            
            IDAndSet_ResID__exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::map
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::QList< SireMol::ResIdx > ( ::SireID::IDAndSet< SireMol::ResID >::*map_function_type)( ::SireID::IDAndSet< SireMol::ResID >::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::IDAndSet< SireMol::ResID >::map );
            
            IDAndSet_ResID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , "" );
        
        }
        IDAndSet_ResID__exposer.def( bp::self != bp::other< SireID::ID >() );
        IDAndSet_ResID__exposer.def( bp::self != bp::self );
        IDAndSet_ResID__exposer.def( bp::self != bp::other< SireMol::ResID >() );
        { //::SireID::IDAndSet< SireMol::ResID >::operator=
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::SireID::IDAndSet< SireMol::ResID > & ( ::SireID::IDAndSet< SireMol::ResID >::*assign_function_type)( ::SireID::IDAndSet< SireMol::ResID > const & ) ;
            assign_function_type assign_function_value( &::SireID::IDAndSet< SireMol::ResID >::operator= );
            
            IDAndSet_ResID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::operator=
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::SireID::IDAndSet< SireMol::ResID > & ( ::SireID::IDAndSet< SireMol::ResID >::*assign_function_type)( ::SireMol::ResID const & ) ;
            assign_function_type assign_function_value( &::SireID::IDAndSet< SireMol::ResID >::operator= );
            
            IDAndSet_ResID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IDAndSet_ResID__exposer.def( bp::self == bp::other< SireID::ID >() );
        IDAndSet_ResID__exposer.def( bp::self == bp::self );
        IDAndSet_ResID__exposer.def( bp::self == bp::other< SireMol::ResID >() );
        { //::SireID::IDAndSet< SireMol::ResID >::toString
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef ::QString ( ::SireID::IDAndSet< SireMol::ResID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::IDAndSet< SireMol::ResID >::toString );
            
            IDAndSet_ResID__exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::typeName
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::IDAndSet< SireMol::ResID >::typeName );
            
            IDAndSet_ResID__exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireID::IDAndSet< SireMol::ResID >::what
        
            typedef SireID::IDAndSet< SireMol::ResID > exported_class_t;
            typedef char const * ( ::SireID::IDAndSet< SireMol::ResID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::IDAndSet< SireMol::ResID >::what );
            
            IDAndSet_ResID__exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        IDAndSet_ResID__exposer.staticmethod( "typeName" );
        IDAndSet_ResID__exposer.def( "__copy__", &__copy__);
        IDAndSet_ResID__exposer.def( "__deepcopy__", &__copy__);
        IDAndSet_ResID__exposer.def( "clone", &__copy__);
        IDAndSet_ResID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::IDAndSet<SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAndSet_ResID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::IDAndSet<SireMol::ResID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAndSet_ResID__exposer.def( "__getstate_manages_dict__", true);
        IDAndSet_ResID__exposer.def( "__safe_for_unpickling__", true);
        IDAndSet_ResID__exposer.def( "__setstate__", &__setstate__base64< ::SireID::IDAndSet<SireMol::ResID> > );
        IDAndSet_ResID__exposer.def( "__getstate__", &__getstate__base64< ::SireID::IDAndSet<SireMol::ResID> > );
        IDAndSet_ResID__exposer.def( "__str__", &__str__< ::SireID::IDAndSet<SireMol::ResID> > );
        IDAndSet_ResID__exposer.def( "__repr__", &__str__< ::SireID::IDAndSet<SireMol::ResID> > );
        IDAndSet_ResID__exposer.def( "__hash__", &::SireID::IDAndSet<SireMol::ResID>::hash );
    }

}
