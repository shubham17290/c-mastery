#include <stdio.h>

int main() {
    printf("%c\n", "Hello"[1]);
    printf("%c\n", *("Hello" + 1));

    return 0;
}
