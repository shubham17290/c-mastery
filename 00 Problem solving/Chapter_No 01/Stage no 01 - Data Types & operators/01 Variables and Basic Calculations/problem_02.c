// 1.Swap two numbers (without using third )
#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    printf("the value of a is = %d  and value of b  is = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("the value of a is = %d  and value of b  is = %d \n", a, b);
    printf("Here we successfully swap the values \n");

    return 0;
}
