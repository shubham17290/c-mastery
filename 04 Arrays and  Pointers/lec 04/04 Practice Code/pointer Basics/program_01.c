#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    p = &x;
    printf("%u\n", x);
    printf("%u\n", p);
    printf("%u\n", *p);

    return 0;
}
