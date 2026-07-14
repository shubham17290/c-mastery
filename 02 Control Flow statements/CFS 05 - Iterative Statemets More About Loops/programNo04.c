#include <stdio.h>

int main() {
    int i, n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            printf(" i is the factor of n\n");
            printf("%d is not prime \n", n);
            break; // will help you to go outside the loop
        }
    }
    if (i == n) {
        printf("this number %d is prime number", n);
    }

    return 0;
}
