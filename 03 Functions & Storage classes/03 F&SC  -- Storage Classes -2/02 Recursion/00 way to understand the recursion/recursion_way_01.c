
#include <stdio.h>

void f(int n) {
    if (n == 0)
        return;
    else {
        printf("%d\n", n);
        f(n - 1);
    }
} // Added the missing closing brace for f()

int main() {
    f(4);     // 1
    return 0; // 2 .Standard practice for main to return 0
}
