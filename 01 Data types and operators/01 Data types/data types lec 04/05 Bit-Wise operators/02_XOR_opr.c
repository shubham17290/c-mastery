#include <stdio.h>

int main()
{


    //  0 ^ 0 = 0 = 1 ^1 , 0 ^ 1 = 1 , 1^0 = 1
    int a = 5, b = 17, c;
    c = a ^ b;

    printf("%d\n", c); // output : 20
    

    return 0;
}