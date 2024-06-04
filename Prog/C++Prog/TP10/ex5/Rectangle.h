#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <cmath>

class Rectangle : public Shape
{
    public:
        Rectangle(const point &center, double width, double height);
        double area() const override;
        double perimeter() const override;
        bool contains(const point &p) const override;

    private:
        double width_;
        double height_;
};

Rectangle::Rectangle(const point &center, double width, double height) : Shape(center), width_(width), height_(height) {}

double Rectangle::area() const
{
    return width_ * height_;
}

double Rectangle::perimeter() const
{
    return width_ * 2 + height_ * 2;   
}

bool Rectangle::contains(const point &p) const
{
    point center = Rectangle::get_center();
    point c1 = {center.x - width_/2, center.y + height_/2};
    point c2 = {center.x + width_/2, center.y + height_/2};
    point c3 = {center.x - width_/2, center.y - height_/2};
    point c4 = {center.x + width_/2, center.y - height_/2}; //create a bounding box to make it easier

    if (p.x >= c1.x && p.x >= c3.x && p.x <= c2.x && p.x <= c4.x)   //check x bound
    {
        if (p.y <= c1.y && p.y <= c2.y && p.y >= c3.y && p.y >= c4.y)
        {
            return true;
        }
    }

    return false;
}

#endif