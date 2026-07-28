#include <stdio.h>

//  lets see how dereference and address-of operator cancel each other 
int main() {
    int a = 10;
    printf("%d\n", *&*&*&a);

    return 0;
}
