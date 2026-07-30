#include <stdio.h>

int main() {
    int a[4] = {10, 20, 30, 40};
    int *p = a;
    printf("The value of the *p =%d\n", *p); // this is the 
    printf("The value of the *(p+1) =%d\n", *(p + 1));
    printf("The value of the *(p+2) =%d\n", *(p + 2));
    printf("The value of the *(P+3) =%d\n", *(p + 3));

    return 0;
}
