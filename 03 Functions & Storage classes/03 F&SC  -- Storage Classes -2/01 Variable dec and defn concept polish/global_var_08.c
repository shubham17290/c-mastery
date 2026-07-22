#include <stdio.h>

void f1() {
    extern int x;
    ++x;
}
void f2() {
    extern int x;
    ++x;
}

int x = 10;
void main() {}
