#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i * 3) { // count of the outer loop is = log3(n) + 1
        for (int j = i; j <= n; j++) {   // count of the inner loop is = n + i + 1
            printf("%d\n", j);           // total time complexity is = 0(log3(n)+1)
        }
    }

    return 0;
}
