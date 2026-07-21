#include <stdio.h>

int mul(int, int);
// forward declation

void main() {
    int a = 10, b = 30, ans;
    ans = mul(a, b);
    printf("%d\n", ans);
}
int mul(int x, int y) {
    int result;
    result = x * y;
}
