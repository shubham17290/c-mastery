#include <stdio.h>
#include <string.h>

// Date of Birth Structure
struct date_of_birth {
    int day;
    int month;
    int year;
};

// Student Structure
struct stu {
    int roll;
    char name[20];

    struct date_of_birth DOB;
};

int main() {
    // Valid
    struct date_of_birth d;

    // Valid
    struct stu s;

    return 0;
}
