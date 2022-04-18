#include <stdio.h>

int main()
{
    int marks[2][3]; //    _ _ _ | _ _ _
    marks[0][0] = 96;
    marks[0][1] = 66;
    marks[0][2] = 26;

    marks[1][0] = 66;
    marks[1][1] = 26;
    marks[1][2] = 46;

    printf("Marks of First Student %d \n", marks[0][0]);
    printf("Marks of First Student %d \n", marks[0][1]);
    printf("Marks of First Student %d \n", marks[0][2]);

    printf("\nMarks of Second Student %d \n", marks[1][0]);
    printf("Marks of Second Student %d \n", marks[1][1]);
    printf("Marks of Second Student %d \n", marks[1][2]);
    return (0);
}