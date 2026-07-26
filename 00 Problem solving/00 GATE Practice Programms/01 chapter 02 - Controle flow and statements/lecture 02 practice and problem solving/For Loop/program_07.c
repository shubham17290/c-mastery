#include <stdio.h>

int main() {
    int i = 1;
    for (; ++i < 5;) {
        printf("%d", i);
    }

    return 0;
}
