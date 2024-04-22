#ifndef CYLINDER_H
#define CYLINDER_H

#include "Solid.h"

class Cylinder : public Solid
{
    public:
        Cylinder(const point &c, double radius, double height);
        double radius() const;
        double height() const;
        double area() const override;

    private:
        double radius_;
        double height_;
};

Cylinder::Cylinder(const point &c, double radius, double height) : Solid(c), radius_(radius), height_(height) {}

double Cylinder::radius() const
{
    return radius_;
}

double Cylinder::height() const
{
    return height_;
}

double Cylinder::area() const
{
    return 2 * M_PI * radius_ * (radius_ + height_);
}

#endif
