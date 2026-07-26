#include <stdio.h>

int main() {
    int a = 5;
    printf("%d\n", a << 1); // this change is not permanent it is based on the instance
    printf("%d\n", a);      // here you will have your old value as the output

    return 0;
}
