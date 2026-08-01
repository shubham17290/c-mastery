#include <stdio.h>
#include <string.h>
struct stu {
    int roll;
    char name[20];
};
int main() {
    struct stu s1 = {10, "shubham"};

    struct stu s2 = s1;
    
    struct stu s3 = {"pankaj", 20};

    return 0;
}
