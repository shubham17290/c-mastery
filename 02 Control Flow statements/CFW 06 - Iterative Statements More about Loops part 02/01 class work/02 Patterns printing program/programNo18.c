#include <stdio.h>

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        //  code print spaces and
        for (int space = 1; space <= n - row; space++) {
            //  code to print stars
            printf(" ");
        }
        for (int star = 1; star <= row; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
