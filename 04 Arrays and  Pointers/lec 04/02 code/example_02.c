#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    int *p;
    p = &a[0];
    printf("%u\n", p);

    return 0;
}
