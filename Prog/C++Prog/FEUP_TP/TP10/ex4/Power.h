#ifndef POWER_H
#define POWER_H

#include "Operation.h"
#include <cmath>

class Power : public Operation
{
    public:
        Power(int op1, int op2);
        int operation() const override;
};

Power::Power(int op1, int op2) : Operation(op1, op2) {}

int Power::operation() const
{
    return std::pow(Power::get_op1(), Power::get_op2());   
}

#endif