#include <stdio.h>

int main()
{
    int a;
    a = printf("gate") || printf("2023");


    //  a = 4 || 4 (due to short circuit first will be checked first and , the answer will be printed and the answer will be one(1))
    printf("\n"); // give : space 
    printf("%d\n", a); // a will be printed as the : 1 (means it returned value is true (i.e = 1(non zero)))
    return 0;
}