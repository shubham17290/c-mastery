#include <stdio.h>

void main() {
    int i = 1;
    if (--i) { // this is going to do , i = 1-1= 0
        printf("2\n");
    }
    {
        printf("%d\n", i);
    }
}
