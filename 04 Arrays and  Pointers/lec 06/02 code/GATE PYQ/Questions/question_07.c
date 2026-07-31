#include <stdio.h>

int main() {
    static int a[] = {10, 20, 30, 40, 50};
    static int *P[] = {a, a + 3, a + 4, a + 1, a + 2};
    int **Ptr = P;

    Ptr++;

    printf("%d %d\n", Ptr - P, **Ptr);

    return 0;
}
