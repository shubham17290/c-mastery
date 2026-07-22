/*#include <stdio.h>

int main() {
    static int i = 10;
    static int j = i; // this is invalid

    return 0;
}
 */

#include <stdio.h>

int main() {
    static int i = 10;
    static int j = 20; // this is invalid
    printf("%d %d", i, j);
    return 0;
}
