// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GridInfo.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/multifloat.h"

#include "SireMaths/multiint.h"

#include "SireMaths/vector.h"

#include "SireStream/datastream.h"

#include "gridinfo.h"

#include <QDebug>

#include "gridinfo.h"

SireVol::GridInfo __copy__(const SireVol::GridInfo &other){ return SireVol::GridInfo(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_GridInfo_class(){

    { //::SireVol::GridInfo
        typedef bp::class_< SireVol::GridInfo > GridInfo_exposer_t;
        GridInfo_exposer_t GridInfo_exposer = GridInfo_exposer_t( "GridInfo", "This is a simple class that describes a 3D regular grid\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope GridInfo_scope( GridInfo_exposer );
        GridInfo_exposer.def( bp::init< SireVol::AABox const &, SireUnits::Dimension::Length >(( bp::arg("dimensions"), bp::arg("spacing") ), "Construct a grid of specified dimensions and spacing") );
        GridInfo_exposer.def( bp::init< SireVol::GridInfo const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireVol::GridInfo::arrayToGridIndex
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*arrayToGridIndex_function_type)( int ) const;
            arrayToGridIndex_function_type arrayToGridIndex_function_value( &::SireVol::GridInfo::arrayToGridIndex );
            
            GridInfo_exposer.def( 
                "arrayToGridIndex"
                , arrayToGridIndex_function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireVol::GridInfo::at
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireVol::GridInfo::at );
            
            GridInfo_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireVol::GridInfo::at
        
            typedef int ( ::SireVol::GridInfo::*at_function_type)( ::SireVol::GridIndex const & ) const;
            at_function_type at_function_value( &::SireVol::GridInfo::at );
            
            GridInfo_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("idx") )
                , "" );
        
        }
        { //::SireVol::GridInfo::at
        
            typedef int ( ::SireVol::GridInfo::*at_function_type)( int,int,int ) const;
            at_function_type at_function_value( &::SireVol::GridInfo::at );
            
            GridInfo_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("k") )
                , "" );
        
        }
        { //::SireVol::GridInfo::at
        
            typedef int ( ::SireVol::GridInfo::*at_function_type)( ::SireMaths::Vector const & ) const;
            at_function_type at_function_value( &::SireVol::GridInfo::at );
            
            GridInfo_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("point") )
                , "" );
        
        }
        { //::SireVol::GridInfo::box
        
            typedef ::SireVol::AABox ( ::SireVol::GridInfo::*box_function_type)( int ) const;
            box_function_type box_function_value( &::SireVol::GridInfo::box );
            
            GridInfo_exposer.def( 
                "box"
                , box_function_value
                , ( bp::arg("i") )
                , "Return the AABox that encompasses the grid box at point i. This\nreturns an empty box if there is no such point in the grid" );
        
        }
        { //::SireVol::GridInfo::box
        
            typedef ::SireVol::AABox ( ::SireVol::GridInfo::*box_function_type)( ::SireVol::GridIndex const & ) const;
            box_function_type box_function_value( &::SireVol::GridInfo::box );
            
            GridInfo_exposer.def( 
                "box"
                , box_function_value
                , ( bp::arg("idx") )
                , "Return the AABox that encompasses the grid box at point idx.\nThis returns an empty box if the point is not in the grid" );
        
        }
        { //::SireVol::GridInfo::box
        
            typedef ::SireVol::AABox ( ::SireVol::GridInfo::*box_function_type)( ::SireMaths::Vector const & ) const;
            box_function_type box_function_value( &::SireVol::GridInfo::box );
            
            GridInfo_exposer.def( 
                "box"
                , box_function_value
                , ( bp::arg("point") )
                , "Return the AABox that encompasses the grid box that contains the\npoint p. Note that returns a null AABox if the point is not in the grid" );
        
        }
        { //::SireVol::GridInfo::closestIndexTo
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*closestIndexTo_function_type)( ::SireMaths::Vector const & ) const;
            closestIndexTo_function_type closestIndexTo_function_value( &::SireVol::GridInfo::closestIndexTo );
            
            GridInfo_exposer.def( 
                "closestIndexTo"
                , closestIndexTo_function_value
                , ( bp::arg("point") )
                , "Return the grid index that is closest to the point point. Note that\nif point lies outside the grid, then the closest grid index will\nstill be returned (it may just lie a long way from the point)" );
        
        }
        { //::SireVol::GridInfo::contains
        
            typedef bool ( ::SireVol::GridInfo::*contains_function_type)( ::SireMaths::Vector const & ) const;
            contains_function_type contains_function_value( &::SireVol::GridInfo::contains );
            
            GridInfo_exposer.def( 
                "contains"
                , contains_function_value
                , ( bp::arg("point") )
                , "Return whether or not this grid contains the point point" );
        
        }
        { //::SireVol::GridInfo::count
        
            typedef int ( ::SireVol::GridInfo::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireVol::GridInfo::count );
            
            GridInfo_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::dimX
        
            typedef ::qint32 ( ::SireVol::GridInfo::*dimX_function_type)(  ) const;
            dimX_function_type dimX_function_value( &::SireVol::GridInfo::dimX );
            
            GridInfo_exposer.def( 
                "dimX"
                , dimX_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::dimY
        
            typedef ::qint32 ( ::SireVol::GridInfo::*dimY_function_type)(  ) const;
            dimY_function_type dimY_function_value( &::SireVol::GridInfo::dimY );
            
            GridInfo_exposer.def( 
                "dimY"
                , dimY_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::dimZ
        
            typedef ::qint32 ( ::SireVol::GridInfo::*dimZ_function_type)(  ) const;
            dimZ_function_type dimZ_function_value( &::SireVol::GridInfo::dimZ );
            
            GridInfo_exposer.def( 
                "dimZ"
                , dimZ_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::dimensions
        
            typedef ::SireVol::AABox ( ::SireVol::GridInfo::*dimensions_function_type)(  ) const;
            dimensions_function_type dimensions_function_value( &::SireVol::GridInfo::dimensions );
            
            GridInfo_exposer.def( 
                "dimensions"
                , dimensions_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::getitem
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*getitem_function_type)( int ) const;
            getitem_function_type getitem_function_value( &::SireVol::GridInfo::getitem );
            
            GridInfo_exposer.def( 
                "getitem"
                , getitem_function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireVol::GridInfo::gridToArrayIndex
        
            typedef int ( ::SireVol::GridInfo::*gridToArrayIndex_function_type)( int,int,int ) const;
            gridToArrayIndex_function_type gridToArrayIndex_function_value( &::SireVol::GridInfo::gridToArrayIndex );
            
            GridInfo_exposer.def( 
                "gridToArrayIndex"
                , gridToArrayIndex_function_value
                , ( bp::arg("i"), bp::arg("j"), bp::arg("k") )
                , "" );
        
        }
        { //::SireVol::GridInfo::gridToArrayIndex
        
            typedef int ( ::SireVol::GridInfo::*gridToArrayIndex_function_type)( ::SireVol::GridIndex const & ) const;
            gridToArrayIndex_function_type gridToArrayIndex_function_value( &::SireVol::GridInfo::gridToArrayIndex );
            
            GridInfo_exposer.def( 
                "gridToArrayIndex"
                , gridToArrayIndex_function_value
                , ( bp::arg("idx") )
                , "" );
        
        }
        { //::SireVol::GridInfo::indexOf
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*indexOf_function_type)( int,::SireVol::GridInfo const & ) const;
            indexOf_function_type indexOf_function_value( &::SireVol::GridInfo::indexOf );
            
            GridInfo_exposer.def( 
                "indexOf"
                , indexOf_function_value
                , ( bp::arg("i"), bp::arg("grid") )
                , "Return the index in grid grid of point i in this grid. This returns\na null index if this index does not exist in either grid. Note that this\nreturns the index of the closest grid point if the grids do not exactly\nline up" );
        
        }
        { //::SireVol::GridInfo::indexOf
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*indexOf_function_type)( ::SireVol::GridIndex const &,::SireVol::GridInfo const & ) const;
            indexOf_function_type indexOf_function_value( &::SireVol::GridInfo::indexOf );
            
            GridInfo_exposer.def( 
                "indexOf"
                , indexOf_function_value
                , ( bp::arg("idx"), bp::arg("grid") )
                , "Return the index in grid grid of point idx in this grid. This returns\na null index if this index does not exist in either grid. Note that this\nreturns the index of the closest grid point if the grids do not exactly\nline up" );
        
        }
        { //::SireVol::GridInfo::isEmpty
        
            typedef bool ( ::SireVol::GridInfo::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireVol::GridInfo::isEmpty );
            
            GridInfo_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::nPoints
        
            typedef int ( ::SireVol::GridInfo::*nPoints_function_type)(  ) const;
            nPoints_function_type nPoints_function_value( &::SireVol::GridInfo::nPoints );
            
            GridInfo_exposer.def( 
                "nPoints"
                , nPoints_function_value
                , "" );
        
        }
        GridInfo_exposer.def( bp::self != bp::self );
        { //::SireVol::GridInfo::operator=
        
            typedef ::SireVol::GridInfo & ( ::SireVol::GridInfo::*assign_function_type)( ::SireVol::GridInfo const & ) ;
            assign_function_type assign_function_value( &::SireVol::GridInfo::operator= );
            
            GridInfo_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GridInfo_exposer.def( bp::self == bp::self );
        { //::SireVol::GridInfo::operator[]
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireVol::GridInfo::operator[] );
            
            GridInfo_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );
        
        }
        { //::SireVol::GridInfo::operator[]
        
            typedef int ( ::SireVol::GridInfo::*__getitem___function_type)( ::SireVol::GridIndex const & ) const;
            __getitem___function_type __getitem___function_value( &::SireVol::GridInfo::operator[] );
            
            GridInfo_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idx") )
                , "" );
        
        }
        { //::SireVol::GridInfo::operator[]
        
            typedef int ( ::SireVol::GridInfo::*__getitem___function_type)( ::SireMaths::Vector const & ) const;
            __getitem___function_type __getitem___function_value( &::SireVol::GridInfo::operator[] );
            
            GridInfo_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("point") )
                , "" );
        
        }
        { //::SireVol::GridInfo::point
        
            typedef ::SireMaths::Vector ( ::SireVol::GridInfo::*point_function_type)( int ) const;
            point_function_type point_function_value( &::SireVol::GridInfo::point );
            
            GridInfo_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("i") )
                , "Return the point at the bottom, left, back (lowest i, j, k indicies) of the\nith box. This returns a zero vector if the point is invalid." );
        
        }
        { //::SireVol::GridInfo::point
        
            typedef ::SireMaths::Vector ( ::SireVol::GridInfo::*point_function_type)( ::SireVol::GridIndex const & ) const;
            point_function_type point_function_value( &::SireVol::GridInfo::point );
            
            GridInfo_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("idx") )
                , "Return the point at the bottom, left, back (lowest i, j, k indicies) of the\nbox at grid index idx. This returns a zero vector if the point is invalid." );
        
        }
        { //::SireVol::GridInfo::point
        
            typedef ::SireMaths::Vector ( ::SireVol::GridInfo::*point_function_type)( ::SireMaths::Vector const & ) const;
            point_function_type point_function_value( &::SireVol::GridInfo::point );
            
            GridInfo_exposer.def( 
                "point"
                , point_function_value
                , ( bp::arg("point") )
                , "Return the point at the bottom, left, back (lowest i, j, k indicies) of the\nbox containing the point point. This returns a zero vector if the point is invalid." );
        
        }
        { //::SireVol::GridInfo::pointToArrayIndex
        
            typedef int ( ::SireVol::GridInfo::*pointToArrayIndex_function_type)( ::SireMaths::Vector const & ) const;
            pointToArrayIndex_function_type pointToArrayIndex_function_value( &::SireVol::GridInfo::pointToArrayIndex );
            
            GridInfo_exposer.def( 
                "pointToArrayIndex"
                , pointToArrayIndex_function_value
                , ( bp::arg("point") )
                , "Return the array index of the grid box that contains the point point.\nNote that this returns -1 if the point is not in the grid" );
        
        }
        { //::SireVol::GridInfo::pointToGridCorners
        
            typedef void ( ::SireVol::GridInfo::*pointToGridCorners_function_type)( ::SireMaths::Vector const &,::QVector< int > & ) const;
            pointToGridCorners_function_type pointToGridCorners_function_value( &::SireVol::GridInfo::pointToGridCorners );
            
            GridInfo_exposer.def( 
                "pointToGridCorners"
                , pointToGridCorners_function_value
                , ( bp::arg("point"), bp::arg("indicies") )
                , "Return array indicies of the eight grid points that are on the corners of the\nbox that contains the point point. This returns eight -1 values if the\npoint does not lie in the grid" );
        
        }
        { //::SireVol::GridInfo::pointToGridCorners
        
            typedef void ( ::SireVol::GridInfo::*pointToGridCorners_function_type)( ::SireMaths::Vector const &,::QVector< int > &,::QVector< float > & ) const;
            pointToGridCorners_function_type pointToGridCorners_function_value( &::SireVol::GridInfo::pointToGridCorners );
            
            GridInfo_exposer.def( 
                "pointToGridCorners"
                , pointToGridCorners_function_value
                , ( bp::arg("point"), bp::arg("indicies"), bp::arg("weights") )
                , "Return array indicies of the eight grid points that are on the corners of the\nbox that contains the point point. This returns eight -1 values if the\npoint does not lie in the grid. This also returns the weights of the eight\npoints, using tri-linear interpolation based on the distance between the\npoint and each corner of the box" );
        
        }
        { //::SireVol::GridInfo::pointToGridCorners
        
            typedef int ( ::SireVol::GridInfo::*pointToGridCorners_function_type)( ::SireMaths::MultiFloat const &,::SireMaths::MultiFloat const &,::SireMaths::MultiFloat const &,::QVector< SireMaths::MultiInt > & ) const;
            pointToGridCorners_function_type pointToGridCorners_function_value( &::SireVol::GridInfo::pointToGridCorners );
            
            GridInfo_exposer.def( 
                "pointToGridCorners"
                , pointToGridCorners_function_value
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("indicies") )
                , "Return array indicies of the eight grid points that are on the corners of the\nbox that contains the point point. This returns eight -1 values if the\npoint does not lie in the grid. The return value is the number of points\nthat are in the box" );
        
        }
        { //::SireVol::GridInfo::pointToGridCorners
        
            typedef int ( ::SireVol::GridInfo::*pointToGridCorners_function_type)( ::SireMaths::MultiFloat const &,::SireMaths::MultiFloat const &,::SireMaths::MultiFloat const &,::QVector< SireMaths::MultiInt > &,::QVector< SireMaths::MultiFloat > & ) const;
            pointToGridCorners_function_type pointToGridCorners_function_value( &::SireVol::GridInfo::pointToGridCorners );
            
            GridInfo_exposer.def( 
                "pointToGridCorners"
                , pointToGridCorners_function_value
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("indicies"), bp::arg("weights") )
                , "Return array indicies of the eight grid points that are on the corners of the\nbox that contains the point point. This returns eight -1 values if the\npoint does not lie in the grid. This also returns the weights of the eight\npoints, using tri-linear interpolation based on the distance between the\npoint and each corner of the box" );
        
        }
        { //::SireVol::GridInfo::pointToGridIndex
        
            typedef ::SireVol::GridIndex ( ::SireVol::GridInfo::*pointToGridIndex_function_type)( ::SireMaths::Vector const & ) const;
            pointToGridIndex_function_type pointToGridIndex_function_value( &::SireVol::GridInfo::pointToGridIndex );
            
            GridInfo_exposer.def( 
                "pointToGridIndex"
                , pointToGridIndex_function_value
                , ( bp::arg("point") )
                , "Return the index of the grid box that contains the point point. Note\nthat this returns a null index if the point is not in the grid" );
        
        }
        { //::SireVol::GridInfo::redimension
        
            typedef ::QVector< float > ( ::SireVol::GridInfo::*redimension_function_type)( ::QVector< float > const &,::SireVol::GridInfo const & ) const;
            redimension_function_type redimension_function_value( &::SireVol::GridInfo::redimension );
            
            GridInfo_exposer.def( 
                "redimension"
                , redimension_function_value
                , ( bp::arg("values"), bp::arg("new_grid") )
                , "Return the values values that map to this grid, redimensioned to map to\nthe grid new_grid" );
        
        }
        { //::SireVol::GridInfo::size
        
            typedef int ( ::SireVol::GridInfo::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireVol::GridInfo::size );
            
            GridInfo_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::spacing
        
            typedef ::SireUnits::Dimension::Length ( ::SireVol::GridInfo::*spacing_function_type)(  ) const;
            spacing_function_type spacing_function_value( &::SireVol::GridInfo::spacing );
            
            GridInfo_exposer.def( 
                "spacing"
                , spacing_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::toString
        
            typedef ::QString ( ::SireVol::GridInfo::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireVol::GridInfo::toString );
            
            GridInfo_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireVol::GridInfo::typeName );
            
            GridInfo_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireVol::GridInfo::what
        
            typedef char const * ( ::SireVol::GridInfo::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireVol::GridInfo::what );
            
            GridInfo_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        GridInfo_exposer.staticmethod( "typeName" );
        GridInfo_exposer.def( "__copy__", &__copy__);
        GridInfo_exposer.def( "__deepcopy__", &__copy__);
        GridInfo_exposer.def( "clone", &__copy__);
        GridInfo_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireVol::GridInfo >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridInfo_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireVol::GridInfo >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GridInfo_exposer.def( "__getstate_manages_dict__", true);
        GridInfo_exposer.def( "__safe_for_unpickling__", true);
        GridInfo_exposer.def( "__setstate__", &__setstate__base64< ::SireVol::GridInfo > );
        GridInfo_exposer.def( "__getstate__", &__getstate__base64< ::SireVol::GridInfo > );
        GridInfo_exposer.def( "__str__", &__str__< ::SireVol::GridInfo > );
        GridInfo_exposer.def( "__repr__", &__str__< ::SireVol::GridInfo > );
        GridInfo_exposer.def( "__len__", &__len_size< ::SireVol::GridInfo > );
        GridInfo_exposer.def( "__getitem__", &::SireVol::GridInfo::getitem );
    }

}
