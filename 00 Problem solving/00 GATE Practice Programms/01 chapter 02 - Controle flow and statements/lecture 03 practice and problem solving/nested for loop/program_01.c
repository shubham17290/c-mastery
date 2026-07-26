#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("i is %d\n", i);
    }

    return 0;
}
