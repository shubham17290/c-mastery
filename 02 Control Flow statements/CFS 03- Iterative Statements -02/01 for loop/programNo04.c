#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 3; j++)
        {

            count = count + 1;
        }
    }
    printf("%d\n", count);
    return 0;
}