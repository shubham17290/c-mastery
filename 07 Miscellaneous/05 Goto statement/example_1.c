#include <stdio.h>

int main() {
    int i = 10;

x:
    printf("%d\n", i);
    i++;
    goto x;

    return 0;
}
