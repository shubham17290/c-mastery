// 35th commit " largest among 4 is done using the ternary operator"
//  wap to print the largest among four numbers :
#include <stdio.h>

int main() {
    int a, b, c, d, largest;

    printf("Enter value: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = (a > b && a > c) ? a : (b > c && b > d) ? b : (c > d) ? c : d;
    printf(" largest value among all  is = %d\n", largest);

    return 0;
}
