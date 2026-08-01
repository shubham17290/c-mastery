#include <stdio.h>

int main() {
    char name[10] = "shubham ";
    printf("%s\n", name);

    name[1] = 'U'; // Update the value at index 1

    printf("%s\n", name);
    return 0;
}
