#include <stdio.h>

int Add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int Prod(int a, int b) { return a * b; }

void main() {
    int (*P)(int, int);

    P = Add;
    printf("%d", (*P)(10, 20));

    P = sub;
    printf("%d", (*P)(10, 20));

    P = Prod;
    printf("%d", (*P)(10, 20));
}
