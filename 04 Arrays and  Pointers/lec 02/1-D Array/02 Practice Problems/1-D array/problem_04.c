#include <stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    printf("%u\n", a);        // this will return the address of the first element of the array
    printf("%d\n", &a);       // this will retrun the address of the whole array
    printf("%d\n", a + 1);    // it will return the address of the second element (base + 4)
    printf("%d\n", &a + 1);   // base + 1*(size of whole array=20)
    printf("%d\n", *(a + 1)); // this will return the element at the a[1] = 20
}
//  Done
