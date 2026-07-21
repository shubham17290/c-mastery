#include <stdio.h>
int mult(int x, int y) {
    int result;
    result = x * y;
    return result;
}
int main() {
    int a = 20, b = 30, ans;
    ans = mult(a, b);
    printf("%d\n", ans);

    return 0;
}
