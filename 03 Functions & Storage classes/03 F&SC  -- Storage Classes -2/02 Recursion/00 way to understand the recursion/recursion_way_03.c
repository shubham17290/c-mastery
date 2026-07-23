#include <stdio.h>

// This is your recursive function
void f(int n) {
    if (n == 0)
        return;
    else {
        f(n - 1);
        printf("%d\n", n);
    }
}

int main() {
    int n;

    // 1. Take input from the user
    printf("Enter value: ");
    scanf("%d", &n);

    printf("Here is the output:\n");

    // 2. Call the function with the user's input
    f(n);

    return 0;
}
