// Program to write two function one to print hello and second to print goodbye
#include <stdio.h>
void Hello();
void Bye();
int main()
{
    Hello();
    Bye();
    printf("\n\nFir call karte hain!!\n\n");
    Hello();
    Bye();
    return (0);
}

void Hello()
{
    printf("Hello\n");
}
void Bye()
{
    printf("Good Bye!\n");
}