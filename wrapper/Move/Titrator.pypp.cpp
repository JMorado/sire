// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Titrator.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/rangenerator.h"

#include "SireMol/atomcharges.h"

#include "SireMol/editor.hpp"

#include "SireMol/evaluator.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/molidx.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "titrator.h"

#include "tostring.h"

#include "titrator.h"

SireMove::Titrator __copy__(const SireMove::Titrator &other){ return SireMove::Titrator(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Titrator_class(){

    { //::SireMove::Titrator
        typedef bp::class_< SireMove::Titrator, bp::bases< SireBase::Property > > Titrator_exposer_t;
        Titrator_exposer_t Titrator_exposer = Titrator_exposer_t( "Titrator", "This property is used by the TitrationMove to maintain a list\nof which molecules can be titrated, and the list of titration\nstates of each molecule.\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope Titrator_scope( Titrator_exposer );
        Titrator_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("group") ), "Construct to titrate the molecules in the passed molecule group") );
        Titrator_exposer.def( bp::init< SireMove::Titrator const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::Titrator::applyTo
        
            typedef double ( ::SireMove::Titrator::*applyTo_function_type)( ::SireSystem::System & ) ;
            applyTo_function_type applyTo_function_value( &::SireMove::Titrator::applyTo );
            
            Titrator_exposer.def( 
                "applyTo"
                , applyTo_function_value
                , ( bp::arg("system") )
                , "Apply the set of charges to the passed system" );
        
        }
        { //::SireMove::Titrator::getCharge
        
            typedef int ( ::SireMove::Titrator::*getCharge_function_type)( int ) const;
            getCharge_function_type getCharge_function_value( &::SireMove::Titrator::getCharge );
            
            Titrator_exposer.def( 
                "getCharge"
                , getCharge_function_value
                , ( bp::arg("i") )
                , "Return the charge of the ith molecule" );
        
        }
        { //::SireMove::Titrator::getIonIndex
        
            typedef int ( ::SireMove::Titrator::*getIonIndex_function_type)( int ) const;
            getIonIndex_function_type getIonIndex_function_value( &::SireMove::Titrator::getIonIndex );
            
            Titrator_exposer.def( 
                "getIonIndex"
                , getIonIndex_function_value
                , ( bp::arg("ion_index") )
                , "Return the index of the molecule at ion_index ion_index" );
        
        }
        { //::SireMove::Titrator::getNegativeIonIndex
        
            typedef int ( ::SireMove::Titrator::*getNegativeIonIndex_function_type)( int ) const;
            getNegativeIonIndex_function_type getNegativeIonIndex_function_value( &::SireMove::Titrator::getNegativeIonIndex );
            
            Titrator_exposer.def( 
                "getNegativeIonIndex"
                , getNegativeIonIndex_function_value
                , ( bp::arg("ion_index") )
                , "Return the index of the molecule at negative ion_index ion_index" );
        
        }
        { //::SireMove::Titrator::getNeutralIndex
        
            typedef int ( ::SireMove::Titrator::*getNeutralIndex_function_type)( int ) const;
            getNeutralIndex_function_type getNeutralIndex_function_value( &::SireMove::Titrator::getNeutralIndex );
            
            Titrator_exposer.def( 
                "getNeutralIndex"
                , getNeutralIndex_function_value
                , ( bp::arg("neutral_index") )
                , "Return the index of the molecule at neutral ion_index" );
        
        }
        { //::SireMove::Titrator::getPositiveIonIndex
        
            typedef int ( ::SireMove::Titrator::*getPositiveIonIndex_function_type)( int ) const;
            getPositiveIonIndex_function_type getPositiveIonIndex_function_value( &::SireMove::Titrator::getPositiveIonIndex );
            
            Titrator_exposer.def( 
                "getPositiveIonIndex"
                , getPositiveIonIndex_function_value
                , ( bp::arg("ion_index") )
                , "Return the index of the molecule at positive ion_index ion_index" );
        
        }
        { //::SireMove::Titrator::nIons
        
            typedef int ( ::SireMove::Titrator::*nIons_function_type)(  ) const;
            nIons_function_type nIons_function_value( &::SireMove::Titrator::nIons );
            
            Titrator_exposer.def( 
                "nIons"
                , nIons_function_value
                , "Return the number of ions" );
        
        }
        { //::SireMove::Titrator::nNegativeIons
        
            typedef int ( ::SireMove::Titrator::*nNegativeIons_function_type)(  ) const;
            nNegativeIons_function_type nNegativeIons_function_value( &::SireMove::Titrator::nNegativeIons );
            
            Titrator_exposer.def( 
                "nNegativeIons"
                , nNegativeIons_function_value
                , "Return the number of negative ions" );
        
        }
        { //::SireMove::Titrator::nNeutrals
        
            typedef int ( ::SireMove::Titrator::*nNeutrals_function_type)(  ) const;
            nNeutrals_function_type nNeutrals_function_value( &::SireMove::Titrator::nNeutrals );
            
            Titrator_exposer.def( 
                "nNeutrals"
                , nNeutrals_function_value
                , "Return the number of neutral molecules" );
        
        }
        { //::SireMove::Titrator::nPositiveIons
        
            typedef int ( ::SireMove::Titrator::*nPositiveIons_function_type)(  ) const;
            nPositiveIons_function_type nPositiveIons_function_value( &::SireMove::Titrator::nPositiveIons );
            
            Titrator_exposer.def( 
                "nPositiveIons"
                , nPositiveIons_function_value
                , "Return the number of positive ions" );
        
        }
        Titrator_exposer.def( bp::self != bp::self );
        { //::SireMove::Titrator::operator=
        
            typedef ::SireMove::Titrator & ( ::SireMove::Titrator::*assign_function_type)( ::SireMove::Titrator const & ) ;
            assign_function_type assign_function_value( &::SireMove::Titrator::operator= );
            
            Titrator_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Titrator_exposer.def( bp::self == bp::self );
        { //::SireMove::Titrator::randomiseCharge
        
            typedef void ( ::SireMove::Titrator::*randomiseCharge_function_type)( int ) ;
            randomiseCharge_function_type randomiseCharge_function_value( &::SireMove::Titrator::randomiseCharge );
            
            Titrator_exposer.def( 
                "randomiseCharge"
                , randomiseCharge_function_value
                , ( bp::arg("ncharges") )
                , "Randomise all of the charges - this ensures that there are 2ncharges charges\nin the system (ncharges positive, and ncharges negative, with the rest neutral)" );
        
        }
        { //::SireMove::Titrator::randomiseCharge
        
            typedef void ( ::SireMove::Titrator::*randomiseCharge_function_type)( int,int ) ;
            randomiseCharge_function_type randomiseCharge_function_value( &::SireMove::Titrator::randomiseCharge );
            
            Titrator_exposer.def( 
                "randomiseCharge"
                , randomiseCharge_function_value
                , ( bp::arg("npositive"), bp::arg("nnegative") )
                , "Randomise all of the charges, ensuring there are npositive positive charges\nand nnegative negative charges" );
        
        }
        { //::SireMove::Titrator::setMoleculeGroup
        
            typedef void ( ::SireMove::Titrator::*setMoleculeGroup_function_type)( ::SireMol::MoleculeGroup const & ) ;
            setMoleculeGroup_function_type setMoleculeGroup_function_value( &::SireMove::Titrator::setMoleculeGroup );
            
            Titrator_exposer.def( 
                "setMoleculeGroup"
                , setMoleculeGroup_function_value
                , ( bp::arg("group") )
                , "Set the molecule group containing the molecules whose charge\nstate will be changed" );
        
        }
        { //::SireMove::Titrator::setNegativeTemplate
        
            typedef void ( ::SireMove::Titrator::*setNegativeTemplate_function_type)( ::SireMol::Molecule const &,::QStringList const &,::SireBase::PropertyMap const & ) ;
            setNegativeTemplate_function_type setNegativeTemplate_function_value( &::SireMove::Titrator::setNegativeTemplate );
            
            Titrator_exposer.def( 
                "setNegativeTemplate"
                , setNegativeTemplate_function_value
                , ( bp::arg("negative_ion"), bp::arg("properties"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the negative ion state. The collection of properties\nlisted in properties are copied from negative_ion (once mapped by\nmap) to the molecule to put it into the negative_ion state" );
        
        }
        { //::SireMove::Titrator::setNegativeTemplate
        
            typedef void ( ::SireMove::Titrator::*setNegativeTemplate_function_type)( ::SireMol::Molecule const &,::SireBase::PropertyMap const & ) ;
            setNegativeTemplate_function_type setNegativeTemplate_function_value( &::SireMove::Titrator::setNegativeTemplate );
            
            Titrator_exposer.def( 
                "setNegativeTemplate"
                , setNegativeTemplate_function_value
                , ( bp::arg("negative_ion"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the negative ion state, where all properties except\nmap[coordinates] will be copied to the molecule" );
        
        }
        { //::SireMove::Titrator::setNeutralTemplate
        
            typedef void ( ::SireMove::Titrator::*setNeutralTemplate_function_type)( ::SireMol::Molecule const &,::QStringList const &,::SireBase::PropertyMap const & ) ;
            setNeutralTemplate_function_type setNeutralTemplate_function_value( &::SireMove::Titrator::setNeutralTemplate );
            
            Titrator_exposer.def( 
                "setNeutralTemplate"
                , setNeutralTemplate_function_value
                , ( bp::arg("neutral_mol"), bp::arg("properties"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the neutral state. The collection of properties\nlisted in properties are copied from neutral_mol (once mapped by\nmap) to the molecule to put it into the neutral state" );
        
        }
        { //::SireMove::Titrator::setNeutralTemplate
        
            typedef void ( ::SireMove::Titrator::*setNeutralTemplate_function_type)( ::SireMol::Molecule const &,::SireBase::PropertyMap const & ) ;
            setNeutralTemplate_function_type setNeutralTemplate_function_value( &::SireMove::Titrator::setNeutralTemplate );
            
            Titrator_exposer.def( 
                "setNeutralTemplate"
                , setNeutralTemplate_function_value
                , ( bp::arg("neutral_mol"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the neutral state, where all properties except\nmap[coordinates] will be copied to the molecule" );
        
        }
        { //::SireMove::Titrator::setPositiveTemplate
        
            typedef void ( ::SireMove::Titrator::*setPositiveTemplate_function_type)( ::SireMol::Molecule const &,::QStringList const &,::SireBase::PropertyMap const & ) ;
            setPositiveTemplate_function_type setPositiveTemplate_function_value( &::SireMove::Titrator::setPositiveTemplate );
            
            Titrator_exposer.def( 
                "setPositiveTemplate"
                , setPositiveTemplate_function_value
                , ( bp::arg("positive_ion"), bp::arg("properties"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the positive ion state. The collection of properties\nlisted in properties are copied from positive_ion (once mapped by\nmap) to the molecule to put it into the positive_ion state" );
        
        }
        { //::SireMove::Titrator::setPositiveTemplate
        
            typedef void ( ::SireMove::Titrator::*setPositiveTemplate_function_type)( ::SireMol::Molecule const &,::SireBase::PropertyMap const & ) ;
            setPositiveTemplate_function_type setPositiveTemplate_function_value( &::SireMove::Titrator::setPositiveTemplate );
            
            Titrator_exposer.def( 
                "setPositiveTemplate"
                , setPositiveTemplate_function_value
                , ( bp::arg("positive_ion"), bp::arg("map")=SireBase::PropertyMap() )
                , "Set the template for the positive ion state, where all properties except\nmap[coordinates] will be copied to the molecule" );
        
        }
        { //::SireMove::Titrator::swapCharge
        
            typedef void ( ::SireMove::Titrator::*swapCharge_function_type)( int,int ) ;
            swapCharge_function_type swapCharge_function_value( &::SireMove::Titrator::swapCharge );
            
            Titrator_exposer.def( 
                "swapCharge"
                , swapCharge_function_value
                , ( bp::arg("i"), bp::arg("j") )
                , "Swap the charge of the ith and jth molecules" );
        
        }
        { //::SireMove::Titrator::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::Titrator::typeName );
            
            Titrator_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMove::Titrator::what
        
            typedef char const * ( ::SireMove::Titrator::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMove::Titrator::what );
            
            Titrator_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        Titrator_exposer.staticmethod( "typeName" );
        Titrator_exposer.def( "__copy__", &__copy__);
        Titrator_exposer.def( "__deepcopy__", &__copy__);
        Titrator_exposer.def( "clone", &__copy__);
        Titrator_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::Titrator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Titrator_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::Titrator >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Titrator_exposer.def( "__getstate_manages_dict__", true);
        Titrator_exposer.def( "__safe_for_unpickling__", true);
        Titrator_exposer.def( "__setstate__", &__setstate__base64< ::SireMove::Titrator > );
        Titrator_exposer.def( "__getstate__", &__getstate__base64< ::SireMove::Titrator > );
        Titrator_exposer.def( "__str__", &__str__< ::SireMove::Titrator > );
        Titrator_exposer.def( "__repr__", &__str__< ::SireMove::Titrator > );
    }

}
