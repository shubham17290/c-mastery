#include <stdio.h>

int main() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf(" a is -> %u\n", a);
    printf(" &a is -> %u\n", &a);
    printf("a[0] is -> %u\n", a[0]);
    printf("&a[0][0] is -> %u\n", &a[0][0]);
    printf("*a is -> %u\n", *a);
    printf(" **a is -> %u\n", **a);
    printf("a+1 is -> %u\n", a + 1);
    printf(" *a+1 is-> %u\n", *a + 1);
    printf("a[0]+1 is -> %u\n", a[0] + 1);

    return 0;
}

