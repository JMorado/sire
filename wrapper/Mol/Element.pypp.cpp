// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Element.pypp.hpp"

namespace bp = boost::python;

#include "element.h"

#include "element.h"

SireMol::Element __copy__(const SireMol::Element &other){ return SireMol::Element(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Element_class(){

    { //::SireMol::Element
        typedef bp::class_< SireMol::Element > Element_exposer_t;
        Element_exposer_t Element_exposer = Element_exposer_t( "Element", "\nThis class is used to represent a chemical element. The implementation\nof this class is such that it is quick and easy to pass and copy\nElements, while the storage requirements are very low (just a single\npointer). The actual element data is held in a private ElementData\nclass that is declared in elementdb.cpp\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a dummy element") );
        bp::scope Element_scope( Element_exposer );
        Element_exposer.def( bp::init< QString >(( bp::arg("element") ), "Construct an element from the string element. If the string\ncontains 1 or 2 characters, then it is interpreted as an IUPAC\nchemical symbol (e.g. C, or Al), else it is interpreted as\nthe name of the element in the local language of the application.\nIf the string cannot be interpreted then the element is set to\nthe dummy element. Note ca is Calcium, not C-alpha") );
        Element_exposer.def( bp::init< char const * >(( bp::arg("element") ), "Overload so that const char is interpreted as a QString, and not\nas an unsigned int") );
        Element_exposer.def( bp::init< unsigned int >(( bp::arg("nprotons") ), "Construct an element with proton number nprot. If there is no\nelement with this number of protons, or if the proton number is 0,\nthen a dummy elements is constructed") );
        Element_exposer.def( bp::init< int >(( bp::arg("nprotons") ), "Overload to disambiguate the call to Element(int)") );
        Element_exposer.def( bp::init< SireMol::Element const & >(( bp::arg("element") ), "Copy constructor. This is very quick as it involves copying\nonly a single pointer.") );
        { //::SireMol::Element::actinide
        
            typedef bool ( ::SireMol::Element::*actinide_function_type)(  ) const;
            actinide_function_type actinide_function_value( &::SireMol::Element::actinide );
            
            Element_exposer.def( 
                "actinide"
                , actinide_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an actinide" );
        
        }
        { //::SireMol::Element::alkaliEarthMetal
        
            typedef bool ( ::SireMol::Element::*alkaliEarthMetal_function_type)(  ) const;
            alkaliEarthMetal_function_type alkaliEarthMetal_function_value( &::SireMol::Element::alkaliEarthMetal );
            
            Element_exposer.def( 
                "alkaliEarthMetal"
                , alkaliEarthMetal_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an alkali earth metal (group 2)" );
        
        }
        { //::SireMol::Element::alkaliMetal
        
            typedef bool ( ::SireMol::Element::*alkaliMetal_function_type)(  ) const;
            alkaliMetal_function_type alkaliMetal_function_value( &::SireMol::Element::alkaliMetal );
            
            Element_exposer.def( 
                "alkaliMetal"
                , alkaliMetal_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an alkali metal (group 1 or 2)" );
        
        }
        { //::SireMol::Element::biological
        
            typedef bool ( ::SireMol::Element::*biological_function_type)(  ) const;
            biological_function_type biological_function_value( &::SireMol::Element::biological );
            
            Element_exposer.def( 
                "biological"
                , biological_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is biological\n(in first three periods and not a noble gas, or a halogen)\n(this does preclude iron, potassium and calcium, which are\nrather biological... :-)" );
        
        }
        { //::SireMol::Element::biologicalElement
        
            typedef ::SireMol::Element ( *biologicalElement_function_type )( ::QString const & );
            biologicalElement_function_type biologicalElement_function_value( &::SireMol::Element::biologicalElement );
            
            Element_exposer.def( 
                "biologicalElement"
                , biologicalElement_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "Return a biological element that has been guessed from the passed name.\nNote that if no biological element was guessed, then the nearest\nnon-biological element match is used. A biological element is one that\nis in the list of biological elements" );
        
        }
        { //::SireMol::Element::blue
        
            typedef float ( ::SireMol::Element::*blue_function_type)(  ) const;
            blue_function_type blue_function_value( &::SireMol::Element::blue );
            
            Element_exposer.def( 
                "blue"
                , blue_function_value
                , bp::release_gil_policy()
                , "Return the blue colour components (0.0->1.0) for\nthe colour of this element" );
        
        }
        { //::SireMol::Element::bondOrderRadius
        
            typedef ::SireUnits::Dimension::Length ( ::SireMol::Element::*bondOrderRadius_function_type)(  ) const;
            bondOrderRadius_function_type bondOrderRadius_function_value( &::SireMol::Element::bondOrderRadius );
            
            Element_exposer.def( 
                "bondOrderRadius"
                , bondOrderRadius_function_value
                , bp::release_gil_policy()
                , "Return the bond order radius" );
        
        }
        { //::SireMol::Element::covalentRadius
        
            typedef ::SireUnits::Dimension::Length ( ::SireMol::Element::*covalentRadius_function_type)(  ) const;
            covalentRadius_function_type covalentRadius_function_value( &::SireMol::Element::covalentRadius );
            
            Element_exposer.def( 
                "covalentRadius"
                , covalentRadius_function_value
                , bp::release_gil_policy()
                , "Return the elements covalent radius" );
        
        }
        { //::SireMol::Element::elementWithMass
        
            typedef ::SireMol::Element ( *elementWithMass_function_type )( ::SireUnits::Dimension::MolarMass const & );
            elementWithMass_function_type elementWithMass_function_value( &::SireMol::Element::elementWithMass );
            
            Element_exposer.def( 
                "elementWithMass"
                , elementWithMass_function_value
                , ( bp::arg("mass") )
                , bp::release_gil_policy()
                , "Return an element which has the closest mass to mass (in atomic\nmass units, g mol-1)" );
        
        }
        { //::SireMol::Element::getBiologicalElements
        
            typedef ::QList< SireMol::Element > ( *getBiologicalElements_function_type )(  );
            getBiologicalElements_function_type getBiologicalElements_function_value( &::SireMol::Element::getBiologicalElements );
            
            Element_exposer.def( 
                "getBiologicalElements"
                , getBiologicalElements_function_value
                , bp::release_gil_policy()
                , "Return a list of all of the elements that are considered\n  to be biological\n" );
        
        }
        { //::SireMol::Element::green
        
            typedef float ( ::SireMol::Element::*green_function_type)(  ) const;
            green_function_type green_function_value( &::SireMol::Element::green );
            
            Element_exposer.def( 
                "green"
                , green_function_value
                , bp::release_gil_policy()
                , "Return the green colour components (0.0->1.0) for\nthe colour of this element" );
        
        }
        { //::SireMol::Element::group
        
            typedef int ( ::SireMol::Element::*group_function_type)(  ) const;
            group_function_type group_function_value( &::SireMol::Element::group );
            
            Element_exposer.def( 
                "group"
                , group_function_value
                , bp::release_gil_policy()
                , "Return the group number of this element (IUPAC group, from 1-18)\n(lanthanides and actinides have a group number of 0 - this should\nnot be too big a problem as I would be surprised to hear of anyone\nusing this code to simulate them...)" );
        
        }
        { //::SireMol::Element::halogen
        
            typedef bool ( ::SireMol::Element::*halogen_function_type)(  ) const;
            halogen_function_type halogen_function_value( &::SireMol::Element::halogen );
            
            Element_exposer.def( 
                "halogen"
                , halogen_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a halogen" );
        
        }
        { //::SireMol::Element::lanthanide
        
            typedef bool ( ::SireMol::Element::*lanthanide_function_type)(  ) const;
            lanthanide_function_type lanthanide_function_value( &::SireMol::Element::lanthanide );
            
            Element_exposer.def( 
                "lanthanide"
                , lanthanide_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a lanthanide" );
        
        }
        { //::SireMol::Element::mass
        
            typedef ::SireUnits::Dimension::MolarMass ( ::SireMol::Element::*mass_function_type)(  ) const;
            mass_function_type mass_function_value( &::SireMol::Element::mass );
            
            Element_exposer.def( 
                "mass"
                , mass_function_value
                , bp::release_gil_policy()
                , "Return the average mass of this element" );
        
        }
        { //::SireMol::Element::maxBonds
        
            typedef int ( ::SireMol::Element::*maxBonds_function_type)(  ) const;
            maxBonds_function_type maxBonds_function_value( &::SireMol::Element::maxBonds );
            
            Element_exposer.def( 
                "maxBonds"
                , maxBonds_function_value
                , bp::release_gil_policy()
                , "Return the maximum number of simultaneous bonds that this\nelement can form" );
        
        }
        { //::SireMol::Element::nProtons
        
            typedef int ( ::SireMol::Element::*nProtons_function_type)(  ) const;
            nProtons_function_type nProtons_function_value( &::SireMol::Element::nProtons );
            
            Element_exposer.def( 
                "nProtons"
                , nProtons_function_value
                , bp::release_gil_policy()
                , "Return the number of protons in the element" );
        
        }
        { //::SireMol::Element::name
        
            typedef ::QString ( ::SireMol::Element::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireMol::Element::name );
            
            Element_exposer.def( 
                "name"
                , name_function_value
                , bp::release_gil_policy()
                , "Return the name of the element in the local language" );
        
        }
        { //::SireMol::Element::nobleGas
        
            typedef bool ( ::SireMol::Element::*nobleGas_function_type)(  ) const;
            nobleGas_function_type nobleGas_function_value( &::SireMol::Element::nobleGas );
            
            Element_exposer.def( 
                "nobleGas"
                , nobleGas_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a noble gas" );
        
        }
        Element_exposer.def( bp::self != bp::self );
        Element_exposer.def( bp::self != bp::other< QString >() );
        Element_exposer.def( bp::self < bp::self );
        Element_exposer.def( bp::self < bp::other< QString >() );
        Element_exposer.def( bp::self <= bp::self );
        Element_exposer.def( bp::self <= bp::other< QString >() );
        { //::SireMol::Element::operator=
        
            typedef ::SireMol::Element const & ( ::SireMol::Element::*assign_function_type)( ::SireMol::Element const & ) ;
            assign_function_type assign_function_value( &::SireMol::Element::operator= );
            
            Element_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("element") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        Element_exposer.def( bp::self == bp::self );
        Element_exposer.def( bp::self == bp::other< QString >() );
        Element_exposer.def( bp::self > bp::self );
        Element_exposer.def( bp::self > bp::other< QString >() );
        Element_exposer.def( bp::self >= bp::self );
        Element_exposer.def( bp::self >= bp::other< QString >() );
        { //::SireMol::Element::period
        
            typedef int ( ::SireMol::Element::*period_function_type)(  ) const;
            period_function_type period_function_value( &::SireMol::Element::period );
            
            Element_exposer.def( 
                "period"
                , period_function_value
                , bp::release_gil_policy()
                , "Return the period (the row number) of the element (IUPAC period, from 1-7)" );
        
        }
        { //::SireMol::Element::rareEarth
        
            typedef bool ( ::SireMol::Element::*rareEarth_function_type)(  ) const;
            rareEarth_function_type rareEarth_function_value( &::SireMol::Element::rareEarth );
            
            Element_exposer.def( 
                "rareEarth"
                , rareEarth_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a rare earth element (e.g. a lanthanide or actinide)" );
        
        }
        { //::SireMol::Element::red
        
            typedef float ( ::SireMol::Element::*red_function_type)(  ) const;
            red_function_type red_function_value( &::SireMol::Element::red );
            
            Element_exposer.def( 
                "red"
                , red_function_value
                , bp::release_gil_policy()
                , "Return the red colour components (0.0->1.0) for\nthe colour of this element" );
        
        }
        { //::SireMol::Element::resetBiologicalElements
        
            typedef void ( *resetBiologicalElements_function_type )(  );
            resetBiologicalElements_function_type resetBiologicalElements_function_value( &::SireMol::Element::resetBiologicalElements );
            
            Element_exposer.def( 
                "resetBiologicalElements"
                , resetBiologicalElements_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Element::setElementIsBiological
        
            typedef void ( *setElementIsBiological_function_type )( ::SireMol::Element const & );
            setElementIsBiological_function_type setElementIsBiological_function_value( &::SireMol::Element::setElementIsBiological );
            
            Element_exposer.def( 
                "setElementIsBiological"
                , setElementIsBiological_function_value
                , ( bp::arg("element") )
                , bp::release_gil_policy()
                , "Set that the passed element should be considered to be biological" );
        
        }
        { //::SireMol::Element::setElementIsNotBiological
        
            typedef void ( *setElementIsNotBiological_function_type )( ::SireMol::Element const & );
            setElementIsNotBiological_function_type setElementIsNotBiological_function_value( &::SireMol::Element::setElementIsNotBiological );
            
            Element_exposer.def( 
                "setElementIsNotBiological"
                , setElementIsNotBiological_function_value
                , ( bp::arg("element") )
                , bp::release_gil_policy()
                , "Set that the passed element should considered to definitely\n  not be biological\n" );
        
        }
        { //::SireMol::Element::symbol
        
            typedef ::QString ( ::SireMol::Element::*symbol_function_type)(  ) const;
            symbol_function_type symbol_function_value( &::SireMol::Element::symbol );
            
            Element_exposer.def( 
                "symbol"
                , symbol_function_value
                , bp::release_gil_policy()
                , "Return the IUPAC symbol for the element" );
        
        }
        { //::SireMol::Element::toString
        
            typedef ::QString ( ::SireMol::Element::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Element::toString );
            
            Element_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of the Element" );
        
        }
        { //::SireMol::Element::transitionMetal
        
            typedef bool ( ::SireMol::Element::*transitionMetal_function_type)(  ) const;
            transitionMetal_function_type transitionMetal_function_value( &::SireMol::Element::transitionMetal );
            
            Element_exposer.def( 
                "transitionMetal"
                , transitionMetal_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a transition metal" );
        
        }
        { //::SireMol::Element::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Element::typeName );
            
            Element_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Element::vdwRadius
        
            typedef ::SireUnits::Dimension::Length ( ::SireMol::Element::*vdwRadius_function_type)(  ) const;
            vdwRadius_function_type vdwRadius_function_value( &::SireMol::Element::vdwRadius );
            
            Element_exposer.def( 
                "vdwRadius"
                , vdwRadius_function_value
                , bp::release_gil_policy()
                , "Return the van der waals radius" );
        
        }
        { //::SireMol::Element::what
        
            typedef char const * ( ::SireMol::Element::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::Element::what );
            
            Element_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Element_exposer.staticmethod( "biologicalElement" );
        Element_exposer.staticmethod( "elementWithMass" );
        Element_exposer.staticmethod( "getBiologicalElements" );
        Element_exposer.staticmethod( "resetBiologicalElements" );
        Element_exposer.staticmethod( "setElementIsBiological" );
        Element_exposer.staticmethod( "setElementIsNotBiological" );
        Element_exposer.staticmethod( "typeName" );
        Element_exposer.def( "__copy__", &__copy__);
        Element_exposer.def( "__deepcopy__", &__copy__);
        Element_exposer.def( "clone", &__copy__);
        Element_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Element >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Element_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Element >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Element_exposer.def_pickle(sire_pickle_suite< ::SireMol::Element >());
        Element_exposer.def( "__str__", &__str__< ::SireMol::Element > );
        Element_exposer.def( "__repr__", &__str__< ::SireMol::Element > );
    }

}
