// Program to check whether a number is prime or not

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("%d is not a prime number.\n", n);
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("%d is not a prime number.\n", n);
                break;
            }
        }

        if (i == n) {
            printf("%d is a prime number.\n", n);
        }
    }

    return 0;
}
