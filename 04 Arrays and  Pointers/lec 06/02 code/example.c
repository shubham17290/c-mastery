#include <stdio.h>
int add(int, int);
int main() {
    int (*p)(int, int);
    int result;
    p = add;

    result = (*p)(10, 20);
    printf("%d\n", result);

    return 0;
}
int add(int a, int b) { return a + b; }
