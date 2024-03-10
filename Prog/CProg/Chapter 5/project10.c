#include <stdio.h>

int main(void) {
    int letter_grade, grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100) {
        letter_grade = -1;
    }
    else if (grade < 0) {
        letter_grade = 0;
    }
    else if (grade >= 90) {
        letter_grade = 1;
    }
    else if (grade >= 80) {
        letter_grade = 2;
    }
    else if (grade >= 70) {
        letter_grade = 3;
    }
    else if (grade >= 60) {
        letter_grade = 4;
    }
    else if (grade >= 0) {
        letter_grade = 5;
    }

    switch(letter_grade) {
        case -1: printf("ERROR!: Invalid grade (greater than 100)\n");
                 break;
        case 0:  printf("ERROR!: Invalid grade (lesser than 0)\n");
                 break;
        case 1:  printf("Letter grade: A\n");
                 break;
        case 2:  printf("Letter grade: B\n");
                 break;
        case 3:  printf("Letter grade: C\n");
                 break;
        case 4:  printf("Letter grade: D\n");
                 break;
        case 5:  printf("Letter grade: F\n");
                 break;
    }

    return 0;
}