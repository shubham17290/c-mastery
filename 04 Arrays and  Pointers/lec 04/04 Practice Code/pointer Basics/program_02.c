#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    int **q;
    p = &x;
    q = &p;
    printf("the value of the  p = %u\n", p);
    printf(" the value of the *p = %u\n", *p);
    printf("%u\n", q);
    printf("%u\n", *p);
    printf("%u\n", **q);
    return 0;
}
