// Program to convert celcius to farenhit
#include <stdio.h>
float far(float temp);
int main()
{
    float fare = far(37);
    printf("far: %f", fare);

    return (0);
}
float far(float cel)
{
    float far = cel * (9.0 / 5.0) + 32;
    return far;
}