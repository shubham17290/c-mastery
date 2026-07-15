// WAP to print the power of the number like a^b

#include <stdio.h>

int main() {
    int a, i, b, prod;

    printf("Enter the base: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);
    prod = 1;
    for (i = 1; i <= b; i++) {
        prod = prod * a;
    }
    printf("the answer of the power of the number is %d", prod);

    return 0;
}
