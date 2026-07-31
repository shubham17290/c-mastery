#include <stdio.h>

// Helper function to find maximum of two numbers
int max(int x, int y) { return (x > y) ? x : y; }

int f(int *P, int n) {
    if (n <= 1)
        return 0;
    else
        return max(f(P + 1, n - 1), P[0] - P[1]);
}

int main() {
    int a[] = {3, 5, 2, 6, 4};

    printf("%d\n", f(a, 5));

    return 0;
}
