#include <stdio.h>

int main()
{

    // swapping two numbers without using the 3rd number
    int a, b;
    a = 10;
    b = 20;
    printf("the number a= %d and b  is  = %d\n", a, b);
    a = a^b; // a = 10^20
    b = a^b; // b = 10^20^20= 10 --> b
    a = a^b; // b=10^20^10 = 20 --> a
    printf("now the number a is become = %d  and the b is become = %d\n", a, b);

    return 0;
}