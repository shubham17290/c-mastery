#include <stdio.h>

int main() {
    int a[2][3] = {10, 20, 30, 40, 50, 60};
    fun(a[0]);
    printf("%d %d %d\n", a[0][0], a[0][0], a[0][1], a[0][2]);

    return 0;
}

void fun(int *p) {
    ++p;
    *p++;
    *++p;
    p--;
    *p = 100;
}
