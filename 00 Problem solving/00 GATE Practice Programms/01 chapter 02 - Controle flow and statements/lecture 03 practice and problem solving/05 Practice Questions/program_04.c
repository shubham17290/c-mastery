// WAP to do extract the digits one by one and count the total number of digits
#include <stdio.h>

int main() {
    int n, digit;
    // int sum = 0

    printf("Enter value: ");
    scanf("%d", &n);

    int count = 0;
    while (n != 0) {
        digit = n % 10;
        printf("the digit is %d \n", digit);

        n = n / 10;
        count++;
    }

    printf("the count of the digit it %d \n", count);

    return 0;
}
