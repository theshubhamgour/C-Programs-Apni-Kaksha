// Program to print the fibonacci series
#include <stdio.h>
int fibo(int n);
int main()
{
    printf("%d", fibo(6));
    return (0);
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fib = fibo(n - 1);
    int fib2 = fibo(n - 2);
    int fibf = fib + fib2;
    return fibf;
}