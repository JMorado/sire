// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "NullParser.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/parallel.h"

#include "SireBase/progressbar.h"

#include "SireBase/propertylist.h"

#include "SireBase/releasegil.h"

#include "SireBase/stringproperty.h"

#include "SireBase/timeproperty.h"

#include "SireError/errors.h"

#include "SireFF/ffdetail.h"

#include "SireIO/errors.h"

#include "SireMM/mmdetail.h"

#include "SireMol/core.h"

#include "SireMol/mgname.h"

#include "SireMol/mgnum.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/molidx.h"

#include "SireMol/trajectory.h"

#include "SireMol/trajectoryaligner.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "filetrajectory.h"

#include "filetrajectoryparser.h"

#include "moleculeparser.h"

#include "supplementary.h"

#include <QDebug>

#include <QDir>

#include <QElapsedTimer>

#include <QFile>

#include <QFileInfo>

#include <QMutex>

#include <QTextStream>

#include "moleculeparser.h"

SireIO::NullParser __copy__(const SireIO::NullParser &other){ return SireIO::NullParser(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_NullParser_class(){

    { //::SireIO::NullParser
        typedef bp::class_< SireIO::NullParser, bp::bases< SireIO::MoleculeParser, SireBase::Property > > NullParser_exposer_t;
        NullParser_exposer_t NullParser_exposer = NullParser_exposer_t( "NullParser", "This is a null parser", bp::init< >("") );
        bp::scope NullParser_scope( NullParser_exposer );
        NullParser_exposer.def( bp::init< SireIO::NullParser const & >(( bp::arg("arg0") ), "") );
        { //::SireIO::NullParser::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::NullParser::*construct_function_type)( ::QString const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::NullParser::construct );
            
            NullParser_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("filename"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return this parser constructed from the passed filename" );
        
        }
        { //::SireIO::NullParser::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::NullParser::*construct_function_type)( ::QStringList const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::NullParser::construct );
            
            NullParser_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("lines"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return this parser constructed from the passed set of lines" );
        
        }
        { //::SireIO::NullParser::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::NullParser::*construct_function_type)( ::SireSystem::System const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::NullParser::construct );
            
            NullParser_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("system"), bp::arg("map") )
                , bp::release_gil_policy()
                , "Return this parser constructed from the passed SireSystem::System" );
        
        }
        { //::SireIO::NullParser::formatDescription
        
            typedef ::QString ( ::SireIO::NullParser::*formatDescription_function_type)(  ) const;
            formatDescription_function_type formatDescription_function_value( &::SireIO::NullParser::formatDescription );
            
            NullParser_exposer.def( 
                "formatDescription"
                , formatDescription_function_value
                , bp::release_gil_policy()
                , "Return a description of the file format" );
        
        }
        { //::SireIO::NullParser::formatName
        
            typedef ::QString ( ::SireIO::NullParser::*formatName_function_type)(  ) const;
            formatName_function_type formatName_function_value( &::SireIO::NullParser::formatName );
            
            NullParser_exposer.def( 
                "formatName"
                , formatName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireIO::NullParser::nAtoms
        
            typedef int ( ::SireIO::NullParser::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireIO::NullParser::nAtoms );
            
            NullParser_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        NullParser_exposer.def( bp::self != bp::self );
        { //::SireIO::NullParser::operator=
        
            typedef ::SireIO::NullParser & ( ::SireIO::NullParser::*assign_function_type)( ::SireIO::NullParser const & ) ;
            assign_function_type assign_function_value( &::SireIO::NullParser::operator= );
            
            NullParser_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("arg0") )
                , bp::return_self< >()
                , "" );
        
        }
        NullParser_exposer.def( bp::self == bp::self );
        { //::SireIO::NullParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::NullParser::*toSystem_function_type)( ::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::NullParser::toSystem );
            
            NullParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireIO::NullParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::NullParser::*toSystem_function_type)( ::SireIO::MoleculeParser const &,::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::NullParser::toSystem );
            
            NullParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireIO::NullParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::NullParser::*toSystem_function_type)( ::QList< SireBase::PropPtr< SireIO::MoleculeParser > > const &,::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::NullParser::toSystem );
            
            NullParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("others"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireIO::NullParser::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::NullParser::typeName );
            
            NullParser_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        NullParser_exposer.staticmethod( "typeName" );
        NullParser_exposer.def( "__copy__", &__copy__);
        NullParser_exposer.def( "__deepcopy__", &__copy__);
        NullParser_exposer.def( "clone", &__copy__);
        NullParser_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::NullParser >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullParser_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::NullParser >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullParser_exposer.def_pickle(sire_pickle_suite< ::SireIO::NullParser >());
        NullParser_exposer.def( "__str__", &__str__< ::SireIO::NullParser > );
        NullParser_exposer.def( "__repr__", &__str__< ::SireIO::NullParser > );
    }

}
