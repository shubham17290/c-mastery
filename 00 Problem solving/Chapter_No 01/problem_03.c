// 1.Swap two numbers (without using the  third variable)
#include <stdio.h>

int main() {
    int a = 10;
    int b = 30;
    printf("the value of a is = %d  and value of b  is = %d \n", a, b);
    a = a + b; // a = 10+30=40
    b = a - b; // b = 40 - 30 = 10
    a = a - b; // a = 40 - 10= 30

    printf("the value of a is = %d  and value of b  is = %d \n", a, b);
    printf("Here we successfully swap the values \n");

    return 0;
}
