// Program to check whether a number is prime or not

#include <stdio.h>

int main() {
    int i, n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("number of digit is 1 and number is %d\n", n);
    }

    while (n != 0) {
        n = n / 10;
        count = count + 1;
    }
    printf("the number of the digits is %d \n", count);
    return 0;
}
