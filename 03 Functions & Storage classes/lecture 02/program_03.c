#include <stdio.h>

int fun1() {

    int x = 10, y = 20;

    printf(" the output is %d and this is from fun1()\n", x + y);

    return 0;
}

int main() { // main is mainly for the linker to execute it fully and to generate the exe file pr
             // .out file
    int a = 20, b = 10;
    printf("out put is %d and this is from main \n", a + b);

    fun1();
}
