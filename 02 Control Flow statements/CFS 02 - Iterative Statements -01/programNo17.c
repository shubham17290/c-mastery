#include <stdio.h>

int main()
{
    int i = 1;
    for (; ++i<5; )
    //  pre-increment means: 
    //  eg : ++i --> 1. i = i+1  --> then check the condition ,
    //  means , first update then check the condition ! 
    {
        printf("%d", i); // the O/P = 234
    }

    return 0; 

}
