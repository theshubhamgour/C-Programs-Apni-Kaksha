#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("The sum is: %d", s);
    return (0);
}

int sum(int a, int b)
{
    return a + b;
}