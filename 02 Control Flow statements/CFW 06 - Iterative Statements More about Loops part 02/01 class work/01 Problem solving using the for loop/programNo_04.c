#include <stdio.h>

int main() {
    int prod;
    prod = 1;
    for (int i = 1; i <= 7; i++) {
        prod = prod * i;
    }
    printf("%d\n", prod);

    return 0;
}
