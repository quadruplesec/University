#include "Point.h"

Point::Point()
{
    x_ = 0;
    y_ = 0;
}

Point::Point(int x, int y)
{
    x_ = x;
    y_ = y;
}

bool Point::is_equal(Point p) const
{
    if (x_ == p.x_ && y_ == p.y_)
    {
        return true;
    }

    return false;
}

void Point::show() const
{
    std::cout << "(" << x_ << "," << y_ << ")";
}

double Point::distance(Point p) const
{
    return std::sqrt(pow(p.x_ - x_, 2) + pow(p.y_ - y_, 2));
}

