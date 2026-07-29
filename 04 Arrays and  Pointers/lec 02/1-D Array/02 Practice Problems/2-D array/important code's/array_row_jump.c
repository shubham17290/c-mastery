#include <stdio.h>

int main() {
    int a[2][3] = {10, 20, 30, 40, 50, 60};
    printf("%u\n", a); // this will return -> x
    printf("%u\n",
           a + 1); // this will return ->address of the first block + 1*sizeof(int) = x + 1*12
    printf("%u\n", a[0]);     // this will return -> x
    printf("%u\n", a[0] + 1); // this will return --> x+4

    return 0;
}
