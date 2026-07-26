//
// 10. Dangling else ⭐⭐⭐⭐⭐
#include <stdio.h>

int main()
{
    if (a)
        if (b)
            printf("A");
        else
            printf("B");

    return 0;
}
