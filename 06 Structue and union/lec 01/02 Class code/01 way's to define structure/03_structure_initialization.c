#include <stdio.h>
#include <string.h>
typedef struct student {
    int roll;
    char name[20];
} Student; // this is new-datatype structure student --> template / structure or blueprint
int main() {
    Student s1, s2;

    s1.roll = 10;
    strcpy(s2.name, "Ravi");
    printf("%d\n", s1.roll);
    printf("%s\n", s2.name);
    return 0;
}
