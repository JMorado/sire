//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireFF_registrars.h"



#include "energytable.h"
#include "ffcomponent.h"
#include "ffidentifier.h"
#include "ffidx.h"
#include "ffmolgroup.h"
#include "ffname.h"
#include "ffparameters.h"
#include "fieldtable.h"
#include "forcefield.h"
#include "forcefields.h"
#include "forcetable.h"
#include "patch.h"
#include "patches.h"
#include "point.h"
#include "potentialtable.h"
#include "probe.h"

#include "Helpers/objectregistry.hpp"

void register_SireFF_objects()
{

    ObjectRegistry::registerConverterFor< SireFF::EnergyTable >();
    ObjectRegistry::registerConverterFor< SireFF::MolEnergyTable >();
    ObjectRegistry::registerConverterFor< SireFF::SingleComponent >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireFF::FFID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireFF::FFID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireFF::FFID> >();
    ObjectRegistry::registerConverterFor< SireFF::FFIdentifier >();
    ObjectRegistry::registerConverterFor< SireFF::FFIdx >();
    ObjectRegistry::registerConverterFor< SireFF::FFMolGroup >();
    ObjectRegistry::registerConverterFor< SireFF::FFName >();
    ObjectRegistry::registerConverterFor< SireFF::NullFFParameters >();
    ObjectRegistry::registerConverterFor< SireFF::NullFFParametersArray >();
    ObjectRegistry::registerConverterFor< SireFF::FieldTable >();
    ObjectRegistry::registerConverterFor< SireFF::GridFieldTable >();
    ObjectRegistry::registerConverterFor< SireFF::MolFieldTable >();
    ObjectRegistry::registerConverterFor< SireFF::NullFF >();
    ObjectRegistry::registerConverterFor< SireFF::ForceFields >();
    ObjectRegistry::registerConverterFor< SireFF::ForceTable >();
    ObjectRegistry::registerConverterFor< SireFF::MolForceTable >();
    ObjectRegistry::registerConverterFor< SireFF::Patch >();
    ObjectRegistry::registerConverterFor< SireFF::FFBead >();
    ObjectRegistry::registerConverterFor< SireFF::FFBeadChange >();
    ObjectRegistry::registerConverterFor< SireFF::Patches >();
    ObjectRegistry::registerConverterFor< SireFF::AtomPoint >();
    ObjectRegistry::registerConverterFor< SireFF::VectorPoint >();
    ObjectRegistry::registerConverterFor< SireFF::Center >();
    ObjectRegistry::registerConverterFor< SireFF::CenterOfGeometry >();
    ObjectRegistry::registerConverterFor< SireFF::CenterOfMass >();
    ObjectRegistry::registerConverterFor< SireFF::PotentialTable >();
    ObjectRegistry::registerConverterFor< SireFF::GridPotentialTable >();
    ObjectRegistry::registerConverterFor< SireFF::MolPotentialTable >();
    ObjectRegistry::registerConverterFor< SireFF::NullProbe >();

}

