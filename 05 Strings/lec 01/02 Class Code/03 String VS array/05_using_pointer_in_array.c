#include <stdio.h>

int main() {
    char name[10] = "shubham ";
    printf("%c\n", *name);
    printf("%c\n", *(name + 1));
    printf("%c\n", *(name + 2));
    printf("%c\n", *(name + 3));
    printf("%c\n", *(name + 4));
    printf("%c\n", *(name + 5));
    printf("%c\n", *(name + 6));

    return 0;
}
