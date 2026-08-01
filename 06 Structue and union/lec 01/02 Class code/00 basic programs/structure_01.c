#include <stdio.h>
struct student {
    int roll;
    char name[20];
}; // this is new-datatype structure student --> template / structure or blueprint
void main() {
    struct student s1, s2;
    s1.roll = 10;
    s2.roll = 20;
    strcpy(s1.name, "Ravi");
    strcpy(s2.name, "Ramesh");
}
