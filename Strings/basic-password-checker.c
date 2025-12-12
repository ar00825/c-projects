#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char password[21];
    char re_enter_password[21];
    int size = sizeof(password) / sizeof(password[0]);
    const int MINIMUM_LENGTH = 6;
    const int MAXIMUM_LENGTH = 20;
    int length_of_password = 0;
    bool contains_digit = 0;
    
    do
    {
        printf("\nEnter your password: ");
        fgets(password, size, stdin);

        if (strchr(password, '\n') == NULL)
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            length_of_password = 25;
            printf("\nPassword must be no more than 20 characters");
        }
        else
        {
            length_of_password = strlen(password) - 1;
            for (int i = 0; i < strlen(password); i++)
            {
                if (password[i] >= '0' && password[i] <= '9') 
                {
                    contains_digit = 1;
                    break;
                }
            }

            if (length_of_password < MINIMUM_LENGTH && contains_digit != 1)
            {
                printf("\nPassword must be at least 6 characters");
                printf("\nPassword does not contain a single digit! Try again\n");
            }
            else if (length_of_password < MINIMUM_LENGTH) {printf("\nPassword must be at least 6 characters");}
            else if (contains_digit != 1) {printf("\nPassword does not contain a single digit! Try again\n");}
        }
    }while(length_of_password < MINIMUM_LENGTH || length_of_password > MAXIMUM_LENGTH || contains_digit != 1);


    do
    {
        printf("\nRe-enter your password to confirm: ");
        fgets(re_enter_password, size, stdin);       
    }while (strcmp(re_enter_password, password) != 0);

    printf("\nBoth passwords match! Access Granted");

    return 0;
}