// Example 2: Invalid Age Check

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid Age!\n");
        exit(1); // Exit due to error
    }

    printf("Your age is %d\n", age);

    return 0;
}
