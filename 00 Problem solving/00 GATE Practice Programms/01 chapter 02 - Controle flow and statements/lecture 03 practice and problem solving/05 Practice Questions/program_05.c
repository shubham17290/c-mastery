//  WAP the program to extract the digits in the reverse order and print the extracted digits

#include <stdio.h>

int main() {
    int n, digit, reverse = 0;
    // int sum = 0

    printf("Enter value: ");
    scanf("%d", &n);

    int count = 0;
    //  this is the main golden formula
    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
        count = count + 1;
    }
    printf("the reverse of the input number is %d \n", reverse);

    printf("the count of the digit it %d \n", count);

    return 0;
}
