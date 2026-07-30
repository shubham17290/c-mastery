#include <stdio.h>

// Define fun() before main so the compiler knows it exists.
// 'int arr[]' is equivalent to 'int *arr'
void fun(int arr[]) {
    arr[0] = 99; // Modifies original a[0]
    arr[1] = 88; // Modifies original a[1]
}

int main() {
    int a[4] = {10, 20, 30, 40};

    // Passes pointer to the first element (&a[0])
    fun(a);

    printf("%d %d\n", a[0], a[1]); // Output: 99 88

    return 0;
}
