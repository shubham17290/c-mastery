#include <stdio.h>
void swap(int, int);
void main() {
    int a = 10, b = 20;

    printf("Before swapping\n");
    printf("a  =  %d  b =  %d\n", a, b);
    swap(a, b);
    printf("After swapping \n");
    printf(" a = %d b = %d \n", a, b);
}

void swap(int x, int y) {
    int temp;

    temp = x; // temp = 10
    x = y;    // x = 20
    y = temp; // y = 10
}
