#include <stdio.h>

int main() {
    int i = 3;

    switch (i + 3) {
    case 5:
        printf("5");
        break;

    default:
        break;

    case 7:
        printf("7");
        break;
    }

    return 0;
}
//
