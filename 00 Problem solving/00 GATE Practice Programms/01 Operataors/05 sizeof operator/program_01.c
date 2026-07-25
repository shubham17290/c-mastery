#include <stdio.h>

int main() {
    char ch = 'A';

    printf("%u\n", sizeof(ch));   // Here, sizeof() is used on a 'variable' (ch)
    printf("%u\n", sizeof(char)); // Here, sizeof() is used on a 'data type' (char)

    return 0;
}
