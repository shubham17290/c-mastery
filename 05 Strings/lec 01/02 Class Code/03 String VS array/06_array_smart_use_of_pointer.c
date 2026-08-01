// array' using the pointer and the for loop. The pointer is used to access the elements of the
// array by incrementing it in each iteration of the loop. This demonstrates how pointers can be
// used to traverse and manipulate arrays in C.
#include <stdio.h>

int main() {
    char name[10] = "shubham ";
    printf("%c\n", *name);
    for (int i = 0; i < 7; i++) {
        printf("%c", *(name + i));
    }
    return 0;
}
