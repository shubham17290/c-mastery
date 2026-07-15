//  give full program to print the taylor series


#include <stdio.h>

int main() {
    int x, n;
    int power = 1;
    int fact = 1;
    double sum = 1.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        power = power * x; // x^i
        fact = fact * i;   // i!

        sum = sum + (double)power /
                        fact; // storing the sum after computing each of the terms in one variable i.e : sum
    }

    printf("Sum of the series = %.6lf\n", sum);

    return 0;
}
