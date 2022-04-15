// Program which stops executing when an odd number is detected
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("thank you!");
    return (0);
}