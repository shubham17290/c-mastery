//  Level 8 (Character Based) ⭐⭐⭐⭐
//  Q - 36
#include <stdio.h>

int main() {
    char ch;

    // User se character input lena
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Sirf ek IF aur ek ELSE
    if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is an lowercase alphabet.\n", ch);
    } else {
        printf("'%c' is NOT an lowercase alphabet.\n", ch);
    }

    return 0;
}
