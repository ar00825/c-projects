#include <stdio.h>

int main()
{
    int sizeOfNumbers = 0;
    double number = 0;
    double total = 0;
    double minimum = 0;
    double maximum = 0;
    double average = 0;

    printf("\nHow many numbers would you like to enter: ");
    scanf("%d", &sizeOfNumbers);

    double numbers[sizeOfNumbers];

    for (int i = 0; i < sizeOfNumbers; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%lf", &number);
        total += number;
        numbers[i] = number;

        if (i == 0)
        {
            minimum = number;
            maximum = number;
        }
        else
        {
            if (number > maximum) { maximum = number; }
            else if (number < minimum) { minimum = number; }
        }

    }

    printf("\nMaximum: %.2lf \nMinimum: %.2lf \nAverage: %.2lf", 
            maximum, minimum, total / sizeOfNumbers);


    return 0;
}