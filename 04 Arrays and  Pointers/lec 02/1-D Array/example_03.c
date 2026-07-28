#include <stdio.h>

int main() {

    //  The base address of an array vary as per your system or compiler
    int a[5] = {10, 20, 30, 40, 50};
    printf("%u\n", a);        // 1000
    printf("%u\n", &a);       // 1000
    printf("%u\n", a + 1);    // (a+1) = a[1] = 1004
    printf("%u\n", &a + 1);   // 1020
    printf("%u\n", *(a + 1)); // 20

    return 0;
}
