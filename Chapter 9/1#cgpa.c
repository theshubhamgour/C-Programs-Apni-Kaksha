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
    struct student s1;
    s1.roll = 45;
    s1.cgpa = 7.9;
    // s1.name = "Barry";  //this will throw an error since we are passing value to a pointer
    strcpy(s1.name, "Shubham");

    printf("\nStudent name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 55;
    s2.cgpa = 9.9;

    strcpy(s2.name, "Shubh");

    printf("\nStudent name = %s\n", s2.name);
    printf("Student roll = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct student s3 = {"Hanuman", 45, 10.0}; // this is called intializing struct in one shot
    strcpy(s3.name, "Hanuman");
    printf("\nStudent name = %s\n", s3.name);
    printf("Student roll = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);
    return (0);
}