// Menu-Driven Calculator
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n1. Add\n");
        printf("2. Subtract\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            scanf("%f %f", &a, &b);
            printf("Sum = %.2f\n", a + b);
        }
        else if (choice == 2)
        {
            scanf("%f %f", &a, &b);
            printf("Difference = %.2f\n", a - b);
        }

    } while (choice != 3);

    return 0;
}