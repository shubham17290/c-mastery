#include <stdio.h>
#include <stdlib.h>

void fun() {
    printf("Inside fun()\n");
    exit(0);

    printf("Hello\n");
}

int main() {
    printf("Start\n");

    fun();

    printf("End\n");

    return 0;
}
