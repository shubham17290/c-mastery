#include <stdio.h>

int main() {
    int a = 10, b = 30;
    printf("the a is=  %d and the b is = %d\n", a, b);
    a = a + b; // a = 10 + 30 = 40
    b = a - b; // b  = 40 - 30 = 10
    a = a - b; // a = 40 - 10 = 30
    printf("the a is now = %d and the b is = %d \n", a, b);
    return 0;
}
