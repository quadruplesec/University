#include "Airport.h"
#include <iostream>

Airport::Airport(const std::string& name, const std::string& city) : name_(name), city_(city) { }

std::string Airport::name() const
{
    return name_;
}

std::string Airport::city() const
{
    return city_;
}

void Airport::land(const airplane& ap)
{
    airplanes_.push_back(ap);
}

void Airport::takeoff(const std::string& id)
{
    for (auto itr = airplanes_.begin(); itr != airplanes_.end(); itr++)
    {
        if (itr->id == id)
        {
            airplanes_.erase(itr);
            break;
        }
    }
}

int Airport::count_airplanes(const std::string& airline) const
{
    int count = 0;

    for (auto itr = airplanes_.begin(); itr != airplanes_.end(); itr++)
    {
        if (itr->airline == airline)
        {
            count++;
        }
    }

    return count;
}