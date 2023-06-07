// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CombinedSpace.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/align.h"

#include "SireMaths/rangenerator.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/errors.h"

#include "combinedspace.h"

#include "coordgroup.h"

#include <QDebug>

#include "combinedspace.h"

SireVol::CombinedSpace __copy__(const SireVol::CombinedSpace &other){ return SireVol::CombinedSpace(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_CombinedSpace_class(){

    { //::SireVol::CombinedSpace
        typedef bp::class_< SireVol::CombinedSpace, bp::bases< SireVol::Space, SireBase::Property > > CombinedSpace_exposer_t;
        CombinedSpace_exposer_t CombinedSpace_exposer = CombinedSpace_exposer_t( "CombinedSpace", "This is a space which is built from the combination of a set\nof sub-spaces. This is useful for systems that are comprised\nof multiple sub-spaces, e.g. Gibbs ensemble simulations,\nor simulations using a combined bound and free binding leg\n\nAuthor: Christopher Woods\n", bp::init< >("Construct a default CombinedSpace volume") );
        bp::scope CombinedSpace_scope( CombinedSpace_exposer );
        CombinedSpace_exposer.def( bp::init< SireVol::Space const & >(( bp::arg("space") ), "Construct a combined space from just a single space") );
        CombinedSpace_exposer.def( bp::init< SireVol::Space const &, SireVol::Space const & >(( bp::arg("space0"), bp::arg("space1") ), "Construct a combined space from the passed two spaces") );
        CombinedSpace_exposer.def( bp::init< QList< SireBase::PropPtr< SireVol::Space > > const & >(( bp::arg("spaces") ), "Construct a combined space from the passed spaces") );
        CombinedSpace_exposer.def( bp::init< QVector< SireBase::PropPtr< SireVol::Space > > const & >(( bp::arg("spaces") ), "Construct a combined space from the passed spaces") );
        CombinedSpace_exposer.def( bp::init< SireVol::CombinedSpace const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireVol::CombinedSpace::at
        
            typedef ::SireVol::Space const & ( ::SireVol::CombinedSpace::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireVol::CombinedSpace::at );
            
            CombinedSpace_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "Return the ith space that makes up this combined space\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireVol::CombinedSpace::beyond
        
            typedef bool ( ::SireVol::CombinedSpace::*beyond_function_type)( double,::SireVol::CoordGroup const &,::SireVol::CoordGroup const & ) const;
            beyond_function_type beyond_function_value( &::SireVol::CombinedSpace::beyond );
            
            CombinedSpace_exposer.def( 
                "beyond"
                , beyond_function_value
                , ( bp::arg("dist"), bp::arg("group0"), bp::arg("group1") )
                , bp::release_gil_policy()
                , "Return whether or not these two groups are definitely beyond the cutoff distance." );
        
        }
        { //::SireVol::CombinedSpace::beyond
        
            typedef bool ( ::SireVol::CombinedSpace::*beyond_function_type)( double,::SireVol::AABox const &,::SireVol::AABox const & ) const;
            beyond_function_type beyond_function_value( &::SireVol::CombinedSpace::beyond );
            
            CombinedSpace_exposer.def( 
                "beyond"
                , beyond_function_value
                , ( bp::arg("dist"), bp::arg("aabox0"), bp::arg("aabox1") )
                , bp::release_gil_policy()
                , "Return whether or not two groups enclosed by the AABoxes aabox0\nand aabox1 are definitely beyond the cutoff distance" );
        
        }
        { //::SireVol::CombinedSpace::boxMatrix
        
            typedef ::SireMaths::Matrix ( ::SireVol::CombinedSpace::*boxMatrix_function_type)(  ) const;
            boxMatrix_function_type boxMatrix_function_value( &::SireVol::CombinedSpace::boxMatrix );
            
            CombinedSpace_exposer.def( 
                "boxMatrix"
                , boxMatrix_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::CombinedSpace::calcAngle
        
            typedef ::SireUnits::Dimension::Angle ( ::SireVol::CombinedSpace::*calcAngle_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcAngle_function_type calcAngle_function_value( &::SireVol::CombinedSpace::calcAngle );
            
            CombinedSpace_exposer.def( 
                "calcAngle"
                , calcAngle_function_value
                , ( bp::arg("point0"), bp::arg("point1"), bp::arg("point2") )
                , bp::release_gil_policy()
                , "Calculate the angle between the passed three points. This should return\nthe acute angle between the points, which should lie between 0 and 180 degrees" );
        
        }
        { //::SireVol::CombinedSpace::calcDihedral
        
            typedef ::SireUnits::Dimension::Angle ( ::SireVol::CombinedSpace::*calcDihedral_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDihedral_function_type calcDihedral_function_value( &::SireVol::CombinedSpace::calcDihedral );
            
            CombinedSpace_exposer.def( 
                "calcDihedral"
                , calcDihedral_function_value
                , ( bp::arg("point0"), bp::arg("point1"), bp::arg("point2"), bp::arg("point3") )
                , bp::release_gil_policy()
                , "Calculate the torsion angle between the passed four points. This should\nreturn the torsion angle measured clockwise when looking down the\ntorsion from point0-point1-point2-point3. This will lie between 0 and 360\ndegrees" );
        
        }
        { //::SireVol::CombinedSpace::calcDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::CombinedSpace::calcDist );
            
            CombinedSpace_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance between two points" );
        
        }
        { //::SireVol::CombinedSpace::calcDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::CombinedSpace::calcDist );
            
            CombinedSpace_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("group"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances between all points in\nthe group group. Return the shortest distance between points." );
        
        }
        { //::SireVol::CombinedSpace::calcDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::CombinedSpace::calcDist );
            
            CombinedSpace_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances between all of the\npoints of the two CoordGroups. Return the shortest distance between the two\nCoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::calcDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistMatrix & ) const;
            calcDist_function_type calcDist_function_value( &::SireVol::CombinedSpace::calcDist );
            
            CombinedSpace_exposer.def( 
                "calcDist"
                , calcDist_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances between all of the\npoints of the two CoordGroups. Return the shortest distance between the two\nCoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::calcDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist2_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::CombinedSpace::calcDist2 );
            
            CombinedSpace_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance squared between two points" );
        
        }
        { //::SireVol::CombinedSpace::calcDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::CombinedSpace::calcDist2 );
            
            CombinedSpace_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("group"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances^2 between all points in\nthe group group. Return the shortest distance between points." );
        
        }
        { //::SireVol::CombinedSpace::calcDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::CombinedSpace::calcDist2 );
            
            CombinedSpace_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances^2 between all of the\npoints of the two CoordGroups. Return the shortest distance between the\ntwo CoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::calcDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcDist2_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistMatrix & ) const;
            calcDist2_function_type calcDist2_function_value( &::SireVol::CombinedSpace::calcDist2 );
            
            CombinedSpace_exposer.def( 
                "calcDist2"
                , calcDist2_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the distances^2 between all of the\npoints of the two CoordGroups. Return the shortest distance between the\ntwo CoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::calcDistVector
        
            typedef ::SireMaths::DistVector ( ::SireVol::CombinedSpace::*calcDistVector_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            calcDistVector_function_type calcDistVector_function_value( &::SireVol::CombinedSpace::calcDistVector );
            
            CombinedSpace_exposer.def( 
                "calcDistVector"
                , calcDistVector_function_value
                , ( bp::arg("point0"), bp::arg("point1") )
                , bp::release_gil_policy()
                , "Calculate the distance vector between two points" );
        
        }
        { //::SireVol::CombinedSpace::calcDistVectors
        
            typedef double ( ::SireVol::CombinedSpace::*calcDistVectors_function_type)( ::SireVol::CoordGroup const &,::SireVol::DistVectorMatrix & ) const;
            calcDistVectors_function_type calcDistVectors_function_value( &::SireVol::CombinedSpace::calcDistVectors );
            
            CombinedSpace_exposer.def( 
                "calcDistVectors"
                , calcDistVectors_function_value
                , ( bp::arg("group"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix distmat with all of the interpoint distance vectors\nbetween all points within the CoordGroup. This is not a symmetrical matrix,\nas the direction from point A to point B is the negative of the\ndirection from point B to point A. This returns the shortest distance\nbetween two points in the group (that is not the self-self distance)" );
        
        }
        { //::SireVol::CombinedSpace::calcDistVectors
        
            typedef double ( ::SireVol::CombinedSpace::*calcDistVectors_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistVectorMatrix & ) const;
            calcDistVectors_function_type calcDistVectors_function_value( &::SireVol::CombinedSpace::calcDistVectors );
            
            CombinedSpace_exposer.def( 
                "calcDistVectors"
                , calcDistVectors_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix distmat between all the points of the two CoordGroups\ngroup1 and group2 - the returned matrix has the vectors pointing\nfrom each point in group1 to each point in group2. This returns\nthe shortest distance between two points in the group" );
        
        }
        { //::SireVol::CombinedSpace::calcDistVectors
        
            typedef double ( ::SireVol::CombinedSpace::*calcDistVectors_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const &,::SireVol::DistVectorMatrix & ) const;
            calcDistVectors_function_type calcDistVectors_function_value( &::SireVol::CombinedSpace::calcDistVectors );
            
            CombinedSpace_exposer.def( 
                "calcDistVectors"
                , calcDistVectors_function_value
                , ( bp::arg("group"), bp::arg("point"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix distmat between all the points of the two CoordGroups\ngroup1 and group2 - the returned matrix has the vectors pointing\nfrom each point in group1 to each point in group2. This returns\nthe shortest distance between two points in the group" );
        
        }
        { //::SireVol::CombinedSpace::calcInvDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcInvDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist_function_type calcInvDist_function_value( &::SireVol::CombinedSpace::calcInvDist );
            
            CombinedSpace_exposer.def( 
                "calcInvDist"
                , calcInvDist_function_value
                , ( bp::arg("group"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances between all points in\nthe group group. Return the smallest distance between points." );
        
        }
        { //::SireVol::CombinedSpace::calcInvDist
        
            typedef double ( ::SireVol::CombinedSpace::*calcInvDist_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist_function_type calcInvDist_function_value( &::SireVol::CombinedSpace::calcInvDist );
            
            CombinedSpace_exposer.def( 
                "calcInvDist"
                , calcInvDist_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances between all of the\npoints of the two CoordGroups. Return the shortest distance between\nthe two CoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::calcInvDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcInvDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist2_function_type calcInvDist2_function_value( &::SireVol::CombinedSpace::calcInvDist2 );
            
            CombinedSpace_exposer.def( 
                "calcInvDist2"
                , calcInvDist2_function_value
                , ( bp::arg("group"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances^2 between all points in\nthe group group. Return the smallest distance between points." );
        
        }
        { //::SireVol::CombinedSpace::calcInvDist2
        
            typedef double ( ::SireVol::CombinedSpace::*calcInvDist2_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,::SireVol::DistMatrix & ) const;
            calcInvDist2_function_type calcInvDist2_function_value( &::SireVol::CombinedSpace::calcInvDist2 );
            
            CombinedSpace_exposer.def( 
                "calcInvDist2"
                , calcInvDist2_function_value
                , ( bp::arg("group1"), bp::arg("group2"), bp::arg("distmat") )
                , bp::release_gil_policy()
                , "Populate the matrix mat with the inverse distances^2 between all of the\npoints of the two CoordGroups. Return the shortest distance between\nthe two CoordGroups." );
        
        }
        { //::SireVol::CombinedSpace::count
        
            typedef int ( ::SireVol::CombinedSpace::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireVol::CombinedSpace::count );
            
            CombinedSpace_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "Return the number of spaces in this combined space" );
        
        }
        { //::SireVol::CombinedSpace::getBoxCenter
        
            typedef ::SireMaths::Vector ( ::SireVol::CombinedSpace::*getBoxCenter_function_type)( ::SireMaths::Vector const & ) const;
            getBoxCenter_function_type getBoxCenter_function_value( &::SireVol::CombinedSpace::getBoxCenter );
            
            CombinedSpace_exposer.def( 
                "getBoxCenter"
                , getBoxCenter_function_value
                , ( bp::arg("p") )
                , bp::release_gil_policy()
                , "Return the center of the box that contains the point p assuming\nthat the center for the central box is located at the origin" );
        
        }
        { //::SireVol::CombinedSpace::getBoxCenter
        
            typedef ::SireMaths::Vector ( ::SireVol::CombinedSpace::*getBoxCenter_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            getBoxCenter_function_type getBoxCenter_function_value( &::SireVol::CombinedSpace::getBoxCenter );
            
            CombinedSpace_exposer.def( 
                "getBoxCenter"
                , getBoxCenter_function_value
                , ( bp::arg("p"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the center of the box that contains the point p assuming\nthat the center for the central box is located at center" );
        
        }
        { //::SireVol::CombinedSpace::getCopiesWithin
        
            typedef ::QList< boost::tuples::tuple< double, SireVol::CoordGroup, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > > ( ::SireVol::CombinedSpace::*getCopiesWithin_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const &,double ) const;
            getCopiesWithin_function_type getCopiesWithin_function_value( &::SireVol::CombinedSpace::getCopiesWithin );
            
            CombinedSpace_exposer.def( 
                "getCopiesWithin"
                , getCopiesWithin_function_value
                , ( bp::arg("group"), bp::arg("center"), bp::arg("dist") )
                , bp::release_gil_policy()
                , "Return a list of copies of CoordGroup group that are within\ndistance of the CoordGroup center, translating group so that\nit has the right coordinates to be around center. As this is not\na periodic space, this will merely return a copy of group if\nit is within the specified distance." );
        
        }
        { //::SireVol::CombinedSpace::getImagesWithin
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::CombinedSpace::*getImagesWithin_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const &,double ) const;
            getImagesWithin_function_type getImagesWithin_function_value( &::SireVol::CombinedSpace::getImagesWithin );
            
            CombinedSpace_exposer.def( 
                "getImagesWithin"
                , getImagesWithin_function_value
                , ( bp::arg("point"), bp::arg("center"), bp::arg("dist") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::CombinedSpace::getMinimumImage
        
            typedef ::QVector< SireMaths::Vector > ( ::SireVol::CombinedSpace::*getMinimumImage_function_type)( ::QVector< SireMaths::Vector > const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::CombinedSpace::getMinimumImage );
            
            CombinedSpace_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("coords"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the minimum image copy of group with respect to center.\nIn this case, as this is not a periodic space, this just returns\ngroup" );
        
        }
        { //::SireVol::CombinedSpace::getMinimumImage
        
            typedef ::SireVol::CoordGroup ( ::SireVol::CombinedSpace::*getMinimumImage_function_type)( ::SireVol::CoordGroup const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::CombinedSpace::getMinimumImage );
            
            CombinedSpace_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("group"), bp::arg("center") )
                , bp::release_gil_policy()
                , "Return the minimum image copy of group with respect to center.\nIn this case, as this is not a periodic space, this just returns\ngroup" );
        
        }
        { //::SireVol::CombinedSpace::getMinimumImage
        
            typedef ::SireVol::CoordGroupArray ( ::SireVol::CombinedSpace::*getMinimumImage_function_type)( ::SireVol::CoordGroupArray const &,::SireMaths::Vector const &,bool ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::CombinedSpace::getMinimumImage );
            
            CombinedSpace_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("groups"), bp::arg("center"), bp::arg("translate_as_one")=(bool)(false) )
                , "Return the minimum image copy of groups with respect to center.\nIn this case, as this is not a periodic space, this just returns\ngroups" );
        
        }
        { //::SireVol::CombinedSpace::getMinimumImage
        
            typedef ::SireVol::AABox ( ::SireVol::CombinedSpace::*getMinimumImage_function_type)( ::SireVol::AABox const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::CombinedSpace::getMinimumImage );
            
            CombinedSpace_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("aabox"), bp::arg("center") )
                , bp::release_gil_policy()
                , "A cartesian space is not periodic, so this just returns the input aabox" );
        
        }
        { //::SireVol::CombinedSpace::getMinimumImage
        
            typedef ::SireMaths::Vector ( ::SireVol::CombinedSpace::*getMinimumImage_function_type)( ::SireMaths::Vector const &,::SireMaths::Vector const & ) const;
            getMinimumImage_function_type getMinimumImage_function_value( &::SireVol::CombinedSpace::getMinimumImage );
            
            CombinedSpace_exposer.def( 
                "getMinimumImage"
                , getMinimumImage_function_value
                , ( bp::arg("point"), bp::arg("center") )
                , bp::release_gil_policy()
                , "A cartesian space is not periodic, so this just returns the input point" );
        
        }
        { //::SireVol::CombinedSpace::getRandomPoint
        
            typedef ::SireMaths::Vector ( ::SireVol::CombinedSpace::*getRandomPoint_function_type)( ::SireMaths::Vector const &,::SireMaths::RanGenerator const & ) const;
            getRandomPoint_function_type getRandomPoint_function_value( &::SireVol::CombinedSpace::getRandomPoint );
            
            CombinedSpace_exposer.def( 
                "getRandomPoint"
                , getRandomPoint_function_value
                , ( bp::arg("center"), bp::arg("generator") )
                , bp::release_gil_policy()
                , "Return a random point within the spaces used in this combined space" );
        
        }
        { //::SireVol::CombinedSpace::isCartesian
        
            typedef bool ( ::SireVol::CombinedSpace::*isCartesian_function_type)(  ) const;
            isCartesian_function_type isCartesian_function_value( &::SireVol::CombinedSpace::isCartesian );
            
            CombinedSpace_exposer.def( 
                "isCartesian"
                , isCartesian_function_value
                , bp::release_gil_policy()
                , "A CombinedSpace space is only cartesian if all of the\nsub-spaces are cartesian" );
        
        }
        { //::SireVol::CombinedSpace::isEmpty
        
            typedef bool ( ::SireVol::CombinedSpace::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireVol::CombinedSpace::isEmpty );
            
            CombinedSpace_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is empty" );
        
        }
        { //::SireVol::CombinedSpace::isPeriodic
        
            typedef bool ( ::SireVol::CombinedSpace::*isPeriodic_function_type)(  ) const;
            isPeriodic_function_type isPeriodic_function_value( &::SireVol::CombinedSpace::isPeriodic );
            
            CombinedSpace_exposer.def( 
                "isPeriodic"
                , isPeriodic_function_value
                , bp::release_gil_policy()
                , "A CombinedSpace is only periodic of all of the contained\nspaces are periodic" );
        
        }
        { //::SireVol::CombinedSpace::minimumDistance
        
            typedef double ( ::SireVol::CombinedSpace::*minimumDistance_function_type)( ::SireVol::AABox const &,::SireVol::AABox const & ) const;
            minimumDistance_function_type minimumDistance_function_value( &::SireVol::CombinedSpace::minimumDistance );
            
            CombinedSpace_exposer.def( 
                "minimumDistance"
                , minimumDistance_function_value
                , ( bp::arg("box0"), bp::arg("box1") )
                , bp::release_gil_policy()
                , "Return the minimum distance between the boxes box0 and box1." );
        
        }
        { //::SireVol::CombinedSpace::minimumDistance
        
            typedef double ( ::SireVol::CombinedSpace::*minimumDistance_function_type)( ::SireVol::CoordGroup const &,::SireVol::CoordGroup const & ) const;
            minimumDistance_function_type minimumDistance_function_value( &::SireVol::CombinedSpace::minimumDistance );
            
            CombinedSpace_exposer.def( 
                "minimumDistance"
                , minimumDistance_function_value
                , ( bp::arg("group0"), bp::arg("group1") )
                , bp::release_gil_policy()
                , "Return the minimum distance between the points in group0 and group1." );
        
        }
        { //::SireVol::CombinedSpace::minimumDistance
        
            typedef double ( ::SireVol::CombinedSpace::*minimumDistance_function_type)( ::SireVol::CoordGroup const & ) const;
            minimumDistance_function_type minimumDistance_function_value( &::SireVol::CombinedSpace::minimumDistance );
            
            CombinedSpace_exposer.def( 
                "minimumDistance"
                , minimumDistance_function_value
                , ( bp::arg("group") )
                , bp::release_gil_policy()
                , "Return the minimum distance between points within the group group." );
        
        }
        { //::SireVol::CombinedSpace::nSpaces
        
            typedef int ( ::SireVol::CombinedSpace::*nSpaces_function_type)(  ) const;
            nSpaces_function_type nSpaces_function_value( &::SireVol::CombinedSpace::nSpaces );
            
            CombinedSpace_exposer.def( 
                "nSpaces"
                , nSpaces_function_value
                , bp::release_gil_policy()
                , "Return the number of spaces in this combined space" );
        
        }
        CombinedSpace_exposer.def( bp::self != bp::self );
        { //::SireVol::CombinedSpace::operator=
        
            typedef ::SireVol::CombinedSpace & ( ::SireVol::CombinedSpace::*assign_function_type)( ::SireVol::CombinedSpace const & ) ;
            assign_function_type assign_function_value( &::SireVol::CombinedSpace::operator= );
            
            CombinedSpace_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        CombinedSpace_exposer.def( bp::self == bp::self );
        { //::SireVol::CombinedSpace::operator[]
        
            typedef ::SireVol::Space const & ( ::SireVol::CombinedSpace::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireVol::CombinedSpace::operator[] );
            
            CombinedSpace_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireVol::CombinedSpace::setVolume
        
            typedef ::SireVol::SpacePtr ( ::SireVol::CombinedSpace::*setVolume_function_type)( ::SireUnits::Dimension::Volume ) const;
            setVolume_function_type setVolume_function_value( &::SireVol::CombinedSpace::setVolume );
            
            CombinedSpace_exposer.def( 
                "setVolume"
                , setVolume_function_value
                , ( bp::arg("volume") )
                , bp::release_gil_policy()
                , "Try to set the volume of this combined space - this will only\nwork if we are really just one space" );
        
        }
        { //::SireVol::CombinedSpace::size
        
            typedef int ( ::SireVol::CombinedSpace::*size_function_type)(  ) ;
            size_function_type size_function_value( &::SireVol::CombinedSpace::size );
            
            CombinedSpace_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "Return the number of spaces in this combined space" );
        
        }
        { //::SireVol::CombinedSpace::toString
        
            typedef ::QString ( ::SireVol::CombinedSpace::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireVol::CombinedSpace::toString );
            
            CombinedSpace_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this space" );
        
        }
        { //::SireVol::CombinedSpace::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::CombinedSpace::typeName );
            
            CombinedSpace_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireVol::CombinedSpace::volume
        
            typedef ::SireUnits::Dimension::Volume ( ::SireVol::CombinedSpace::*volume_function_type)(  ) const;
            volume_function_type volume_function_value( &::SireVol::CombinedSpace::volume );
            
            CombinedSpace_exposer.def( 
                "volume"
                , volume_function_value
                , bp::release_gil_policy()
                , "Returned the combined (summed) volume of all of the spaces" );
        
        }
        CombinedSpace_exposer.staticmethod( "typeName" );
        CombinedSpace_exposer.def( "__copy__", &__copy__);
        CombinedSpace_exposer.def( "__deepcopy__", &__copy__);
        CombinedSpace_exposer.def( "clone", &__copy__);
        CombinedSpace_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::CombinedSpace >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombinedSpace_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::CombinedSpace >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CombinedSpace_exposer.def_pickle(sire_pickle_suite< ::SireVol::CombinedSpace >());
        CombinedSpace_exposer.def( "__str__", &__str__< ::SireVol::CombinedSpace > );
        CombinedSpace_exposer.def( "__repr__", &__str__< ::SireVol::CombinedSpace > );
        CombinedSpace_exposer.def( "__len__", &__len_size< ::SireVol::CombinedSpace > );
    }

}
