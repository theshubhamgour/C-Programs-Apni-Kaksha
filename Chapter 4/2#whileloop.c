// while(condition) {
// //do something
// }

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 100;
    char ch;
    while (i <= 5)
    {
        printf("Hello world\n");
        i++;
    }

    printf("------------------\n");

    // To print number from 1 to 100
    while (i <= 100)
    {
        printf("The number is: %d\n", i);
        i++;
    }

    printf("------------------\n");

    // To print number from 1 to 100 in REVERSE MANNER
    while (j >= 1)
    {
        printf("The number is: %d\n", j);
        j--;
    }

    printf("------------------\n");

    // To print number from 1 to 100 in REVERSE MANNER
    while (j >= 1)
    {
        printf("The number is: %d\n", j);
        j--;
    }
    return (0);
}