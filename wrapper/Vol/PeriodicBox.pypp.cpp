// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "PeriodicBox.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/countflops.h"

#include "SireError/errors.h"

#include "SireMaths/align.h"

#include "SireMaths/rangenerator.h"

#include "SireStream/datastream.h"

#include "coordgroup.h"

#include "periodicbox.h"

#include <QDebug>

#include <QMutex>

#include <cmath>

#include <limits>

#include "periodicbox.h"

SireVol::PeriodicBox __copy__(const SireVol::PeriodicBox &other){ return SireVol::PeriodicBox(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_PeriodicBox_class(){

    { //::SireVol::PeriodicBox
        typedef bp::class_< SireVol::PeriodicBox, bp::bases< SireVol::Cartesian, SireVol::Space, SireBase::Property > > PeriodicBox_exposer_t;
        PeriodicBox_exposer_t PeriodicBox_exposer = PeriodicBox_exposer_t( "PeriodicBox", "\nA PeriodicBox is a volume  that represents standard periodic boundary conditions\n(a 3D box replicated to infinity along all three dimensions).\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a default PeriodicBox volume (maximum volume)") );
        bp::scope PeriodicBox_scope( PeriodicBox_exposer );
        PeriodicBox_exposer.def( bp::init< SireMaths::Vector const & >(( bp::arg("extents") ), "Construct a PeriodicBox with the specified dimensions") );
        PeriodicBox_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Vector const & >(( bp::arg("min"), bp::arg("max") ), "Construct a PeriodicBox volume that goes from min to max") );
        PeriodicBox_exposer.def( bp::init< SireVol::PeriodicBox const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireVol::PeriodicBox::beyond
        
            typedef bool ( ::SireVol::PeriodicBox::*beyond_function_type)( double,::SireVol::AABox const &,::SireVol::AABox const & ) const;
            beyond_function_type beyond_function_value( &::SireVol::PeriodicBox::beyond );
            
            PeriodicBox_exposer.def( 
                "beyond"
                , beyond_function_value
                , ( bp::arg("dist"), bp::arg("aabox0"), bp::arg("aabox1") )
                , bp::release_gil_policy()
                , "Return whether or not two groups enclosed by the AABoxes aabox0 and\naabox1 are definitely beyond the cutoff distance dist" );
        
        }
        { //::SireVol::PeriodicBox::beyond
        
            typedef bool ( ::SireVol::PeriodicBox::*beyond_function_type)( double,::SireVol::CoordGroup const &,::SireVol::CoordGroup const & ) const;
            beyond_function_type beyond_function_value( &::SireVol::PeriodicBox::beyond );
            
            PeriodicBox_exposer.def( 
                "beyond"
                , beyond_function_value
                , ( bp::arg("dist"), bp::arg("group0"), bp::arg("group1") )
                , bp::release_gil_policy()
                , "Return whether or not these two groups are definitely beyond the cutoff distance." );
        
        }
        { //::SireVol::PeriodicBox::boxMatrix
        
            typedef ::SireMaths::Matrix ( ::SireVol::PeriodicBox::*boxMatrix_function_type)(  ) const;
            boxMatrix_function_type boxMatrix_function_value( &::SireVol::PeriodicBox::boxMatrix );
            
            PeriodicBox_exposer.def( 
                "boxMatrix"
                , boxMatrix_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::PeriodicBox::calcAngle
        
            typedef ::SireUnits::Dimension::Angle ( ::SireVol::PeriodicBox::*calcAngle_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcAngle_function_type calcAngle_function_value( &::SireVol::PeriodicBox::calcAngle );
            
            PeriodicBox_exposer.def( 
                "calcAngle"
                , calcAngle_function_value
                , ( bp::arg("point0"), bp::arg("point1"), bp::arg("point2") )
                , bp::release_gil_policy()
                , "Calculate the angle between the passed three points. This should return\nthe acute angle between the points, which should lie between 0 and 180 degrees" );
        
        }
        { //::SireVol::PeriodicBox::calcDihedral
        
            typedef ::SireUnits::Dimension::Angle ( ::SireVol::PeriodicBox::*calcDihedral_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDihedral_function_type calcDihedral_function_value( &::SireVol::PeriodicBox::calcDihedral );
            
            PeriodicBox_exposer.def( 
                "calcDihedral"
                , calcDihedral_function_value
                , ( bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3") )
                , bp::release_gil_policy()
                , "Calculate the torsion angle between the passed four points. This should\nreturn the torsion angle measured clockwise when looking down the\ntorsion from point0-point1-point2-point3. This will lie between 0 and 360\ndegrees" );
        
        }
        { //::SireVol::PeriodicBox::calcDist
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::PeriodicBox::calcDist );
            
            PeriodicBox_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance between two points" );
        
        }
        { //::SireVol::PeriodicBox::calcDist
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::PeriodicBox::calcDist );
            
            PeriodicBox_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances between all of the\natoms of the two CoordGroups. Return the shortest distance^2 between the two\nCoordGroups." );
        
        }
        { //::SireVol::PeriodicBox::calcDist
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistMatrix & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::PeriodicBox::calcDist );
            
            PeriodicBox_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("mat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances between all of the\natoms of the passed CoordGroup to the passed point. Return the shortest\ndistance." );
        
        }
        { //::SireVol::PeriodicBox::calcDist2
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist2_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::PeriodicBox::calcDist2 );
            
            PeriodicBox_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance squared between two points" );
        
        }
        { //::SireVol::PeriodicBox::calcDist2
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist2_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistMatrix & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::PeriodicBox::calcDist2 );
            
            PeriodicBox_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("mat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances squared between all of the\natoms of the passed CoordGroup to the passed point. Return the shortest\ndistance." );
        
        }
        { //::SireVol::PeriodicBox::calcDist2
        
            typedef double ( ::SireVol::PeriodicBox::*calcDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::PeriodicBox::calcDist2 );
            
            PeriodicBox_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances^2 between all of the\natoms of the two CoordGroups. Return the shortest distance between the\ntwo CoordGroups." );
        
        }
        { //::SireVol::PeriodicBox::calcDistVector
        
            typedef ::SireMaths::DistVector ( ::SireVol::PeriodicBox::*calcDistVector_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDistVector_function_type calcDistVector_function_value( &::SireVol::PeriodicBox::calcDistVector );
            
            PeriodicBox_exposer.def( 
                "calcDistVector"
                , calcDistVector_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance vector between two points" );
        
        }
        { //::SireVol::PeriodicBox::calcDistVectors
        
            typedef double ( ::SireVol::PeriodicBox::*calcDistVectors_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistVectorMatrix & ) const;
            calcDistVectors_function_type calcDistVectors_function_value( &::SireVol::PeriodicBox::calcDistVectors );
            
            PeriodicBox_exposer.def( 
                "calcDistVectors"
                , calcDistVectors_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix distmat between all the points of the two CoordGroups\ngroup1 and group2 - the returned matrix has the vectors pointing\nfrom each point in group1 to each point in group2. This returns\nthe shortest distance between two points in the group" );
        
        }
        { //::SireVol::PeriodicBox::calcDistVectors
        
            typedef double ( ::SireVol::PeriodicBox::*calcDistVectors_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistVectorMatrix & ) const;
            calcDistVectors_function_type calcDistVectors_function_value( &::SireVol::PeriodicBox::calcDistVectors );
            
            PeriodicBox_exposer.def( 
                "calcDistVectors"
                , calcDistVectors_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix distmat between all the points passed CoordGroup\nto the point point - the returned matrix has the vectors pointing\nfrom the point to each point in group. This returns\nthe shortest distance." );
        
        }
        { //::SireVol::PeriodicBox::calcInvDist
        
            typedef double ( ::SireVol::PeriodicBox::*calcInvDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist_function_type calcInvDist_function_value( &::SireVol::PeriodicBox::calcInvDist );
            
            PeriodicBox_exposer.def( 
                "calcInvDist"
                , calcInvDist_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances between all of the\natoms of the two CoordGroups. Return the shortest distance between the two CoordGroups." );
        
        }
        { //::SireVol::PeriodicBox::calcInvDist2
        
            typedef double ( ::SireVol::PeriodicBox::*calcInvDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist2_function_type calcInvDist2_function_value( &::SireVol::PeriodicBox::calcInvDist2 );
            
            PeriodicBox_exposer.def( 
                "calcInvDist2"
                , calcInvDist2_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances^2 between all of the\natoms of the two CoordGroups. Return the shortest distance between the two CoordGroups." );
        
        }
        { //::SireVol::PeriodicBox::dimensions
        
            typedef ::SireMaths::Vector const & ( ::SireVol::PeriodicBox::*dimensions_function_type)(  ) const;
            dimensions_function_type dimensions_function_value( &::SireVol::PeriodicBox::dimensions );
            
            PeriodicBox_exposer.def( 
                "dimensions"
                , dimensions_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the dimensions of this box" );
        
        }
        { //::SireVol::PeriodicBox::getBoxCenter
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*getBoxCenter_function_type)( ::SireMaths::Vector const & ) const;
            getBoxCenter_function_type getBoxCenter_function_value( &::SireVol::PeriodicBox::getBoxCenter );
            
            PeriodicBox_exposer.def( 
                "getBoxCenter"
                , getBoxCenter_function_value
                , ( bp::arg("p") )
                , bp::release_gil_policy()
                , "Return the center of the box that contains the point p assuming\nthat the center for the central box is located at the origin" );
        
        }
        { //::SireVol::PeriodicBox::getBoxCenter
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*getBoxCenter_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            getBoxCenter_function_type getBoxCenter_function_value( &::SireVol::PeriodicBox::getBoxCenter );
            
            PeriodicBox_exposer.def( 
                "getBoxCenter"
                , getBoxCenter_function_value
                , ( bp::arg("p"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the center of the box that contains the point p assuming\nthat the center for the central box is located at center" );
        
        }
        { //::SireVol::PeriodicBox::getCopiesWithin
        
            typedef ::QList< boost::tuples::tuple< double, SireVol::CoordGroup, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > > ( ::SireVol::PeriodicBox::*getCopiesWithin_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,double ) const;
            getCopiesWithin_function_type getCopiesWithin_function_value( &::SireVol::PeriodicBox::getCopiesWithin );
            
            PeriodicBox_exposer.def( 
                "getCopiesWithin"
                , getCopiesWithin_function_value
                , ( bp::arg("group"), bp::arg("center"), bp::arg("dist") )
                , bp::release_gil_policy()
                , "Return a list of copies of CoordGroup group that are within\ndistance of the CoordGroup center, translating group so that\nit has the right coordinates to be around center. Note that multiple\ncopies of group may be returned in this is a periodic space and\nthere are multiple periodic replicas of group within dist of\ncenter. The copies of group are returned together with the\nminimum distance between that periodic replica and center.\nIf there are no periodic replicas of group that are within\ndist of center, then an empty list is returned." );
        
        }
        { //::SireVol::PeriodicBox::getImagesWithin
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::PeriodicBox::*getImagesWithin_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,double ) const;
            getImagesWithin_function_type getImagesWithin_function_value( &::SireVol::PeriodicBox::getImagesWithin );
            
            PeriodicBox_exposer.def( 
                "getImagesWithin"
                , getImagesWithin_function_value
                , ( bp::arg("point"), bp::arg("center"), bp::arg("dist") )
                , bp::release_gil_policy()
                , "Return all periodic images of point with respect to center within\ndist distance of center" );
        
        }
        { //::SireVol::PeriodicBox::getMinimumImage
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::PeriodicBox::*getMinimumImage_function_type)( ::QVector< SireMaths::Vector > const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::PeriodicBox::getMinimumImage );
            
            PeriodicBox_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("coords"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the copy of the point point which is the closest minimum image\nto center" );
        
        }
        { //::SireVol::PeriodicBox::getMinimumImage
        
            typedef ::SireVol::CoordGroup ( ::SireVol::PeriodicBox::*getMinimumImage_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::PeriodicBox::getMinimumImage );
            
            PeriodicBox_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("group"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the closest periodic copy of group to the point point,\naccording to the minimum image convention. The effect of this is\nto move group into the box which is now centered on point" );
        
        }
        { //::SireVol::PeriodicBox::getMinimumImage
        
            typedef ::SireVol::CoordGroupArray ( ::SireVol::PeriodicBox::*getMinimumImage_function_type)( ::SireVol::CoordGroupArray const &,::SireMaths::Vector const &,bool ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::PeriodicBox::getMinimumImage );
            
            PeriodicBox_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("groups"), bp::arg("center"), bp::arg("translate_as_one")=(bool)(false) )
                , "Return the closest periodic copy of each group in groups to the\npoint point, according to the minimum image convention.\nThe effect of this is to move each group into the box which is\nnow centered on point. If translate_as_one is true,\nthen this treats all groups as being part of one larger\ngroup, and so it translates it together. This is useful\nto get the minimum image of a molecule as a whole, rather\nthan breaking the molecule across a box boundary" );
        
        }
        { //::SireVol::PeriodicBox::getMinimumImage
        
            typedef ::SireVol::AABox ( ::SireVol::PeriodicBox::*getMinimumImage_function_type)( ::SireVol::AABox const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::PeriodicBox::getMinimumImage );
            
            PeriodicBox_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("aabox"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the copy of the periodic box which is the closest minimum image\nto center" );
        
        }
        { //::SireVol::PeriodicBox::getMinimumImage
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*getMinimumImage_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::PeriodicBox::getMinimumImage );
            
            PeriodicBox_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("point"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the copy of the point point which is the closest minimum image\nto center" );
        
        }
        { //::SireVol::PeriodicBox::getRandomPoint
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*getRandomPoint_function_type)( ::SireMaths::Vector const &,::SireMaths::RanGenerator const & ) const;
            getRandomPoint_function_type getRandomPoint_function_value( &::SireVol::PeriodicBox::getRandomPoint );
            
            PeriodicBox_exposer.def( 
                "getRandomPoint"
                , getRandomPoint_function_value
                , ( bp::arg("center"), bp::arg("generator") )
                , bp::release_gil_policy()
                , "Return a random point within the box (placing the center of the box\nis at the center center)" );
        
        }
        { //::SireVol::PeriodicBox::isCartesian
        
            typedef bool ( ::SireVol::PeriodicBox::*isCartesian_function_type)(  ) const;
            isCartesian_function_type isCartesian_function_value( &::SireVol::PeriodicBox::isCartesian );
            
            PeriodicBox_exposer.def( 
                "isCartesian"
                , isCartesian_function_value
                , bp::release_gil_policy()
                , "A Periodic box is cartesian" );
        
        }
        { //::SireVol::PeriodicBox::isPeriodic
        
            typedef bool ( ::SireVol::PeriodicBox::*isPeriodic_function_type)(  ) const;
            isPeriodic_function_type isPeriodic_function_value( &::SireVol::PeriodicBox::isPeriodic );
            
            PeriodicBox_exposer.def( 
                "isPeriodic"
                , isPeriodic_function_value
                , bp::release_gil_policy()
                , "A Periodic box is periodic" );
        
        }
        { //::SireVol::PeriodicBox::makeWhole
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::PeriodicBox::*makeWhole_function_type)( ::QVector< SireMaths::Vector > const & ) const;
            makeWhole_function_type makeWhole_function_value( &::SireVol::PeriodicBox::makeWhole );
            
            PeriodicBox_exposer.def( 
                "makeWhole"
                , makeWhole_function_value
                , ( bp::arg("coords") )
                , bp::release_gil_policy()
                , "Make the passed group of coordinates whole. This will make sure\n  that they are all next to each other, and arent split across a\n  periodic image boundary. The box that will be chosen will be the\n  one that contains the center of the points, with the points mapped\n  from the first to the last\n" );
        
        }
        { //::SireVol::PeriodicBox::makeWhole
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::PeriodicBox::*makeWhole_function_type)( ::QVector< SireMaths::Vector > const &,::SireMaths::Vector const & ) const;
            makeWhole_function_type makeWhole_function_value( &::SireVol::PeriodicBox::makeWhole );
            
            PeriodicBox_exposer.def( 
                "makeWhole"
                , makeWhole_function_value
                , ( bp::arg("coords"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the minimum image copy of coords with respect to center,\nwhere the coordinates are made whole. This means that they are\ntranslated as a single group, but the group as a whole will not\nbe split across a periodic boundary. Use this function if you want\nto restore a molecule that has been split over a space into a single,\ncoherent entity (all of the coordinates physically close to\none another)\n" );
        
        }
        { //::SireVol::PeriodicBox::maxCoords
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*maxCoords_function_type)( ::SireMaths::Vector const & ) const;
            maxCoords_function_type maxCoords_function_value( &::SireVol::PeriodicBox::maxCoords );
            
            PeriodicBox_exposer.def( 
                "maxCoords"
                , maxCoords_function_value
                , ( bp::arg("center")=SireMaths::Vector(0) )
                , "Return the maximum coordinates of the box that has its center at center" );
        
        }
        { //::SireVol::PeriodicBox::maximumCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireVol::PeriodicBox::*maximumCutoff_function_type)(  ) const;
            maximumCutoff_function_type maximumCutoff_function_value( &::SireVol::PeriodicBox::maximumCutoff );
            
            PeriodicBox_exposer.def( 
                "maximumCutoff"
                , maximumCutoff_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::PeriodicBox::minCoords
        
            typedef ::SireMaths::Vector ( ::SireVol::PeriodicBox::*minCoords_function_type)( ::SireMaths::Vector const & ) const;
            minCoords_function_type minCoords_function_value( &::SireVol::PeriodicBox::minCoords );
            
            PeriodicBox_exposer.def( 
                "minCoords"
                , minCoords_function_value
                , ( bp::arg("center")=SireMaths::Vector(0) )
                , "Return the minimum coordinates of the box that has its center at center" );
        
        }
        { //::SireVol::PeriodicBox::minimumDistance
        
            typedef double ( ::SireVol::PeriodicBox::*minimumDistance_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const & ) const;
            minimumDistance_function_type minimumDistance_function_value( &::SireVol::PeriodicBox::minimumDistance );
            
            PeriodicBox_exposer.def( 
                "minimumDistance"
                , minimumDistance_function_value
                , ( bp::arg("group0"), bp::arg("group1") )
                , bp::release_gil_policy()
                , "Return the minimum distance between the points in group0 and group1.\nIf this is a periodic space then this uses the minimum image convention\n(i.e. the minimum distance between the closest periodic replicas are\nused)" );
        
        }
        { //::SireVol::PeriodicBox::minimumDistance
        
            typedef double ( ::SireVol::PeriodicBox::*minimumDistance_function_type)( ::SireVol::AABox const &,::SireVol::AABox const & ) const;
            minimumDistance_function_type minimumDistance_function_value( &::SireVol::PeriodicBox::minimumDistance );
            
            PeriodicBox_exposer.def( 
                "minimumDistance"
                , minimumDistance_function_value
                , ( bp::arg("box0"), bp::arg("box1") )
                , bp::release_gil_policy()
                , "Return the minimum distance between the two boxes" );
        
        }
        PeriodicBox_exposer.def( bp::self != bp::self );
        { //::SireVol::PeriodicBox::operator=
        
            typedef ::SireVol::PeriodicBox & ( ::SireVol::PeriodicBox::*assign_function_type)( ::SireVol::PeriodicBox const & ) ;
            assign_function_type assign_function_value( &::SireVol::PeriodicBox::operator= );
            
            PeriodicBox_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        PeriodicBox_exposer.def( bp::self == bp::self );
        { //::SireVol::PeriodicBox::setDimensions
        
            typedef void ( ::SireVol::PeriodicBox::*setDimensions_function_type)( ::SireMaths::Vector const & ) ;
            setDimensions_function_type setDimensions_function_value( &::SireVol::PeriodicBox::setDimensions );
            
            PeriodicBox_exposer.def( 
                "setDimensions"
                , setDimensions_function_value
                , ( bp::arg("dimensions") )
                , bp::release_gil_policy()
                , "Set the dimensions of this box to dimensions (the lengths of the\nthree sides of this box)" );
        
        }
        { //::SireVol::PeriodicBox::setDimensions
        
            typedef void ( ::SireVol::PeriodicBox::*setDimensions_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) ;
            setDimensions_function_type setDimensions_function_value( &::SireVol::PeriodicBox::setDimensions );
            
            PeriodicBox_exposer.def( 
                "setDimensions"
                , setDimensions_function_value
                , ( bp::arg("mincoords"), bp::arg("maxcoords") )
                , bp::release_gil_policy()
                , "Set the dimensions of the box so that they span from mincoords\nto maxcoords" );
        
        }
        { //::SireVol::PeriodicBox::setVolume
        
            typedef ::SireVol::SpacePtr ( ::SireVol::PeriodicBox::*setVolume_function_type)( ::SireUnits::Dimension::Volume ) const;
            setVolume_function_type setVolume_function_value( &::SireVol::PeriodicBox::setVolume );
            
            PeriodicBox_exposer.def( 
                "setVolume"
                , setVolume_function_value
                , ( bp::arg("volume") )
                , bp::release_gil_policy()
                , "Return a copy of this space with the volume of set to volume\n- this will scale the space uniformly, keeping the center at\nthe same location, to achieve this volume" );
        
        }
        { //::SireVol::PeriodicBox::toString
        
            typedef ::QString ( ::SireVol::PeriodicBox::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireVol::PeriodicBox::toString );
            
            PeriodicBox_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this space" );
        
        }
        { //::SireVol::PeriodicBox::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::PeriodicBox::typeName );
            
            PeriodicBox_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::PeriodicBox::volume
        
            typedef ::SireUnits::Dimension::Volume ( ::SireVol::PeriodicBox::*volume_function_type)(  ) const;
            volume_function_type volume_function_value( &::SireVol::PeriodicBox::volume );
            
            PeriodicBox_exposer.def( 
                "volume"
                , volume_function_value
                , bp::release_gil_policy()
                , "Return the volume of the central box of this space." );
        
        }
        PeriodicBox_exposer.staticmethod( "typeName" );
        PeriodicBox_exposer.def( "__copy__", &__copy__);
        PeriodicBox_exposer.def( "__deepcopy__", &__copy__);
        PeriodicBox_exposer.def( "clone", &__copy__);
        PeriodicBox_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::PeriodicBox >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PeriodicBox_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::PeriodicBox >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PeriodicBox_exposer.def_pickle(sire_pickle_suite< ::SireVol::PeriodicBox >());
        PeriodicBox_exposer.def( "__str__", &__str__< ::SireVol::PeriodicBox > );
        PeriodicBox_exposer.def( "__repr__", &__str__< ::SireVol::PeriodicBox > );
    }

}
