// print the factorial of the number
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("the factorial of the number is = %d\n", fact);

    return 0;
}
