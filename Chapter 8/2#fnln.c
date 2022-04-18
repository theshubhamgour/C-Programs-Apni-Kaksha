#include <stdio.h>
void PrintS(char arr[]);
int main()
{
    char firstName[] = "Shubham";
    char lastName[] = "Gour";
    PrintS(firstName);
    PrintS(lastName);
    return (0);
}
void PrintS(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    
}