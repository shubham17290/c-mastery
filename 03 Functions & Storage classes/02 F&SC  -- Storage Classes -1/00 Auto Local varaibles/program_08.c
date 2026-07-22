#include <stdio.h>

int main() {
    int a = 10;
    ++a; // a= 11
    {
        ++a;               // a = 12
        printf("%d\n", a); //--> 12
        {
            int b = 5;
            ++a;                   // 13
            printf("%d\n", a + b); // 18
        }
        ++b;                   // error: 'b' undeclared (first use in this function)
        printf("%d\n", a + b); // 19
        printf("%d\n", a);
        13
    }
    ++a;               // 14
    printf("%d\n", a); // 14
    return 0;
}
