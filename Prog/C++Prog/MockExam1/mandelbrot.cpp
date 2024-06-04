#include "complex.h"

complex add(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    return c;
}

complex mul(complex a, complex b) {
    complex c;
    c.real = a.real*b.real - a.img*b.img;
    c.img = a.real*b.img + b.real*a.img;

    return c;
}

void mandel(complex c, int n, complex z[]) {
    complex current, previous;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            current = {0, 0};
        }
        else {
            previous = current;
            current = add(mul(previous, previous), c);
        }

        z[i] = current;
    }
}