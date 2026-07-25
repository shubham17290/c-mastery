#include <stdio.h>

int main() {
    int y;
    int x = 12;
    y = (x & 1) ? printf("hello") : printf("Everyone");
    printf("%d\n", y);

    return 0;
}
    