#include <stdio.h>

int main() {

    int a = 300;
    char *p;
    p = (char *)&a; // this is -> type casting
    printf("%d\n", *p);

    return 0;
}
