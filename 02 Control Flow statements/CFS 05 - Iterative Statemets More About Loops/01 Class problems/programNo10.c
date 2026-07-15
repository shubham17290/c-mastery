#include <stdio.h>

int main() {
    int a, n, sum, prod, b, last, count;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store original number
    a = n;
    b = n;

    // Count number of digits
    count = 0;

    while (n != 0) {
        n = n / 10;
        count++;
    }

    // Calculate Armstrong sum
    sum = 0;

    while (a != 0) {
        last = a % 10;
        a = a / 10;

        prod = 1;

        // last^count
        for (int i = 1; i <= count; i++) {
            prod = prod * last;
        }

        sum = sum + prod;
    }

    // Check Armstrong
    if (sum == b) {
        printf("%d is an Armstrong number.\n", b);
    } else {
        printf("%d is NOT an Armstrong number.\n", b);
    }

    return 0;
}
