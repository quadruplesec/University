#include <stdio.h>

int main(void) {
    int i, n, counter;

    printf("This program prints a table of squares.\nEnter number of entries on the table: ");
    scanf("%d", &n);

    for (i = 1, counter = 1; i <= n; i++, counter++) {
      if (counter % 24 != 0) {
        printf("%10d%10d\n", i, i*i);
      } 
      else {
        printf("Press Enter to continue...\n");
        do {
          getchar();
        } while (getchar() != '\n');
        printf("%10d%10d\n", i, i*i);  
      }
    }

    return 0;
}
