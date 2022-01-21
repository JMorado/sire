// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "TrigArray2DBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "trigarray2d.h"

#include "trigarray2d.hpp"

#include "trigarray2d.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireBase::TrigArray2DBase&){ return "SireBase::TrigArray2DBase";}

#include "Helpers/len.hpp"

void register_TrigArray2DBase_class(){

    { //::SireBase::TrigArray2DBase
        typedef bp::class_< SireBase::TrigArray2DBase, boost::noncopyable > TrigArray2DBase_exposer_t;
        TrigArray2DBase_exposer_t TrigArray2DBase_exposer = TrigArray2DBase_exposer_t( "TrigArray2DBase", "Base class of the TrigArray2D<T> class\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope TrigArray2DBase_scope( TrigArray2DBase_exposer );
        { //::SireBase::TrigArray2DBase::assertValidIndex
        
            typedef void ( ::SireBase::TrigArray2DBase::*assertValidIndex_function_type)( int,int ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireBase::TrigArray2DBase::assertValidIndex );
            
            TrigArray2DBase_exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::checkedOffset
        
            typedef int ( ::SireBase::TrigArray2DBase::*checkedOffset_function_type)( int,int ) const;
            checkedOffset_function_type checkedOffset_function_value( &::SireBase::TrigArray2DBase::checkedOffset );
            
            TrigArray2DBase_exposer.def( 
                "checkedOffset"
                , checkedOffset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::count
        
            typedef int ( ::SireBase::TrigArray2DBase::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::TrigArray2DBase::count );
            
            TrigArray2DBase_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::map
        
            typedef int ( ::SireBase::TrigArray2DBase::*map_function_type)( int,int ) const;
            map_function_type map_function_value( &::SireBase::TrigArray2DBase::map );
            
            TrigArray2DBase_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::nColumns
        
            typedef int ( ::SireBase::TrigArray2DBase::*nColumns_function_type)(  ) const;
            nColumns_function_type nColumns_function_value( &::SireBase::TrigArray2DBase::nColumns );
            
            TrigArray2DBase_exposer.def( 
                "nColumns"
                , nColumns_function_value
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::nRows
        
            typedef int ( ::SireBase::TrigArray2DBase::*nRows_function_type)(  ) const;
            nRows_function_type nRows_function_value( &::SireBase::TrigArray2DBase::nRows );
            
            TrigArray2DBase_exposer.def( 
                "nRows"
                , nRows_function_value
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::offset
        
            typedef int ( ::SireBase::TrigArray2DBase::*offset_function_type)( int,int ) const;
            offset_function_type offset_function_value( &::SireBase::TrigArray2DBase::offset );
            
            TrigArray2DBase_exposer.def( 
                "offset"
                , offset_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "" );
        
        }
        { //::SireBase::TrigArray2DBase::size
        
            typedef int ( ::SireBase::TrigArray2DBase::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::TrigArray2DBase::size );
            
            TrigArray2DBase_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        TrigArray2DBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::TrigArray2DBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2DBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::TrigArray2DBase >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        TrigArray2DBase_exposer.def( "__getstate_manages_dict__", true);
        TrigArray2DBase_exposer.def( "__safe_for_unpickling__", true);
        TrigArray2DBase_exposer.def( "__setstate__", &__setstate__base64< ::SireBase::TrigArray2DBase > );
        TrigArray2DBase_exposer.def( "__getstate__", &__getstate__base64< ::SireBase::TrigArray2DBase > );
        TrigArray2DBase_exposer.def( "__str__", &pvt_get_name);
        TrigArray2DBase_exposer.def( "__repr__", &pvt_get_name);
        TrigArray2DBase_exposer.def( "__len__", &__len_size< ::SireBase::TrigArray2DBase > );
    }

}
