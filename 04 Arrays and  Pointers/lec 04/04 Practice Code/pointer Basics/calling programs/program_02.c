
//    this is the program of the pointers and this is mainly explains the concept of the function
//    call
#include <stdio.h>

void change(int *x) { *x = 100; }

int main() {
    int a = 10;

    change(&a);

    printf("%d", a);

    return 0;
}
