#include "alist.h"

void append(alist* a, const alist* b) {
    if (b->size == 0) {
        return;
    }

    int new_len = a->size + b->size, count = 0;
    int *c = new int[new_len];

    for (int i = 0; i < a->size; i++) {
        c[count++] = a->elements[i];
    }

    for (int i = 0; i < b->size; i++) {
        c[count++] = b->elements[i];
    }
    delete[] a->elements;
    a->elements = c;
    a->size = new_len;
}
