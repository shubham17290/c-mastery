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
    f(23); // Just give it the number directly!
    printf("\n");

    return 0;
}
