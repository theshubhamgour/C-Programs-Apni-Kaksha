#include <stdio.h>
int operation(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a = 5;
    int b = 4;
    int sum, prod, avg;
    operation(a, b, &sum, &prod, &avg);
    printf("Sum is: %d\n",sum);
    printf("Product is: %d\n",prod);
    printf("Average is: %d\n",avg);
    return (0);
}
int operation(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}