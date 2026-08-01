#include <stdio.h>
#include <string.h>
int main() {

    //  structure of strcat() = strcat(destination, source);
    //  it just append the source string to the destination string and return the destination
    //  string.
    char arr[20] = "shubham";
    strcat(arr, " maurya ");
    printf("%s\n", arr);

    return 0;
}
