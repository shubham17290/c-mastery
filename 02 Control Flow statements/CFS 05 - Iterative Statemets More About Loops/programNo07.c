
//  WAP to print the single digit sum

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) // Repeat until number becomes a single digit
    {
        sum = 0;

        while (n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }

        n = sum;
    }

    printf("Single digit sum = %d\n", n);

    return 0;
}
