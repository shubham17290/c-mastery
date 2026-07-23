#include <stdio.h>

void f(int n) {
    if (n <= 0)
        return;
    f(n - 1);
    printf("%d", n);
    f(n - 1);
}
int main() {
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    f(n);

    return 0;
}
