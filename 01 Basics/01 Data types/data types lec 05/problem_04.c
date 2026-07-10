#include <stdio.h>

int main()
{

// swapping two numbers using the 3rd number 
int a , b ,c ;
a = 10;
b = 20;
printf("the number a= %d and b  is  = %d\n", a, b);
c = a;
a = b;
b = c;


printf("now the number a is become = %d  and the b is become = %d\n", a , b);

return 0;
}