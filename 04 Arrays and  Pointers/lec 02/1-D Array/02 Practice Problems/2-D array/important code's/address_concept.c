#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    printf("%u\n", a + 1);
    printf("%u\n", &a + 1);

    return 0;
}
