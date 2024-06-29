// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "DihedralParameterName.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/property.h"

#include "SireBase/propertylist.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireFF/detail/atomiccoords3d.h"

#include "SireFF/errors.h"

#include "SireMaths/line.h"

#include "SireMaths/torsion.h"

#include "SireMaths/triangle.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "internalff.h"

#include "tostring.h"

#include <QDebug>

#include <cstdio>

#include "internalff.h"

SireMM::DihedralParameterName __copy__(const SireMM::DihedralParameterName &other){ return SireMM::DihedralParameterName(other); }

#include "Helpers/copy.hpp"

const char* pvt_get_name(const SireMM::DihedralParameterName&){ return "SireMM::DihedralParameterName";}

#include "Helpers/release_gil_policy.hpp"

void register_DihedralParameterName_class(){

    { //::SireMM::DihedralParameterName
        typedef bp::class_< SireMM::DihedralParameterName > DihedralParameterName_exposer_t;
        DihedralParameterName_exposer_t DihedralParameterName_exposer = DihedralParameterName_exposer_t( "DihedralParameterName", "This class provides the default name of the\nproperty that contains the dihedral parameters", bp::init< >("") );
        bp::scope DihedralParameterName_scope( DihedralParameterName_exposer );
        { //::SireMM::DihedralParameterName::dihedral
        
            typedef ::SireBase::PropertyName const & ( ::SireMM::DihedralParameterName::*dihedral_function_type)(  ) const;
            dihedral_function_type dihedral_function_value( &::SireMM::DihedralParameterName::dihedral );
            
            DihedralParameterName_exposer.def( 
                "dihedral"
                , dihedral_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        DihedralParameterName_exposer.def( "__copy__", &__copy__<SireMM::DihedralParameterName>);
        DihedralParameterName_exposer.def( "__deepcopy__", &__copy__<SireMM::DihedralParameterName>);
        DihedralParameterName_exposer.def( "clone", &__copy__<SireMM::DihedralParameterName>);
        DihedralParameterName_exposer.def( "__str__", &pvt_get_name);
        DihedralParameterName_exposer.def( "__repr__", &pvt_get_name);
    }

}
