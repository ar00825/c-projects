#include <stdio.h>

// adds two numbers
double add(double num1, double num2){
    return num1 + num2;
}

// subtracts two numbers
double subtract(double num1, double num2){
    return num1 - num2;
}

// swaps the value of two variables
void swap(double *num1, double *num2){
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


int main(){

    double num1;
    double num2;
    double result;
    char operator;
    int c;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    // clears input buffer
    while((c = getchar()) != '\n' && num1 != EOF){};

    printf("\nEnter a second number: ");
    scanf("%lf", &num2);

    // clears input buffer
    while((c = getchar()) != '\n' && num2 != EOF){};

    printf("\nEnter an operator ( + - s (s for swap)): ");
    scanf("%c", &operator);

    if(operator == '+'){
        result = add(num1, num2);
        printf("\nResult = %.1lf", result);
    }
    else if(operator == '-'){
        result = subtract(num1, num2);
        printf("\nResult = %.1lf", result);
    }
    else if(operator == 's'){
        printf("\nBefore:");
        printf("\nnum1 = %.1lf and num2 = %.1lf", num1, num2);
        swap(&num1, &num2);
        printf("\nAfter:");
        printf("\nnum1 = %.1lf and num2 = %.1lf", num1, num2);
    }
    else{
        printf("\nInvalid operation!");
    }

    return 0;
}