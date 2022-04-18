#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 45;
    int y = 46;
    swap(&x, &y);
    printf("\nValue of X = %d  Y = %d", x, y);
    return (0);
}

// Call by refernece
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nThe Value is: A = %d  B = %d", *a, *b);
}