#ifndef SUM_H
#define SUM_H

#include "Operation.h"

class Sum : public Operation
{
    public:
        Sum(int op1, int op2);
        int operation() const override;
};

Sum::Sum(int op1, int op2) : Operation(op1, op2) {}

int Sum::operation() const
{
    return Sum::get_op1() + Sum::get_op2();
}

#endif