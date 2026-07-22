#include <stdio.h>

void fun() {
    int x = 0;
    ++x;               // 1
    printf("%d\n", x); // 1 ---> this will not be printed as first!
}

void main() {
    fun(); // 1
    fun(); // 1
    fun(); // 1
}
