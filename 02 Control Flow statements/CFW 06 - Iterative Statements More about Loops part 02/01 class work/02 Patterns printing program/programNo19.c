

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        //  code print spaces and
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        } // space
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        } // star

        printf("\n");
    }

    return 0;
}
