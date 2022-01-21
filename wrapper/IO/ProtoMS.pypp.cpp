// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ProtoMS.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/findexe.h"

#include "SireBase/sire_process.h"

#include "SireBase/tempdir.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/internalff.h"

#include "SireMM/internalperturbation.h"

#include "SireMM/ljparameter.h"

#include "SireMM/ljperturbation.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomeditor.h"

#include "SireMol/atomname.h"

#include "SireMol/cgeditor.h"

#include "SireMol/chargeperturbation.h"

#include "SireMol/connectivity.h"

#include "SireMol/errors.h"

#include "SireMol/geometryperturbation.h"

#include "SireMol/groupatomids.h"

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/moleditor.h"

#include "SireMol/mover.hpp"

#include "SireMol/reseditor.h"

#include "SireMol/resname.h"

#include "SireMol/resnum.h"

#include "SireMol/selector.hpp"

#include "SireMove/errors.h"

#include "SireMove/zmatrix.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "pdb.h"

#include "protoms.h"

#include <QByteArray>

#include <QDir>

#include <QFile>

#include <QFileInfo>

#include <QTextStream>

#include "protoms.h"

SireIO::ProtoMS __copy__(const SireIO::ProtoMS &other){ return SireIO::ProtoMS(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireIO::ProtoMS&){ return "SireIO::ProtoMS";}

void register_ProtoMS_class(){

    { //::SireIO::ProtoMS
        typedef bp::class_< SireIO::ProtoMS > ProtoMS_exposer_t;
        ProtoMS_exposer_t ProtoMS_exposer = ProtoMS_exposer_t( "ProtoMS", "This class is used to read in ProtoMS parameter files and\nparameterise passed molecules.\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope ProtoMS_scope( ProtoMS_exposer );
        bp::scope().attr("PROTEIN") = (int)SireIO::ProtoMS::PROTEIN;
        bp::scope().attr("SOLUTE") = (int)SireIO::ProtoMS::SOLUTE;
        bp::scope().attr("SOLVENT") = (int)SireIO::ProtoMS::SOLVENT;
        ProtoMS_exposer.def( bp::init< QString const & >(( bp::arg("protoms") ), "Constructor, specifying the location of ProtoMS") );
        { //::SireIO::ProtoMS::addParameterFile
        
            typedef void ( ::SireIO::ProtoMS::*addParameterFile_function_type)( ::QString const & ) ;
            addParameterFile_function_type addParameterFile_function_value( &::SireIO::ProtoMS::addParameterFile );
            
            ProtoMS_exposer.def( 
                "addParameterFile"
                , addParameterFile_function_value
                , ( bp::arg("paramfile") )
                , "Add a parameter file to the list of files which will be used\nto parameterise the molecules" );
        
        }
        { //::SireIO::ProtoMS::parameterFiles
        
            typedef ::QStringList ( ::SireIO::ProtoMS::*parameterFiles_function_type)(  ) const;
            parameterFiles_function_type parameterFiles_function_value( &::SireIO::ProtoMS::parameterFiles );
            
            ProtoMS_exposer.def( 
                "parameterFiles"
                , parameterFiles_function_value
                , "Return the list of parameter files which will be used to\nparameterise the molecules, in the order that they will\nbe read" );
        
        }
        { //::SireIO::ProtoMS::parameterisationCommandFile
        
            typedef ::QString ( ::SireIO::ProtoMS::*parameterisationCommandFile_function_type)( ::SireMol::Molecule const &,int ) const;
            parameterisationCommandFile_function_type parameterisationCommandFile_function_value( &::SireIO::ProtoMS::parameterisationCommandFile );
            
            ProtoMS_exposer.def( 
                "parameterisationCommandFile"
                , parameterisationCommandFile_function_value
                , ( bp::arg("molecule"), bp::arg("type") )
                , "Return the command file used to run ProtoMS on the passed molecule as the passed type" );
        
        }
        { //::SireIO::ProtoMS::parameterise
        
            typedef ::SireMol::Molecule ( ::SireIO::ProtoMS::*parameterise_function_type)( ::SireMol::Molecule const &,int,::SireBase::PropertyMap const & ) ;
            parameterise_function_type parameterise_function_value( &::SireIO::ProtoMS::parameterise );
            
            ProtoMS_exposer.def( 
                "parameterise"
                , parameterise_function_value
                , ( bp::arg("molecule"), bp::arg("type"), bp::arg("map")=SireBase::PropertyMap() )
                , "Parameterise the molecules molecules as type type of\nmolecules (PROTEIN, SOLUTE or SOLVENT)" );
        
        }
        { //::SireIO::ProtoMS::parameterise
        
            typedef ::SireMol::Molecules ( ::SireIO::ProtoMS::*parameterise_function_type)( ::SireMol::Molecules const &,int,::SireBase::PropertyMap const & ) ;
            parameterise_function_type parameterise_function_value( &::SireIO::ProtoMS::parameterise );
            
            ProtoMS_exposer.def( 
                "parameterise"
                , parameterise_function_value
                , ( bp::arg("molecules"), bp::arg("type"), bp::arg("map")=SireBase::PropertyMap() )
                , "Parameterise the molecules molecules as type type of\nmolecules (PROTEIN, SOLUTE or SOLVENT)" );
        
        }
        { //::SireIO::ProtoMS::parameters
        
            typedef ::SireIO::ProtoMSParameters const & ( *parameters_function_type )(  );
            parameters_function_type parameters_function_value( &::SireIO::ProtoMS::parameters );
            
            ProtoMS_exposer.def( 
                "parameters"
                , parameters_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireIO::ProtoMS::setExecutable
        
            typedef void ( ::SireIO::ProtoMS::*setExecutable_function_type)( ::QString const & ) ;
            setExecutable_function_type setExecutable_function_value( &::SireIO::ProtoMS::setExecutable );
            
            ProtoMS_exposer.def( 
                "setExecutable"
                , setExecutable_function_value
                , ( bp::arg("protoms") )
                , "Set the path to the ProtoMS executable that will be used\nto parameterise the molecules" );
        
        }
        { //::SireIO::ProtoMS::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::ProtoMS::typeName );
            
            ProtoMS_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireIO::ProtoMS::what
        
            typedef char const * ( ::SireIO::ProtoMS::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::ProtoMS::what );
            
            ProtoMS_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        ProtoMS_exposer.staticmethod( "parameters" );
        ProtoMS_exposer.staticmethod( "typeName" );
        ProtoMS_exposer.def( "__copy__", &__copy__);
        ProtoMS_exposer.def( "__deepcopy__", &__copy__);
        ProtoMS_exposer.def( "clone", &__copy__);
        ProtoMS_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::ProtoMS >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ProtoMS_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::ProtoMS >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ProtoMS_exposer.def( "__getstate_manages_dict__", true);
        ProtoMS_exposer.def( "__safe_for_unpickling__", true);
        ProtoMS_exposer.def( "__setstate__", &__setstate__base64< ::SireIO::ProtoMS > );
        ProtoMS_exposer.def( "__getstate__", &__getstate__base64< ::SireIO::ProtoMS > );
        ProtoMS_exposer.def( "__str__", &pvt_get_name);
        ProtoMS_exposer.def( "__repr__", &pvt_get_name);
    }

}
