#include <stdio.h>
int square(int n);
int _square(int *n);
int main()
{
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("Number = %d\n", number);
    return (0);
}
// Call by value
int square(int n)
{
    n = n * n;
    printf("The square is: %d\n", n);
}

// Call by reference
int _square(int *n){
        *n = (*n) * (*n);
    printf("The square is: %d\n", *n);
}