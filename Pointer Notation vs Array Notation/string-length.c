#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int my_strlen(char *str);

int main()
{
    int size_of_name = 0;
    size_of_name = 50;
    char name[size_of_name];

    printf("\nEnter your full name: ");
    fgets(name, size_of_name, stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("\nString length of fullname is: %d", my_strlen(name));

    return 0;
}

int my_strlen(char *str)
{
    int characters = 0;
    bool nullTerminatorFound = 0;
    char letter;

    while (!nullTerminatorFound)
    {
        letter = *(str);
        if (letter == '\0')
        {
            nullTerminatorFound = 1;
        }
        else
        {
            *(str++);
            characters++;
        }
    }

    return characters;
}