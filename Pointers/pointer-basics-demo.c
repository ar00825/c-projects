#include <stdio.h>

int main()
{
    int number = 10;
    int* p = &number;

    printf("\npointer value: %d", number);
    printf("\nMemory address of pointer: %p", p);
    printf("\nMemory address of number: %p", &number);

    return 0; 
}
