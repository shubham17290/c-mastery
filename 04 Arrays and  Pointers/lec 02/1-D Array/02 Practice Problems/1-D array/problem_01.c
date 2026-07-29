#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    printf("%u\n", a);     // a = &a[0]
    printf("%u\n", &a);    // this will return you the address of the whole array
    printf("%u\n", &a[0]); // this will return you the address of the first element

    return 0;
}
