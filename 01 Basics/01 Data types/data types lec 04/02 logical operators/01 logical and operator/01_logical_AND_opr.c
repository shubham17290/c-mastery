/*
1. every non zero treated as true 
2. and zero treated as the false 

*/ 

//  logical operator: 1. logical AND (&&) operator 

//  AND means: simultaneously true = 1 , when not = 0 



#include <stdio.h>

int main()
{
    
    printf("%d\n" , 2&&-5); // = 1
    printf("\n", 2 && 15.5); // =1
    printf("\n", -12 && 0 ); // 0
    printf("\n", 0.0 && 25); // 0

    return 0;
}