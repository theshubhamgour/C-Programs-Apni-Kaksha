// program to calculate area of square and rectangle and circle.

#include <stdio.h>
#include <math.h>
float circle(float radius);
int rectangle(int length, int breadth);
int square(int side);
int main()
{
    float radius = 4.2;
    int side = 4;
    int length = 2;
    int breadth = 3;
    circle(radius);
    square(side);
    rectangle(length,breadth);
    return (0);
}

float circle(float radius)
{
    float PI = 3.142;
    float area;
    area = PI * radius * radius;
    printf("Area of circle is: %f\n", area);
}

int square(int side)
{
    int area2;
    area2 = side * side;
    printf("Area of square is: %d\n", area2);
}

int rectangle(int length, int breadth){
    int area3;
    area3 = length*breadth;
    printf("The area of rectangle is: %d\n",area3);
}