//  WAP to print the reverse of the input number and also check whether the input number is
//  palindrome or not ?

#include <stdio.h>

int main() {
    int reverse, n, last, a;

    printf("Enter value: ");
    scanf("%d", &n);

    reverse = 0;
    a = n;
    while (n > 0) {
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }

    printf("the reversed number is % d\n", reverse);
    if (reverse == a) {

        printf("the number %d is palindrome\n", a);
    }

    return 0;
}
