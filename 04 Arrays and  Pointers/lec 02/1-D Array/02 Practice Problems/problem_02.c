
#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    printf("%d\n", a[1]);     // value at index = 1
    printf("%d\n", *(a + 1)); // value at index = 1 (written indirectly )

    return 0;
}
