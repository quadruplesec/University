#include <iostream>
#include <cmath>

unsigned long hstr_to_integer(const char hstr[]) {
  unsigned long sum = 0;
  int len = -1, i = 0;

  //compute length:
  while(hstr[i]) {
    ++len;
    ++i;
  }

  for (int i = 0; hstr[i] != '\0'; i++, len--) {
    char a = hstr[i];
    int e; /* Coefficient */
    //numerical case
    if (a <= '9' && a >= '0') {
      e = a - 48;      
    }
    //alphabetical case
    else {
      a = toupper(a);
      e = a - 55;
    } 
    sum += pow(16, len) * e;
  }
  return sum;
}

int main(void) {
  std::cout << hstr_to_integer("FF") << std::endl;
  return 0;
}




