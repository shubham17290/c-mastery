
#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    printf("%d\n", a[1]);     // value at index = 1
    printf("%d\n", *(a + 1)); // value at index = 1 (written indirectly )
    printf("%d\n", 1 [a]);    // 20 -> this is as same as a[i] = a[1]
    printf("%d\n", *(1 + a)); // 20 -->this will also give the same value in the output
    return 0;
}
