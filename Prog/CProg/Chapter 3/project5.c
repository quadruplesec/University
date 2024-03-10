/* This has to be the uglist thing ever... */

#include <stdio.h>

int main(void)
{
    int pos1_1, pos1_2, pos1_3, pos1_4, pos2_1, pos2_2, pos2_3, pos2_4, pos3_1, pos3_2, pos3_3, pos3_4, pos4_1, pos4_2, pos4_3, pos4_4;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d", &pos1_1, &pos1_2, &pos1_3, &pos1_4);
    scanf(" %d %d %d %d", &pos2_1, &pos2_2, &pos2_3, &pos2_4);
    scanf(" %d %d %d %d", &pos3_1, &pos3_2, &pos3_3, &pos3_4);
    scanf(" %d %d %d %d", &pos4_1, &pos4_2, &pos4_3, &pos4_4);

    int row_sum1 = pos1_1 + pos1_2 + pos1_3 + pos1_4;
    int row_sum2 = pos2_1 + pos2_2 + pos2_3 + pos2_4;
    int row_sum3 = pos3_1 + pos3_2 + pos3_3 + pos3_4;
    int row_sum4 = pos4_1 + pos4_2 + pos4_3 + pos4_4;

    int col_sum1 = pos1_1 + pos2_1 + pos3_1 + pos4_1;
    int col_sum2 = pos1_2 + pos2_2 + pos3_2 + pos4_2;
    int col_sum3 = pos1_3 + pos2_3 + pos3_3 + pos4_3;
    int col_sum4 = pos1_4 + pos2_4 + pos3_4 + pos4_4;

    int diag_sum1 = pos1_1 + pos2_2 + pos3_3 + pos4_4;
    int diag_sum2 = pos1_4 + pos2_3 + pos3_2 + pos4_1;

    printf("%2d %2d %2d %2d\n", pos1_1, pos1_2, pos1_3, pos1_4);
    printf("%2d %2d %2d %2d\n", pos2_1, pos2_2, pos2_3, pos2_4);
    printf("%2d %2d %2d %2d\n", pos3_1, pos3_2, pos3_3, pos3_4);
    printf("%2d %2d %2d %2d\n", pos4_1, pos4_2, pos4_3, pos4_4);

    printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3, col_sum4);
    printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);

    return 0;
}
