#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 0; i > 5; i++)
    {
        printf("Hello,SIR !\n");
        count = count + 1;
    }

    printf("%d", count);
    return 0;
}