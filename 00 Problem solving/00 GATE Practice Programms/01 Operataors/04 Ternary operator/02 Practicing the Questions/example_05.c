//  Bit-wise opr
#include <stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 20;

    printf("value of the a is = %d , b is = %d\n ", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf(" value of a is = %d \n", a);
    printf(" value of b is = %d \n", b);
    return 0;
}
