//  Doing this example to understand the difference between string literal and pointer to string
//  literal.
#include <stdio.h>

int main() {
    char *p = "shubham";
    char *q = "shubham";
    if (p == q) {
        printf("Both are same\n");
    } else {
        printf("Both are not same\n");
    }
    return 0;
}

//  the output is "Both are same" because both p and q point to the same string literal in memory. In C, string literals are stored in a read-only section of memory, and identical string literals may be merged by the compiler to save space. Therefore, p and q point to the same memory address, resulting in the comparison being true.
