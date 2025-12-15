#include <stdio.h>

int main()
{
    int size_of_vehicles = 0;
    char types_of_vehicles[5][50] = {"Car", "Motorcycle", "Bus", "Boat", "Helicopter"};
    size_of_vehicles = sizeof(types_of_vehicles) / sizeof(types_of_vehicles[0]);

    // Array notation
    for (int i = 0; i < size_of_vehicles; i++)
    {
        printf("\nindex[%d]: %s", i, types_of_vehicles[i]);
    }

    printf("\n");

    // Pointer notation
    for (int i = 0; i < size_of_vehicles; i++)
    {
        printf("\nindex[%d]: %s", i, *(types_of_vehicles + i));
    }

    return 0;
}
