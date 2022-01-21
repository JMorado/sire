// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Restraint.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/errors.h"

#include "SireCAS/expression.h"

#include "SireCAS/symbols.h"

#include "SireCAS/values.h"

#include "SireError/errors.h"

#include "SireFF/forcetable.h"

#include "SireMol/moleculedata.h"

#include "SireMol/molecules.h"

#include "SireMol/molid.h"

#include "SireMol/molnum.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "restraint.h"

#include "restraint.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Restraint_class(){

    { //::SireMM::Restraint
        typedef bp::class_< SireMM::Restraint, bp::bases< SireBase::Property >, boost::noncopyable > Restraint_exposer_t;
        Restraint_exposer_t Restraint_exposer = Restraint_exposer_t( "Restraint", "This is the base class of all restraints. A restraint is a\nfunction that calculates the energy or force acting on\na molecule caused by external potential, e.g. a harmonic\nrestraining potential, or a solvent cap potential, or\na dihedral restraint potential\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope Restraint_scope( Restraint_exposer );
        { //::SireMM::Restraint::builtinSymbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::Restraint::*builtinSymbols_function_type)(  ) const;
            builtinSymbols_function_type builtinSymbols_function_value( &::SireMM::Restraint::builtinSymbols );
            
            Restraint_exposer.def( 
                "builtinSymbols"
                , builtinSymbols_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::builtinValues
        
            typedef ::SireCAS::Values ( ::SireMM::Restraint::*builtinValues_function_type)(  ) const;
            builtinValues_function_type builtinValues_function_value( &::SireMM::Restraint::builtinValues );
            
            Restraint_exposer.def( 
                "builtinValues"
                , builtinValues_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::contains
        
            typedef bool ( ::SireMM::Restraint::*contains_function_type)( ::SireMol::MolNum ) const;
            contains_function_type contains_function_value( &::SireMM::Restraint::contains );
            
            Restraint_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molnum") )
                , "" );
        
        }
        { //::SireMM::Restraint::contains
        
            typedef bool ( ::SireMM::Restraint::*contains_function_type)( ::SireMol::MolID const & ) const;
            contains_function_type contains_function_value( &::SireMM::Restraint::contains );
            
            Restraint_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("molid") )
                , "" );
        
        }
        { //::SireMM::Restraint::differentiate
        
            typedef ::SireMM::RestraintPtr ( ::SireMM::Restraint::*differentiate_function_type)( ::SireCAS::Symbol const & ) const;
            differentiate_function_type differentiate_function_value( &::SireMM::Restraint::differentiate );
            
            Restraint_exposer.def( 
                "differentiate"
                , differentiate_function_value
                , ( bp::arg("symbol") )
                , "" );
        
        }
        { //::SireMM::Restraint::energy
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMM::Restraint::*energy_function_type)(  ) const;
            energy_function_type energy_function_value( &::SireMM::Restraint::energy );
            
            Restraint_exposer.def( 
                "energy"
                , energy_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::getValue
        
            typedef double ( ::SireMM::Restraint::*getValue_function_type)( ::SireCAS::Symbol const & ) const;
            getValue_function_type getValue_function_value( &::SireMM::Restraint::getValue );
            
            Restraint_exposer.def( 
                "getValue"
                , getValue_function_value
                , ( bp::arg("symbol") )
                , "" );
        
        }
        { //::SireMM::Restraint::hasValue
        
            typedef bool ( ::SireMM::Restraint::*hasValue_function_type)( ::SireCAS::Symbol const & ) const;
            hasValue_function_type hasValue_function_value( &::SireMM::Restraint::hasValue );
            
            Restraint_exposer.def( 
                "hasValue"
                , hasValue_function_value
                , ( bp::arg("symbol") )
                , "" );
        
        }
        { //::SireMM::Restraint::molecules
        
            typedef ::SireMol::Molecules ( ::SireMM::Restraint::*molecules_function_type)(  ) const;
            molecules_function_type molecules_function_value( &::SireMM::Restraint::molecules );
            
            Restraint_exposer.def( 
                "molecules"
                , molecules_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::null
        
            typedef ::SireMM::NullRestraint const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMM::Restraint::null );
            
            Restraint_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the global null restraint" );
        
        }
        { //::SireMM::Restraint::setValue
        
            typedef void ( ::SireMM::Restraint::*setValue_function_type)( ::SireCAS::Symbol const &,double ) ;
            setValue_function_type setValue_function_value( &::SireMM::Restraint::setValue );
            
            Restraint_exposer.def( 
                "setValue"
                , setValue_function_value
                , ( bp::arg("symbol"), bp::arg("value") )
                , "" );
        
        }
        { //::SireMM::Restraint::symbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::Restraint::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::Restraint::symbols );
            
            Restraint_exposer.def( 
                "symbols"
                , symbols_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::toString
        
            typedef ::QString ( ::SireMM::Restraint::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::Restraint::toString );
            
            Restraint_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::Restraint::typeName );
            
            Restraint_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::update
        
            typedef void ( ::SireMM::Restraint::*update_function_type)( ::SireMol::MoleculeData const & ) ;
            update_function_type update_function_value( &::SireMM::Restraint::update );
            
            Restraint_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("moldata") )
                , "" );
        
        }
        { //::SireMM::Restraint::update
        
            typedef void ( ::SireMM::Restraint::*update_function_type)( ::SireMol::Molecules const & ) ;
            update_function_type update_function_value( &::SireMM::Restraint::update );
            
            Restraint_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molecules") )
                , "" );
        
        }
        { //::SireMM::Restraint::userSymbols
        
            typedef ::SireCAS::Symbols ( ::SireMM::Restraint::*userSymbols_function_type)(  ) const;
            userSymbols_function_type userSymbols_function_value( &::SireMM::Restraint::userSymbols );
            
            Restraint_exposer.def( 
                "userSymbols"
                , userSymbols_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::userValues
        
            typedef ::SireCAS::Values ( ::SireMM::Restraint::*userValues_function_type)(  ) const;
            userValues_function_type userValues_function_value( &::SireMM::Restraint::userValues );
            
            Restraint_exposer.def( 
                "userValues"
                , userValues_function_value
                , "" );
        
        }
        { //::SireMM::Restraint::usesMoleculesIn
        
            typedef bool ( ::SireMM::Restraint::*usesMoleculesIn_function_type)( ::SireMol::Molecules const & ) const;
            usesMoleculesIn_function_type usesMoleculesIn_function_value( &::SireMM::Restraint::usesMoleculesIn );
            
            Restraint_exposer.def( 
                "usesMoleculesIn"
                , usesMoleculesIn_function_value
                , ( bp::arg("molecules") )
                , "" );
        
        }
        { //::SireMM::Restraint::values
        
            typedef ::SireCAS::Values ( ::SireMM::Restraint::*values_function_type)(  ) const;
            values_function_type values_function_value( &::SireMM::Restraint::values );
            
            Restraint_exposer.def( 
                "values"
                , values_function_value
                , "" );
        
        }
        Restraint_exposer.staticmethod( "null" );
        Restraint_exposer.staticmethod( "typeName" );
        Restraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::Restraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Restraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::Restraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Restraint_exposer.def( "__getstate_manages_dict__", true);
        Restraint_exposer.def( "__safe_for_unpickling__", true);
        Restraint_exposer.def( "__setstate__", &__setstate__base64< ::SireMM::Restraint > );
        Restraint_exposer.def( "__getstate__", &__getstate__base64< ::SireMM::Restraint > );
        Restraint_exposer.def( "__str__", &__str__< ::SireMM::Restraint > );
        Restraint_exposer.def( "__repr__", &__str__< ::SireMM::Restraint > );
    }

}
