// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolPotentialTable.pypp.hpp"

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

#include "potentialtable.h"

#include "potentialtable.h"

SireFF::MolPotentialTable __copy__(const SireFF::MolPotentialTable &other){ return SireFF::MolPotentialTable(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_MolPotentialTable_class(){

    { //::SireFF::MolPotentialTable
        typedef bp::class_< SireFF::MolPotentialTable > MolPotentialTable_exposer_t;
        MolPotentialTable_exposer_t MolPotentialTable_exposer = MolPotentialTable_exposer_t( "MolPotentialTable", "This class holds the potential at the points of all of the atoms of\nselected CutGroups in a molecule. The MolPotentialTable is used\nto accumulate all of the potentials acting on these atoms during\na field evaluation, and also to control which potentials are\nevaluated (as only the potentials on atoms in selected CutGroups\nare evaluated). This allows you to provide some control over\nthe calculation, e.g. only placing a few protein residues into\nthe field table, thereby preventing the potentials on all atoms\nin a protein from being evaluated if they arent actually\nnecessary.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope MolPotentialTable_scope( MolPotentialTable_exposer );
        MolPotentialTable_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "Construct to hold the potential acting at the points of all of the atoms\nof all of the cutgroups viewed in molview") );
        MolPotentialTable_exposer.def( bp::init< SireFF::MolPotentialTable const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireFF::MolPotentialTable::add
        
            typedef bool ( ::SireFF::MolPotentialTable::*add_function_type)( ::SireMol::CGAtomIdx const &,::SireUnits::Dimension::MolarEnergy const & ) ;
            add_function_type add_function_value( &::SireFF::MolPotentialTable::add );
            
            MolPotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("cgatomidx"), bp::arg("potential") )
                , "Add the potential potential onto this table - this returns whether or not the\natom is in this table\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireFF::MolPotentialTable::add
        
            typedef bool ( ::SireFF::MolPotentialTable::*add_function_type)( ::SireMol::AtomSelection const &,::SireUnits::Dimension::MolarEnergy const & ) ;
            add_function_type add_function_value( &::SireFF::MolPotentialTable::add );
            
            MolPotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("selected_atoms"), bp::arg("potential") )
                , "Add the potential potential onto this table for all of the atoms\nin selected_atoms - this returns whether\nor not any selected atoms are in this table\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireFF::MolPotentialTable::add
        
            typedef void ( ::SireFF::MolPotentialTable::*add_function_type)( ::SireFF::MolPotentialTable const & ) ;
            add_function_type add_function_value( &::SireFF::MolPotentialTable::add );
            
            MolPotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") )
                , "Add the potentials contained in other onto this potential table. This will only\nadd the potentials for CutGroups that are in both tables" );
        
        }
        { //::SireFF::MolPotentialTable::add
        
            typedef void ( ::SireFF::MolPotentialTable::*add_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            add_function_type add_function_value( &::SireFF::MolPotentialTable::add );
            
            MolPotentialTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("potential") )
                , "Add the potential potential onto all of the atom points in this table" );
        
        }
        { //::SireFF::MolPotentialTable::divide
        
            typedef void ( ::SireFF::MolPotentialTable::*divide_function_type)( double ) ;
            divide_function_type divide_function_value( &::SireFF::MolPotentialTable::divide );
            
            MolPotentialTable_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("value") )
                , "Divide the potential at all atom points by value" );
        
        }
        { //::SireFF::MolPotentialTable::initialise
        
            typedef void ( ::SireFF::MolPotentialTable::*initialise_function_type)(  ) ;
            initialise_function_type initialise_function_value( &::SireFF::MolPotentialTable::initialise );
            
            MolPotentialTable_exposer.def( 
                "initialise"
                , initialise_function_value
                , "Initialise this table - this clears all of the potentials, resetting them to zero" );
        
        }
        { //::SireFF::MolPotentialTable::map
        
            typedef int ( ::SireFF::MolPotentialTable::*map_function_type)( ::SireMol::CGIdx ) const;
            map_function_type map_function_value( &::SireFF::MolPotentialTable::map );
            
            MolPotentialTable_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("cgidx") )
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::molNum
        
            typedef ::SireMol::MolNum ( ::SireFF::MolPotentialTable::*molNum_function_type)(  ) const;
            molNum_function_type molNum_function_value( &::SireFF::MolPotentialTable::molNum );
            
            MolPotentialTable_exposer.def( 
                "molNum"
                , molNum_function_value
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::molUID
        
            typedef ::QUuid const & ( ::SireFF::MolPotentialTable::*molUID_function_type)(  ) const;
            molUID_function_type molUID_function_value( &::SireFF::MolPotentialTable::molUID );
            
            MolPotentialTable_exposer.def( 
                "molUID"
                , molUID_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::multiply
        
            typedef void ( ::SireFF::MolPotentialTable::*multiply_function_type)( double ) ;
            multiply_function_type multiply_function_value( &::SireFF::MolPotentialTable::multiply );
            
            MolPotentialTable_exposer.def( 
                "multiply"
                , multiply_function_value
                , ( bp::arg("value") )
                , "Multiply the potential at all atom points by value" );
        
        }
        { //::SireFF::MolPotentialTable::nCutGroups
        
            typedef int ( ::SireFF::MolPotentialTable::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireFF::MolPotentialTable::nCutGroups );
            
            MolPotentialTable_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::nSelectedCutGroups
        
            typedef int ( ::SireFF::MolPotentialTable::*nSelectedCutGroups_function_type)(  ) const;
            nSelectedCutGroups_function_type nSelectedCutGroups_function_value( &::SireFF::MolPotentialTable::nSelectedCutGroups );
            
            MolPotentialTable_exposer.def( 
                "nSelectedCutGroups"
                , nSelectedCutGroups_function_value
                , "" );
        
        }
        MolPotentialTable_exposer.def( bp::self != bp::self );
        MolPotentialTable_exposer.def( bp::self * bp::other< double >() );
        MolPotentialTable_exposer.def( bp::self + bp::self );
        MolPotentialTable_exposer.def( bp::self + bp::other< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > >() );
        MolPotentialTable_exposer.def( bp::self - bp::self );
        MolPotentialTable_exposer.def( bp::self - bp::other< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > >() );
        MolPotentialTable_exposer.def( -bp::self );
        MolPotentialTable_exposer.def( bp::self / bp::other< double >() );
        { //::SireFF::MolPotentialTable::operator=
        
            typedef ::SireFF::MolPotentialTable & ( ::SireFF::MolPotentialTable::*assign_function_type)( ::SireFF::MolPotentialTable const & ) ;
            assign_function_type assign_function_value( &::SireFF::MolPotentialTable::operator= );
            
            MolPotentialTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::operator=
        
            typedef ::SireFF::MolPotentialTable & ( ::SireFF::MolPotentialTable::*assign_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            assign_function_type assign_function_value( &::SireFF::MolPotentialTable::operator= );
            
            MolPotentialTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("potential") )
                , bp::return_self< >()
                , "" );
        
        }
        MolPotentialTable_exposer.def( bp::self == bp::self );
        { //::SireFF::MolPotentialTable::selected
        
            typedef bool ( ::SireFF::MolPotentialTable::*selected_function_type)( ::SireMol::CGIdx ) const;
            selected_function_type selected_function_value( &::SireFF::MolPotentialTable::selected );
            
            MolPotentialTable_exposer.def( 
                "selected"
                , selected_function_value
                , ( bp::arg("cgidx") )
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::selectedAll
        
            typedef bool ( ::SireFF::MolPotentialTable::*selectedAll_function_type)(  ) const;
            selectedAll_function_type selectedAll_function_value( &::SireFF::MolPotentialTable::selectedAll );
            
            MolPotentialTable_exposer.def( 
                "selectedAll"
                , selectedAll_function_value
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::setAll
        
            typedef void ( ::SireFF::MolPotentialTable::*setAll_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            setAll_function_type setAll_function_value( &::SireFF::MolPotentialTable::setAll );
            
            MolPotentialTable_exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("potential") )
                , "Set all of the potentials at the atom points equal to potential" );
        
        }
        { //::SireFF::MolPotentialTable::subtract
        
            typedef bool ( ::SireFF::MolPotentialTable::*subtract_function_type)( ::SireMol::CGAtomIdx const &,::SireUnits::Dimension::MolarEnergy const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::MolPotentialTable::subtract );
            
            MolPotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("cgatomidx"), bp::arg("potential") )
                , "Subtract the potential potential from this table - this returns whether or not the\natom is in this table\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireFF::MolPotentialTable::subtract
        
            typedef bool ( ::SireFF::MolPotentialTable::*subtract_function_type)( ::SireMol::AtomSelection const &,::SireUnits::Dimension::MolarEnergy const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::MolPotentialTable::subtract );
            
            MolPotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("selected_atoms"), bp::arg("potential") )
                , "Subtract the potential potential from this table for all of the atoms\nin selected_atoms - this returns whether\nor not any selected atoms are in this table\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireFF::MolPotentialTable::subtract
        
            typedef void ( ::SireFF::MolPotentialTable::*subtract_function_type)( ::SireFF::MolPotentialTable const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::MolPotentialTable::subtract );
            
            MolPotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("other") )
                , "Subtract the potentials contained in other from this potential table. This will only\nsubtract the potentials for CutGroups that are in both tables" );
        
        }
        { //::SireFF::MolPotentialTable::subtract
        
            typedef void ( ::SireFF::MolPotentialTable::*subtract_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::MolPotentialTable::subtract );
            
            MolPotentialTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("potential") )
                , "Subtract the potential potential from all of the atom points in this table" );
        
        }
        { //::SireFF::MolPotentialTable::toVector
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > > ( ::SireFF::MolPotentialTable::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireFF::MolPotentialTable::toVector );
            
            MolPotentialTable_exposer.def( 
                "toVector"
                , toVector_function_value
                , "Return all of the potentials in this table in a single array" );
        
        }
        { //::SireFF::MolPotentialTable::toVector
        
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 1, 2, -2, 0, 0, -1, 0 > > ( ::SireFF::MolPotentialTable::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireFF::MolPotentialTable::toVector );
            
            MolPotentialTable_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , "Return an array of all of the potentials at the location of\nthe atoms selected in selection\nThrow: SireError::incompatible_error\n" );
        
        }
        { //::SireFF::MolPotentialTable::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::MolPotentialTable::typeName );
            
            MolPotentialTable_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireFF::MolPotentialTable::what
        
            typedef char const * ( ::SireFF::MolPotentialTable::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::MolPotentialTable::what );
            
            MolPotentialTable_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MolPotentialTable_exposer.staticmethod( "typeName" );
        MolPotentialTable_exposer.def( "__copy__", &__copy__);
        MolPotentialTable_exposer.def( "__deepcopy__", &__copy__);
        MolPotentialTable_exposer.def( "clone", &__copy__);
        MolPotentialTable_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::MolPotentialTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolPotentialTable_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::MolPotentialTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MolPotentialTable_exposer.def( "__getstate_manages_dict__", true);
        MolPotentialTable_exposer.def( "__safe_for_unpickling__", true);
        MolPotentialTable_exposer.def( "__setstate__", &__setstate__base64< ::SireFF::MolPotentialTable > );
        MolPotentialTable_exposer.def( "__getstate__", &__getstate__base64< ::SireFF::MolPotentialTable > );
        MolPotentialTable_exposer.def( "__str__", &__str__< ::SireFF::MolPotentialTable > );
        MolPotentialTable_exposer.def( "__repr__", &__str__< ::SireFF::MolPotentialTable > );
        MolPotentialTable_exposer.def( "__len__", &__len_size< ::SireFF::MolPotentialTable > );
    }

}
