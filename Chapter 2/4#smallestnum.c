// Program to print the smallest number
#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    printf("Smallest number: %d", number2 > number1 ? number1 : number2);
    return (0);
}
