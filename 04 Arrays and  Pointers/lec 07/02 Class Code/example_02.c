#include <stdio.h>

int main() {
    void *p;
    int a = 10;
    float b = 17.38;
    p = &a;
    //  so do the type casting , *(int *)p
    printf("%d\n", *(int *)p); // this will through an error because there is perfect assignment of
                               // the void pointe !

    return 0;
}
