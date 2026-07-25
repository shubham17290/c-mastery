// program no : 01  Take two numbers from the user and print their summation of the numbers into another variable
#include <stdio.h>

int main() {
    int a, b, c;

    // Clarified the prompt and removed \n for better formatting
    printf("Enter two values: ");

    // Removed the trailing \n
    scanf("%d %d", &a, &b);

    c = a + b;

    // Added context to the output
    printf("Sum = %d\n", c);

    return 0;
}
