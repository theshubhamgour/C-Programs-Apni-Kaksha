#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter Price for three element ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
printf("Price of %f element after adding GST is: %f\n",price[0],price[0]+(0.18*price[0]));
printf("Price of %f element after adding GST is: %f\n",price[1],price[1]+(0.18*price[1]));
printf("Price of %f element after adding GST is: %f\n",price[2],price[2]+(0.18*price[2]));
    return (0);
}