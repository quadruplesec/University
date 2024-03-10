#include <iostream>

using namespace std;

int main() {
    // conversão entre int e char
    char c = 'a';
    int i = 65;

    cout << "char: " << c << ", int: " << (int) c << endl;
    cout << "int: " << i << ", char: " << (char) i << endl << endl;

    // exemplo de overflow de inteiros de 32 bits
    int a1 = 10000000, b1 = 10000000;    
    cout << "a1 + b1 = " <<  a1 + b1 << endl; // não há overflow
    cout << "a1 * b1 = " << a1 * b1 << endl << endl; // há overflow

    // mesmo exemplo para inteiros de 64 bits
    long long int a2 = 10000000, b2 = 10000000;
    cout << "a2 + b2 = " <<  a2 + b2 << endl; // não há overflow
    cout << "a2 * b2 = " << a2 * b2 << endl << endl;  // não há overflow

    // representação interna de tipos booleanos
    cout << true << endl;
    cout << false << endl;

    return 0;
}

