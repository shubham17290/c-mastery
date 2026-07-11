//  WAP to print the largest among 3 umbers 

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {

        printf("%d is largest", a);
    }

    else if (b > a && b > c)
    {

        printf("%d is largest", b);
    }

    else if (c > a && c > b)
    {

        printf("%d is largest", c);
    }
    else
    {
        printf("the numbers %d %d %d are equal\n", a, b, c);
    }

    return 0;
}