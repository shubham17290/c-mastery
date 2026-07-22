#include <stdio.h>
void f1() {
    extern int x;      // 10 // global variable --> downword will no error will be there
    ++x;               // 11
    printf("%d\n", x); // 11 // what is x here ? --> this will throw the compilation error
}
int x = 10;
void f2() {
    ++x;               //  12
    printf("%d\n", x); // 12
}
void main() {
    f1();
    f2();

    ++x; // 13

    printf("%d\n", x); // 13
}
