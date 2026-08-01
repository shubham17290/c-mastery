#include <stdio.h>

int main() {
    char *ptr = "shubham";
    printf("%s\n", ptr);
    ptr++;               // ptr is now pointing to the next character in the string, which is 'h'
    printf("%s\n", ptr); // prints "hubham");
    ptr = ptr + 2;
    printf("%s\n", ptr);
    return 0;
}
