#include "print_array.h"
#include <iostream>

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {

  for (int i = 0, j = 0, k = 0; i < na + nb; i++) { //j will be associated with array a, k will be associated with array b
    if (k == nb && j != na) {
      c[i] = a[j];
      j++;
    }
    else if (k != nb && j == na) {
      c[i] = b[k];
      k++;
    }
    
    else if (a[j] <= b[k]) {
      c[i] = a[j];
      j++;
    }
    else {
      c[i] = b[k];
      k++;
    }
  }
}
