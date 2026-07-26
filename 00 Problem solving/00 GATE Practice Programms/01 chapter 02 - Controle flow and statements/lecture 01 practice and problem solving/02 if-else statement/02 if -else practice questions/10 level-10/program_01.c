//  Level 10 (Dangling else) ⭐⭐⭐⭐⭐
//  Q : 41

#include <stdio.h>

int main() {
    int a, b;
    if (a)
        if (b)
            printf("...\n");
        else
            printf("...\n");

    return 0;
}
