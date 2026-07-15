// WAP to print the factorial of all numbers between a and b

#include <stdio.h>

int main() {
    int a, b, prod;

    printf("Enter 2 values: ");
    scanf("%d%d", &a, &b);

    for (int n = a; n <= b; n++) {
        prod = 1;

        for (int i = 1; i <= n; i++) {
            prod = prod * i;
        }

        printf("Factorial of %d = %d\n", n, prod);
    }

    return 0;
}
