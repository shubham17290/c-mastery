#include <stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b && a > c) ? a : (b > c) ? b
                                             : c;

    printf("Largest = %d\n", largest);

    return 0;
}