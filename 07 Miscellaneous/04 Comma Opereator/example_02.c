#include <stdio.h>

int main() {
    int i, j;
    i = 2;
    j = (i = i + 1, i = i + 6, i + 4);
    printf("%d %d\n", i, j);

    return 0;
}
