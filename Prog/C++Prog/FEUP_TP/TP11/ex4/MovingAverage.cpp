#include "MovingAverage.h"

MovingAverage::MovingAverage(std::size_t n) : n_(n) { }

void MovingAverage::update(double value)
{
    if (values_.size() == n_)
    {
        values_.pop_front();
    }

    values_.push_back(value);
}

double MovingAverage::get() const
{
    double sum = 0;
    for (double i : values_)
    {
        sum += i;
    }

    return sum / values_.size();
}
      