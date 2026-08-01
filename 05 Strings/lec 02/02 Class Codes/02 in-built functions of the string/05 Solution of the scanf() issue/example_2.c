#include <stdio.h>
#include <string.h>
int main() {
    // int i;

    char arr[20];
    //  to handle the scanf() issue, we can use the following approach:gets()
    printf("Enter your name: ");
    gets(arr); // this is the solution of the scanf() issue, but this is not a good approach because
               // it can cause buffer overflow. So, we can use the following approach: fgets()
    // fgets(arr, sizeof(arr), stdin); // this is the solution of the scanf()

    printf("%s\n", arr);

    return 0;
}
