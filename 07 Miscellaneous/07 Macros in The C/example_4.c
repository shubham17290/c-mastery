#include <stdio.h>
union A {
    char c;
    int i;
};

int main() {
    union A a;
    printf("%d\n", sizeof(a));

    return 0;
}
