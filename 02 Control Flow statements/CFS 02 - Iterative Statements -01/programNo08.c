#include <stdio.h>

void main()
{
    char ch;
    int count = 0;
    for (ch = 1; ch; ch = ch + 2)
    {

        printf("sir\n");
        count = count + 1;
    }

    printf("%d\n", count);
}
