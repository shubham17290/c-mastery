#include <stdio.h>
int main()

{

    int x;
    x = fun(10);
    printf("%d\n", x);
    return 0;
}
double fun(int y) {
    double a = 2.3;
    return y * a;
}
//  here the both --> function call and fuction definition is both different
