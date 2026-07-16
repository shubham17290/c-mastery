
#include <stdio.h>

int main() {

    int n;

    printf("Enter number of row's:  ");

    scanf("%d", &n);
//  Logic for the : increament triangle by it's repeating numbers in the row 
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d", row);
        }
        printf("\n");
    }

    return 0;
}

