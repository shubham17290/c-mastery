#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 10; i <= 100; i++)
    {
        
        count = count + 1; // will help in the finding the total count 
    }
//  simple hack to find the total , formula [ count = last number - first number +1]
    printf("%d", count);
    return 0;
}