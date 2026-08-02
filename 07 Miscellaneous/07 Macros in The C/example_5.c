#include <stdio.h>
union A {
    char c;
    int a;
};

int main() {
    union A x = {'A'};
    printf("%c\n", x.c); // x.c --> will equal to  -> A
    printf("%d\n", x.a); // 65

    return 0;
}
