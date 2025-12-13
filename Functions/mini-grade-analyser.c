#include <stdio.h>

double calculateAverage(int *grades, int number_of_grades);

int findHighestGrade(int *grades, int number_of_grades);

int findLowestGrade(int *grades, int number_of_grades);

char convert_average_to_letter_grade(int *grades, int number_of_grades);

int main()
{
    int number_of_grades = 0;
    int size_of_grades = 0;
    int grade = 0;

    printf("\nEnter the number of grades you would like to enter: ");
    scanf("%d", &number_of_grades);
    getchar();

    int grades[number_of_grades];

    for (int i = 0; i < number_of_grades; i++)
    {
        printf("\nEnter grade %d: ", i + 1);
        scanf("%d", &grade);
        getchar();
        grades[i] = grade;
    }

    printf("\nSummary");
    printf("\n---------------------------\n");
    printf("grades: ");

    for (int i = 0; i < number_of_grades; i++) 
    { 
        printf("%d ", grades[i]); 
    }

    printf("\nAverage: %lf", calculateAverage(grades, number_of_grades));

    printf("\nHighest grade: %d", findHighestGrade(grades, number_of_grades));

    printf("\nLowest grade: %d", findLowestGrade(grades, number_of_grades));

    printf("\nAverage to letter grade: %c", convert_average_to_letter_grade(grades, number_of_grades));

    return 0;
}


double calculateAverage(int *grades, int number_of_grades)
{
    double total = 0;

    for (int i = 0; i < number_of_grades; i++) {total += grades[i];}

    return total / number_of_grades;
}

int findHighestGrade(int *grades, int number_of_grades)
{
    int highest_grade = grades[0];

    for (int i = 0; i < number_of_grades; i++)
    {
        if (grades[i] > highest_grade) {highest_grade = grades[i];}
    }

    return highest_grade;
}

int findLowestGrade(int *grades, int number_of_grades)
{
    int lowest_grade = grades[0];

    for (int i = 0; i < number_of_grades; i++)
    {
        if (grades[i] < lowest_grade) {lowest_grade = grades[i];}
    }

    return lowest_grade;
}

char convert_average_to_letter_grade(int *grades, int number_of_grades)
{
    double total = 0;
    double average = 0;
    char letterGrade = 'A';

    for (int i = 0; i < number_of_grades; i++) {total += grades[i];}

    average = total / number_of_grades;

    if (average >= 90) {letterGrade = 'A';}
    else if (average >= 80) {letterGrade = 'B';}
    else if (average >= 70) {letterGrade = 'C';}
    else if (average >= 60) {letterGrade = 'D';}
    else {letterGrade = 'F';}

    return letterGrade;
}