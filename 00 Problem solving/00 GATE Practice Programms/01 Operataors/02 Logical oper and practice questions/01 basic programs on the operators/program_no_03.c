
// Short circuit evaluation : logical AND opr

#include <stdio.h>

int main() {
    if (5 > 3 || printf("Hello")) {
        printf("World");
    }

    return 0;
}
//  the output is : world
