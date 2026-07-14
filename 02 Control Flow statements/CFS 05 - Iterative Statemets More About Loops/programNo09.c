// easy approach-->   Basic program to check the number is armstrong number or not !

#include <stdio.h>

int main() {
    int n, a, last, sum;

    printf("Enter value: ");
    scanf("%d", &n);

    a = n; // save krr lo n zero hone wala hai
    sum = 0;
    while (n != 0) {
        last = n % 10;
        n = n / 10;
        sum = sum + (last * last * last);
    }
    if (sum == a) { // wrong code
        printf("the number %d is the armstrong number \n" , a);
    } else {
        printf("the number%d  is not armstrong number \n", a);
    }
    return 0;
}
