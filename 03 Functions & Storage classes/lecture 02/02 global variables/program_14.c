#include <stdio.h>
void f1() {
    extern int x; // 10 // global variable --> downword will no error will be there
    ++x;          // 11
}
void f2() {
    extern int x;
    ++x; //  12
}
int x = 10; // compiler -->  that great -> i know you are 10 at the starting

void main() {
    ++x;  // 13
    f1(); // 11
    f2(); // 12

    printf("%d\n", x); // 13
}
