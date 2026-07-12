#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    //  note the scope of the for loop is to first semicolon , if you are note initialized the brackets
    //  Block no = 01
    for (int i = 1; i <= n; i++)
    {
        //  Block no = 02
        for (int j = 0; j < n; j = j*2)
        {
            printf("shub sir \n"); 
        } 
    }
    return 0;
}

// total count the block will be executed   = block 1* block 2 = n (1 + log2(n))= n + nlog2(n)
