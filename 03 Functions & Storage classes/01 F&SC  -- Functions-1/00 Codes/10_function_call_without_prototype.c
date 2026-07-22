#include <stdio.h>
void main() {
    int a = 10, b = 20;
    add(a, b);
}
void add(int x, int y) {
    int result;
    result = x + y;
    printf("%d\n", result);
}
