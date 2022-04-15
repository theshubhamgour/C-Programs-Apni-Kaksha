// Program to print amount with gst using function

#include <stdio.h>
void calculateprice(float value);
int main()
{
    float value = 1000.0;
    calculateprice(value);
    printf("The amount is: %f", value);
    return 0;

}

void calculateprice(float value)
{
    value = value + (0.18 * value);
    printf("The amount with GST is: %f\n", value);
}