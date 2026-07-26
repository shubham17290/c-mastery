//  WAP to print the longest among 2 number --> using the ternary operator
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter  2 values : ");
    scanf("%d %d\n", &a, &b);

    max = (a > b) ? a : b;
    printf("%d\n", max);

    return 0;
}
