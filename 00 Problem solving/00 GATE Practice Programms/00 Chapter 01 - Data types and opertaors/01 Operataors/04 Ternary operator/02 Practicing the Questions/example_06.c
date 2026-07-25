#include <stdio.h>

int main() {
    int a = 5, b = 10;
    b = (a + b) - (a = b);
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
