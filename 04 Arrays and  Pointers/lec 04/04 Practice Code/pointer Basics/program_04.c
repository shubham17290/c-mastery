#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    int *p;
    p = &a[0];
    printf("the value of the p = p+1 =  %u\n", p = p + 1);
    printf("the value of the p++ =  %u\n", p++);
    printf("the value of the p = p +2 = %u\n", p = p + 2);
    printf("the value of the p = p+3 = %u\n", p = p + 3);

    return 0;
}
