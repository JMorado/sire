// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CenterOfMass.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/evaluator.h"

#include "SireMol/mgidx.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleculegroups.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/aabox.h"

#include "SireVol/errors.h"

#include "forcetable.h"

#include "point.h"

#include <boost/tuple/tuple.hpp>

#include "point.h"

SireFF::CenterOfMass __copy__(const SireFF::CenterOfMass &other){ return SireFF::CenterOfMass(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CenterOfMass_class(){

    { //::SireFF::CenterOfMass
        typedef bp::class_< SireFF::CenterOfMass, bp::bases< SireFF::Point, SireBase::Property > > CenterOfMass_exposer_t;
        CenterOfMass_exposer_t CenterOfMass_exposer = CenterOfMass_exposer_t( "CenterOfMass", "This point returns the center of mass of a view of a molecule,\nor group of molecules", bp::init< >("Constructor") );
        bp::scope CenterOfMass_scope( CenterOfMass_exposer );
        CenterOfMass_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to get the center of the molecule view molview using the\npassed property map to find the required properties\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\n") );
        CenterOfMass_exposer.def( bp::init< SireMol::Molecules const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to get the center of the molecules in molecules, using the\npassed property map to find the required properties\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\n") );
        CenterOfMass_exposer.def( bp::init< SireFF::CenterOfMass const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireFF::CenterOfMass::addForce
        
            typedef bool ( ::SireFF::CenterOfMass::*addForce_function_type)( ::SireFF::MolForceTable &,::SireMaths::Vector const & ) const;
            addForce_function_type addForce_function_value( &::SireFF::CenterOfMass::addForce );
            
            CenterOfMass_exposer.def( 
                "addForce"
                , addForce_function_value
                , ( bp::arg("molforces"), bp::arg("force") )
                , "Decompose the force force acting on this point from the\nmolecule whose forces are in molforces and add the\nforce onto the table" );
        
        }
        { //::SireFF::CenterOfMass::addForce
        
            typedef bool ( ::SireFF::CenterOfMass::*addForce_function_type)( ::SireFF::ForceTable &,::SireMaths::Vector const & ) const;
            addForce_function_type addForce_function_value( &::SireFF::CenterOfMass::addForce );
            
            CenterOfMass_exposer.def( 
                "addForce"
                , addForce_function_value
                , ( bp::arg("forces"), bp::arg("force") )
                , "Decompose the force force into the forces acting on\nthe molecules that contribute to this point and add those\nforces onto the table forces" );
        
        }
        { //::SireFF::CenterOfMass::contains
        
            typedef bool ( ::SireFF::CenterOfMass::*contains_function_type)( ::SireMol::MolNum ) const;
            contains_function_type contains_function_value( &::SireFF::CenterOfMass::contains );
            
            CenterOfMass_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molnum") )
                , "Return whether or not the molecule with number molnum is\nneeded to generate this point" );
        
        }
        { //::SireFF::CenterOfMass::contains
        
            typedef bool ( ::SireFF::CenterOfMass::*contains_function_type)( ::SireMol::MolID const & ) const;
            contains_function_type contains_function_value( &::SireFF::CenterOfMass::contains );
            
            CenterOfMass_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molid") )
                , "Return whether or not this molecule with ID molid is\nneeded to generate this point" );
        
        }
        { //::SireFF::CenterOfMass::isExtraMoleculePoint
        
            typedef bool ( ::SireFF::CenterOfMass::*isExtraMoleculePoint_function_type)(  ) const;
            isExtraMoleculePoint_function_type isExtraMoleculePoint_function_value( &::SireFF::CenterOfMass::isExtraMoleculePoint );
            
            CenterOfMass_exposer.def( 
                "isExtraMoleculePoint"
                , isExtraMoleculePoint_function_value
                , "Return whether or not this is an extramolecular point (it is independent\nof the coordinates of atoms in any molecule, i.e. it is just a point in space)" );
        
        }
        { //::SireFF::CenterOfMass::isInterMoleculePoint
        
            typedef bool ( ::SireFF::CenterOfMass::*isInterMoleculePoint_function_type)(  ) const;
            isInterMoleculePoint_function_type isInterMoleculePoint_function_value( &::SireFF::CenterOfMass::isInterMoleculePoint );
            
            CenterOfMass_exposer.def( 
                "isInterMoleculePoint"
                , isInterMoleculePoint_function_value
                , "Return whether or not this is an intermolecular point (it depends on\ncoordinates of atoms from than one molecule)" );
        
        }
        { //::SireFF::CenterOfMass::isIntraMoleculePoint
        
            typedef bool ( ::SireFF::CenterOfMass::*isIntraMoleculePoint_function_type)(  ) const;
            isIntraMoleculePoint_function_type isIntraMoleculePoint_function_value( &::SireFF::CenterOfMass::isIntraMoleculePoint );
            
            CenterOfMass_exposer.def( 
                "isIntraMoleculePoint"
                , isIntraMoleculePoint_function_value
                , "Return whether this is an intramolecular point (it depends on coordinates\nof atoms in just one molecule)" );
        
        }
        { //::SireFF::CenterOfMass::molecules
        
            typedef ::SireMol::Molecules ( ::SireFF::CenterOfMass::*molecules_function_type)(  ) const;
            molecules_function_type molecules_function_value( &::SireFF::CenterOfMass::molecules );
            
            CenterOfMass_exposer.def( 
                "molecules"
                , molecules_function_value
                , "Return all of the molecules used to generate this point" );
        
        }
        { //::SireFF::CenterOfMass::nMolecules
        
            typedef int ( ::SireFF::CenterOfMass::*nMolecules_function_type)(  ) const;
            nMolecules_function_type nMolecules_function_value( &::SireFF::CenterOfMass::nMolecules );
            
            CenterOfMass_exposer.def( 
                "nMolecules"
                , nMolecules_function_value
                , "Return the number of molecules needed to generate this point" );
        
        }
        CenterOfMass_exposer.def( bp::self != bp::self );
        { //::SireFF::CenterOfMass::operator=
        
            typedef ::SireFF::CenterOfMass & ( ::SireFF::CenterOfMass::*assign_function_type)( ::SireFF::CenterOfMass const & ) ;
            assign_function_type assign_function_value( &::SireFF::CenterOfMass::operator= );
            
            CenterOfMass_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CenterOfMass_exposer.def( bp::self == bp::self );
        { //::SireFF::CenterOfMass::setSpace
        
            typedef void ( ::SireFF::CenterOfMass::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireFF::CenterOfMass::setSpace );
            
            CenterOfMass_exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("space") )
                , "Set the space used by this point - a CenterOfGeometry cannot\nbe calculated for periodic or non-cartesian spaces if there\nis more than one molecule" );
        
        }
        { //::SireFF::CenterOfMass::toString
        
            typedef ::QString ( ::SireFF::CenterOfMass::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireFF::CenterOfMass::toString );
            
            CenterOfMass_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation" );
        
        }
        { //::SireFF::CenterOfMass::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::CenterOfMass::typeName );
            
            CenterOfMass_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireFF::CenterOfMass::update
        
            typedef bool ( ::SireFF::CenterOfMass::*update_function_type)( ::SireMol::MoleculeData const & ) ;
            update_function_type update_function_value( &::SireFF::CenterOfMass::update );
            
            CenterOfMass_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("moldata") )
                , "Update the molecules used to create this point" );
        
        }
        { //::SireFF::CenterOfMass::update
        
            typedef bool ( ::SireFF::CenterOfMass::*update_function_type)( ::SireMol::Molecules const & ) ;
            update_function_type update_function_value( &::SireFF::CenterOfMass::update );
            
            CenterOfMass_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molecules") )
                , "Update the molecules used to create this point" );
        
        }
        { //::SireFF::CenterOfMass::update
        
            typedef bool ( ::SireFF::CenterOfMass::*update_function_type)( ::SireMol::MoleculeGroup const & ) ;
            update_function_type update_function_value( &::SireFF::CenterOfMass::update );
            
            CenterOfMass_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molgroup") )
                , "Update the molecules used to create this point" );
        
        }
        { //::SireFF::CenterOfMass::update
        
            typedef bool ( ::SireFF::CenterOfMass::*update_function_type)( ::SireMol::MolGroupsBase const & ) ;
            update_function_type update_function_value( &::SireFF::CenterOfMass::update );
            
            CenterOfMass_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molgroups") )
                , "Update the molecules used to create this point" );
        
        }
        { //::SireFF::CenterOfMass::usesMoleculesIn
        
            typedef bool ( ::SireFF::CenterOfMass::*usesMoleculesIn_function_type)( ::SireFF::ForceTable const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireFF::CenterOfMass::usesMoleculesIn );
            
            CenterOfMass_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("forcetable") )
                , "Return whether or not this point uses data from any of the\nmolecules in the passed forcetable" );
        
        }
        { //::SireFF::CenterOfMass::usesMoleculesIn
        
            typedef bool ( ::SireFF::CenterOfMass::*usesMoleculesIn_function_type)( ::SireMol::Molecules const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireFF::CenterOfMass::usesMoleculesIn );
            
            CenterOfMass_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("molecules") )
                , "Return whether or not this point uses data from any of the\nmolecules in molecules" );
        
        }
        { //::SireFF::CenterOfMass::usesMoleculesIn
        
            typedef bool ( ::SireFF::CenterOfMass::*usesMoleculesIn_function_type)( ::SireMol::MoleculeGroup const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireFF::CenterOfMass::usesMoleculesIn );
            
            CenterOfMass_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("molgroup") )
                , "Return whether or not this point uses data from any of the\nmolecules in the group molgroup" );
        
        }
        { //::SireFF::CenterOfMass::usesMoleculesIn
        
            typedef bool ( ::SireFF::CenterOfMass::*usesMoleculesIn_function_type)( ::SireMol::MolGroupsBase const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireFF::CenterOfMass::usesMoleculesIn );
            
            CenterOfMass_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("molgroups") )
                , "Return whether or not this point uses data from any of the\nmolecules in the groups in molgroups" );
        
        }
        { //::SireFF::CenterOfMass::wouldUpdate
        
            typedef bool ( ::SireFF::CenterOfMass::*wouldUpdate_function_type)( ::SireMol::MoleculeData const & ) const;
            wouldUpdate_function_type wouldUpdate_function_value( &::SireFF::CenterOfMass::wouldUpdate );
            
            CenterOfMass_exposer.def( 
                "wouldUpdate"
                , wouldUpdate_function_value
                , ( bp::arg("moldata") )
                , "Return whether or not the passed molecule would change this point" );
        
        }
        { //::SireFF::CenterOfMass::wouldUpdate
        
            typedef bool ( ::SireFF::CenterOfMass::*wouldUpdate_function_type)( ::SireMol::Molecules const & ) const;
            wouldUpdate_function_type wouldUpdate_function_value( &::SireFF::CenterOfMass::wouldUpdate );
            
            CenterOfMass_exposer.def( 
                "wouldUpdate"
                , wouldUpdate_function_value
                , ( bp::arg("molecules") )
                , "Return whether or not the passed molecules would change this point" );
        
        }
        { //::SireFF::CenterOfMass::wouldUpdate
        
            typedef bool ( ::SireFF::CenterOfMass::*wouldUpdate_function_type)( ::SireMol::MoleculeGroup const & ) const;
            wouldUpdate_function_type wouldUpdate_function_value( &::SireFF::CenterOfMass::wouldUpdate );
            
            CenterOfMass_exposer.def( 
                "wouldUpdate"
                , wouldUpdate_function_value
                , ( bp::arg("molgroup") )
                , "Return whether or not the passed molecules would change this point" );
        
        }
        { //::SireFF::CenterOfMass::wouldUpdate
        
            typedef bool ( ::SireFF::CenterOfMass::*wouldUpdate_function_type)( ::SireMol::MolGroupsBase const & ) const;
            wouldUpdate_function_type wouldUpdate_function_value( &::SireFF::CenterOfMass::wouldUpdate );
            
            CenterOfMass_exposer.def( 
                "wouldUpdate"
                , wouldUpdate_function_value
                , ( bp::arg("molgroups") )
                , "Return whether or not the passed molecules would change this point" );
        
        }
        CenterOfMass_exposer.staticmethod( "typeName" );
        CenterOfMass_exposer.def( "__copy__", &__copy__);
        CenterOfMass_exposer.def( "__deepcopy__", &__copy__);
        CenterOfMass_exposer.def( "clone", &__copy__);
        CenterOfMass_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::CenterOfMass >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CenterOfMass_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::CenterOfMass >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CenterOfMass_exposer.def( "__getstate_manages_dict__", true);
        CenterOfMass_exposer.def( "__safe_for_unpickling__", true);
        CenterOfMass_exposer.def( "__setstate__", &__setstate__base64< ::SireFF::CenterOfMass > );
        CenterOfMass_exposer.def( "__getstate__", &__getstate__base64< ::SireFF::CenterOfMass > );
        CenterOfMass_exposer.def( "__str__", &__str__< ::SireFF::CenterOfMass > );
        CenterOfMass_exposer.def( "__repr__", &__str__< ::SireFF::CenterOfMass > );
    }

}
