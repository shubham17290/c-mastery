//  real example of post-increment
#include <stdio.h>

int main() {
    int a = 5;

    printf("%d \n", --a); //  a is decrement first --> 4 : used at the same block
    // after decrement in  a
    printf(" Now the value of the a is = %d\n", a); //  even after use now a = 4

    return 0;
}
