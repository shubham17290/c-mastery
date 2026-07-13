#include <stdio.h>

int main() {
    int i;
    switch (i = 2) { i = i + 4; }
    printf("%d\n", i); // at upper side the new value is assign to the i (i.e = 2 )

    return 0;
}
