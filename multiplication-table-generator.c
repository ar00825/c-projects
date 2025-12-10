#include <stdio.h>

int main()
{
    int number = 0;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication       Result");
    printf("\n----------------------------");

    for(int i = 1; i <= 12; i++)
    {
        if (i >= 10)
        {
            printf("\n%5d x %d%15d", number, i, number * i);
            printf("\n");
        }
        else
        {
            printf("\n%5d x %d%16d", number, i, number * i);
            printf("\n");   
        }

    }


    return 0;
}