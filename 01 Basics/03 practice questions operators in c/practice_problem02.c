#include <stdio.h>

int main(void)
{

    int a;
    a = 16.0 /4 * 5 % 3;
    
    printf("%d\n", a); // compiler error 

    return 0;
}