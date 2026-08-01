#include <stdio.h>
#include <string.h>
int main() {

    //  strcpy() is used to copy the string from source to destination. -- > and this is also copy
    //  the null character '\0' at the end of the string.
    char arr[10] = "Shubham maurya";
    strcpy(arr, "Ram");

    printf("%s\n", arr);
    printf("%s\n", arr + 4);

    return 0;
}
