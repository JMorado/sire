// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "LJScaleFactor.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireMol/moleculeinfo.h"

#include "SireStream/datastream.h"

#include "cljnbpairs.h"

#include "cljnbpairs.h"

SireMM::LJScaleFactor __copy__(const SireMM::LJScaleFactor &other){ return SireMM::LJScaleFactor(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::LJScaleFactor&){ return "SireMM::LJScaleFactor";}

void register_LJScaleFactor_class(){

    { //::SireMM::LJScaleFactor
        typedef bp::class_< SireMM::LJScaleFactor > LJScaleFactor_exposer_t;
        LJScaleFactor_exposer_t LJScaleFactor_exposer = LJScaleFactor_exposer_t( "LJScaleFactor", "This is the interatomic scale factor for the LJ\nparameters for the intramolecular energy", bp::init< bp::optional< double > >(( bp::arg("scl")=0 ), "Construct with the LJ scale factor equal to scl") );
        bp::scope LJScaleFactor_scope( LJScaleFactor_exposer );
        LJScaleFactor_exposer.def( bp::init< SireMM::LJScaleFactor const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::LJScaleFactor::lj
        
            typedef double ( ::SireMM::LJScaleFactor::*lj_function_type)(  ) const;
            lj_function_type lj_function_value( &::SireMM::LJScaleFactor::lj );
            
            LJScaleFactor_exposer.def( 
                "lj"
                , lj_function_value
                , "Return the LJ parameter scaling factor" );
        
        }
        LJScaleFactor_exposer.def( bp::self != bp::self );
        { //::SireMM::LJScaleFactor::operator=
        
            typedef ::SireMM::LJScaleFactor & ( ::SireMM::LJScaleFactor::*assign_function_type)( ::SireMM::LJScaleFactor const & ) ;
            assign_function_type assign_function_value( &::SireMM::LJScaleFactor::operator= );
            
            LJScaleFactor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        LJScaleFactor_exposer.def( bp::self == bp::self );
        { //::SireMM::LJScaleFactor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::LJScaleFactor::typeName );
            
            LJScaleFactor_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::LJScaleFactor::what
        
            typedef char const * ( ::SireMM::LJScaleFactor::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::LJScaleFactor::what );
            
            LJScaleFactor_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        LJScaleFactor_exposer.staticmethod( "typeName" );
        LJScaleFactor_exposer.def( "__copy__", &__copy__);
        LJScaleFactor_exposer.def( "__deepcopy__", &__copy__);
        LJScaleFactor_exposer.def( "clone", &__copy__);
        LJScaleFactor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::LJScaleFactor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJScaleFactor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::LJScaleFactor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        LJScaleFactor_exposer.def( "__getstate_manages_dict__", true);
        LJScaleFactor_exposer.def( "__safe_for_unpickling__", true);
        LJScaleFactor_exposer.def( "__setstate__", &__setstate__base64< ::SireMM::LJScaleFactor > );
        LJScaleFactor_exposer.def( "__getstate__", &__getstate__base64< ::SireMM::LJScaleFactor > );
        LJScaleFactor_exposer.def( "__str__", &pvt_get_name);
        LJScaleFactor_exposer.def( "__repr__", &pvt_get_name);
    }

}
