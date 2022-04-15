// program to calculate area of square and rectangle and circle.
// This time try to take input from the user
#include <stdio.h>
float circle(float radius);
int rectangle(int length, int breadth);
int square(int side);
int main()
{
    float radius;
    int length,breadth;
    int side;
    
    printf("Enter the radius: ");
    scanf("%f", &radius);
    
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d", &length,&breadth);

    printf("Enter the side of the square: ");
    scanf("%d",&side);
    
    circle(radius);
    rectangle(length,breadth);
    square(side);
    return (0);
}

float circle(float radius)
{
    float PI = 3.142;
    float area;
    area = PI * radius * radius;
    printf("Area of circle is: %f\n", area);
}

int rectangle(int length, int breadth){
    int area2;
    area2 = length*breadth;
    printf("The area of rectangle is: %d\n",area2);
}

int square(int side){
    int area3;
    area3 = side*side;
    printf("THe area of square is: %d\n",area3);
}