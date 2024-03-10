#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[]) {
    int count = 0, x = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i+1]) {
            b[x++] = a[i];
            count++;
        }
    }
    b[x] = a[n-1];
    count++;

    return count;
}

