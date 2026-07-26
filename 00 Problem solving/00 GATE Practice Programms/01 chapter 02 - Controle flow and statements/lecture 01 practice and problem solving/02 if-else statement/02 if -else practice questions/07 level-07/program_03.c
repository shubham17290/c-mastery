
//  Level 7 (Bitwise vs Logical) ⭐⭐⭐⭐
//  Q: 33

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter value: ");
    scanf("%d %d", &x, &y);

    if (x | y) {
        printf("if has non- zero value %d\n", x | y);
    }

    else {
        printf("if has  zero value %d\n", x | y);
    }
    return 0;
}
