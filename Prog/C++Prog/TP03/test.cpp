#include <iostream>
int main(void) {
  struct data1 {
    double x;
    double y;
  };

  struct data2 {
    data1 a;
    data1 b;
    data1 c;
  };
  
  std::cout << sizeof(data1) << " " << sizeof(data2) << std::endl;

  return 0;
}
