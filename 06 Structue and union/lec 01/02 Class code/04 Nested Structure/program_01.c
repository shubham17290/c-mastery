#include <stdio.h>
#include <string.h>

// Structure Definition for Date of Birth
struct date_of_birth {
    int day;
    int month;
    int year;
};

// Structure Definition for Student
struct stu {
    int roll;
    char name[20];

    // Nested Structure
    struct date_of_birth DOB;
};

int main() {
    struct stu s;

    // Student Details
    s.roll = 10;
    strcpy(s.name,
           "Pankaj"); // this will help to copy the value inside the variable name of structure stu

    // Date of Birth // using the nested structure
    s.DOB.day = 2;
    s.DOB.month = 3;
    s.DOB.year = 1982;

    // Display Output
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);

    printf("Date of Birth : %02d/%02d/%04d\n", s.DOB.day, s.DOB.month, s.DOB.year);

    return 0;
}
