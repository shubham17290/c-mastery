#include <stdio.h>

int main() {
    int a;

    a = printf("Pankaj") && 3; // 1st output : pankaj
    printf("%d\n", a);         // 1
                               //  Total output --> pankaj1
    return 0;
}
