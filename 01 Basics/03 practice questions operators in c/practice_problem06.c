#include <stdio.h>

void main()
{

    int a = 0, b = 1;
    a = (a = 5) && (b = 0);

    printf("%d\n", a); // op: a= 0
    printf("%d\n", b); // op: b = 0
}