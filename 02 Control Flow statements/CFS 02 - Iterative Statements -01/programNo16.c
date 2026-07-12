#include <stdio.h>

int main()
{
    char i = -1;
  char count = 0;
    for (i++; ++i; ++i)
    {

        count = count + 1;
    }
    printf("%d\n", count);
    return 0;
}