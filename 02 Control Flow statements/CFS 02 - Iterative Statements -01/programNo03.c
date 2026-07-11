#include <stdio.h>

int main()
{
   int count = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello,SIR !\n");
        count = count + 1;
    }

    printf("%d", count);
    return 0;
}