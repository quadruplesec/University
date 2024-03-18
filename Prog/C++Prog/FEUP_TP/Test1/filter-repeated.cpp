#include "print_array.h"
#include <iostream>
using namespace std;

int filter_repeated(const int arr[], int size, int out[]) {
    if (size == 1){
        return 0;
    }

    int copied = 0, out_ctr = 0;

    for (int i = 0; i < size; i++) {
        for (int x = 0; x < size; x++) {
            if (x == i) continue;
            if (arr[x] == arr[i]) {
                copied++;
                out[out_ctr++] = arr[i];
                break;
            }
        }
    }

    return copied;
}
