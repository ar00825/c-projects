#include <stdio.h>

int main(){

    int age = 0;
    int remaining_years_left = 0;
    

    do{
        printf("Enter your age: ");
        scanf("%d", &age);
    }while(age <= 0);

    
    if(age >= 18){
        printf("\nYou are old enough to vote");
    }
    else{
        printf("\nYou are too young to vote!");
        remaining_years_left = 18 - age;
        if(remaining_years_left == 1){
            printf("\nPlease wait for %d year until you are eligible to vote", remaining_years_left);
        }
        else{
            printf("\nPlease wait for %d years until you are eligible to vote", remaining_years_left);
        }
    }

    return 0;
}