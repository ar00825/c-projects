#include <stdio.h>

int square(int number);

int cube(int number);


int main()
{
    int number = 0;
    int option = 0;

    do
    {
        printf("\nEnter a number: ");
        scanf("%d", &number);
    }while (number <= 0);

    do
    {
        printf("\nOptions: \n1. Square \n2. Cube\n");
        printf("\nEnter the option # to perform: ");
        scanf("%d", &option);
    }while (option != 1 && option != 2);

    if (option == 1) {printf("\nThe Square of %d is: %d", number, square(number));}
    else {printf("\nThe Cube of %d is: %d", number, cube(number));}

    
    return 0;

}


int square(int number) { return number * number; }

int cube(int number) { return number * number * number; }
