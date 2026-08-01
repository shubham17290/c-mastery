//   Method 01 -> to initialize structure variable

#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;

    s1.id = 101;
    s1.marks = 95.5;

    printf("ID = %d\n", s1.id);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}
