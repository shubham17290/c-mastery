#include <stdio.h>

int main() {
    int i = 10;

    printf("%u\n", sizeof(i = i + 10));
    printf("%d\n", i);
    /*
    the output of this function is
    4
    10
    */

    return 0;
}
