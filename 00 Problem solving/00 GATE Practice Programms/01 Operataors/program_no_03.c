#include <stdio.h>

int main() {
    int a;
    a = 4.0 * 3 % 5 + 6;
    //  error: invalid operands to binary % (have 'double' and 'int')
    printf("%d\n", a);

    return 0;
}
