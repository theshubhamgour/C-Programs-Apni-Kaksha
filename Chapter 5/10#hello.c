// Program to print hello world 5 btime using loops in function
#include <stdio.h>
void hello();
int main()
{
    hello();
    return (0);
}

void hello()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("Hello world!!\n");
    }
}