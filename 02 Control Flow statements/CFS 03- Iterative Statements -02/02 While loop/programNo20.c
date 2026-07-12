#include <stdio.h>

int main()
{

    // / for loop with jumping statement

    for (int i = 1; i <= 10; i++)
    {
        printf("Hello\n");
        break; // break , eliminate's all iteration when it gets true 
    }
    printf("BYE\n");

    return 0;
}