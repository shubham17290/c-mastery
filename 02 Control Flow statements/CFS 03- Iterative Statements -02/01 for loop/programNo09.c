#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("GATE CS&IT AIR 01 2027\n");
            count = count + 1;
        }
    }
    printf("%d\n", count);

    return 0;
}