#include <iostream>

int main(void) {
    char c;
    std::cin >> c;
    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')) {
        std::cout << "LETTER";
    }
    else if ((c >= '0' && c <= '9')) {
        std::cout << "DIGIT";
    }
    else {
        std::cout << "OTHER";
    }

    return 0;
}