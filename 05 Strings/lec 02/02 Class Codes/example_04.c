#include <stdio.h>

int main() {
    char p[] = "shubham";
    char q[] = "shubham";
    if (p == q) {
        printf("Both are same\n");
    } else {
        printf("Both are not same\n");
    }
    return 0;
}
//  the output is "Both are not same" because p and q are two different arrays in memory, even though they contain the same string. In C, when you declare an array like this, each array has its own separate memory allocation. Therefore, p and q point to different memory addresses, resulting in the comparison being false.
