//  calculate the sum of 1 to 5 numbers digit

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
//  also we can do this for any numbers sum