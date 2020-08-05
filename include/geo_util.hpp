#ifndef GEO_UTIL
#define GEO_UTIL

#include <bin_packing.hpp>

namespace geo_util 
{
    int dblcmp(double, double);
    bool isConcave(Polygon&);
    double getLength(Polygon&);
    double getWidth(Polygon&); 
    double crossProduct(Point, Point);
    std::vector<Polygon> normalize(std::vector<Polygon>);
    int orientation(Point, Point, Point);
    Polygon rotatePolygon(Polygon, Point, double);
    Polygon translatePolygon(Polygon, Point);
    double linePointDistance(Point, Point, Point);
    double polygonPolygonIntersectionArea(Polygon&, Polygon&);
    Point segmentSegmentIntersectionPoint(Point, Point, Point, Point);
    std::vector<Polygon> rotatePolygons(std::vector<Polygon>&, Point, double);
    std::vector<Polygon> translatePolygons(std::vector<Polygon>, Point);
    bool isItPossibleToPlacePolygon(std::vector<Polygon>&, std::vector<Polygon>, Point);
    bool pointInRectangle(Point, Point, Point);
    void visualize(MultiPolygon, std::string, std::string);
};

#endif