// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Mover_Bond_.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireCAS/expression.h"

#include "SireCAS/symbol.h"

#include "SireCAS/values.h"

#include "SireMol/errors.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "bond.h"

#include "selectorbond.h"

#include "twoatomfunctions.h"

#include <QDebug>

#include "bond.h"

#include "SireMaths/align.h"

#include "SireMaths/axisset.h"

#include "SireMaths/matrix.h"

#include "SireMaths/quaternion.h"

#include "SireMaths/rotate.h"

#include "SireMaths/vectorproperty.h"

#include "SireMol/errors.h"

#include "SireUnits/units.h"

#include "SireVol/coordgroup.h"

#include "SireVol/space.h"

#include "angleid.h"

#include "atomcoords.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "atomvelocities.h"

#include "bondid.h"

#include "connectivity.h"

#include "dihedralid.h"

#include "improperid.h"

#include "mover.h"

#include "tostring.h"

#include "weightfunction.h"

#include "mover.h"

SireMol::Mover<SireMM::Bond> __copy__(const SireMol::Mover<SireMM::Bond> &other){ return SireMol::Mover<SireMM::Bond>(other); }

#include "Helpers/copy.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Mover_Bond__class(){

    { //::SireMol::Mover< SireMM::Bond >
        typedef bp::class_< SireMol::Mover< SireMM::Bond >, bp::bases< SireMol::MoverBase, SireMM::Bond, SireMol::MoleculeView, SireBase::Property > > Mover_Bond__exposer_t;
        Mover_Bond__exposer_t Mover_Bond__exposer = Mover_Bond__exposer_t( "Mover_Bond_", "", bp::init< >("") );
        bp::scope Mover_Bond__scope( Mover_Bond__exposer );
        Mover_Bond__exposer.def( bp::init< SireMM::Bond const & >(( bp::arg("view") ), "") );
        Mover_Bond__exposer.def( bp::init< SireMM::Bond const &, SireMol::AtomSelection const & >(( bp::arg("view"), bp::arg("movable_atoms") ), "") );
        Mover_Bond__exposer.def( bp::init< SireMol::Mover< SireMM::Bond > const & >(( bp::arg("other") ), "") );
        { //::SireMol::Mover< SireMM::Bond >::align
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::Bond >::align );
            
            Mover_Bond__exposer.def( 
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::align
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::Bond >::align );
            
            Mover_Bond__exposer.def( 
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::align
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::Bond >::align );
            
            Mover_Bond__exposer.def( 
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::align
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMM::Bond >::align );
            
            Mover_Bond__exposer.def( 
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::change
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::Bond >::change );
            
            Mover_Bond__exposer.def( 
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::change
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*change_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::Bond >::change );
            
            Mover_Bond__exposer.def( 
                "change"
                , change_function_value
                , ( bp::arg("angle"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::change
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*change_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::Bond >::change );
            
            Mover_Bond__exposer.def( 
                "change"
                , change_function_value
                , ( bp::arg("dihedral"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::change
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::Bond >::change );
            
            Mover_Bond__exposer.def( 
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::change
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*change_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMM::Bond >::change );
            
            Mover_Bond__exposer.def( 
                "change"
                , change_function_value
                , ( bp::arg("improper"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::changeFrame
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::Mover< SireMM::Bond >::changeFrame );
            
            Mover_Bond__exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::commit
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMM::Bond ( ::SireMol::Mover< SireMM::Bond >::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::Mover< SireMM::Bond >::commit );
            
            Mover_Bond__exposer.def( 
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::makeWhole
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*makeWhole_function_type)( ::SireBase::PropertyMap const & ) ;
            makeWhole_function_type makeWhole_function_value( &::SireMol::Mover< SireMM::Bond >::makeWhole );
            
            Mover_Bond__exposer.def( 
                "makeWhole"
                , makeWhole_function_value
                , ( bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::makeWhole
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*makeWhole_function_type)( ::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            makeWhole_function_type makeWhole_function_value( &::SireMol::Mover< SireMM::Bond >::makeWhole );
            
            Mover_Bond__exposer.def( 
                "makeWhole"
                , makeWhole_function_value
                , ( bp::arg("center"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::mapInto
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*mapInto_function_type)( ::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::Mover< SireMM::Bond >::mapInto );
            
            Mover_Bond__exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::operator=
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*assign_function_type)( ::SireMol::Mover< SireMM::Bond > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMM::Bond >::operator= );
            
            Mover_Bond__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::operator=
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*assign_function_type)( ::SireMM::Bond const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMM::Bond >::operator= );
            
            Mover_Bond__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::rotate
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMM::Bond >::rotate );
            
            Mover_Bond__exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::rotate
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMM::Bond >::rotate );
            
            Mover_Bond__exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::set
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*set_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::Bond >::set );
            
            Mover_Bond__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("bond"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::set
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*set_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::Bond >::set );
            
            Mover_Bond__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("angle"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::set
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*set_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::Bond >::set );
            
            Mover_Bond__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::set
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*set_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMM::Bond >::set );
            
            Mover_Bond__exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("improper"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::setAll
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*setAll_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            setAll_function_type setAll_function_value( &::SireMol::Mover< SireMM::Bond >::setAll );
            
            Mover_Bond__exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::toString
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::QString ( ::SireMol::Mover< SireMM::Bond >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Mover< SireMM::Bond >::toString );
            
            Mover_Bond__exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::transform
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*transform_function_type)( ::SireMaths::Transform const &,::SireBase::PropertyMap const & ) ;
            transform_function_type transform_function_value( &::SireMol::Mover< SireMM::Bond >::transform );
            
            Mover_Bond__exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("transform"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::translate
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef ::SireMol::Mover< SireMM::Bond > & ( ::SireMol::Mover< SireMM::Bond >::*translate_function_type)( ::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            translate_function_type translate_function_value( &::SireMol::Mover< SireMM::Bond >::translate );
            
            Mover_Bond__exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Mover< SireMM::Bond >::typeName
        
            typedef SireMol::Mover< SireMM::Bond > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Mover< SireMM::Bond >::typeName );
            
            Mover_Bond__exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Mover_Bond__exposer.staticmethod( "typeName" );
        Mover_Bond__exposer.def( "__copy__", &__copy__<SireMol::Mover<SireMM::Bond>>);
        Mover_Bond__exposer.def( "__deepcopy__", &__copy__<SireMol::Mover<SireMM::Bond>>);
        Mover_Bond__exposer.def( "clone", &__copy__<SireMol::Mover<SireMM::Bond>>);
        Mover_Bond__exposer.def( "__str__", &__str__< ::SireMol::Mover<SireMM::Bond> > );
        Mover_Bond__exposer.def( "__repr__", &__str__< ::SireMol::Mover<SireMM::Bond> > );
        Mover_Bond__exposer.def( "__len__", &__len_size< ::SireMol::Mover<SireMM::Bond> > );
    }

}
