#include <stdio.h>

int main()
{
    int size_of_numbers = 0;
    int copyNumber = 0;
    int numbers[] = {7, 9, 20, 35, 65, 99, 121};
    size_of_numbers = sizeof(numbers) / sizeof(numbers[0]);
    int copy_of_numbers[size_of_numbers];
    
    // copy numbers from one array to another
    for (int i = 0; i < size_of_numbers; i++)
    {
        copyNumber = *(numbers + i);
        *(copy_of_numbers + i) = copyNumber;
    }

    for (int i = 0; i < size_of_numbers; i++)
    {
        printf("\nindex[%d]: %d", i, copy_of_numbers[i]);
    }
    
    return 0;
}