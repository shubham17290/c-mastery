//  WAP to check the given number is the prime number or not
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count = count + 1;
        }
    }
    if (count == 1) {
        printf("the number %d is prime number \n", n);
    } else {
        printf("the number %d is not a  prime number \n", n);
    }

    return 0;
}
