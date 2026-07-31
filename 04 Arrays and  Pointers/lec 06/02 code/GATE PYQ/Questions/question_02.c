#include <stdio.h>

// Function prototype declaration
void sum(int *p, int n);

int main() {
    int a[4] = {10, 20, 30, 40};
    sum(a, 4);

    return 0;
}

// Function definition
void sum(int *p, int n) {
    int total = 0;

    // Fixed: changed 'i <= n' to 'i < n' to avoid array out-of-bounds error
    for (int i = 0; i < n; i++) {
        total = total + p[i];
    }

    printf("%d\n", total);
}
