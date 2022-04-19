#include <stdio.h>
#include <string.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex num1 = {5, 8};
    struct complex *ptr = &num1;
    printf("Real Part = %d\n", ptr->real);
    printf("Imaginary part = %d\n", ptr->img);
    return (0);
}