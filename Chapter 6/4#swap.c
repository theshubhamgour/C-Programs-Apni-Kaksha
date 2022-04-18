#include <stdio.h>
void swap(int a, int b);
int main()
{
    int x = 45;
    int y = 46;
    swap(x, y);
     printf("\n\n X = %d  Y= %d", x, y);
    return (0);
}
// Call by value
void swap(int a, int b)
{
    int s;
    s = a;
    a = b;
    b = s;
    printf("Value after swapping is: \n A = %d  B = %d", a, b);
}