//  this is the post-increment
#include <stdio.h>

int main() {
    int a = 5;
    a++;                                // Pehle old value use hogi, baad mein increment hoga.
    printf(" value of a is = %d\n", a); // here a does used first
                                        //  increment in a
    printf(" value of a is = %d\n", a); // a= 6

    return 0;
}
