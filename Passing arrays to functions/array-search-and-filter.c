#include <stdio.h>
#include <stdbool.h>

bool findNumber(int numbers[], int size_of_array, int targetNumber);

int findMaximum(int numbers[], int size_of_array);

int findMinimum(int numbers[], int size_of_array);

int findValuesAboveThreshold(int numbers[], int size_of_array, int thresholdValue);

int main()
{
    int size_of_array = 0;
    int number = 0;
    int targetNumber = 0;
    int option = 0;
    bool matchExists = 0;
    int threholdValue = 0;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size_of_array);
    getchar();

    int numbers[size_of_array];

    for (int i = 0; i < size_of_array; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &number);
        numbers[i] = number;
    }

    printf("\nHere are the following options: ");
    printf("\n1. Find number \n2. Find minimum and maximum \n3. Find values above a threshold\n");
    
    do
    {
        printf("\nEnter the option # to perform: ");
        scanf("%d", &option);        
    }while (option < 1  || option > 3);

    switch (option)
    {
        case 1:
            printf("\nEnter a number to search for: ");
            scanf("%d", &targetNumber);
            matchExists = findNumber(numbers, size_of_array, targetNumber);
            if (matchExists == 1) {printf("\nThe number has been found");}
            else {printf("\nThe number has not been found");}
            break;
        case 2:
            printf("\nMaximum: %d", findMaximum(numbers, size_of_array));
            printf("\nMinimum: %d", findMinimum(numbers, size_of_array));
            break;
        case 3:
            printf("\nEnter your threshold value: ");
            scanf("%d", &threholdValue);
            printf("\nThe number of values above %d is: %d", threholdValue, findValuesAboveThreshold(numbers, size_of_array, threholdValue));
            break;
        default:
            break;
    }

    return 0;
}

bool findNumber(int numbers[], int size_of_array, int targetNumber)
{
    bool foundMatch = 0;

    for (int i = 0; i < size_of_array; i++)
    {
        if (numbers[i] == targetNumber) {foundMatch = 1;}
    }

    return foundMatch;
}

int findMaximum(int numbers[], int size_of_array)
{
    int maximum = numbers[0];

    for (int i = 0; i < size_of_array; i++)
    {
        if (numbers[i] > maximum) {maximum = numbers[i];}
    }

    return maximum;
}

int findMinimum(int numbers[], int size_of_array)
{
    int minimum = numbers[0];

    for (int i = 0; i < size_of_array; i++)
    {
        if (numbers[i] < minimum) {minimum = numbers[i];}
    }

    return minimum;
}

int findValuesAboveThreshold(int numbers[], int size_of_array, int thresholdValue)
{
    int valuesAboveThreshold = 0;

    for (int i = 0; i < size_of_array; i++)
    {
        if (numbers[i] > thresholdValue) {valuesAboveThreshold++;}
    }

    return valuesAboveThreshold;
}