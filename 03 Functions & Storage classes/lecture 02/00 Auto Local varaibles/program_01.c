#include <stdio.h>
int add(int, int);
int main() {
    int a = 10, b = 20, sum;
    sum = add(a, b);
    printf("%d\n", sum);
    return 0;
}
int add(int x, int y) {
    int result;
    result = x + y;
    return result;
}
