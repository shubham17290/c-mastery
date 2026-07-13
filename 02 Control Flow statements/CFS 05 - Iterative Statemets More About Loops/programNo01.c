#include <stdio.h>

int main() {
    int sum = 0;
    int n;

    printf("Enter number: \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {

            sum = sum + i;
        }
    }
    if (sum == n) {
        printf(" %d  is perfect number\n", n);
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
