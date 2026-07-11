#include <stdio.h>

int main()
{
    int a, b, c, d, largest;

    printf("Enter four distinct numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = (a > b && a > c && a > d)
                  ? a
              : (b > c && b > d)
                  ? b
              : (c > d)
                  ? c
                  : d;

    printf("Largest = %d\n", largest);

    return 0;
}