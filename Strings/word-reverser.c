#include <stdio.h>
#include <string.h>

int main()
{
    char fullname[50];
    char fullname_reversed[50];
    int size = sizeof(fullname) / sizeof(fullname[0]);
    char letter = 'a';
    int indexFromZero = 0;

    printf("\nEnter your full name: ");
    fgets(fullname, size, stdin);

    fullname[strcspn(fullname, "\n")] = '\0';

    for (int i = strlen(fullname) - 1; i >= 0; i--)
    {
        letter = fullname[i];
        fullname_reversed[indexFromZero] = letter;
        indexFromZero++;
    }


    printf("\nYour full name in reversed order is: %s", fullname_reversed);


    return 0;
}