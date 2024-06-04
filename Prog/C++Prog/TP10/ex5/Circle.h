#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

class Circle : public Shape
{
    public:
        Circle(const point &center, double radius);
        double area() const override;
        double perimeter() const override;
        bool contains(const point &p) const override;

    private:
        double radius_;
};

Circle::Circle(const point &center, double radius) : Shape(center), radius_(radius) {}

double Circle::area() const
{
    return M_PI * radius_ * radius_;
}

double Circle::perimeter() const
{
    return 2 * M_PI * radius_;
}

bool Circle::contains(const point &p) const
{
    point center = Circle::get_center();
    double distance = std::sqrt(std::pow(center.x - p.x, 2) + std::pow(center.y - p.y, 2));
    return distance <= radius_;
}

#endif