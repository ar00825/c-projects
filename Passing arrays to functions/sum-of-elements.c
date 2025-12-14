#include <stdio.h>

int sum(int numbers[], int size_of_numbers);

int main()
{
    int size_of_numbers = 0;
    int number = 0;
    
    printf("\nHow many numbers would you like to enter: ");
    scanf("%d", &size_of_numbers);
    getchar();

    int numbers[size_of_numbers];

    for (int i = 0; i < size_of_numbers; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &number);
        numbers[i] = number;
    }

    printf("\nThe sum of all numbers is: %d", sum(numbers, size_of_numbers));

    return 0;
}

int sum(int numbers[], int size_of_numbers)
{
    int sum = 0;

    for (int i = 0; i < size_of_numbers; i++) {sum += numbers[i];}

    return sum;
}
