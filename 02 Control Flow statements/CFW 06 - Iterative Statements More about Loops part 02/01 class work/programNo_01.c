// WAP to print the sum of factorial of digits
// Also check whether the number is a Strong Number

#include <stdio.h>

int main() {
    int n, original, last;
    int sum = 0;

    printf("Enter value: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        //  extract the digits 
        last = n % 10;

        int fact = 1;

        // Find factorial of the digit
        for (int i = 1; i <= last; i++) {
            fact = fact * i;
        }

        sum = sum + fact;

        n = n / 10;
    }

    printf("Sum of factorial of digits = %d\n", sum);

    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }

    return 0;
}
