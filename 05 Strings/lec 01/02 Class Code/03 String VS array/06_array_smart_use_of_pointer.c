#include <stdio.h>

int main() {
    char name[10] = "shubham ";
    printf("%c\n", *name);
    for (int i = 0; i < 7; i++) {
        printf("%c", *(name + i));
    }
    return 0;
}
