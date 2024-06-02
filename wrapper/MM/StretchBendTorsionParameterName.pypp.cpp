// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "StretchBendTorsionParameterName.pypp.hpp"

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

SireMM::StretchBendTorsionParameterName __copy__(const SireMM::StretchBendTorsionParameterName &other){ return SireMM::StretchBendTorsionParameterName(other); }

#include "Helpers/copy.hpp"

const char* pvt_get_name(const SireMM::StretchBendTorsionParameterName&){ return "SireMM::StretchBendTorsionParameterName";}

#include "Helpers/release_gil_policy.hpp"

void register_StretchBendTorsionParameterName_class(){

    { //::SireMM::StretchBendTorsionParameterName
        typedef bp::class_< SireMM::StretchBendTorsionParameterName > StretchBendTorsionParameterName_exposer_t;
        StretchBendTorsionParameterName_exposer_t StretchBendTorsionParameterName_exposer = StretchBendTorsionParameterName_exposer_t( "StretchBendTorsionParameterName", "This class provides the default name of the\nproperty that contains the stretch-bend-torsion parameters", bp::init< >("") );
        bp::scope StretchBendTorsionParameterName_scope( StretchBendTorsionParameterName_exposer );
        { //::SireMM::StretchBendTorsionParameterName::stretchBendTorsion
        
            typedef ::SireBase::PropertyName const & ( ::SireMM::StretchBendTorsionParameterName::*stretchBendTorsion_function_type)(  ) const;
            stretchBendTorsion_function_type stretchBendTorsion_function_value( &::SireMM::StretchBendTorsionParameterName::stretchBendTorsion );
            
            StretchBendTorsionParameterName_exposer.def( 
                "stretchBendTorsion"
                , stretchBendTorsion_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        StretchBendTorsionParameterName_exposer.def( "__copy__", &__copy__<SireMM::StretchBendTorsionParameterName>);
        StretchBendTorsionParameterName_exposer.def( "__deepcopy__", &__copy__<SireMM::StretchBendTorsionParameterName>);
        StretchBendTorsionParameterName_exposer.def( "clone", &__copy__<SireMM::StretchBendTorsionParameterName>);
        StretchBendTorsionParameterName_exposer.def( "__str__", &pvt_get_name);
        StretchBendTorsionParameterName_exposer.def( "__repr__", &pvt_get_name);
    }

}
