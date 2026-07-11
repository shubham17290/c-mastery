#include <stdio.h>

void main()
{

    //  Code is about finding the largest among two numbers
    int a, b, max;

    printf("Enter2 numbers ");

    scanf("%d %d", &a, &b);

    // max = (a > b) ? a : b;
    if (a>b){
        max = a;
       
    }

    else{
        max = b;
    }
    printf("%d\n", max);

    return 0;
}