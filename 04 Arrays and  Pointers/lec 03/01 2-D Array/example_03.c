#include <stdio.h>

int main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf(" the value of the a[1]  = %u\n", a[1]);
    printf(" the value of the a[1]+1 = %u\n", a[1] + 1);
    printf(" the value of the *(a[1]+1) = %u\n", *(a[1] + 1));
    printf("the value of the *(a[1]+2) = %u\n", *(a[1] + 2));

    return 0;
}
