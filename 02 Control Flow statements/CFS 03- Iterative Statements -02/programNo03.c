#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= 10; j++)
        {
            printf("Mew Mew");
            count = count + 1;
        }
        printf("\n");
    }
    printf(" this printf will execute = %d times \n ", count);
    return 0;
}