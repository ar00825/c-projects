#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *firstName;
    char *lastName;
    int age;
    float marks;
} Student;

int main()
{
    int numberOfStudents = 0;

    printf("\nEnter the number of students: ");
    scanf("%d", &numberOfStudents);


    return 0;
}
