//  Reverse a number
#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    } while (n != 0);

    printf("Reverse = %d", rev);

    return 0;
}