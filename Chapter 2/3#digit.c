// Program to check whether a character entered is a digit or not
#include <stdio.h>
#include <ctype.h>

int main()
{
    char TestChar;
    printf("Enter a TestChar: ");
    scanf("%c", &TestChar);
    if (isdigit(TestChar))
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return (0);
}