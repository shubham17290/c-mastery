// 9. Keep Taking Input Until User Enters 0

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

    } while (n != 0);

    return 0;
}