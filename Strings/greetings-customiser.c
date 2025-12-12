#include <stdio.h>
#include <string.h>

int main()
{   
    char fullName[50];

    do
    {
        printf("\nEnter your full name: ");
        fgets(fullName, sizeof(fullName) / sizeof(fullName[0]), stdin);
    }while (fullName[0] == '\n');
    
    fullName[strcspn(fullName, "\n")] = '\0';

    printf("\nHello %s, nice to meet you", fullName);

    return 0;
}
