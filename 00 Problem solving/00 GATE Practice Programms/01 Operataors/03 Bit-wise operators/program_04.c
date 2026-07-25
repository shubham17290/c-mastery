//  Bit - wise - > right shift opr
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value: ");
    scanf("%d", &a, &b);

    b = a >> 1;

    printf("Value = %d\n", b);

    return 0;
}
