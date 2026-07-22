#include <stdio.h>

int main() {
    int a = 0;
    ++a; // 1
    {
        int a = 10;        // 10
        ++a;               // 11
        printf("%d\n", a); // 11
    }
    ++a;               // 2
    printf("%d\n", a); // 2

    return 0;
}
