#include <stdio.h>

void increment_number(int *number);

int main()
{
    int number = 0;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    increment_number(&number);

    printf("\nValue of number: %d", number);

    return 0;
}

void increment_number(int *number)
{
    *number += 1;
}
