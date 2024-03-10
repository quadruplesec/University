#include <stdio.h>

int main(void) {
    int digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    printf("You entered the number ");

    /*special clause for numbers 0 and 11 to 19*/
    if (digit1 == 0 && digit2 == 0) {
        printf("zero.\n");
        return 0;
    }
    if (digit1 == 1) {
        switch (digit2) {
            case 1: printf("eleven.\n");
                    break;
            case 2: printf("twelve.\n");
                    break;
            case 3: printf("thirteen.\n");
                    break;
            case 4: printf("fourteen.\n");
                    break;
            case 5: printf("fifteen.\n");
                    break;
            case 6: printf("sixteen.\n");
                    break;
            case 7: printf("seventeen.\n");
                    break;
            case 8: printf("eighteen.\n");
                    break;
            case 9: printf("nineteen.\n");
                    break;
        }
        return 0;
    }

    switch (digit1) {
        case 2: printf("twenty-");
                break;
        case 3: printf("thirty-");
                break;
        case 4: printf("forty-");
                break;
        case 5: printf("fifty-");
                break;
        case 6: printf("sixty-");
                break;
        case 7: printf("seventy-");
                break;
        case 8: printf("eighty-");
                break;
        case 9: printf("ninety-");
                break;
    }

    switch (digit2) {
        case 1: printf("one.\n");
                break;
        case 2: printf("two.\n");
                break;
        case 3: printf("three.\n");
                break;
        case 4: printf("four.\n");
                break;
        case 5: printf("five.\n");
                break;
        case 6: printf("six.\n");
                break;
        case 7: printf("seven.\n");
                break;
        case 8: printf("eight.\n");
                break;
        case 9: printf("nine.\n");
                break;
    }

    return 0;
}