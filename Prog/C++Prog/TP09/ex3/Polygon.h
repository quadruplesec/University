#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>

class Polygon
{
    public:
        Polygon();
        Polygon(std::vector<Point> p);
        bool get_vertex(int index, Point &p) const;
        void add_vertex(int index, Point p);
        void show();
        double perimeter() const;

    private:
        std::vector<Point> vertices;
};

#endif