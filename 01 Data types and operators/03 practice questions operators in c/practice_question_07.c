#include <stdio.h>

void main()
{
    int x = -2023;
    printf("%d\n", ~(x=x+5)); // 2017
}