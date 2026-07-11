#include <stdio.h>

int main()
{
    int a = 2, b = 2, c = 0, d = 2, e;
    e = a++ && b++ && c++ || d++;
    printf("%d\n", e);

    return 0;
}