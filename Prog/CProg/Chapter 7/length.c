#include <stdio.h>

int main(void) {
	char ch;
	int i = 0;
	printf("Enter a message: ");
	ch = getchar();
	do {
		i++;
		ch = getchar();
	} while(ch != '\n');
	
	printf("Your message was %d character(s) long.", i);

	return 0;
}
