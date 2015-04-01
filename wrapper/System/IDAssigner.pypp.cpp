// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "IDAssigner.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/linearap.h"

#include "SireMaths/nmatrix.h"

#include "SireMaths/nvector.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/molecules.h"

#include "SireMol/moleditor.h"

#include "SireMol/viewsofmol.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/errors.h"

#include "SireVol/space.h"

#include "closemols.h"

#include "delta.h"

#include "idassigner.h"

#include "system.h"

#include "tostring.h"

#include <QDebug>

#include <QTime>

#include <QVarLengthArray>

#include "idassigner.h"

SireSystem::IDAssigner __copy__(const SireSystem::IDAssigner &other){ return SireSystem::IDAssigner(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_IDAssigner_class(){

    { //::SireSystem::IDAssigner
        typedef bp::class_< SireSystem::IDAssigner, bp::bases< SireBase::Property > > IDAssigner_exposer_t;
        IDAssigner_exposer_t IDAssigner_exposer = IDAssigner_exposer_t( "IDAssigner", bp::init< >() );
        bp::scope IDAssigner_scope( IDAssigner_exposer );
        IDAssigner_exposer.def( bp::init< SireFF::PointRef const &, SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("point"), bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )) );
        IDAssigner_exposer.def( bp::init< QVector< SireBase::PropPtr< SireFF::Point > > const &, SireMol::MoleculeGroup const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("points"), bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() )) );
        IDAssigner_exposer.def( bp::init< SireFF::PointRef const &, SireMol::MoleculeGroup const &, SireVol::Space const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("point"), bp::arg("molgroup"), bp::arg("space"), bp::arg("map")=SireBase::PropertyMap() )) );
        IDAssigner_exposer.def( bp::init< QVector< SireBase::PropPtr< SireFF::Point > > const &, SireMol::MoleculeGroup const &, SireVol::Space const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("points"), bp::arg("molgroup"), bp::arg("space"), bp::arg("map")=SireBase::PropertyMap() )) );
        IDAssigner_exposer.def( bp::init< SireSystem::IDAssigner const & >(( bp::arg("other") )) );
        { //::SireSystem::IDAssigner::identifiedMolecules
        
            typedef ::QVector< SireMol::PartialMolecule > ( ::SireSystem::IDAssigner::*identifiedMolecules_function_type )(  ) const;
            identifiedMolecules_function_type identifiedMolecules_function_value( &::SireSystem::IDAssigner::identifiedMolecules );
            
            IDAssigner_exposer.def( 
                "identifiedMolecules"
                , identifiedMolecules_function_value );
        
        }
        { //::SireSystem::IDAssigner::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireSystem::IDAssigner::*moleculeGroup_function_type )(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireSystem::IDAssigner::moleculeGroup );
            
            IDAssigner_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireSystem::IDAssigner::nPoints
        
            typedef int ( ::SireSystem::IDAssigner::*nPoints_function_type )(  ) const;
            nPoints_function_type nPoints_function_value( &::SireSystem::IDAssigner::nPoints );
            
            IDAssigner_exposer.def( 
                "nPoints"
                , nPoints_function_value );
        
        }
        IDAssigner_exposer.def( bp::self != bp::self );
        { //::SireSystem::IDAssigner::operator=
        
            typedef ::SireSystem::IDAssigner & ( ::SireSystem::IDAssigner::*assign_function_type )( ::SireSystem::IDAssigner const & ) ;
            assign_function_type assign_function_value( &::SireSystem::IDAssigner::operator= );
            
            IDAssigner_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        IDAssigner_exposer.def( bp::self == bp::self );
        { //::SireSystem::IDAssigner::points
        
            typedef ::QVector< SireBase::PropPtr< SireFF::Point > > ( ::SireSystem::IDAssigner::*points_function_type )(  ) const;
            points_function_type points_function_value( &::SireSystem::IDAssigner::points );
            
            IDAssigner_exposer.def( 
                "points"
                , points_function_value );
        
        }
        { //::SireSystem::IDAssigner::propertyMap
        
            typedef ::SireBase::PropertyMap const & ( ::SireSystem::IDAssigner::*propertyMap_function_type )(  ) const;
            propertyMap_function_type propertyMap_function_value( &::SireSystem::IDAssigner::propertyMap );
            
            IDAssigner_exposer.def( 
                "propertyMap"
                , propertyMap_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireSystem::IDAssigner::space
        
            typedef ::SireVol::Space const & ( ::SireSystem::IDAssigner::*space_function_type )(  ) const;
            space_function_type space_function_value( &::SireSystem::IDAssigner::space );
            
            IDAssigner_exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireSystem::IDAssigner::toString
        
            typedef ::QString ( ::SireSystem::IDAssigner::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireSystem::IDAssigner::toString );
            
            IDAssigner_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireSystem::IDAssigner::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::IDAssigner::typeName );
            
            IDAssigner_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireSystem::IDAssigner::update
        
            typedef void ( ::SireSystem::IDAssigner::*update_function_type )( ::SireSystem::System const & ) ;
            update_function_type update_function_value( &::SireSystem::IDAssigner::update );
            
            IDAssigner_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("system") ) );
        
        }
        { //::SireSystem::IDAssigner::what
        
            typedef char const * ( ::SireSystem::IDAssigner::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireSystem::IDAssigner::what );
            
            IDAssigner_exposer.def( 
                "what"
                , what_function_value );
        
        }
        IDAssigner_exposer.staticmethod( "typeName" );
        IDAssigner_exposer.def( "__copy__", &__copy__);
        IDAssigner_exposer.def( "__deepcopy__", &__copy__);
        IDAssigner_exposer.def( "clone", &__copy__);
        IDAssigner_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::IDAssigner >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAssigner_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::IDAssigner >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        IDAssigner_exposer.def( "__str__", &__str__< ::SireSystem::IDAssigner > );
        IDAssigner_exposer.def( "__repr__", &__str__< ::SireSystem::IDAssigner > );
    }

}
