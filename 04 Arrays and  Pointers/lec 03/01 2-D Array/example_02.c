#include <stdio.h>

int main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf(" the value of the a[0]  = %u\n", a[0]);
    printf(" the value of the a[0]+1 = %u\n", a[0] + 1);
    printf(" the value of the *(a[0]+1) = %u\n", *(a[0] + 1));
    printf("the value of the *(a[0]+2) = %u\n", *(a[0] + 2));

    return 0;
}
