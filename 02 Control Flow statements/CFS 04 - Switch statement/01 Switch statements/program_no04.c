#include <stdio.h>

int main() {
    int i = 3;

    switch (i + 3) {
    case 1:
        printf("1");
        break;

    case 7:
        printf("7");
        break;
    }

    return 0;
}
// as we know there is no need to have the else with if always
