#include <stdio.h>

int fun1() {

    int a = 10, b = 20;

    printf(" the output is %d and this is from fun1()\n", a + b);

    return 0;
}

int main() { // main is mainly for the linker to execute it fully and to generate the exe file pr
             // .out file
    int x = 20;
    printf("out put is %d and this is from main \n", a + x); // a is not accessible here
}
