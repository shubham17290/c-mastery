#include <stdio.h>

int main()
{
    /*
// a <= b
    printf("%d\n", 10 < 20);
    printf("%d\n", 10 <= 20);
    printf("%d\n", 10 <= 10);
    printf("%d\n", 10 <= 20);
*/

    //  a >= b

    printf("%d\n",10 >= 20); // 0
    printf("%d\n", 1 >= 6); // 0
    printf("%d\n", 10 >= 3); // 1
    printf("%d\n", 6 >= 6); // 0
//  '==' equal to operator
    printf("%d\n", 10 == 20); // 0
    printf("%d\n", 10 == 10); // 1
    printf("%d\n", 10 == 80); // 0

    // ' != ' not equal to operator
    printf("%d\n", 10 != 80); // 1
    printf("%d\n", 10 != 10); // 0

    return 0;
}