#include <stdio.h>

int main() {
    int a, b, c, d, e;

    // Maine yahan scanf add kiya hai taaki variables mein garbage value na aaye
    printf("Enter 5 values for a, b, c, d, e: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Typo fix: 'ia' ko 'a' kar diya
    if (a > b && c < d || e) {
        // Typo fix: "that you" ko "thank you" kar diya
        printf("Thank you for putting an input value \n");
    }

    return 0;
}
