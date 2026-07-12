#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i <= n; i = i*2)
    {
        printf("how many times this will be printed ?\n");
    }
    //  so as per the calculation :
    // this  printf will be run at most the = k+ 1 times  =  floor value of [logbase2(n)] + 1
    // and the  value of the k will be = floor value of [logbase2(n)]
    return 0;
}