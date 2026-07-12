#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= 4; j++)
        {
            printf("Mew Mew");
            count = count + 1;
        }
        printf("\n");
    }
printf("%d\n", count);
    return 0;
}