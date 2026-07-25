#include <stdio.h>

int main() {
    int a;

    a = printf("%d", 4 / 2 + 3 * 2); // first print will be = 8 - > a
    printf("%d\n", a);               // --> this will print = 1 (no of values stored inside the a )

    return 0;
}
