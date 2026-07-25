#include <stdio.h>

int main() {
    int a = 5, b;
    b = ++a + a++ + ++a; // it's is vary on the compiler by compiler
    printf("%d\n", b);

    return 0;
}
