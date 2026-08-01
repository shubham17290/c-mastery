//  Another way to define structure and initialize structure variable
#include <stdio.h>
#include <string.h>
struct stu {
    int roll;
    char name[20];
};
int main() {
    struct stu s = {10, "Ravi"};
    printf("%d\n", s.roll);
    printf("%s\n", s.name);
}
