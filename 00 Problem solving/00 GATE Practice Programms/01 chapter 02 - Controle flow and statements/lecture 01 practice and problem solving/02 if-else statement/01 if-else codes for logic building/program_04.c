//  WAP to take a integer input from KB , if the no is even prog will print 1 otherwise prog will
//  print 0 !

#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    if (n % 2 == 0) // for the even condition
    {
        printf("1\n");
    } else // for the odd condition
    {
        printf("0\n");
    }

    return 0;
}
