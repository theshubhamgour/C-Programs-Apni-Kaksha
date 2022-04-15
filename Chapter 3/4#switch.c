// switch(number) {
// case C1: //do something
//  break;
// case C2 : //do something
//  break;
// default : //do something
// }

#include <stdio.h>

int main()
{
    int number;
    printf("Enter number from 0 to 9: ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Number entered is 1");
        break;
    case 2:
        printf("Number entered is 2");
        break;
    case 3:
        printf("Number entered is 3");
        break;
    case 4:
        printf("Number entered is 4");
        break;
    case 5:
        printf("Number entered is 5");
        break;
    case 6:
        printf("Number entered is 6");
        break;
    case 7:
        printf("Number entered is 7");
        break;
    case 8:
        printf("Number entered is 8");
        break;
    case 9:
        printf("Number entered is 9");
        break;
    case 0:
        printf("Number entered is 0");
        break;

    default:
        printf("Invalid entry");
        break;
    }
    return (0);
}