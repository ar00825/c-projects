#include <stdio.h>

void add(double *num1, double *num2, double *result);

void subtract(double *num1, double *num2, double *result);

void multiply(double *num1, double *num2, double *result);

void divide(double *num1, double *num2, double *result);


int main()
{
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    char operator;

    printf("\nEnter num1: ");
    scanf("%lf", &num1);

    printf("\nEnter num2: ");
    scanf("%lf", &num2);
    getchar();

    printf("\nEnter the operation you would like to perform ( + - * / ): ");
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
            add(&num1, &num2, &result);
            printf("\nResult: %.2lf", result);
            break;
        case '-':
            subtract(&num1, &num2, &result);
            printf("\nResult: %.2lf", result);
            break;
        case '*':
            multiply(&num1, &num2, &result);
            printf("\nResult: %.2lf", result);
            break;
        case '/':
            if (num2 == 0) {printf("\nUnable to divide by zero!");}
            else
            {
                divide(&num1, &num2, &result);
                printf("\nResult: %.2lf", result);                
            }
            break;
        default:
            printf("\nInvalid operation! Please enter the correct operator");
            break;
    }

    return 0;
}

void add(double *num1, double *num2, double *result) {*result = *num1 + *num2;}

void subtract(double *num1, double *num2, double *result) {*result = *num1 - *num2;}

void multiply(double *num1, double *num2, double *result) {*result = *num1 * *num2;}

void divide(double *num1, double *num2, double *result) {*result = *num1 / *num2;}