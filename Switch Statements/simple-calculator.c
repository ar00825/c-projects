#include <stdio.h>

int main()
{

    double num1 = 0;
    double num2 = 0;
    char operator;

    printf("\nEnter a number: ");
    scanf("%lf", &num1);

    printf("\nEnter a second number: ");
    scanf("%lf", &num2);

    // remove newline character from input buffer
    getchar();

    printf("\nEnter an operator ( + - * / ): ");
    scanf("%c", &operator);  

    switch (operator)
    {
        case '+':
            printf("\nResult: %.2lf", num1 + num2);
            break;
        case '-':
            printf("\nResult: %.2lf", num1 - num2);
            break;
        case '*':
            printf("\nResult: %.2lf", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("\nYou can't divide by zero");
                
                do
                {
                    printf("\nEnter a second number: ");
                    scanf("%lf", &num2);
                }while (num2 == 0);

            }
            printf("\nResult: %.2lf", num1 / num2);
            break;
        default:
            printf("\nInvalid operator!");
    }

    return 0;

}
