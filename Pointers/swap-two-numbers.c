#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
    int num1 = 7;
    int num2 = 9;

    printf("\nBefore:\nnum1: %d  num2: %d", num1, num2);

    swap(&num1, &num2);

    printf("\nAfter:\nnum1: %d  num2: %d", num1, num2);

    return 0;
}

void swap(int *num1, int *num2)
{
    // using 2 variables to swap
    int temp1 = 0;
    int temp2 = 0;

    temp1 = *num2; 
    temp2 = *num1;
    *num1 = temp1; 
    *num2 = temp2;

/*  using only 1 variable (same but more refined)

    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
*/
}
