// Program to check whether a number is prime or not
// Beginner Friendly

#include <stdio.h>

int main() {
    int n;
    int count = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &n);


    //  01 : simple logic
    
    // Check how many numbers divide n completely
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++; // Increase the divisor count
        }
    }

    // A prime number has exactly 2 divisors
    if (count == 2) {
        printf("%d is a PRIME number.\n", n);
    } else {
        printf("%d is NOT a PRIME number.\n", n);
    }

    return 0;
}
