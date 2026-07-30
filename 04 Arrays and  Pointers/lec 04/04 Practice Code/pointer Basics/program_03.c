#include <stdio.h>

int main() {
    char x = 65;
    char *p;

    p = &x;
    printf("%d\n", *p);

    return 0;
}
