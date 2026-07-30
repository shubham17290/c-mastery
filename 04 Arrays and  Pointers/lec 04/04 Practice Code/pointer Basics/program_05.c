#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    int *(ptr[3]) = {a + 1, a, a + 2};
    int **q;
    // int ptr;
    q = ptr;

    printf("%d \n ", ++q);
    printf("%d \n ", *(++q));
    printf("%d \n ", *&ptr[2]);
    printf("%d \n ", **q);
    printf("%d \n ", ptr[2]);

    return 0;
}
