#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number = 0;
    int numbers[20];
    int size_of_numbers = sizeof(numbers) / sizeof(numbers[0]);
    int frequency_counter = 0;
    bool foundDuplicate = 0;

    // ask user for 20 integers and stores them in numbers array
    for (int i = 0; i < size_of_numbers; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &number);
        numbers[i] = number;
    }


    for (int i = 0; i < size_of_numbers; i++)
    {
        foundDuplicate = 0;
        
        // checks if there is a duplicate value
        for (int k = 0; k < i; k++)
        {
            if (numbers[k] == numbers[i])
            {
                foundDuplicate = 1;
                break;
            }
        }

        /*skips iteration of for loop if duplicate is found
        to avoid counting the frequency again */
        if (foundDuplicate) {continue;}
        else
        {   
            // resets frequency counter every iteration
            frequency_counter = 0;
            
            // checks if number appears more than once in array
            // if it exists, frequency counter increments
            for (int j = 0; j < size_of_numbers; j++)
            {
                if (numbers[i] == numbers[j]) { frequency_counter++; }
            }          
        }

        printf("\nFrequency of number %d: %d", numbers[i], frequency_counter);  
    }


    return 0;
}