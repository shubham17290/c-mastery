#include <stdio.h>

// Structure Definition
struct stu {
    int roll;
    char name[20];
};

// Function Prototype
void display(struct stu *p);

int main() {
    // Structure Initialization
    struct stu s = {10, "Pankaj"};

    // Passing Address of Structure
    display(&s);

    return 0;
}

// Function Definition
void display(struct stu *p) {
    printf("%d\n", (*p).roll);
    printf("%s\n", (*p).name);
}
