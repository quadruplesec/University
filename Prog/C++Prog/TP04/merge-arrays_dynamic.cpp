#include "print_array.h"
#include <iostream>

int* merge_arrays(const int a[], int na, const int b[], int nb) {
  
  int *c = new int[na + nb];

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
  return c;
}

int main(void) {
  const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  print_array(merge_arrays(a, NA, b, NB), NA+NB);
  
  return 0;
}
