#include <stdio.h>

int main() {
    int a;

    // The main expression from the image
    //  this equation tell us about the concept of the short circuit evaluations
    a = 5 < 12 ? (printf("GATE") && printf("Wallah")) || printf("2023") : printf("Sir");

    printf("%d", a);
    //  output : GATEWallah1

    return 0;
}
