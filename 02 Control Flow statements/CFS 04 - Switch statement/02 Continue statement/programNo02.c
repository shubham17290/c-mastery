#include <stdio.h>

int main() {
    int prod = 1;
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
        prod = prod * i;
    }

    printf("%d\n", prod);
    return 0;
}
