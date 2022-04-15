// {
// //do something
// } while(condition);

#include <stdio.h>

int main()
{
    int i = 1;
    int num, sum = 0;

    // Print from 1 to 5
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    printf("\n-------------------------------------------\n");
    // print sum of n natural numbers
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Value of sum of n natual number is: %d", sum);

    printf("\n-------------------------------------------\n");
    printf("Printing numbers in reverse order");
    for (int i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return (0);
}