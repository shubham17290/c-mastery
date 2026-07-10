#include <stdio.h>

int main()
{
    int a;
    a = a = 15 < 2 ? 1 != 12 > 15 ? 10 : 20 : 4 < 7 != 7 > 9 ? !5 ? 30 : !1 != 1 ? 4
                                                                                 : 5
                                                             : 6;

    printf("%d\n", a);

    return 0;
}