//  Question number : 01 in the short circuit evaluation

#include <stdio.h>

int main() {
    int a;
    a = 2 < 5 != 2 < 5 && 8 > 10 == 8 > 10;
    printf("%d\n", a);

    return 0;
}
