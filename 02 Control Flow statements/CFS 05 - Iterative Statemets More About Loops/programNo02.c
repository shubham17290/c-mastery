// Find whether the input number is prime and the even and odd !

#include <stdio.h>

int main() {
    int n;
    int count = 0;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime numbers are greater than 1
    if (n <= 1) {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }

    // Check how many numbers divide n completely
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++; // Increase divisor count
        }
    }

    // A prime number has exactly 2 divisors (1 and itself)
    if (count == 2) {
        printf("%d is a PRIME number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    // Check whether the number is even or odd
    if (n % 2 == 0) {
        printf("%d is an EVEN number.\n", n);
    } else {
        printf("%d is an ODD number.\n", n);
    }

    return 0;
}
