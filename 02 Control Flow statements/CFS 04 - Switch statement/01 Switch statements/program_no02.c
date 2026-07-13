#include <stdio.h>

int main() {
    int i = 3;

    switch (i) {
    case 3:
        printf("three\n");

    case 4:
        printf("four\n");
        break;

    case 5:
        printf("five\n");
        break;

    default:
        printf("Wrong\n");
        break;
    }

    return 0;
}
//
