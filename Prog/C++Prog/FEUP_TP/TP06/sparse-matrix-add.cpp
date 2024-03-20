#include "smatrix.h"
#include <vector>

void sum(const smatrix &a, const smatrix &b, smatrix &r) {
    size_t i = 0, j = 0;

 while (i < a.size() || j < b.size()) {
        if (j >= b.size()) {
            r.push_back(a[i++]);
            continue;
        }
        if (i >= a.size()) {
            r.push_back(b[j++]);
            continue;
        }
        if (a[i].row < b[j].row) {
            r.push_back(a[i++]);
            continue;
        }
        if (a[i].row > b[j].row) {
            r.push_back(b[j++]);
            continue;
        }
        if (a[i].col < b[j].col) {
            r.push_back(a[i++]);
        }
        else if (a[i].col > b[j].col) {
            r.push_back(b[j++]);
        }
        else {
            sm_entry c = a[i++];
            c.value += b[j++].value;
            if (c.value != 0) {
                r.push_back(c);
            }

        }
    }
}