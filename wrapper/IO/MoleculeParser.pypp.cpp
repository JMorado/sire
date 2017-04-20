// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MoleculeParser.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/parallel.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "moleculeparser.h"

#include <QDebug>

#include <QElapsedTimer>

#include <QFile>

#include <QFileInfo>

#include <QMutex>

#include <QTextStream>

#include "moleculeparser.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MoleculeParser_class(){

    { //::SireIO::MoleculeParser
        typedef bp::class_< SireIO::MoleculeParser, bp::bases< SireBase::Property >, boost::noncopyable > MoleculeParser_exposer_t;
        MoleculeParser_exposer_t MoleculeParser_exposer = MoleculeParser_exposer_t( "MoleculeParser", "The base class of all molecule parsers", bp::no_init );
        bp::scope MoleculeParser_scope( MoleculeParser_exposer );
        { //::SireIO::MoleculeParser::disableParallel
        
            typedef void ( ::SireIO::MoleculeParser::*disableParallel_function_type)(  ) ;
            disableParallel_function_type disableParallel_function_value( &::SireIO::MoleculeParser::disableParallel );
            
            MoleculeParser_exposer.def( 
                "disableParallel"
                , disableParallel_function_value
                , "Disable code to parse files in parallel - parsing will happen in serial" );
        
        }
        { //::SireIO::MoleculeParser::enableParallel
        
            typedef void ( ::SireIO::MoleculeParser::*enableParallel_function_type)(  ) ;
            enableParallel_function_type enableParallel_function_value( &::SireIO::MoleculeParser::enableParallel );
            
            MoleculeParser_exposer.def( 
                "enableParallel"
                , enableParallel_function_value
                , "Enable code to parse files in parallel" );
        
        }
        { //::SireIO::MoleculeParser::isBinaryFile
        
            typedef bool ( ::SireIO::MoleculeParser::*isBinaryFile_function_type)(  ) const;
            isBinaryFile_function_type isBinaryFile_function_value( &::SireIO::MoleculeParser::isBinaryFile );
            
            MoleculeParser_exposer.def( 
                "isBinaryFile"
                , isBinaryFile_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::isEmpty
        
            typedef bool ( ::SireIO::MoleculeParser::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireIO::MoleculeParser::isEmpty );
            
            MoleculeParser_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::isLead
        
            typedef bool ( ::SireIO::MoleculeParser::*isLead_function_type)(  ) const;
            isLead_function_type isLead_function_value( &::SireIO::MoleculeParser::isLead );
            
            MoleculeParser_exposer.def( 
                "isLead"
                , isLead_function_value
                , "Return whether or not this is a lead parser. The lead parser is responsible\nfor starting the process of turning the parsed file into the System. There\nmust be one and one-only lead parser in a set of parsers creating a System" );
        
        }
        { //::SireIO::MoleculeParser::isTextFile
        
            typedef bool ( ::SireIO::MoleculeParser::*isTextFile_function_type)(  ) const;
            isTextFile_function_type isTextFile_function_value( &::SireIO::MoleculeParser::isTextFile );
            
            MoleculeParser_exposer.def( 
                "isTextFile"
                , isTextFile_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::lines
        
            typedef ::QVector< QString > const & ( ::SireIO::MoleculeParser::*lines_function_type)(  ) const;
            lines_function_type lines_function_value( &::SireIO::MoleculeParser::lines );
            
            MoleculeParser_exposer.def( 
                "lines"
                , lines_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireIO::MoleculeParser::null
        
            typedef ::SireIO::NullParser const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireIO::MoleculeParser::null );
            
            MoleculeParser_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireIO::MoleculeParser::parse
        
            typedef ::SireIO::MoleculeParserPtr ( *parse_function_type )( ::QString const &,::SireBase::PropertyMap const & );
            parse_function_type parse_function_value( &::SireIO::MoleculeParser::parse );
            
            MoleculeParser_exposer.def( 
                "parse"
                , parse_function_value
                , ( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() )
                , "Parse the passed set of files, returning the resulting Parsers" );
        
        }
        { //::SireIO::MoleculeParser::parse
        
            typedef ::QList< SireBase::PropPtr< SireIO::MoleculeParser > > ( *parse_function_type )( ::QStringList const &,::SireBase::PropertyMap const & );
            parse_function_type parse_function_value( &::SireIO::MoleculeParser::parse );
            
            MoleculeParser_exposer.def( 
                "parse"
                , parse_function_value
                , ( bp::arg("filenames"), bp::arg("map")=SireBase::PropertyMap() )
                , "Parse the passed set of files, returning the resulting Parsers" );
        
        }
        { //::SireIO::MoleculeParser::read
        
            typedef ::SireSystem::System ( *read_function_type )( ::QString const &,::SireBase::PropertyMap const & );
            read_function_type read_function_value( &::SireIO::MoleculeParser::read );
            
            MoleculeParser_exposer.def( 
                "read"
                , read_function_value
                , ( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() )
                , "Read the files with passed filenames, returning the System contained therein.\nNote that all of the files must be connected to the same system\n(i.e. it could be the Amber Parm and Rst file)" );
        
        }
        { //::SireIO::MoleculeParser::read
        
            typedef ::SireSystem::System ( *read_function_type )( ::QString const &,::QString const &,::SireBase::PropertyMap const & );
            read_function_type read_function_value( &::SireIO::MoleculeParser::read );
            
            MoleculeParser_exposer.def( 
                "read"
                , read_function_value
                , ( bp::arg("file1"), bp::arg("file2"), bp::arg("map")=SireBase::PropertyMap() )
                , "Read the two passed files, returning the System contained therein. The two\nfiles must refer to the same System, i.e. they could be a parameter + coordinate file" );
        
        }
        { //::SireIO::MoleculeParser::read
        
            typedef ::SireSystem::System ( *read_function_type )( ::QStringList const &,::SireBase::PropertyMap const & );
            read_function_type read_function_value( &::SireIO::MoleculeParser::read );
            
            MoleculeParser_exposer.def( 
                "read"
                , read_function_value
                , ( bp::arg("filenames"), bp::arg("map")=SireBase::PropertyMap() )
                , "Read the files with passed filenames, returning the System contained therein.\nNote that all of the files must be connected to the same system\n(i.e. it could be the Amber Parm and Rst file)" );
        
        }
        { //::SireIO::MoleculeParser::score
        
            typedef double ( ::SireIO::MoleculeParser::*score_function_type)(  ) const;
            score_function_type score_function_value( &::SireIO::MoleculeParser::score );
            
            MoleculeParser_exposer.def( 
                "score"
                , score_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::setUseParallel
        
            typedef void ( ::SireIO::MoleculeParser::*setUseParallel_function_type)( bool ) ;
            setUseParallel_function_type setUseParallel_function_value( &::SireIO::MoleculeParser::setUseParallel );
            
            MoleculeParser_exposer.def( 
                "setUseParallel"
                , setUseParallel_function_value
                , ( bp::arg("on") )
                , "Set whether or not to parse files in parallel or serial" );
        
        }
        { //::SireIO::MoleculeParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::MoleculeParser::*toSystem_function_type)( ::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::MoleculeParser::toSystem );
            
            MoleculeParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("map")=SireBase::PropertyMap() )
                , "Return the System that is constructed from the data in this parser" );
        
        }
        { //::SireIO::MoleculeParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::MoleculeParser::*toSystem_function_type)( ::SireIO::MoleculeParser const &,::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::MoleculeParser::toSystem );
            
            MoleculeParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the System that is constructed from the data in the two\npassed parsers (i.e. representing a topology and a coordinate file)" );
        
        }
        { //::SireIO::MoleculeParser::toSystem
        
            typedef ::SireSystem::System ( ::SireIO::MoleculeParser::*toSystem_function_type)( ::QList< SireBase::PropPtr< SireIO::MoleculeParser > > const &,::SireBase::PropertyMap const & ) const;
            toSystem_function_type toSystem_function_value( &::SireIO::MoleculeParser::toSystem );
            
            MoleculeParser_exposer.def( 
                "toSystem"
                , toSystem_function_value
                , ( bp::arg("others"), bp::arg("map")=SireBase::PropertyMap() )
                , "Return the System that is constructed from the information in the passed\nparsers. This will parse the information in order, meaning that data contained\nin earlier parsers may be overwritten by data from later parsers" );
        
        }
        { //::SireIO::MoleculeParser::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::MoleculeParser::typeName );
            
            MoleculeParser_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::usesParallel
        
            typedef bool ( ::SireIO::MoleculeParser::*usesParallel_function_type)(  ) const;
            usesParallel_function_type usesParallel_function_value( &::SireIO::MoleculeParser::usesParallel );
            
            MoleculeParser_exposer.def( 
                "usesParallel"
                , usesParallel_function_value
                , "" );
        
        }
        { //::SireIO::MoleculeParser::write
        
            typedef void ( ::SireIO::MoleculeParser::*write_function_type)( ::QString const & ) const;
            write_function_type write_function_value( &::SireIO::MoleculeParser::write );
            
            MoleculeParser_exposer.def( 
                "write"
                , write_function_value
                , ( bp::arg("filename") )
                , "Write the parsed data back to the file called filename. This will\noverwrite the file if it exists already, so be careful" );
        
        }
        MoleculeParser_exposer.staticmethod( "null" );
        MoleculeParser_exposer.staticmethod( "parse" );
        MoleculeParser_exposer.staticmethod( "read" );
        MoleculeParser_exposer.staticmethod( "typeName" );
        MoleculeParser_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::MoleculeParser >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MoleculeParser_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::MoleculeParser >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MoleculeParser_exposer.def( "__str__", &__str__< ::SireIO::MoleculeParser > );
        MoleculeParser_exposer.def( "__repr__", &__str__< ::SireIO::MoleculeParser > );
    }

}
