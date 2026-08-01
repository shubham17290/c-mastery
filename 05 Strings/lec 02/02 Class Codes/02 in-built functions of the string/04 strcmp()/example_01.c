#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char j;
    i = strcmp("shubham", "shubham");
    printf("%d\n", i);
    printf("%u\n", i);
    j = i;
    printf("%s\n", j);
    return 0;
}
    