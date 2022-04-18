#include <stdio.h>

int main()
{
    char str[123];
    // gets(str); //dangeroous and ususally not used
    fgets(str,10 ,stdin);
    puts(str); //multi words input can be taken
    return (0);
}