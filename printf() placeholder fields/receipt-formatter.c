#include <stdio.h>
#include <string.h>

int main()
{   
    int numOfItems = 0;
    double total = 0;
    
    printf("\nEnter the number of items in your shopping basket: ");
    scanf("%d", &numOfItems);

    // remove newline char from input buffer
    getchar();

    // 1st [] represents how many items
    // 2nd [] tells size of each item
    char shopping_cart[numOfItems][50];

    double pricesOfItems[numOfItems];

    //size of 50 characters for each item
    char item[50];

    double price = 0;


    for (int i = 0; i < numOfItems; i++)
    {   
        printf("\nEnter shopping item %d: ", i+1);
        fgets(item, sizeof(item), stdin);
        item[strcspn(item, "\n")] = '\0';
        strcpy(shopping_cart[i], item);

        do
        {
            printf("\nEnter the price: ");
            scanf("%lf", &price);
        } while (price <= 0);

        total += price;
        // remove newline char from input buffer
        getchar();
        pricesOfItems[i] = price;

    }

    printf("\n--------------------------");
    printf("\nItem            Price");
    printf("\n");

    for (int i = 0; i < numOfItems; i++)
    {   
        printf("\n%-12s%8.2lf", shopping_cart[i], pricesOfItems[i]);
    }

    printf("\n---------------------------");
    printf("\nTotal:%14.2lf", total);
    
    return 0;

}
