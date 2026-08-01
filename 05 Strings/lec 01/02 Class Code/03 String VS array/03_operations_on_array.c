#include <stdio.h>

int main() {
    char name[10] = "shubham ";
    printf("%s\n", name);
    // name++; // error;
    printf("%s\n", name + 1); // &name[1] = "hubham "
    printf("%s\n", name + 3); // &name[3] = "bham "

    return 0;
}
