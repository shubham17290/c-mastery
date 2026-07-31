#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};

    // Array of 4 pointers pointing to elements of 'a'
    int *P[4] = {a + 3, a + 2, a + 1, a};
    int y;

    // Pointer pre-decrement and subtraction
    y = --P[0] - P[1];

    printf("%d\n", y);     // y=  p[0] - p[1] / 4 = 108 -108 / 4 = 0
    printf("%d\n", *P[0]); // (&a[0] = 30)

    return 0;
}
