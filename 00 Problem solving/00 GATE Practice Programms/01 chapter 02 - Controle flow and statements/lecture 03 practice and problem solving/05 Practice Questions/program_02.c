//  Write the program to find the perfect divisor of the number
#include <stdio.h>

int main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d is a perfect divisor\n", i);
            sum = sum + i;
        }
    }
    printf("the total sum is = %d\n", sum);
    if (sum == n) {
        printf("the number %d is a perfect number\n", n);
    } else {
        printf("the number %d is not a perfect number\n", n);
    }

    return 0;
}
