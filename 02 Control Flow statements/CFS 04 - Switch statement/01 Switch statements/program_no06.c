#include <stdio.h>

int main() {
    int i = 2;
    switch (i) {
        i = i + 2; // this will no execute , because this matching of the condition is only with the case levels not any other part of the code
    case 2:
        printf("2\n");
        break;

    case 4:
        printf("4\n");
        break;
    }
    printf("%d\n", i);
    return 0;
}

