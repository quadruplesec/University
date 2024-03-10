#include <iostream>

int absValue(int a) {
  if (a >= 0) return a;
  else return -a;
}

int manDistance(int x1, int y1, int x2, int y2) {
  return absValue(x1-x2) + absValue(y1-y2);
}

int main(void) {
  int n, x1, y1, x2, y2, total{0};
  std::cin >> n >> x1 >> y1 >> x2 >> y2;

  n -= 2;
  total += manDistance(x1, y1, x2, y2);

  while (n > 0) {
    x1 = x2;
    y1 = y2;
    std::cin >> x2 >> y2;
    n -= 1;                               
    manDistance(x1, y1, x2, y2);
    total += manDistance(x1, y1, x2, y2);
  }

  std::cout << total << std::endl;

  return 0;
}

