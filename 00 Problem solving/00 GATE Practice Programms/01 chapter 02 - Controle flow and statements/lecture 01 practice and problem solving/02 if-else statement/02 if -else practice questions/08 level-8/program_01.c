//  Level 8 (Character Based) ⭐⭐⭐⭐
//  Q - 35
#include <stdio.h>

int main() {
    char ch;

    // User se character input lena
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Sirf ek IF aur ek ELSE
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    } else {
        printf("'%c' is NOT an UPPERCASE alphabet.\n", ch);
    }

    return 0;
}
