// 35th commit " largest among 3 is done using the ternary operator"
//  wap to print the largest among three numbers :
#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter value: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf(" largest value among all  is = %d\n", largest);

    return 0;
}
