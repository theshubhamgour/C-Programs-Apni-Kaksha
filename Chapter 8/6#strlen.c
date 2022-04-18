#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Shubham";
    printf("%d\n",strlen(name));

    char newstr[] = "NewString";
    char oldstr[] = "OldString";
    strcpy(newstr,oldstr);
    puts(newstr);

    strcat(oldstr,newstr);
    puts(oldstr);

    char first[] = "Apple";
    char second[] = "Banana";
    printf("%d",strcmp(first,second));

    return (0);
}