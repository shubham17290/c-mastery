#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1 || n == 13 || n == 18) {
        printf("First group\n");
    } else if (n == 2 || n == 10 || n == 15) {
        printf("Second group\n");
    }

    return 0;
}
