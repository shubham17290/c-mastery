// 33th commit " largest among 5 is done using the if statement"
//  wap to print the largest among three numbers

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("a is the largest %d\n", a);
    else {
        if (b > a && b > c)
            printf("b is the largest %d\n", b);
        else
            printf("c is the largest %d\n", c);
    }
    return 0;
}
