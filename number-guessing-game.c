#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

    srand(time(NULL));
    int random_number = 0;
    int guess = 0;

    random_number = (rand() % 20) + 1;

    do
    {   
        printf("\nGuess the secret number: ");
        scanf("%d", &guess);

        if (guess > random_number) { printf("\nToo high!"); }
        else if (guess < random_number) { printf("\nToo low!"); }
        else { printf("\nCongrats! You have guessed the secret number"); }

    }while(guess != random_number);


    return 0;
}