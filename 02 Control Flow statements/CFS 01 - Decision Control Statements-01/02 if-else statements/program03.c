
// WAP to take integer number from keyboard , if the number is even print 1 other-wise program will print 0

#include <stdio.h>

int main()
{
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}