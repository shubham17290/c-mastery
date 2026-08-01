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
