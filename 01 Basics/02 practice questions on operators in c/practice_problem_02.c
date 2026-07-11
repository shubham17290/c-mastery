#include <stdio.h>

int main()
{
    short int x = 32769; // here int should be in the size of : 2 byte  that's why i have taken short int to make int 2 bytes
    printf("%d\n", x);   // 0/p; -32767

    return 0;
}