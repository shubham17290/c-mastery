//  Level 11 (printf() in if) ⭐⭐⭐⭐⭐
//  Q:45
#include <stdio.h>

int main() {
    if (printf("%d\n", 100)) {
        printf("if chal gya bhai\n");
    }

    else {
        printf("condition has zero vlaue");
    }
    return 0;
}
