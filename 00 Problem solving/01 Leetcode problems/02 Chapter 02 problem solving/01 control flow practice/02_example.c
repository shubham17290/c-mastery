#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, max;

    printf("Enter 7 values: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    // Update max step-by-step using ternary logic
    max = (a >= b && a >= c && a >= d && a >= e && a >= f && a >= g) ? a
          : (b >= c && b >= d && b >= e && b >= f && b >= g)         ? b
          : (c >= d && c >= e && c >= f && c >= g)                   ? c
          : (d >= e && d >= f && d >= g)                             ? d
          : (e >= f && e >= g)                                       ? e
          : (f >= g)                                                 ? f
                                                                     : g;
    printf("Largest number is: %d\n", max);

    return 0;
}
