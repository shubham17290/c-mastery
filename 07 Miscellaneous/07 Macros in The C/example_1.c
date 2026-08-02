//  preprocessor directive to include standard input-output header file

#define Max 20
#include <stdio.h>
int main() {
    int i;
    i = Max + 3;
    printf("%d\n", i);

    return 0;
}
