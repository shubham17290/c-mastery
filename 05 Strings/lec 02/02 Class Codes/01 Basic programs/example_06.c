#include <stdio.h>

int main() {
    char *p = "pankaj" + 3;
    // here the "pankaj" + 3 = &pankaj[3] = &k
    printf(p);

    return 0;
}
