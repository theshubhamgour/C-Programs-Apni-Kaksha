#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeer
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    stu s1;
    coe c1;
    c1.roll = 56;
    c1.cgpa = 56.6;
    strcpy(c1.name, "Pune"); //IMP: Array is a pointer hence needed to copy the value
    printf("Student name: %s\n", c1.name);
    return (0);
}