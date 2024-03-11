#include "cdata.h"

int* expand_cdata(const cdata a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += a[i].count;
    }

    int *expanded_array = new int[count];
    int count_up = 0, e = 0;

    while (count_up < count) {        
        for (int i = 0; i < a[e].count; i++) {
            expanded_array[count_up++] = a[e].value; 
        }
        e++;
    }

    return expanded_array;
}
