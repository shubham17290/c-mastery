#include <stdio.h>

int main() {
    int a[2][3] = {10, 20, 30, 40, 50, 60};
    printf("%u\n", a);
    printf("Lets do test of a + 1 = %u\n", a + 1); // this will add = 12 bytes value

    printf("%u\n", a[0]);
    printf("Lets do test of a + 1 = %u\n", a[0] + 1); // this will add = 4 bytes value

    printf("%u\n", &a);
    printf("Lets do test of a + 1 = %u\n", &a + 1); // this will add = 24 bytes values

    return 0;
}
