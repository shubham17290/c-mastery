//  this  is the program of the call by value
#include <stdio.h>

void change(int x) { x = 100; }

int main() {
    int a = 10;

    change(a);

    printf("%d", a);

    return 0;
}
// , here the x and the a both are the different variables

