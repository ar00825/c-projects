#include <stdio.h>

void addFiveToEveryNumber(int numbers[], int size_of_numbers);

int main()
{
    int size_of_numbers = 0;
    int number = 0;

    printf("\nEnter how many numbers you want to store: ");
    scanf("%d", &size_of_numbers);
    getchar();

    int numbers[size_of_numbers];

    for (int i = 0; i < size_of_numbers; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &number);
        numbers[i] = number;
    }

    addFiveToEveryNumber(numbers, size_of_numbers);

    printf("\nModified array: ");
    for (int i = 0; i < size_of_numbers; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}

void addFiveToEveryNumber(int numbers[], int size_of_numbers)
{
    for (int i = 0; i < size_of_numbers; i++) {numbers[i] += 5;}
}
