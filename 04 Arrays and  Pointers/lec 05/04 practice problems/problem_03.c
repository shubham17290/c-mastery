#include <stdio.h>
int fun(int *);
int main() {
    int a[4] = {10, 20, 30, 40};
    fun(a);
    printf("%d %d\n", a[1], a[2]);

    return 0;
}
int fun(int *p) { ++*p++; }
