#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    a[0] = 100; // Update the value at index 0
    a[2] = 700; // Update the value at index 2
    printf("After doing all the updation in the array\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
