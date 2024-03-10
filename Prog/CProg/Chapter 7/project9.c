#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, minutes;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    
    do {
        ch = getchar();
    } while (ch == ' ');
    
    switch(toupper(ch)){
        case 'A': break;
        case 'P': hours += 12; break;
    }
    printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);
    return 0;
}
