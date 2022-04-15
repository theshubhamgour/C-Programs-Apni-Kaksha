///Program to find the numberis divisible by two or not
// Return 0 when not divisible and 1 when divisible by 2
#include <stdio.h>
void main()
{
    int num;
    printf("ENter a number: ");
    scanf("%d", &num);
    printf("%d", num % 2 == 0);
}