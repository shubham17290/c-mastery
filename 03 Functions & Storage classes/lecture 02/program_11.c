#include <stdio.h>

void fun() {
    int a = 0;
    static int b = 0;
    ++a;
    ++b;
    printf("%d %d\n", a, b);
}

void main() {
    int a = 10;
    ++a;
    // ++b; --> cause an error issue at the compilation time
    int b = 0;

    printf("%d%d\n", a, b);
}
