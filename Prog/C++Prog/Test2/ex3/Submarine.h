#ifndef FLOATABLE_H
#define FLOATABLE_H

#include "Floatable.h"
#include <string>
#define GRAVITY 9.81
#define DENSITY 1025

class Submarine : public Floatable
{
    public:
        Submarine(int id, const double mass, std::string captain);
        std::string captain() const;
        double buoyancy() const override;

    private:
        std::string m_captain;
};

Submarine::Submarine(int id, const double mass, std::string captain):
    Floatable(id, mass), m_captain(captain) { }

std::string Submarine::captain() const
{
    return m_captain;
}

double Submarine::buoyancy() const
{
    return this->mass() * GRAVITY * DENSITY;
}

#endif