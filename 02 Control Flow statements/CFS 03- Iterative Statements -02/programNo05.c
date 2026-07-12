#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <=n ; j++)
        {

            count = count + 1; // this bock will execute = n*n times = n^2 times 
        }
    }
    printf("%d\n", count);
    return 0;
}