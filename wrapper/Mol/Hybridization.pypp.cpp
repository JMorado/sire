// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Hybridization.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "hybridization.h"

#include <QDebug>

#include "hybridization.h"

SireMol::Hybridization __copy__(const SireMol::Hybridization &other){ return SireMol::Hybridization(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Hybridization_class(){

    { //::SireMol::Hybridization
        typedef bp::class_< SireMol::Hybridization, bp::bases< SireBase::Property > > Hybridization_exposer_t;
        Hybridization_exposer_t Hybridization_exposer = Hybridization_exposer_t( "Hybridization", "This class represents an atoms hybridization (e.g. SP2, SP3 etc.)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor (default is an undefined chirality)") );
        bp::scope Hybridization_scope( Hybridization_exposer );
        Hybridization_exposer.def( bp::init< SireMol::Hybridization const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::Hybridization::fromRDKit
        
            typedef ::SireMol::Hybridization ( *fromRDKit_function_type )( ::QString const & );
            fromRDKit_function_type fromRDKit_function_value( &::SireMol::Hybridization::fromRDKit );
            
            Hybridization_exposer.def( 
                "fromRDKit"
                , fromRDKit_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "Construct from a string representation of a RDKit hybridization" );
        
        }
        { //::SireMol::Hybridization::fromSDF
        
            typedef ::SireMol::Hybridization ( *fromSDF_function_type )( int );
            fromSDF_function_type fromSDF_function_value( &::SireMol::Hybridization::fromSDF );
            
            Hybridization_exposer.def( 
                "fromSDF"
                , fromSDF_function_value
                , ( bp::arg("val") )
                , bp::release_gil_policy()
                , "Construct from the the passed SDF number" );
        
        }
        { //::SireMol::Hybridization::isOther
        
            typedef bool ( ::SireMol::Hybridization::*isOther_function_type)(  ) const;
            isOther_function_type isOther_function_value( &::SireMol::Hybridization::isOther );
            
            Hybridization_exposer.def( 
                "isOther"
                , isOther_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::isUnknown
        
            typedef bool ( ::SireMol::Hybridization::*isUnknown_function_type)(  ) const;
            isUnknown_function_type isUnknown_function_value( &::SireMol::Hybridization::isUnknown );
            
            Hybridization_exposer.def( 
                "isUnknown"
                , isUnknown_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::isUnspecified
        
            typedef bool ( ::SireMol::Hybridization::*isUnspecified_function_type)(  ) const;
            isUnspecified_function_type isUnspecified_function_value( &::SireMol::Hybridization::isUnspecified );
            
            Hybridization_exposer.def( 
                "isUnspecified"
                , isUnspecified_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::is_s
        
            typedef bool ( ::SireMol::Hybridization::*is_s_function_type)(  ) const;
            is_s_function_type is_s_function_value( &::SireMol::Hybridization::is_s );
            
            Hybridization_exposer.def( 
                "is_s"
                , is_s_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::is_sp
        
            typedef bool ( ::SireMol::Hybridization::*is_sp_function_type)(  ) const;
            is_sp_function_type is_sp_function_value( &::SireMol::Hybridization::is_sp );
            
            Hybridization_exposer.def( 
                "is_sp"
                , is_sp_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::is_sp2
        
            typedef bool ( ::SireMol::Hybridization::*is_sp2_function_type)(  ) const;
            is_sp2_function_type is_sp2_function_value( &::SireMol::Hybridization::is_sp2 );
            
            Hybridization_exposer.def( 
                "is_sp2"
                , is_sp2_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::is_sp3
        
            typedef bool ( ::SireMol::Hybridization::*is_sp3_function_type)(  ) const;
            is_sp3_function_type is_sp3_function_value( &::SireMol::Hybridization::is_sp3 );
            
            Hybridization_exposer.def( 
                "is_sp3"
                , is_sp3_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Hybridization_exposer.def( bp::self != bp::self );
        { //::SireMol::Hybridization::operator=
        
            typedef ::SireMol::Hybridization & ( ::SireMol::Hybridization::*assign_function_type)( ::SireMol::Hybridization const & ) ;
            assign_function_type assign_function_value( &::SireMol::Hybridization::operator= );
            
            Hybridization_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Hybridization_exposer.def( bp::self == bp::self );
        { //::SireMol::Hybridization::other
        
            typedef ::SireMol::Hybridization ( *other_function_type )(  );
            other_function_type other_function_value( &::SireMol::Hybridization::other );
            
            Hybridization_exposer.def( 
                "other"
                , other_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::s
        
            typedef ::SireMol::Hybridization ( *s_function_type )(  );
            s_function_type s_function_value( &::SireMol::Hybridization::s );
            
            Hybridization_exposer.def( 
                "s"
                , s_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::sp
        
            typedef ::SireMol::Hybridization ( *sp_function_type )(  );
            sp_function_type sp_function_value( &::SireMol::Hybridization::sp );
            
            Hybridization_exposer.def( 
                "sp"
                , sp_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::sp2
        
            typedef ::SireMol::Hybridization ( *sp2_function_type )(  );
            sp2_function_type sp2_function_value( &::SireMol::Hybridization::sp2 );
            
            Hybridization_exposer.def( 
                "sp2"
                , sp2_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::sp3
        
            typedef ::SireMol::Hybridization ( *sp3_function_type )(  );
            sp3_function_type sp3_function_value( &::SireMol::Hybridization::sp3 );
            
            Hybridization_exposer.def( 
                "sp3"
                , sp3_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::toRDKit
        
            typedef ::QString ( ::SireMol::Hybridization::*toRDKit_function_type)(  ) const;
            toRDKit_function_type toRDKit_function_value( &::SireMol::Hybridization::toRDKit );
            
            Hybridization_exposer.def( 
                "toRDKit"
                , toRDKit_function_value
                , bp::release_gil_policy()
                , "Return a string representation of the RDKit stereo value" );
        
        }
        { //::SireMol::Hybridization::toSDF
        
            typedef int ( ::SireMol::Hybridization::*toSDF_function_type)(  ) const;
            toSDF_function_type toSDF_function_value( &::SireMol::Hybridization::toSDF );
            
            Hybridization_exposer.def( 
                "toSDF"
                , toSDF_function_value
                , bp::release_gil_policy()
                , "Return the SDF-format value for this bond. This returns\n0 if the stereoscopy is undefined\n" );
        
        }
        { //::SireMol::Hybridization::toString
        
            typedef ::QString ( ::SireMol::Hybridization::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Hybridization::toString );
            
            Hybridization_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Hybridization::typeName );
            
            Hybridization_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::unknown
        
            typedef ::SireMol::Hybridization ( *unknown_function_type )(  );
            unknown_function_type unknown_function_value( &::SireMol::Hybridization::unknown );
            
            Hybridization_exposer.def( 
                "unknown"
                , unknown_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Hybridization::unspecified
        
            typedef ::SireMol::Hybridization ( *unspecified_function_type )(  );
            unspecified_function_type unspecified_function_value( &::SireMol::Hybridization::unspecified );
            
            Hybridization_exposer.def( 
                "unspecified"
                , unspecified_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Hybridization_exposer.staticmethod( "fromRDKit" );
        Hybridization_exposer.staticmethod( "fromSDF" );
        Hybridization_exposer.staticmethod( "other" );
        Hybridization_exposer.staticmethod( "s" );
        Hybridization_exposer.staticmethod( "sp" );
        Hybridization_exposer.staticmethod( "sp2" );
        Hybridization_exposer.staticmethod( "sp3" );
        Hybridization_exposer.staticmethod( "typeName" );
        Hybridization_exposer.staticmethod( "unknown" );
        Hybridization_exposer.staticmethod( "unspecified" );
        Hybridization_exposer.def( "__copy__", &__copy__);
        Hybridization_exposer.def( "__deepcopy__", &__copy__);
        Hybridization_exposer.def( "clone", &__copy__);
        Hybridization_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Hybridization >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Hybridization_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Hybridization >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Hybridization_exposer.def_pickle(sire_pickle_suite< ::SireMol::Hybridization >());
        Hybridization_exposer.def( "__str__", &__str__< ::SireMol::Hybridization > );
        Hybridization_exposer.def( "__repr__", &__str__< ::SireMol::Hybridization > );
    }

}
