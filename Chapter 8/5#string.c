#include <stdio.h>
int coountlength(char arr[]);

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is: %d", coountlength(name));
    return (0);
}

int coountlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != 0; i++)
    {
        count++;
    }
    return count - 1;
}