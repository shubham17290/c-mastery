#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    int **q;
    p = &x;
    q = &p;
    printf("the value of the p  = %u\n", p);
    printf("the value of the *p = %u\n", *p);
    printf("the value of the q = %u\n", q);
    printf("the value of the *q = %u\n", *q);
    printf("the value of the **q= %u\n", **q);

    return 0;
}

