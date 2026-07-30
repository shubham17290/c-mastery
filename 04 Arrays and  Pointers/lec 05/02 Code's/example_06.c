#include <stdio.h>

int main() {
    int a = 160; // 160 = 128+32
    char *p;
    p = (char *)&a;
    printf("%d\n", *p);

    return 0;
}
