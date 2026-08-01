#include <stdio.h>
#include <string.h>

struct stu {
    int roll;
    char name[20];

    struct date_of_birth {
        int day;
        int month;
        int year;
    } DOB;
};

int main() {
    struct stu s;

    return 0;
}
