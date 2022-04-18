#include <stdio.h>
char checkch(char str[], char ch);
int main()
{
    char str[] = "Shubham";
    char ch = 'a';
    checkch(str, ch);
}
char checkch(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("The character is present");
            return;
        }
        }
    printf("The character is NOT present");
}