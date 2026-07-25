//  Question number : 02 in the short circuit evaluation

#include <stdio.h>

int main() {
    int a;
    a = 2 != 5 == 3 && 6 > 10 == 10 > 6;
    printf("%d\n", a);

    return 0;
}
//  o/p : 0
