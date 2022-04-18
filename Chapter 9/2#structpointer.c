#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {45, 89.9, "Barry"};
    printf("Student roll number: %d\n", s1.roll);

    struct student *ptr = &s1; // here we pointed out to the enitre structure
    printf("Student roll = %d\n", (*ptr).roll);
    printf("Student roll using -> = %d\n", ptr->roll); // we can make use of -> instead of * (optional)
    return (0);
}