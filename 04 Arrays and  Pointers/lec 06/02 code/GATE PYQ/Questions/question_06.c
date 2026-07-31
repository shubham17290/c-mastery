#include <stdio.h>

void f(int *);

int main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    f(a[1]);

    printf("%d %d\n", a[0][1], a[0][2]);

    return 0;
}

void f(int *P) {
    P--;
    *P = *P * *P;
    P--;
    *P = *P * *P;
}
