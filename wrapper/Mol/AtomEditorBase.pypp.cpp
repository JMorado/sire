// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomEditorBase.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "cgidx.h"

#include "chain.h"

#include "chaineditor.h"

#include "cutgroup.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "residx.h"

#include "segeditor.h"

#include "segidx.h"

#include "segment.h"

#include "selector.hpp"

#include "atomeditor.h"

#include "SireError/errors.h"

#include "SireBase/quickcopy.hpp"

#include "atomvelocities.h"

#include "atomradii.h"

#include "SireVol/space.h"

#include "atomelements.h"

#include "atomproperty.hpp"

#include "atompolarisabilities.h"

#include "atomcharges.h"

#include "atomenergies.h"

#include "atomcoords.h"

#include "atomljs.h"

#include "SireMaths/align.h"

#include "SireStream/shareddatastream.h"

#include "SireStream/datastream.h"

#include "atomforces.h"

#include "atommasses.h"

#include "SireMaths/vector.h"

#include "atombeads.h"

SireMol::AtomEditorBase& set_Metadata_SireMM_AtomLJs_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMM::LJParameter &p)
                                   { return molview.setMetadata< SireMM::LJParameter >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMM_AtomLJs_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMM::LJParameter &p)
                                   { return molview.setMetadata< SireMM::LJParameter >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomCharges_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireUnits::Dimension::Charge &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Charge >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomCharges_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireUnits::Dimension::Charge &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Charge >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomVelocities_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMaths::Vector3D<SireUnits::Dimension::Velocity> &p)
                                   { return molview.setMetadata< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomVelocities_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMaths::Vector3D<SireUnits::Dimension::Velocity> &p)
                                   { return molview.setMetadata< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomPolarisabilities_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireUnits::Dimension::Volume &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Volume >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomPolarisabilities_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireUnits::Dimension::Volume &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Volume >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomMasses_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireUnits::Dimension::MolarMass &p)
                                   { return molview.setMetadata< SireUnits::Dimension::MolarMass >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomMasses_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireUnits::Dimension::MolarMass &p)
                                   { return molview.setMetadata< SireUnits::Dimension::MolarMass >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomForces_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMaths::Vector3D<SireUnits::Dimension::Force> &p)
                                   { return molview.setMetadata< SireMaths::Vector3D<SireUnits::Dimension::Force> >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomForces_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMaths::Vector3D<SireUnits::Dimension::Force> &p)
                                   { return molview.setMetadata< SireMaths::Vector3D<SireUnits::Dimension::Force> >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomEnergies_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireUnits::Dimension::MolarEnergy &p)
                                   { return molview.setMetadata< SireUnits::Dimension::MolarEnergy >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomEnergies_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireUnits::Dimension::MolarEnergy &p)
                                   { return molview.setMetadata< SireUnits::Dimension::MolarEnergy >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomBeads_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMol::BeadNum &p)
                                   { return molview.setMetadata< SireMol::BeadNum >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomBeads_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMol::BeadNum &p)
                                   { return molview.setMetadata< SireMol::BeadNum >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomCoords_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMaths::Vector &p)
                                   { return molview.setMetadata< SireMaths::Vector >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomCoords_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMaths::Vector &p)
                                   { return molview.setMetadata< SireMaths::Vector >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomElements_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireMol::Element &p)
                                   { return molview.setMetadata< SireMol::Element >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomElements_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireMol::Element &p)
                                   { return molview.setMetadata< SireMol::Element >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomRadii_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const SireUnits::Dimension::Length &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Length >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomRadii_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const SireUnits::Dimension::Length &p)
                                   { return molview.setMetadata< SireUnits::Dimension::Length >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomStringProperty_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomStringProperty_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const QString &p)
                                   { return molview.setMetadata< QString >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomIntProperty_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomIntProperty_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const qint64 &p)
                                   { return molview.setMetadata< qint64 >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomFloatProperty_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomFloatProperty_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const double &p)
                                   { return molview.setMetadata< double >(key, metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomVariantProperty_function1(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(metakey, p); }

SireMol::AtomEditorBase& set_Metadata_SireMol_AtomVariantProperty_function2(
                                  SireMol::AtomEditorBase &molview,
                                   const QString &key, const QString &metakey, const QVariant &p)
                                   { return molview.setMetadata< QVariant >(key, metakey, p); }

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AtomEditorBase_class(){

    { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >
        typedef bp::class_< SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >, bp::bases< SireMol::Atom, SireMol::MoleculeView, SireBase::Property >, boost::noncopyable > AtomEditorBase_exposer_t;
        AtomEditorBase_exposer_t AtomEditorBase_exposer = AtomEditorBase_exposer_t( "AtomEditorBase", "", bp::no_init );
        bp::scope AtomEditorBase_scope( AtomEditorBase_exposer );
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::atom
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*atom_function_type)(  ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::atom );
            
            AtomEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::atom
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*atom_function_type)( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            atom_function_type atom_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::atom );
            
            AtomEditorBase_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::chain
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*chain_function_type)(  ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::chain );
            
            AtomEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::chain
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*chain_function_type)( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            chain_function_type chain_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::chain );
            
            AtomEditorBase_exposer.def( 
                "chain"
                , chain_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::cutGroup
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*cutGroup_function_type)(  ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::cutGroup );
            
            AtomEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::cutGroup
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*cutGroup_function_type)( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            cutGroup_function_type cutGroup_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::cutGroup );
            
            AtomEditorBase_exposer.def( 
                "cutGroup"
                , cutGroup_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::molecule
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::MolEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*molecule_function_type)(  ) ;
            molecule_function_type molecule_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::molecule );
            
            AtomEditorBase_exposer.def( 
                "molecule"
                , molecule_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::operator=
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > & ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*assign_function_type)( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::operator= );
            
            AtomEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::operator=
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > & ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*assign_function_type)( ::SireMol::Atom const & ) ;
            assign_function_type assign_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::operator= );
            
            AtomEditorBase_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeMetadata
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor & ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*removeMetadata_function_type)( ::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeMetadata );
            
            AtomEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("metakey") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeMetadata
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor & ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*removeMetadata_function_type)( ::SireBase::PropertyName const &,::SireBase::PropertyName const & ) ;
            removeMetadata_function_type removeMetadata_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeMetadata );
            
            AtomEditorBase_exposer.def( 
                "removeMetadata"
                , removeMetadata_function_value
                , ( bp::arg("key"), bp::arg("metakey") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeProperty
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor & ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*removeProperty_function_type)( ::SireBase::PropertyName const & ) ;
            removeProperty_function_type removeProperty_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::removeProperty );
            
            AtomEditorBase_exposer.def( 
                "removeProperty"
                , removeProperty_function_value
                , ( bp::arg("key") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::residue
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*residue_function_type)(  ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::residue );
            
            AtomEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::residue
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*residue_function_type)( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            residue_function_type residue_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::residue );
            
            AtomEditorBase_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::segment
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*segment_function_type)(  ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::segment );
            
            AtomEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::segment
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*segment_function_type)( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            segment_function_type segment_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::segment );
            
            AtomEditorBase_exposer.def( 
                "segment"
                , segment_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::AtomEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*select_function_type)( ::SireMol::AtomID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select );
            
            AtomEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("atomid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::CGEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*select_function_type)( ::SireMol::CGID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select );
            
            AtomEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("cgid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ResEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*select_function_type)( ::SireMol::ResID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select );
            
            AtomEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("resid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::ChainEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*select_function_type)( ::SireMol::ChainID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select );
            
            AtomEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("chainid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select
        
            typedef SireMol::Editor< SireMol::AtomEditor, SireMol::Atom > exported_class_t;
            typedef ::SireMol::SegEditor ( ::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::*select_function_type)( ::SireMol::SegID const &,::SireBase::PropertyMap const & ) ;
            select_function_type select_function_value( &::SireMol::Editor< SireMol::AtomEditor, SireMol::Atom >::select );
            
            AtomEditorBase_exposer.def( 
                "select"
                , select_function_value
                , ( bp::arg("segid"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        AtomEditorBase_exposer.def( "_set_property_SireMM_LJParameter", 
                                           &SireMol::AtomEditorBase::setProperty< SireMM::LJParameter >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMM_LJParameter", &set_Metadata_SireMM_AtomLJs_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMM_LJParameter", &set_Metadata_SireMM_AtomLJs_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireUnits_Dimension_Charge", 
                                           &SireMol::AtomEditorBase::setProperty< SireUnits::Dimension::Charge >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Charge", &set_Metadata_SireMol_AtomCharges_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Charge", &set_Metadata_SireMol_AtomCharges_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireMaths_Vector3D_SireUnits_Dimension_Velocity_", 
                                           &SireMol::AtomEditorBase::setProperty< SireMaths::Vector3D<SireUnits::Dimension::Velocity> >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector3D_SireUnits_Dimension_Velocity_", &set_Metadata_SireMol_AtomVelocities_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector3D_SireUnits_Dimension_Velocity_", &set_Metadata_SireMol_AtomVelocities_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireUnits_Dimension_Volume", 
                                           &SireMol::AtomEditorBase::setProperty< SireUnits::Dimension::Volume >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Volume", &set_Metadata_SireMol_AtomPolarisabilities_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Volume", &set_Metadata_SireMol_AtomPolarisabilities_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireUnits_Dimension_MolarMass", 
                                           &SireMol::AtomEditorBase::setProperty< SireUnits::Dimension::MolarMass >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_MolarMass", &set_Metadata_SireMol_AtomMasses_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_MolarMass", &set_Metadata_SireMol_AtomMasses_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireMaths_Vector3D_SireUnits_Dimension_Force_", 
                                           &SireMol::AtomEditorBase::setProperty< SireMaths::Vector3D<SireUnits::Dimension::Force> >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector3D_SireUnits_Dimension_Force_", &set_Metadata_SireMol_AtomForces_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector3D_SireUnits_Dimension_Force_", &set_Metadata_SireMol_AtomForces_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireUnits_Dimension_MolarEnergy", 
                                           &SireMol::AtomEditorBase::setProperty< SireUnits::Dimension::MolarEnergy >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_MolarEnergy", &set_Metadata_SireMol_AtomEnergies_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_MolarEnergy", &set_Metadata_SireMol_AtomEnergies_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireMol_BeadNum", 
                                           &SireMol::AtomEditorBase::setProperty< SireMol::BeadNum >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMol_BeadNum", &set_Metadata_SireMol_AtomBeads_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMol_BeadNum", &set_Metadata_SireMol_AtomBeads_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireMaths_Vector", 
                                           &SireMol::AtomEditorBase::setProperty< SireMaths::Vector >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector", &set_Metadata_SireMol_AtomCoords_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMaths_Vector", &set_Metadata_SireMol_AtomCoords_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireMol_Element", 
                                           &SireMol::AtomEditorBase::setProperty< SireMol::Element >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireMol_Element", &set_Metadata_SireMol_AtomElements_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireMol_Element", &set_Metadata_SireMol_AtomElements_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_SireUnits_Dimension_Length", 
                                           &SireMol::AtomEditorBase::setProperty< SireUnits::Dimension::Length >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Length", &set_Metadata_SireMol_AtomRadii_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_SireUnits_Dimension_Length", &set_Metadata_SireMol_AtomRadii_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_QString", 
                                           &SireMol::AtomEditorBase::setProperty< QString >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_AtomStringProperty_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_QString", &set_Metadata_SireMol_AtomStringProperty_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_qint64", 
                                           &SireMol::AtomEditorBase::setProperty< qint64 >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_AtomIntProperty_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_qint64", &set_Metadata_SireMol_AtomIntProperty_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_double", 
                                           &SireMol::AtomEditorBase::setProperty< double >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_AtomFloatProperty_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_double", &set_Metadata_SireMol_AtomFloatProperty_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_property_QVariant", 
                                           &SireMol::AtomEditorBase::setProperty< QVariant >, bp::return_self< >() );
        AtomEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_AtomVariantProperty_function1, bp::return_self< >());
        AtomEditorBase_exposer.def( "_set_metadata_QVariant", &set_Metadata_SireMol_AtomVariantProperty_function2, bp::return_self< >());
        AtomEditorBase_exposer.def( "__str__", &__str__< ::SireMol::Editor<SireMol::AtomEditor, SireMol::Atom> > );
        AtomEditorBase_exposer.def( "__repr__", &__str__< ::SireMol::Editor<SireMol::AtomEditor, SireMol::Atom> > );
        AtomEditorBase_exposer.def( "__len__", &__len_size< ::SireMol::Editor<SireMol::AtomEditor, SireMol::Atom> > );
    }

}
