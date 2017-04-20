// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "AtomVelocities.pypp.hpp"

namespace bp = boost::python;

#include "atomvelocities.h"

#include "atomvelocities.h"

#include "SireMaths/vector.h"

SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > __copy__(const SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > &other){ return SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AtomVelocities_class(){

    { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >
        typedef bp::class_< SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomVelocities_exposer_t;
        AtomVelocities_exposer_t AtomVelocities_exposer = AtomVelocities_exposer_t( "AtomVelocities", "", bp::init< >("") );
        bp::scope AtomVelocities_scope( AtomVelocities_exposer );
        AtomVelocities_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomVelocities_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomVelocities_exposer.def( bp::init< SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & >(( bp::arg("value") ), "") );
        AtomVelocities_exposer.def( bp::init< SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & >(( bp::arg("values") ), "") );
        AtomVelocities_exposer.def( bp::init< SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::array
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::array );
            
            AtomVelocities_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::assertCanConvert );
            
            AtomVelocities_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::assignFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::assignFrom );
            
            AtomVelocities_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::at );
            
            AtomVelocities_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::at );
            
            AtomVelocities_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::canConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::canConvert );
            
            AtomVelocities_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*copyFrom_function_type)( ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::copyFrom );
            
            AtomVelocities_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*copyFrom_function_type)( ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::copyFrom );
            
            AtomVelocities_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::count
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::count );
            
            AtomVelocities_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::divide
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::divide );
            
            AtomVelocities_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::divideByResidue
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::divideByResidue );
            
            AtomVelocities_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::fromVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::fromVariant );
            
            AtomVelocities_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::get );
            
            AtomVelocities_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::get );
            
            AtomVelocities_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isCompatibleWith );
            
            AtomVelocities_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isCompatibleWith );
            
            AtomVelocities_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isEmpty
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::isEmpty );
            
            AtomVelocities_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::matchToSelection
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::matchToSelection );
            
            AtomVelocities_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::merge
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::merge );
            
            AtomVelocities_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nAtoms );
            
            AtomVelocities_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nAtoms );
            
            AtomVelocities_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nCutGroups
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::nCutGroups );
            
            AtomVelocities_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , "" );
        
        }
        AtomVelocities_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator=
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*assign_function_type)( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator= );
            
            AtomVelocities_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomVelocities_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::Array const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator[] );
            
            AtomVelocities_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::operator[] );
            
            AtomVelocities_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::set );
            
            AtomVelocities_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > & ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::set );
            
            AtomVelocities_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::size
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::size );
            
            AtomVelocities_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toString
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toString );
            
            AtomVelocities_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVariant );
            
            AtomVelocities_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVector );
            
            AtomVelocities_exposer.def( 
                "toVector"
                , toVector_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > ( ::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::toVector );
            
            AtomVelocities_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::typeName
        
            typedef SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireMaths::Vector3D< SireUnits::Dimension::Velocity > >::typeName );
            
            AtomVelocities_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        AtomVelocities_exposer.staticmethod( "fromVariant" );
        AtomVelocities_exposer.staticmethod( "typeName" );
        AtomVelocities_exposer.def( "__copy__", &__copy__);
        AtomVelocities_exposer.def( "__deepcopy__", &__copy__);
        AtomVelocities_exposer.def( "clone", &__copy__);
        AtomVelocities_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomVelocities_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomVelocities_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > > );
        AtomVelocities_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > > );
        AtomVelocities_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireMaths::Vector3D<SireUnits::Dimension::Velocity> > > );
    }

}
