#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1); // struct is used here since we will get an error when placed above because compiler didn't know about the datatype struct.

int main()
{
    struct student s1 = {46, 9.8, "ASDA"};
    printinfo(s1);
    return (0);
}
void printinfo(struct student s1)
{
    printf("Student informaion: ");
    printf("Student roll Nos: %d\n", s1.roll);
    printf("Student CGPA: %f\n", s1.cgpa);
    printf("Student Name: %s\n", s1.name);
}