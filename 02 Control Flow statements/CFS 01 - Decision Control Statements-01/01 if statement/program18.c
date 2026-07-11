// WAP TO READ A NUMBER FROM KEYBOARD IF IT IS EVEN THEN PRINT "SHUBHAM"

#include <stdio.h>

int main()
{
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("number n = %d is even\n", n);
    }

    return 0;
}