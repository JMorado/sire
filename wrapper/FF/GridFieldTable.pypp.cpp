// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "GridFieldTable.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleculeview.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "fieldtable.h"

#include "fieldtable.h"

SireFF::GridFieldTable __copy__(const SireFF::GridFieldTable &other){ return SireFF::GridFieldTable(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireFF::GridFieldTable&){ return "SireFF::GridFieldTable";}

#include "Helpers/len.hpp"

void register_GridFieldTable_class(){

    { //::SireFF::GridFieldTable
        typedef bp::class_< SireFF::GridFieldTable > GridFieldTable_exposer_t;
        GridFieldTable_exposer_t GridFieldTable_exposer = GridFieldTable_exposer_t( "GridFieldTable", bp::init< >() );
        bp::scope GridFieldTable_scope( GridFieldTable_exposer );
        GridFieldTable_exposer.def( bp::init< SireVol::Grid const & >(( bp::arg("grid") )) );
        GridFieldTable_exposer.def( bp::init< SireFF::GridFieldTable const & >(( bp::arg("other") )) );
        { //::SireFF::GridFieldTable::add
        
            typedef void ( ::SireFF::GridFieldTable::*add_function_type )( int,::SireMaths::Vector const & ) ;
            add_function_type add_function_value( &::SireFF::GridFieldTable::add );
            
            GridFieldTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("ipoint"), bp::arg("field") ) );
        
        }
        { //::SireFF::GridFieldTable::add
        
            typedef void ( ::SireFF::GridFieldTable::*add_function_type )( ::SireFF::GridFieldTable const & ) ;
            add_function_type add_function_value( &::SireFF::GridFieldTable::add );
            
            GridFieldTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireFF::GridFieldTable::add
        
            typedef void ( ::SireFF::GridFieldTable::*add_function_type )( ::SireMaths::Vector const & ) ;
            add_function_type add_function_value( &::SireFF::GridFieldTable::add );
            
            GridFieldTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("field") ) );
        
        }
        { //::SireFF::GridFieldTable::at
        
            typedef ::SireMaths::Vector const & ( ::SireFF::GridFieldTable::*at_function_type )( int ) const;
            at_function_type at_function_value( &::SireFF::GridFieldTable::at );
            
            GridFieldTable_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::GridFieldTable::count
        
            typedef int ( ::SireFF::GridFieldTable::*count_function_type )(  ) const;
            count_function_type count_function_value( &::SireFF::GridFieldTable::count );
            
            GridFieldTable_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireFF::GridFieldTable::divide
        
            typedef void ( ::SireFF::GridFieldTable::*divide_function_type )( double ) ;
            divide_function_type divide_function_value( &::SireFF::GridFieldTable::divide );
            
            GridFieldTable_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireFF::GridFieldTable::grid
        
            typedef ::SireVol::Grid const & ( ::SireFF::GridFieldTable::*grid_function_type )(  ) const;
            grid_function_type grid_function_value( &::SireFF::GridFieldTable::grid );
            
            GridFieldTable_exposer.def( 
                "grid"
                , grid_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireFF::GridFieldTable::initialise
        
            typedef void ( ::SireFF::GridFieldTable::*initialise_function_type )(  ) ;
            initialise_function_type initialise_function_value( &::SireFF::GridFieldTable::initialise );
            
            GridFieldTable_exposer.def( 
                "initialise"
                , initialise_function_value );
        
        }
        { //::SireFF::GridFieldTable::multiply
        
            typedef void ( ::SireFF::GridFieldTable::*multiply_function_type )( double ) ;
            multiply_function_type multiply_function_value( &::SireFF::GridFieldTable::multiply );
            
            GridFieldTable_exposer.def( 
                "multiply"
                , multiply_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireFF::GridFieldTable::nPoints
        
            typedef int ( ::SireFF::GridFieldTable::*nPoints_function_type )(  ) const;
            nPoints_function_type nPoints_function_value( &::SireFF::GridFieldTable::nPoints );
            
            GridFieldTable_exposer.def( 
                "nPoints"
                , nPoints_function_value );
        
        }
        GridFieldTable_exposer.def( bp::self != bp::self );
        GridFieldTable_exposer.def( bp::self * bp::other< double >() );
        GridFieldTable_exposer.def( bp::self + bp::self );
        GridFieldTable_exposer.def( bp::self + bp::other< SireMaths::Vector >() );
        GridFieldTable_exposer.def( bp::self - bp::self );
        GridFieldTable_exposer.def( bp::self - bp::other< SireMaths::Vector >() );
        GridFieldTable_exposer.def( -bp::self );
        GridFieldTable_exposer.def( bp::self / bp::other< double >() );
        { //::SireFF::GridFieldTable::operator=
        
            typedef ::SireFF::GridFieldTable & ( ::SireFF::GridFieldTable::*assign_function_type )( ::SireFF::GridFieldTable const & ) ;
            assign_function_type assign_function_value( &::SireFF::GridFieldTable::operator= );
            
            GridFieldTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireFF::GridFieldTable::operator=
        
            typedef ::SireFF::GridFieldTable & ( ::SireFF::GridFieldTable::*assign_function_type )( ::SireMaths::Vector const & ) ;
            assign_function_type assign_function_value( &::SireFF::GridFieldTable::operator= );
            
            GridFieldTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("field") )
                , bp::return_self< >() );
        
        }
        GridFieldTable_exposer.def( bp::self == bp::self );
        { //::SireFF::GridFieldTable::operator[]
        
            typedef ::SireMaths::Vector & ( ::SireFF::GridFieldTable::*__getitem___function_type )( int ) ;
            __getitem___function_type __getitem___function_value( &::SireFF::GridFieldTable::operator[] );
            
            GridFieldTable_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::SireFF::GridFieldTable::operator[]
        
            typedef ::SireMaths::Vector const & ( ::SireFF::GridFieldTable::*__getitem___function_type )( int ) const;
            __getitem___function_type __getitem___function_value( &::SireFF::GridFieldTable::operator[] );
            
            GridFieldTable_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::GridFieldTable::setAll
        
            typedef void ( ::SireFF::GridFieldTable::*setAll_function_type )( ::SireMaths::Vector const & ) ;
            setAll_function_type setAll_function_value( &::SireFF::GridFieldTable::setAll );
            
            GridFieldTable_exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("field") ) );
        
        }
        { //::SireFF::GridFieldTable::subtract
        
            typedef void ( ::SireFF::GridFieldTable::*subtract_function_type )( int,::SireMaths::Vector const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::GridFieldTable::subtract );
            
            GridFieldTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("ipoint"), bp::arg("field") ) );
        
        }
        { //::SireFF::GridFieldTable::subtract
        
            typedef void ( ::SireFF::GridFieldTable::*subtract_function_type )( ::SireFF::GridFieldTable const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::GridFieldTable::subtract );
            
            GridFieldTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireFF::GridFieldTable::subtract
        
            typedef void ( ::SireFF::GridFieldTable::*subtract_function_type )( ::SireMaths::Vector const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::GridFieldTable::subtract );
            
            GridFieldTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("field") ) );
        
        }
        { //::SireFF::GridFieldTable::toVector
        
            typedef ::QVector< SireMaths::Vector > ( ::SireFF::GridFieldTable::*toVector_function_type )(  ) const;
            toVector_function_type toVector_function_value( &::SireFF::GridFieldTable::toVector );
            
            GridFieldTable_exposer.def( 
                "toVector"
                , toVector_function_value );
        
        }
        { //::SireFF::GridFieldTable::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::GridFieldTable::typeName );
            
            GridFieldTable_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        GridFieldTable_exposer.staticmethod( "typeName" );
        GridFieldTable_exposer.def( "__copy__", &__copy__);
        GridFieldTable_exposer.def( "__deepcopy__", &__copy__);
        GridFieldTable_exposer.def( "clone", &__copy__);
        GridFieldTable_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::GridFieldTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridFieldTable_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::GridFieldTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridFieldTable_exposer.def( "__str__", &pvt_get_name);
        GridFieldTable_exposer.def( "__repr__", &pvt_get_name);
        GridFieldTable_exposer.def( "__len__", &__len_count< ::SireFF::GridFieldTable > );
    }

}
