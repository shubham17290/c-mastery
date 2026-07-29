#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    printf("%d\n", a[1]);
    printf("%d\n", 1 [a]);
    printf("%d\n", *(a + 1));
    printf("%d\n", *(1 + a));

    return 0;
}
