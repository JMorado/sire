// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Specify_ChainID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "atom.h"

#include "chain.h"

#include "chainid.h"

#include "chainidentifier.h"

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

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "chainid.h"

SireID::Specify<SireMol::ChainID> __copy__(const SireID::Specify<SireMol::ChainID> &other){ return SireID::Specify<SireMol::ChainID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Specify_ChainID__class(){

    { //::SireID::Specify< SireMol::ChainID >
        typedef bp::class_< SireID::Specify< SireMol::ChainID >, bp::bases< SireMol::ChainID, SireID::ID > > Specify_ChainID__exposer_t;
        Specify_ChainID__exposer_t Specify_ChainID__exposer = Specify_ChainID__exposer_t( "Specify_ChainID_", bp::init< >() );
        bp::scope Specify_ChainID__scope( Specify_ChainID__exposer );
        Specify_ChainID__exposer.def( bp::init< SireMol::ChainID const &, qint32 >(( bp::arg("id"), bp::arg("i") )) );
        Specify_ChainID__exposer.def( bp::init< SireMol::ChainID const &, qint32, qint32 >(( bp::arg("id"), bp::arg("i"), bp::arg("j") )) );
        Specify_ChainID__exposer.def( bp::init< SireID::Specify< SireMol::ChainID > const & >(( bp::arg("other") )) );
        { //::SireID::Specify< SireMol::ChainID >::hash
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::uint ( ::SireID::Specify< SireMol::ChainID >::*hash_function_type )(  ) const;
            hash_function_type hash_function_value( &::SireID::Specify< SireMol::ChainID >::hash );
            
            Specify_ChainID__exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::isNull
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef bool ( ::SireID::Specify< SireMol::ChainID >::*isNull_function_type )(  ) const;
            isNull_function_type isNull_function_value( &::SireID::Specify< SireMol::ChainID >::isNull );
            
            Specify_ChainID__exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::map
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::QList< SireMol::ChainIdx > ( ::SireID::Specify< SireMol::ChainID >::*map_function_type )( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireID::Specify< SireMol::ChainID >::map );
            
            Specify_ChainID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") ) );
        
        }
        Specify_ChainID__exposer.def( bp::self != bp::self );
        Specify_ChainID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::Specify< SireMol::ChainID >::operator()
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireID::Specify< SireMol::ChainID >::*__call___function_type )( int ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::ChainID >::operator() );
            
            Specify_ChainID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::operator()
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireID::Specify< SireMol::ChainID >::*__call___function_type )( int,int ) const;
            __call___function_type __call___function_value( &::SireID::Specify< SireMol::ChainID >::operator() );
            
            Specify_ChainID__exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::operator=
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::SireID::Specify< SireMol::ChainID > & ( ::SireID::Specify< SireMol::ChainID >::*assign_function_type )( ::SireID::Specify< SireMol::ChainID > const & ) ;
            assign_function_type assign_function_value( &::SireID::Specify< SireMol::ChainID >::operator= );
            
            Specify_ChainID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        Specify_ChainID__exposer.def( bp::self == bp::self );
        Specify_ChainID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::Specify< SireMol::ChainID >::operator[]
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireID::Specify< SireMol::ChainID >::*__getitem___function_type )( int ) const;
            __getitem___function_type __getitem___function_value( &::SireID::Specify< SireMol::ChainID >::operator[] );
            
            Specify_ChainID__exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::toString
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef ::QString ( ::SireID::Specify< SireMol::ChainID >::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireID::Specify< SireMol::ChainID >::toString );
            
            Specify_ChainID__exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::typeName
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::Specify< SireMol::ChainID >::typeName );
            
            Specify_ChainID__exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireID::Specify< SireMol::ChainID >::what
        
            typedef SireID::Specify< SireMol::ChainID > exported_class_t;
            typedef char const * ( ::SireID::Specify< SireMol::ChainID >::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireID::Specify< SireMol::ChainID >::what );
            
            Specify_ChainID__exposer.def( 
                "what"
                , what_function_value );
        
        }
        Specify_ChainID__exposer.staticmethod( "typeName" );
        Specify_ChainID__exposer.def( "__copy__", &__copy__);
        Specify_ChainID__exposer.def( "__deepcopy__", &__copy__);
        Specify_ChainID__exposer.def( "clone", &__copy__);
        Specify_ChainID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::Specify<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_ChainID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::Specify<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Specify_ChainID__exposer.def( "__str__", &__str__< ::SireID::Specify<SireMol::ChainID> > );
        Specify_ChainID__exposer.def( "__repr__", &__str__< ::SireID::Specify<SireMol::ChainID> > );
    }

}
