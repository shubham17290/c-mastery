
//  Q : 21 (Short Circuit Evaluation) ⭐⭐⭐⭐⭐
#include <stdio.h>

int main()
{
    int a = 5;
    if (a != 0 && 10 / a) {
        printf("If have non-zero value\n");
    }
    else{
        printf("If have zero value\n");
    }

    return 0;
}
