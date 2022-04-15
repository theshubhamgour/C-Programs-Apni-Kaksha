// Program to find average of three number
#include <stdio.h>

    int main(){
        int num1,num2,num3;
        float avg;
        printf("Enter the number: \n");
        scanf("%d",&num1);
        printf("Enter the number: \n");
        scanf("%d",&num2);
        printf("Enter the number: \n");
        scanf("%d",&num3);
        
        avg = (num1+num2+num3)/3;
        printf("The average is: %f",avg);
    return(0);
}