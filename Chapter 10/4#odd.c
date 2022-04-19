#include <stdio.h>

int main()
{
    FILE *fptr;
    int n;
    fptr = fopen("Odd.txt", "w");
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    return (0);
}