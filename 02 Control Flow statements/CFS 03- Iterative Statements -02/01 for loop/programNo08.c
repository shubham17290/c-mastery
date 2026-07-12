#include <stdio.h>

int main()
{
    
    int count = 0;

    for (int i = 2; i <= 100; i = i * 2)
    {
        printf("This is the loops element \n");
        count = count + 1;

    }

    printf("%d\n",count);
    return 0;
}