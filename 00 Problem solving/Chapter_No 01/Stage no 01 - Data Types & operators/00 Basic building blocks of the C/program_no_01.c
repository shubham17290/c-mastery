#include <stdio.h>

int main() {
    int a, b, c;
    a = 10;
    b = 30;
    c = 40;
    printf("%d%d%d\n ", a, b,
           c); // output = 102030-> confusion : people thinks the number will print in the next line
               // in that , but that \n is for the upcoming lines now for the that particular line
               // in which , you have just call to print the variables by using printf !

    return 0;
}
