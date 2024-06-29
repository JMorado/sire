// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "PackedArray2D_PropertyList.pypp.hpp"

namespace bp = boost::python;

#include "packedarrays.h"

#include "packedarrays.h"

SireBase::PackedArray2D<SireBase::PropertyList> __copy__(const SireBase::PackedArray2D<SireBase::PropertyList> &other){ return SireBase::PackedArray2D<SireBase::PropertyList>(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_PackedArray2D_PropertyList_class(){

    { //::SireBase::PackedArray2D< SireBase::PropertyList >
        typedef bp::class_< SireBase::PackedArray2D< SireBase::PropertyList > > PackedArray2D_PropertyList_exposer_t;
        PackedArray2D_PropertyList_exposer_t PackedArray2D_PropertyList_exposer = PackedArray2D_PropertyList_exposer_t( "PackedArray2D_PropertyList", "", bp::init< >("") );
        bp::scope PackedArray2D_PropertyList_scope( PackedArray2D_PropertyList_exposer );
        PackedArray2D_PropertyList_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::PropertyList >::Array const & >(( bp::arg("array") ), "") );
        PackedArray2D_PropertyList_exposer.def( bp::init< QVector< SireBase::detail::PackedArray2D_Array< SireBase::PropertyList > > const & >(( bp::arg("arrays") ), "") );
        PackedArray2D_PropertyList_exposer.def( bp::init< QVector< SireBase::PropertyList > const & >(( bp::arg("values") ), "") );
        PackedArray2D_PropertyList_exposer.def( bp::init< QVector< QVector< SireBase::PropertyList > > const & >(( bp::arg("values") ), "") );
        PackedArray2D_PropertyList_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::PropertyList > const &, SireBase::PackedArray2D< SireBase::PropertyList > const & >(( bp::arg("array0"), bp::arg("array1") ), "") );
        PackedArray2D_PropertyList_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::PropertyList > const & >(( bp::arg("other") ), "") );
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::append
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*append_function_type)( ::SireBase::PackedArray2D< SireBase::PropertyList >::Array const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::append );
            
            PackedArray2D_PropertyList_exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("array") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::append
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*append_function_type)( ::SireBase::PackedArray2D< SireBase::PropertyList > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::append );
            
            PackedArray2D_PropertyList_exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("arrays") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::append
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*append_function_type)( ::QVector< SireBase::PropertyList > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::append );
            
            PackedArray2D_PropertyList_exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("array") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::append
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*append_function_type)( ::QVector< QVector< SireBase::PropertyList > > const & ) ;
            append_function_type append_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::append );
            
            PackedArray2D_PropertyList_exposer.def( 
                "append"
                , append_function_value
                , ( bp::arg("arrays") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::assertValidIndex
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*assertValidIndex_function_type)( ::quint32 ) const;
            assertValidIndex_function_type assertValidIndex_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::assertValidIndex );
            
            PackedArray2D_PropertyList_exposer.def( 
                "assertValidIndex"
                , assertValidIndex_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::at
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropertyList >::Array const & ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*at_function_type)( ::quint32 ) const;
            at_function_type at_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::at );
            
            PackedArray2D_PropertyList_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::at
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PropertyList const & ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*at_function_type)( ::quint32,::quint32 ) const;
            at_function_type at_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::at );
            
            PackedArray2D_PropertyList_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::count
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::count );
            
            PackedArray2D_PropertyList_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::detach
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*detach_function_type)(  ) ;
            detach_function_type detach_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::detach );
            
            PackedArray2D_PropertyList_exposer.def( 
                "detach"
                , detach_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::fromVariant
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropertyList > ( *fromVariant_function_type )( ::SireBase::PackedArray2D< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::fromVariant );
            
            PackedArray2D_PropertyList_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::isEmpty
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef bool ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::isEmpty );
            
            PackedArray2D_PropertyList_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::nArrays
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*nArrays_function_type)(  ) const;
            nArrays_function_type nArrays_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::nArrays );
            
            PackedArray2D_PropertyList_exposer.def( 
                "nArrays"
                , nArrays_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::nValues
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*nValues_function_type)(  ) const;
            nValues_function_type nValues_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::nValues );
            
            PackedArray2D_PropertyList_exposer.def( 
                "nValues"
                , nValues_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::nValues
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*nValues_function_type)( ::quint32 ) const;
            nValues_function_type nValues_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::nValues );
            
            PackedArray2D_PropertyList_exposer.def( 
                "nValues"
                , nValues_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "" );
        
        }
        PackedArray2D_PropertyList_exposer.def( bp::self != bp::self );
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::operator()
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PropertyList const & ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*__call___function_type)( ::quint32,::quint32 ) const;
            __call___function_type __call___function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::operator() );
            
            PackedArray2D_PropertyList_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::operator=
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropertyList > & ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*assign_function_type)( ::SireBase::PackedArray2D< SireBase::PropertyList > const & ) ;
            assign_function_type assign_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::operator= );
            
            PackedArray2D_PropertyList_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PackedArray2D_PropertyList_exposer.def( bp::self == bp::self );
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::operator[]
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropertyList >::Array const & ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*__getitem___function_type)( ::quint32 ) const;
            __getitem___function_type __getitem___function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::operator[] );
            
            PackedArray2D_PropertyList_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::remove
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*remove_function_type)( ::quint32 ) ;
            remove_function_type remove_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::remove );
            
            PackedArray2D_PropertyList_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::removeAll
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*removeAll_function_type)( ::QVarLengthArray< int, 256 > const & ) ;
            removeAll_function_type removeAll_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::removeAll );
            
            PackedArray2D_PropertyList_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("idxs") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::size
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef int ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::size );
            
            PackedArray2D_PropertyList_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::toQVector
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::QVector< SireBase::PropertyList > ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*toQVector_function_type)(  ) const;
            toQVector_function_type toQVector_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::toQVector );
            
            PackedArray2D_PropertyList_exposer.def( 
                "toQVector"
                , toQVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::toQVectorVector
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::QVector< QVector< SireBase::PropertyList > > ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*toQVectorVector_function_type)(  ) const;
            toQVectorVector_function_type toQVectorVector_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::toQVectorVector );
            
            PackedArray2D_PropertyList_exposer.def( 
                "toQVectorVector"
                , toQVectorVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::toString
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::QString ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::toString );
            
            PackedArray2D_PropertyList_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::toVariant
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef ::SireBase::PackedArray2D< QVariant > ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::toVariant );
            
            PackedArray2D_PropertyList_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::update
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*update_function_type)( ::quint32,::SireBase::PackedArray2D< SireBase::PropertyList >::Array const & ) ;
            update_function_type update_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::update );
            
            PackedArray2D_PropertyList_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("array") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::update
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*update_function_type)( ::quint32,::QVector< SireBase::PropertyList > const & ) ;
            update_function_type update_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::update );
            
            PackedArray2D_PropertyList_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("i"), bp::arg("array") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireBase::PackedArray2D< SireBase::PropertyList >::updateAll
        
            typedef SireBase::PackedArray2D< SireBase::PropertyList > exported_class_t;
            typedef void ( ::SireBase::PackedArray2D< SireBase::PropertyList >::*updateAll_function_type)( ::QVarLengthArray< int, 256 > const &,::SireBase::PackedArray2D< SireBase::PropertyList > const & ) ;
            updateAll_function_type updateAll_function_value( &::SireBase::PackedArray2D< SireBase::PropertyList >::updateAll );
            
            PackedArray2D_PropertyList_exposer.def( 
                "updateAll"
                , updateAll_function_value
                , ( bp::arg("idxs"), bp::arg("arrays") )
                , bp::release_gil_policy()
                , "" );
        
        }
        PackedArray2D_PropertyList_exposer.staticmethod( "fromVariant" );
        PackedArray2D_PropertyList_exposer.def( "__copy__", &__copy__<SireBase::PackedArray2D<SireBase::PropertyList>>);
        PackedArray2D_PropertyList_exposer.def( "__deepcopy__", &__copy__<SireBase::PackedArray2D<SireBase::PropertyList>>);
        PackedArray2D_PropertyList_exposer.def( "clone", &__copy__<SireBase::PackedArray2D<SireBase::PropertyList>>);
        PackedArray2D_PropertyList_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireBase::PackedArray2D<SireBase::PropertyList> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_PropertyList_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireBase::PackedArray2D<SireBase::PropertyList> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PackedArray2D_PropertyList_exposer.def_pickle(sire_pickle_suite< ::SireBase::PackedArray2D<SireBase::PropertyList> >());
        PackedArray2D_PropertyList_exposer.def( "__str__", &__str__< ::SireBase::PackedArray2D<SireBase::PropertyList> > );
        PackedArray2D_PropertyList_exposer.def( "__repr__", &__str__< ::SireBase::PackedArray2D<SireBase::PropertyList> > );
        PackedArray2D_PropertyList_exposer.def( "__len__", &__len_size< ::SireBase::PackedArray2D<SireBase::PropertyList> > );
    }

}
