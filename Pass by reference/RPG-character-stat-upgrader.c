#include <stdio.h>

void upgradeStat(int character_stats[], int indexOfStat, int *upgradePoints);

int main()
{
    int size_of_stats = 5;
    int character_stats[] = {10, 10, 10, 10, 10};
    char stats[5][50] = {"Health", "Defense", "Strength", "Magic", "Speed"};
    int upgradePoints = 5;
    int option = 0;
    int indexOfStat = 0;

    do
    {
        printf("\nMenu Actions:\n \n1. Increase Health \n2. Increase strength \n3. Increase Defense \n4. Exit\n");
        printf("\nAvailable upgrade points: %d\n", upgradePoints);
        printf("\nEnter the option # to perform: ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
            case 1:
                if (upgradePoints > 0)
                {
                    upgradeStat(character_stats, 0, &upgradePoints);
                    printf("\nCurrent Stats:\n");
                    for (int i = 0; i < size_of_stats; i++)
                    {
                        printf("\n%s: %d", stats[i], character_stats[i]);
                    }
                    printf("\n");
                }
                else {printf("\nYou don't have enough upgrade points!");}
                break;
            case 2:
                if (upgradePoints > 0)
                {
                    upgradeStat(character_stats, 2, &upgradePoints);
                    printf("\nCurrent Stats:\n");
                    for (int i = 0; i < size_of_stats; i++)
                    {
                        printf("\n%s: %d", stats[i], character_stats[i]);
                    }
                    printf("\n");              
                }
                else {printf("\nYou don't have enough upgrade points!\n");}
                break;
            case 3:
                if (upgradePoints > 0)
                {
                    upgradeStat(character_stats, 1, &upgradePoints);
                    printf("\nCurrent Stats:\n");
                    for (int i = 0; i < size_of_stats; i++)
                    {
                        printf("\n%s: %d", stats[i], character_stats[i]);
                    }
                    printf("\n");              
                }
                else {printf("\nYou don't have enough upgrade points!\n");}
                break;
            case 4:
                printf("\nYou have exited the program!\n");
                break;
            default:
                printf("\nInvalid option! Please try again\n");
                break;
        }
    } while (option != 4);


    return 0;
}

void upgradeStat(int character_stats[], int indexOfStat, int *upgradePoints)
{
    character_stats[indexOfStat] += 10;
    *upgradePoints -= 1;
}