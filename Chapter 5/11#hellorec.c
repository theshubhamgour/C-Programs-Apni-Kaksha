// Program to print hello world 15 times using recursion in function

#include <stdio.h>
void hello(int count);
int main()
{
    hello(15);
    return (0);
}
void hello(int count)
{
    if (count==0)
    {
        return;
    }
    printf("Hello world!\n");
    hello(count-1);
}