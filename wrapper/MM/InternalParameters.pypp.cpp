// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "InternalParameters.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMol/cgidx.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireVol/coordgroup.h"

#include "internalparameters.h"

#include "sireglobal.h"

#include "tostring.h"

#include <algorithm>

#include "internalparameters.h"

SireMM::InternalParameters __copy__(const SireMM::InternalParameters &other){ return SireMM::InternalParameters(other); }

#include "Helpers/copy.hpp"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::InternalParameters&){ return "SireMM::InternalParameters";}

#include "Helpers/release_gil_policy.hpp"

void register_InternalParameters_class(){

    { //::SireMM::InternalParameters
        typedef bp::class_< SireMM::InternalParameters > InternalParameters_exposer_t;
        InternalParameters_exposer_t InternalParameters_exposer = InternalParameters_exposer_t( "InternalParameters", "This class holds the internal parameters for a molecule\n(bond, angle, dihedral, improper, Urey-Bradley,\nstretch-stretch, stretch-bend, bend-bend, stretch-bend-torsion)\n\nThe parameters are held in groups, that correspond to the\nset of CutGroups that contain the atoms, e.g.\n\ngroup 0 contains all of the parameters that act on\ninternals that act only within CutGroup 0\n\ngroup 0,1 contains all of the parameters that act only\nbetween atoms in groups 0 and 1\n\ngroup 0,1,2 contains all of the parameters that act only\nbetween atoms in groups 0, 1 and 2\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope InternalParameters_scope( InternalParameters_exposer );
        InternalParameters_exposer.def( bp::init< SireMol::PartialMolecule const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, SireBase::PropertyName const &, bool >(( bp::arg("molecule"), bp::arg("bond_params"), bp::arg("angle_params"), bp::arg("dihedral_params"), bp::arg("improper_params"), bp::arg("ub_params"), bp::arg("ss_params"), bp::arg("sb_params"), bp::arg("bb_params"), bp::arg("sbt_params"), bp::arg("isstrict") ), "Construct the parameters from the specified properties of\nthe molecule molecule. If isstrict is true, then this\nincludes only internals that are wholely contained within\nthe selected atoms of the molecule. Otherwise, this contains\ninternals from which at least one atom is in the selected\natoms of the molecule") );
        InternalParameters_exposer.def( bp::init< SireMM::InternalParameters const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::InternalParameters::addChangedGroups
        
            typedef void ( ::SireMM::InternalParameters::*addChangedGroups_function_type)( ::SireMM::InternalParameters const &,::QSet< unsigned int > & ) const;
            addChangedGroups_function_type addChangedGroups_function_value( &::SireMM::InternalParameters::addChangedGroups );
            
            InternalParameters_exposer.def( 
                "addChangedGroups"
                , addChangedGroups_function_value
                , ( bp::arg("other"), bp::arg("changed_groups") )
                , bp::release_gil_policy()
                , "Add the indicies of CutGroups that have changed on to changed_groups" );
        
        }
        { //::SireMM::InternalParameters::applyMask
        
            typedef ::SireMM::InternalParameters ( ::SireMM::InternalParameters::*applyMask_function_type)( ::QSet< unsigned int > const & ) const;
            applyMask_function_type applyMask_function_value( &::SireMM::InternalParameters::applyMask );
            
            InternalParameters_exposer.def( 
                "applyMask"
                , applyMask_function_value
                , ( bp::arg("cgidxs") )
                , bp::release_gil_policy()
                , "Mask this set so that only the parameters for the specified CutGroups are\nincluded in the returned group." );
        
        }
        { //::SireMM::InternalParameters::changedAllGroups
        
            typedef bool ( ::SireMM::InternalParameters::*changedAllGroups_function_type)( ::SireMM::InternalParameters const & ) const;
            changedAllGroups_function_type changedAllGroups_function_value( &::SireMM::InternalParameters::changedAllGroups );
            
            InternalParameters_exposer.def( 
                "changedAllGroups"
                , changedAllGroups_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "Return whether all of the parameters for all CutGroups have changed\ncompared to other" );
        
        }
        { //::SireMM::InternalParameters::getChangedGroups
        
            typedef ::QSet< unsigned int > ( ::SireMM::InternalParameters::*getChangedGroups_function_type)( ::SireMM::InternalParameters const & ) const;
            getChangedGroups_function_type getChangedGroups_function_value( &::SireMM::InternalParameters::getChangedGroups );
            
            InternalParameters_exposer.def( 
                "getChangedGroups"
                , getChangedGroups_function_value
                , ( bp::arg("other") )
                , bp::release_gil_policy()
                , "Return the CGIdxs of the CutGroups that have changed from this group\ncompared to the paramters held in other" );
        
        }
        { //::SireMM::InternalParameters::groupParameters
        
            typedef ::QVector< SireMM::GroupInternalParameters > const & ( ::SireMM::InternalParameters::*groupParameters_function_type)(  ) const;
            groupParameters_function_type groupParameters_function_value( &::SireMM::InternalParameters::groupParameters );
            
            InternalParameters_exposer.def( 
                "groupParameters"
                , groupParameters_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the array of all of the internal parameters" );
        
        }
        { //::SireMM::InternalParameters::groupParameters
        
            typedef ::QVector< SireMM::GroupInternalParameters > ( ::SireMM::InternalParameters::*groupParameters_function_type)( ::quint32 ) const;
            groupParameters_function_type groupParameters_function_value( &::SireMM::InternalParameters::groupParameters );
            
            InternalParameters_exposer.def( 
                "groupParameters"
                , groupParameters_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "Return the array of all of the parameters that involve the CutGroup with index\ncgidx. This returns an empty array if there are no parameters for this CutGroup" );
        
        }
        { //::SireMM::InternalParameters::groupParameters
        
            typedef ::QVector< SireMM::GroupInternalParameters > ( ::SireMM::InternalParameters::*groupParameters_function_type)( ::QSet< unsigned int > const & ) const;
            groupParameters_function_type groupParameters_function_value( &::SireMM::InternalParameters::groupParameters );
            
            InternalParameters_exposer.def( 
                "groupParameters"
                , groupParameters_function_value
                , ( bp::arg("cgidxs") )
                , bp::release_gil_policy()
                , "Return all of the parameters that involve any of the CutGroups whose\nindicies are in cgidxs" );
        
        }
        { //::SireMM::InternalParameters::hasAngleParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasAngleParameters_function_type)(  ) const;
            hasAngleParameters_function_type hasAngleParameters_function_value( &::SireMM::InternalParameters::hasAngleParameters );
            
            InternalParameters_exposer.def( 
                "hasAngleParameters"
                , hasAngleParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasBendBendParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasBendBendParameters_function_type)(  ) const;
            hasBendBendParameters_function_type hasBendBendParameters_function_value( &::SireMM::InternalParameters::hasBendBendParameters );
            
            InternalParameters_exposer.def( 
                "hasBendBendParameters"
                , hasBendBendParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasBondParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasBondParameters_function_type)(  ) const;
            hasBondParameters_function_type hasBondParameters_function_value( &::SireMM::InternalParameters::hasBondParameters );
            
            InternalParameters_exposer.def( 
                "hasBondParameters"
                , hasBondParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasCrossTerms
        
            typedef bool ( ::SireMM::InternalParameters::*hasCrossTerms_function_type)(  ) const;
            hasCrossTerms_function_type hasCrossTerms_function_value( &::SireMM::InternalParameters::hasCrossTerms );
            
            InternalParameters_exposer.def( 
                "hasCrossTerms"
                , hasCrossTerms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasDihedralParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasDihedralParameters_function_type)(  ) const;
            hasDihedralParameters_function_type hasDihedralParameters_function_value( &::SireMM::InternalParameters::hasDihedralParameters );
            
            InternalParameters_exposer.def( 
                "hasDihedralParameters"
                , hasDihedralParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasImproperParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasImproperParameters_function_type)(  ) const;
            hasImproperParameters_function_type hasImproperParameters_function_value( &::SireMM::InternalParameters::hasImproperParameters );
            
            InternalParameters_exposer.def( 
                "hasImproperParameters"
                , hasImproperParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasNonPhysicalParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasNonPhysicalParameters_function_type)(  ) const;
            hasNonPhysicalParameters_function_type hasNonPhysicalParameters_function_value( &::SireMM::InternalParameters::hasNonPhysicalParameters );
            
            InternalParameters_exposer.def( 
                "hasNonPhysicalParameters"
                , hasNonPhysicalParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasPhysicalParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasPhysicalParameters_function_type)(  ) const;
            hasPhysicalParameters_function_type hasPhysicalParameters_function_value( &::SireMM::InternalParameters::hasPhysicalParameters );
            
            InternalParameters_exposer.def( 
                "hasPhysicalParameters"
                , hasPhysicalParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasStretchBendParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasStretchBendParameters_function_type)(  ) const;
            hasStretchBendParameters_function_type hasStretchBendParameters_function_value( &::SireMM::InternalParameters::hasStretchBendParameters );
            
            InternalParameters_exposer.def( 
                "hasStretchBendParameters"
                , hasStretchBendParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasStretchBendTorsionParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasStretchBendTorsionParameters_function_type)(  ) const;
            hasStretchBendTorsionParameters_function_type hasStretchBendTorsionParameters_function_value( &::SireMM::InternalParameters::hasStretchBendTorsionParameters );
            
            InternalParameters_exposer.def( 
                "hasStretchBendTorsionParameters"
                , hasStretchBendTorsionParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasStretchStretchParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasStretchStretchParameters_function_type)(  ) const;
            hasStretchStretchParameters_function_type hasStretchStretchParameters_function_value( &::SireMM::InternalParameters::hasStretchStretchParameters );
            
            InternalParameters_exposer.def( 
                "hasStretchStretchParameters"
                , hasStretchStretchParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::hasUreyBradleyParameters
        
            typedef bool ( ::SireMM::InternalParameters::*hasUreyBradleyParameters_function_type)(  ) const;
            hasUreyBradleyParameters_function_type hasUreyBradleyParameters_function_value( &::SireMM::InternalParameters::hasUreyBradleyParameters );
            
            InternalParameters_exposer.def( 
                "hasUreyBradleyParameters"
                , hasUreyBradleyParameters_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::isEmpty
        
            typedef bool ( ::SireMM::InternalParameters::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::InternalParameters::isEmpty );
            
            InternalParameters_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InternalParameters_exposer.def( bp::self != bp::self );
        { //::SireMM::InternalParameters::operator=
        
            typedef ::SireMM::InternalParameters & ( ::SireMM::InternalParameters::*assign_function_type)( ::SireMM::InternalParameters const & ) ;
            assign_function_type assign_function_value( &::SireMM::InternalParameters::operator= );
            
            InternalParameters_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InternalParameters_exposer.def( bp::self == bp::self );
        { //::SireMM::InternalParameters::symbols
        
            typedef ::SireMM::InternalSymbols const & ( ::SireMM::InternalParameters::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::InternalParameters::symbols );
            
            InternalParameters_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the symbols used by the internal functions" );
        
        }
        { //::SireMM::InternalParameters::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::InternalParameters::typeName );
            
            InternalParameters_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::InternalParameters::what
        
            typedef char const * ( ::SireMM::InternalParameters::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::InternalParameters::what );
            
            InternalParameters_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        InternalParameters_exposer.staticmethod( "typeName" );
        InternalParameters_exposer.def( "__copy__", &__copy__<SireMM::InternalParameters>);
        InternalParameters_exposer.def( "__deepcopy__", &__copy__<SireMM::InternalParameters>);
        InternalParameters_exposer.def( "clone", &__copy__<SireMM::InternalParameters>);
        InternalParameters_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::InternalParameters >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalParameters_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::InternalParameters >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalParameters_exposer.def_pickle(sire_pickle_suite< ::SireMM::InternalParameters >());
        InternalParameters_exposer.def( "__str__", &pvt_get_name);
        InternalParameters_exposer.def( "__repr__", &pvt_get_name);
    }

}
