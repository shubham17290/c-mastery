#include <stdio.h>
int mul(int x, int y) {
    int result;
    result = x * y;
    return result;
}
void main() {
    int a, b, ans;
    printf("Enter the number : \n");
    scanf("%d %d", &a, &b);

    ans = mul(a, b);
    printf("%d\n", ans);
}
