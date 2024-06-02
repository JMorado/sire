// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "IntraCLJFFBase.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intracljff.h"

#include "intracljff.h"

SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > __copy__(const SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > &other){ return SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> >(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_IntraCLJFFBase_class(){

    { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >
        typedef bp::class_< SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >, bp::bases< SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential>, SireFF::G1FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > IntraCLJFFBase_exposer_t;
        IntraCLJFFBase_exposer_t IntraCLJFFBase_exposer = IntraCLJFFBase_exposer_t( "IntraCLJFFBase", "", bp::init< >("") );
        bp::scope IntraCLJFFBase_scope( IntraCLJFFBase_exposer );
        IntraCLJFFBase_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "") );
        IntraCLJFFBase_exposer.def( bp::init< SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > const & >(( bp::arg("other") ), "") );
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::components
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::Components const & ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::components );
            
            IntraCLJFFBase_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::containsProperty
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::containsProperty );
            
            IntraCLJFFBase_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::mustNowRecalculateFromScratch
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef void ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::mustNowRecalculateFromScratch );
            
            IntraCLJFFBase_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IntraCLJFFBase_exposer.def( bp::self != bp::self );
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::operator=
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > & ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*assign_function_type)( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > const & ) ;
            assign_function_type assign_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::operator= );
            
            IntraCLJFFBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        IntraCLJFFBase_exposer.def( bp::self == bp::self );
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::properties
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::properties );
            
            IntraCLJFFBase_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::property
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::property );
            
            IntraCLJFFBase_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::setProperty
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef bool ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::setProperty );
            
            IntraCLJFFBase_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::typeName
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::typeName );
            
            IntraCLJFFBase_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::what
        
            typedef SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > > exported_class_t;
            typedef char const * ( ::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::Intra2BFF< SireMM::CLJPotentialInterface< SireMM::IntraCLJPotential > >::what );
            
            IntraCLJFFBase_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        IntraCLJFFBase_exposer.staticmethod( "typeName" );
        IntraCLJFFBase_exposer.def( "__copy__", &__copy__<SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> >>);
        IntraCLJFFBase_exposer.def( "__deepcopy__", &__copy__<SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> >>);
        IntraCLJFFBase_exposer.def( "clone", &__copy__<SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> >>);
        IntraCLJFFBase_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraCLJFFBase_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IntraCLJFFBase_exposer.def_pickle(sire_pickle_suite< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > >());
        IntraCLJFFBase_exposer.def( "__str__", &__str__< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > > );
        IntraCLJFFBase_exposer.def( "__repr__", &__str__< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > > );
        IntraCLJFFBase_exposer.def( "__len__", &__len_count< ::SireFF::Intra2BFF<SireMM::CLJPotentialInterface<SireMM::IntraCLJPotential> > > );
    }

}
