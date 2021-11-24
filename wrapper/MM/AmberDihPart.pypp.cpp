// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AmberDihPart.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireCAS/expression.h"

#include "SireCAS/sum.h"

#include "SireCAS/symbol.h"

#include "SireCAS/trigfuncs.h"

#include "SireCAS/values.h"

#include "SireError/errors.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/gromacsparams.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "amberparams.h"

#include <QDebug>

#include "amberparams.h"

SireMM::AmberDihPart __copy__(const SireMM::AmberDihPart &other){ return SireMM::AmberDihPart(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AmberDihPart_class(){

    { //::SireMM::AmberDihPart
        typedef bp::class_< SireMM::AmberDihPart > AmberDihPart_exposer_t;
        AmberDihPart_exposer_t AmberDihPart_exposer = AmberDihPart_exposer_t( "AmberDihPart", "This simple class holds Amber dihedral or improper parameter parts", bp::init< bp::optional< double, double, double > >(( bp::arg("k")=0, bp::arg("periodicity")=1, bp::arg("phase")=0 ), "Default to a periodicity of 1 since pmemd will skip torsions with\na periodicity of zero leading to incorrect 1-4 VDW and 1-4 EEL energies.\nREF: https:github.commichellabSireissues338") );
        bp::scope AmberDihPart_scope( AmberDihPart_exposer );
        AmberDihPart_exposer.def( bp::init< SireMM::AmberDihPart const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberDihPart::energy
        
            typedef double ( ::SireMM::AmberDihPart::*energy_function_type)( double ) const;
            energy_function_type energy_function_value( &::SireMM::AmberDihPart::energy );
            
            AmberDihPart_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("phi") )
                , "" );
        
        }
        { //::SireMM::AmberDihPart::hash
        
            typedef ::uint ( ::SireMM::AmberDihPart::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMM::AmberDihPart::hash );
            
            AmberDihPart_exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihPart::k
        
            typedef double ( ::SireMM::AmberDihPart::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireMM::AmberDihPart::k );
            
            AmberDihPart_exposer.def( 
                "k"
                , k_function_value
                , "" );
        
        }
        AmberDihPart_exposer.def( bp::self != bp::self );
        AmberDihPart_exposer.def( bp::self < bp::self );
        AmberDihPart_exposer.def( bp::self <= bp::self );
        { //::SireMM::AmberDihPart::operator=
        
            typedef ::SireMM::AmberDihPart & ( ::SireMM::AmberDihPart::*assign_function_type)( ::SireMM::AmberDihPart const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberDihPart::operator= );
            
            AmberDihPart_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AmberDihPart_exposer.def( bp::self == bp::self );
        AmberDihPart_exposer.def( bp::self > bp::self );
        AmberDihPart_exposer.def( bp::self >= bp::self );
        { //::SireMM::AmberDihPart::operator[]
        
            typedef double ( ::SireMM::AmberDihPart::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberDihPart::operator[] );
            
            AmberDihPart_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireMM::AmberDihPart::periodicity
        
            typedef double ( ::SireMM::AmberDihPart::*periodicity_function_type)(  ) const;
            periodicity_function_type periodicity_function_value( &::SireMM::AmberDihPart::periodicity );
            
            AmberDihPart_exposer.def( 
                "periodicity"
                , periodicity_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihPart::phase
        
            typedef double ( ::SireMM::AmberDihPart::*phase_function_type)(  ) const;
            phase_function_type phase_function_value( &::SireMM::AmberDihPart::phase );
            
            AmberDihPart_exposer.def( 
                "phase"
                , phase_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihPart::toString
        
            typedef ::QString ( ::SireMM::AmberDihPart::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberDihPart::toString );
            
            AmberDihPart_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihPart::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::AmberDihPart::typeName );
            
            AmberDihPart_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::AmberDihPart::what
        
            typedef char const * ( ::SireMM::AmberDihPart::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::AmberDihPart::what );
            
            AmberDihPart_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        AmberDihPart_exposer.staticmethod( "typeName" );
        AmberDihPart_exposer.def( "__copy__", &__copy__);
        AmberDihPart_exposer.def( "__deepcopy__", &__copy__);
        AmberDihPart_exposer.def( "clone", &__copy__);
        AmberDihPart_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberDihPart >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberDihPart_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberDihPart >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberDihPart_exposer.def( "__str__", &__str__< ::SireMM::AmberDihPart > );
        AmberDihPart_exposer.def( "__repr__", &__str__< ::SireMM::AmberDihPart > );
        AmberDihPart_exposer.def( "__hash__", &::SireMM::AmberDihPart::hash );
    }

}
