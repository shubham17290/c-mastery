// books example no 03  : practice Q01
#include <stdio.h>

int main() {
    int a = 2, b = 2, c = 0, d = 2, e;
    e = a++ && b++ && c++ ||
        d++; // there is the crux this expression is written to remind you that the concept called :
             // short circuit evaluation in the logical or operator
    printf("%d\n", e);

    return 0;
}
