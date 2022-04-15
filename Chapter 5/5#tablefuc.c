// Program prints the table of the given number with the help of function

#include <stdio.h>

int table(int a);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = table(n); //argument -->actual parameter
    printf(" ",s);
    return (0);
}

int table(int n) //parameter -->formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,i*n); 
    }
}

/*
NOTE
a. Function can only return one value at a time
b. Changes to parameters in function don't change the values in
calling function.
Because a copy of argument is passed to the function

*/