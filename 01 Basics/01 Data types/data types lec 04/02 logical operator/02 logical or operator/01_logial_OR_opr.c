#include <stdio.h>

int main()
{
    printf("%d\n", 2||16 );// 1
    printf("%d\n", 12||3.43); // 1
    printf("%d\n", 0 || 43); // 1
    printf("%d\n",0 ||0.0 ); // 0

    return 0;
}