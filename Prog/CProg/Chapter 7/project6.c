#include <stdio.h>

int main(void) {
  int a;
  short int b;
  long int c;
  float d;
  double e;
  long double f;

  printf("Size of int: %lu\n", sizeof(a));
  printf("Size of short int: %lu\n", sizeof(b));
  printf("Size of long int: %lu\n", sizeof(c)); 
  printf("Size of float: %lu\n", sizeof(d));
  printf("Size of double: %lu\n", sizeof(e));
  printf("Size of long double: %lu\n", sizeof(f));

  return 0;
}
