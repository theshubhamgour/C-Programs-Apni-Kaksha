// Program to find whether the entered character is in uppercase or in lowercase
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Entered character is in upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Entered character is in lower case");
    }
    else
    {
        printf("invalid entry, not an alphabetic character");
    }

    return (0);
}