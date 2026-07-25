#include <stdio.h>

int main()
{

    int a = 5, b = 10 ;
    b = (a + b) - (a = b); // swapping ho gyi hai bhai yaha pe : and a has new value and b is also changed 

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}