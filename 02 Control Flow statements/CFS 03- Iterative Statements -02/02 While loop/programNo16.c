
//  Find the output of the code
#include <stdio.h>

int main()
{
    int i = 1;
    while (++i < 5) // 2<5, 3<5, 4<5 only three times the loop will be executed

        printf("%d", i); // output = 234

    return 0;
}