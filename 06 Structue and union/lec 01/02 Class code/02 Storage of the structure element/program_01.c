#include <stdio.h>

// Structure Definition
struct stu {
    int roll;
    char name[30];
};

// Function Prototype
void display(struct stu t);

int main() {
    // Structure Variable Declaration
    struct stu s;

    // Taking Input
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    gets(s.name); // to consume the newline character left by scanf
    fgets(s.name, sizeof(s.name), stdin);

    // Passing Structure to Function
    display(s);

    return 0;
}

// Function Definition
void display(struct stu t) {
    printf("\n----- Student Details -----\n");

    printf("Roll Number = %d\n", t.roll);
    printf("Name        = %s\n", t.name);
}
