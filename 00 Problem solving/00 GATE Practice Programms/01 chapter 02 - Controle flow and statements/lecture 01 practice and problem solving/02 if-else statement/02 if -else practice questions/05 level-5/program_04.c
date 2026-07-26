
//  Q : 24  (Short Circuit Evaluation) ⭐⭐⭐⭐⭐
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    if (++a || ++a) {
        printf("If have non-zero value\n");
    } else {
        printf("If have zero value\n");
    }

    return 0;
}
