//  01 : taking input form the user and printing it onto the terminal
/*
#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("the value is  : %d", a);
}
*/
//  02 : Read 2 integer values and print their sum : method 01
/*
#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("The sum of %d and %d is %d", a, b, c);
}
 */
//  method 02 : for gate and interviews this approach is preferred
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    c = a + b;

    printf("Sum of %d and %d = %d\n", a, b, c);

    return 0;
}
