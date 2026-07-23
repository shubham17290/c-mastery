#include <stdio.h>

void f(int n) {
    if (n == 0 || n == 1) {
        printf("%d", n);
        return;
    } else {
        f(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    f(23 / 2);
    printf("%d\n", 23 % 2);

    return 0; // Standard practice for main
}
