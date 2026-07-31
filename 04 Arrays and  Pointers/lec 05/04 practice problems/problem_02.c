#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};

    fun(a);
    printf("%d %d\n", a[0], a[1]);

    return 0;
}

int fun(int *p) {
    p++;
    *p++;
}
