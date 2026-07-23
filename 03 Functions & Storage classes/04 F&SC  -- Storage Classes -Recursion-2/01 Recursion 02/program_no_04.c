//print the count of the digit !
#include <stdio.h>
int f(int n) {
    if (n <= 9) // n is positive
        return 1;
    else {
        return 1 + f(n / 10);
    }
}

int main() {
    int n, result;

    printf("Enter value: ");
    scanf("%d", &n);
    result = f(n);
    printf("%d\n", result);

    return 0;
}
