#include <stdio.h>

void main()
{
    int i = 1;
    // here i firstly will become zero then it will check the condition that is if(0){} and this is false so this block will not run and move to the out of the if
    // here --i = 1-1=0

    if (--i) // i = 0 (false)- block will not execute 
    {
        printf("2\n");
    }
    printf("%d\n", i); // here the i = 0 --> 0/p = 0
}