#include <stdio.h>
#include <windows.h> // Yeh add karna padega

int main() {
    // Yeh line terminal ko UTF-8 emojis samajhne ke liye force karegi
    SetConsoleOutputCP(CP_UTF8);

    printf("I Love C Programming ❤️\n");

    return 0;
}
