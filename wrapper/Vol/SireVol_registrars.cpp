//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireVol_registrars.h"

#include "aabox.h"
#include "cartesian.h"
#include "combinedspace.h"
#include "combinespaces.h"
#include "coordgroup.h"
#include "grid.h"
#include "gridinfo.h"
#include "patching.h"
#include "periodicbox.h"
#include "transformedspace.h"
#include "triclinicbox.h"

#include "Helpers/objectregistry.hpp"

void register_SireVol_objects()
{

    ObjectRegistry::registerConverterFor< SireVol::AABox >();
    ObjectRegistry::registerConverterFor< SireVol::Cartesian >();
    ObjectRegistry::registerConverterFor< SireVol::CombinedSpace >();
    ObjectRegistry::registerConverterFor< SireVol::CombineSpaces >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroup >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupEditor >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArray >();
    ObjectRegistry::registerConverterFor< SireVol::CoordGroupArrayArray >();
    ObjectRegistry::registerConverterFor< SireVol::NullGrid >();
    ObjectRegistry::registerConverterFor< SireVol::RegularGrid >();
    ObjectRegistry::registerConverterFor< SireVol::GridIndex >();
    ObjectRegistry::registerConverterFor< SireVol::GridInfo >();
    ObjectRegistry::registerConverterFor< SireVol::NullPatching >();
    ObjectRegistry::registerConverterFor< SireVol::BoxPatching >();
    ObjectRegistry::registerConverterFor< SireVol::PeriodicBox >();
    ObjectRegistry::registerConverterFor< SireVol::TransformedSpace >();
    ObjectRegistry::registerConverterFor< SireVol::TriclinicBox >();

}

