#include <iostream>

int main(void) {
    int h, m, delta;
    std::cin >> h >> m >> delta;

    m += delta;

    while (m >= 60) {
        m -= 60;
        h++;
    }

    if (h >= 24) {
        h -= 24;
    }

    std::cout << h << " " << m << std::endl;

    return 0;
}