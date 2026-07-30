#include <stdio.h>

// 1. Defined OUTSIDE main()
// 2. Uses pointers (*a, *b) to modify actual memory locations
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Pass the addresses of x and y using &
    swap(&x, &y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
