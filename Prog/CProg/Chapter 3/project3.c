#include <stdio.h>

int main(void)
{
    int gs1, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &pub_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit: %d\n", gs1, group_id, pub_code, item_num, check_digit);

    return 0; 
}