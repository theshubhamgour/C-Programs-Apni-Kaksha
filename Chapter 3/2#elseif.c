// if(Condition 1) {
//  //do something if TRUE
// }
// else if (Condition 2) {
//  //do something if 1st is FALSE & 2nd is TRUE
// }

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible for permenant driving licence");
    }
    else if (age >= 13 && age < 18)
    {
        printf("You are eligible for temporary driving licence");
    }
    else if (age >= 10 && age < 13)
    {
        printf("You can learn driving");
    }
    else
    {
        printf("Grow up kid");
    }

    return (0);
}