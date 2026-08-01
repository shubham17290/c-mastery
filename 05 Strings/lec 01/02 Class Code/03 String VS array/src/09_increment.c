#include <stdio.h>

int main() {
    char *ptr = "shubham";
    printf("%s\n", ptr);
    printf(ptr);
    // here the %s is optional in printf function, if we don't use it then also it will print the
    // string.
    printf("\n");
    printf("Hello\n");
    printf("Hello\n" + 1);

    return 0;
}
