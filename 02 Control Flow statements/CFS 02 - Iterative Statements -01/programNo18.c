#include <stdio.h>

int main()
{
    int i = 1;
    int count = 0;
    for (; i++ < 5;) // here we are using the post increment that say's = used first then do increment
    //  eg: 1. i < 5 --> 2. i = i+1 (just do it after checking and before printing --> print)
    {
        printf("%d\n", i); // the O/P = 2345
        count = count + 1;
    }

    printf("%d", count); // this will print = 4
    return 0;
}
