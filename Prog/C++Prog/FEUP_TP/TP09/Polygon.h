#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>

class Polygon
{
    public:
        Polygon();                                  //default constructor
        Polygon(std::vector<Point> vertices);       //constructor which takes a list of vertices
        Point get_vertex(int index) const;          //returns the specified vertex
        void add_vertex(int index);                 //inserts vertex in the specified position
        void show();                                //output list of all vertices (NO ENDLINE)

    private:
        std::vector<Point> vertices_;
};

#endif