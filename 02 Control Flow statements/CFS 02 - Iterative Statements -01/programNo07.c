
//  this loop will run upto 255 times and , at the last or end it will come at 0 then it will fail and print the END and the total count 

#include <stdio.h>

void main()
{
    char ch = 1;
    int count = 0;
    for (ch = 1; ch; ch++){
        
        printf("sir\n");
        count = count + 1;
    }
        printf("END\n");
        printf("%d\n", count);
}

