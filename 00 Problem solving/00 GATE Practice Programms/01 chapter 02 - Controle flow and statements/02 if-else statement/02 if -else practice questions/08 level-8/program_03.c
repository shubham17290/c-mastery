//  Level 8 (Character Based) ⭐⭐⭐⭐
//  Q - 36
#include <stdio.h>

int main() {
    char ch;

    // User se character input lena
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Sirf ek IF aur ek ELSE
    if (ch >= '0' && ch <= '9') {
        printf("'%c' is an decimal number .\n", ch);
    } else {
        printf("'%c' is not an decimal number .\n", ch);
    }

    return 0;
}
