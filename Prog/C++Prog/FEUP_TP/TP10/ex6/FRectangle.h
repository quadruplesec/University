#ifndef FRECTANGLE_H
#define FRECTANGLE_H

#include "Figure.h"

class FRectangle : public Figure
{
    public:
        FRectangle(double x_center=0, double y_center=0, double width=0, double height=0);
        void draw() const override;

    private:
        double width_;
        double height_;
};

FRectangle::FRectangle(double x_center, double y_center, double width, double height) :
    Figure(x_center, y_center), width_(width), height_(height) {}

void FRectangle::draw() const
{
    std::cout << "R(" << x_center_ << "," << y_center_ << ")(" << width_ << "," << height_ << ")";
}

#endif