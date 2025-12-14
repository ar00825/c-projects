#include <stdio.h>

void deposit(double *balance, double *amountToDeposit);

void withdraw(double *balance, double *amountToWithdraw);


int main()
{
    double balance = 0;
    int option = 0;
    double amountToDeposit = 0;
    double amountToWithdraw = 0;

    do
    {
        printf("\nEnter your balance: ");
        scanf("%lf", &balance);
    } while (balance < 0);

    do
    {
        printf("\n1. Deposit \n2. Withdraw \n3. Check Balance \n4. Exit\n");
        printf("\nEnter the option # to perform: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                do
                {
                    printf("\nEnter the amount to deposit: ");
                    scanf("%lf", &amountToDeposit);
                } while (amountToDeposit <= 0);
                deposit(&balance, &amountToDeposit);
                printf("\nDeposit added!\nBalance: %.2lf\n", balance);
                break;
            case 2:
                do
                {
                    printf("\nEnter the amount to withdraw: ");
                    scanf("%lf", &amountToWithdraw);
                } while (amountToWithdraw > balance || amountToWithdraw <= 0);
                withdraw(&balance, &amountToWithdraw);
                printf("\nYou have withdrawn from your balance! \nBalance: %.2lf\n", balance);
                break;
            case 3:
                printf("\nBalance: %.2lf\n", balance);
                break;
            case 4:
                printf("\nYou have exited the program, Have a nice day!\n");
                break;
            default:
                printf("\nInvalid option! Please Try Again\n");
                break;
        }
    } while (option != 4);

    return 0;
}

void deposit(double *balance, double *amountToDeposit)
{
    *balance += *amountToDeposit;
}

void withdraw(double *balance, double *amountToWithdraw)
{
    *balance -= *amountToWithdraw;
}