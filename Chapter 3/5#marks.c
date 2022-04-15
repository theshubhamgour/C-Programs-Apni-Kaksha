// Program to find whether a student is pass or fail
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    /* if (marks < 30)
     {
         printf("You are failed");
     }
     else if (marks >= 30 && marks <= 100)
     {
         printf("Congratulations You are passed!");
     }

     else
     {
         printf("Invalid entry");
     }
 */

    // Same Program can we written in one line using ternary conditon
    // NOTE: TERNARY IS ONLY USED FOR SIMPLE CONDITIONS
    marks >= 30 && marks <= 100 ? printf("Congratulations You are passed!") : printf("You are failed");
}