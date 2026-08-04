#include <stdio.h>

int main() {
    int a = 10, b = 30;
    b = (a + b) - (a = b);
    printf("%d  %d\n", a, b);

    return 0;
}
