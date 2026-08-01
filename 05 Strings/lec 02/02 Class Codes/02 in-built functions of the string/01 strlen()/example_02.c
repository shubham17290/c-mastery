#include <stdio.h>
int mystrlen(const char *);

int main() {
    int i;
    char *ptr = "Neeraj";

    i = mystrlen(ptr);

    printf("%d", i);
}

int mystrlen(const char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}
