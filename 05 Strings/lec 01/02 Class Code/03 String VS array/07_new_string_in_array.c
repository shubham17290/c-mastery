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
    // name = "pankaj"; // This line will cause a compilation error because 'name' is an array and
    // cannot be assigned a new string literal.
    // array name is constant so it can be updated but it cannot be assigned a new string literal.
    return 0;
}
