#include <stdio.h>

void fun() {
    int a = 0;
    static int b = 0;
    ++a;
    ++b;
    printf("%d %d\n", a, b);
}

void main() {
    fun();
    int a = 10, b = 0;
    ++a;
    ++b;

    printf("%d %d\n", a, b); // a--> 10 , b --> 1
}
// output you will have
/*
1
1
11
1

*/
