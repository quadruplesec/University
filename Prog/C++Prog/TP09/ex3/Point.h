#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point
{
    public:
        Point();
        Point(int x, int y);
        bool is_equal(Point p) const;
        void show() const;
        double distance(Point p) const;

    private:
        int x_, y_;
};

#endif