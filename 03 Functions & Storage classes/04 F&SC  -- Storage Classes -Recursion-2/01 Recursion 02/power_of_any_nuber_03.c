#include <stdio.h>
int f(int a, int b) {
    if (b == 1) {
        return;
    }

    else {
        return a * f(a, b - 1);
    }
}
int main() {

    int a, b, result;
    printf("Enter base and the power = \n");
    scanf("%d %d", &a, &b);
    result = f(a, b);
    printf("%d\n", result);

    return 0;
}
