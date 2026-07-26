//  wap to print the largest among three numbers --> using the if statement

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("a is the largest %d\n", a);
    }
    if (b > a && b > c) {
        printf("b is the largest %d\n", b);
    }
    if (c > a && c > b) {
        printf("c is the largest %d\n", c);
    }

    return 0;
}
