//  Printing the reverse of the inputted integer number !

#include <stdio.h>

int main()
{
    int n, reverse, last;

    printf("Enter value: ");
    scanf("%d", &n);

    reverse = 0;
    while(n > 0 )
    {
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    printf("the reverse of the number is = %d \n", reverse);

    return 0;
}
