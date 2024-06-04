#include <cmath>
#include <iostream>
using namespace std;

void int_to_str(int n, char str[], int& pos) {
  int len = log10(n) + 1, additions = 0;

  
  while (n > 0) {
  int i = n, order = 0;
    while (i >= 9) {
      i /= 10;
      ++order;
    }
    n -= i * pow(10, order);
    order = 0;
    str[pos++] = '0' + i;
    additions++;
  }
  if (additions != len) {
    str[pos++] = '0';
  }
}

void rle_encode(const char str[], char rle[]) {
  if (str[0] == 0) {
    rle[0] = 0;
  }
  else {
  char current_c = str[0];
  int rle_pos = 0, count = 0;

  for (int i = 0; str[i] != 0; i++) {
    if (current_c == str[i]) {
      ++count;
      continue;
    }

    else {
      int_to_str(count, rle, rle_pos);
      rle[rle_pos++] = current_c;
      count = 1;
      current_c = str[i];
    }
  }

  int_to_str(count, rle, rle_pos);
  rle[rle_pos++] = current_c;
  rle[rle_pos] = 0;
  }
}
