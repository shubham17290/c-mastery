// Example 3 : Menu Program
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n1. Add\n");
        printf("2. Delete\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Thank You!\n");
            exit(0);
        }

        printf("Processing...\n");
    }

    return 0;
}
