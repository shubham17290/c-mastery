//  WAP to print the longest among 2 number --> using the if-else statement
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter  2 values : ");
    scanf("%d %d\n", &a, &b);

    if (a > b) {
        max = a; // here a is big
    } else {
        max = b; // here b is big
    }

    printf("%d\n", max); // now the max has a result and largest value in between them

    return 0;
}
