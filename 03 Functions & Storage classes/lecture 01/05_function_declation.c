#include <stdio.h>

int main() {
    int a = 10, b = 20, ans;
    ans = mul(a, b);
    printf("%d\n", ans);

    return 0;
}
int mul(int x, int y) { return x * y; }
