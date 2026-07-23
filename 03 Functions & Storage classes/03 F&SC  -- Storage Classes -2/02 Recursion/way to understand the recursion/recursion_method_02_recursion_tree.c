
#include <stdio.h>

void f(int n) {
    if (n == 0)
        return;
    else {
        printf("%d\n", n);
        f(n - 1);
        printf("%d\n", n);
    }
}
void main() { f(3); }
//  program to print the balanced structure of a number
