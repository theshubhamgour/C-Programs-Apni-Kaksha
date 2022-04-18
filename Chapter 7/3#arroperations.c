#include <stdio.h>

int main()
{
    int aadhar[5];

    // Input

    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &aadhar[i]);
    }

    // Output

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d index: %d",i, aadhar[i]);
    }

    return (0);
}