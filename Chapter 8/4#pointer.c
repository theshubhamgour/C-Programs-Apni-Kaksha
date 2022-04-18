#include <stdio.h>

int main()
{
    char *canchange = "Hello world";
    puts(canchange);
    canchange = "Helloji";
    puts(canchange);

    char cannptchange[] = "Cannot change";
    puts(cannptchange);

    // cannptchange = "Changfe"; // error because wecannot change value in array but same is possible in case of pointer
    puts(cannptchange);
    return (0);
}