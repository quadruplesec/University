#ifndef CONE_H
#define CONE_H

#include "Solid3D.h"

class Cone : public Solid3D
{
    public:
        Cone(const point &center, const double &radius, const double &height);
        double radius() const;
        double height() const;
        virtual double volume() const;

    private:
        double radius_;
        double height_;
};

Cone::Cone(const point &center, const double &radius, const double &height) :
    Solid3D(center), radius_(radius), height_(height) { }

double Cone::radius() const
{
    return radius_;
}

double Cone::height() const
{
    return height_;
}

double Cone::volume() const
{
    return (M_PI * radius_ * radius_ * height_) / 3.0;
}

#endif