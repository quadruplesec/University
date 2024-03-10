/**
* Explicar que variáveis são como "caixas" onde se guardam coisas e que começam vazias.
* Que há caixas para guitarras, para violinos, enquanto em C++ há variáveis para inteiros, strings e booleanos
* Mandar refazer o programa para perguntar a idade, usando uma variável de inteiro
*
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
  string variable;
	cout << "Hey there, what's your name?" << endl;
	getline(cin, variable);

	cout << "Hello " << variable << endl;
	return 0;
}

