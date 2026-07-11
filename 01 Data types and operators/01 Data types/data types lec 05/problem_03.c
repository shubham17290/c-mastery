#include <stdio.h>

int main()
{

    int y;
    int x = 12;
    y = (x & 1) ? printf("Hello") : printf("Everyone");

    printf("%d\n",y); // o/p: Everyone8
    

    return 0;
}