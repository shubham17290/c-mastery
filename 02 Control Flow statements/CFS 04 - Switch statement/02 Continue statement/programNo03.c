#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        fact = fact * i; // logic for the factorial of the any number
    }
    printf("%d\n", fact);
    return 0;
}
