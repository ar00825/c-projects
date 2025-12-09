#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 0;
    double height = 0;
    bool ticket = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nEnter your height (in cm): ");
    scanf("%lf", &height);
    
    printf("\nDo you have a ticket? (1 for yes, 0 for no): ");
    scanf("%d", &ticket);

    if(age >= 12 && height >= 140 && ticket == 1)
    {
        printf("\nWelcome to the Dragon Ride!");
    }
    else if (age < 12 && height >= 140 && ticket == 1)
    {
        printf("\nYou are not old enough for this ride");
    }
    else if (age >= 12 && height < 140 && ticket == 1)
    {
        printf("\nYou are not tall enough for this ride");
    }
    else if (age >= 12 && height >= 140 && ticket == 0)
    {
        printf("\nYou do not have a ticket for this ride");
    }
    else{
        printf("\nSorry, you don't meet any of the requirements for this ride");
    }

    return 0;
}