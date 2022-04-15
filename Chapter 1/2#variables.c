// *Variables:
//             Variable is the name of a memory
//             location which stores some data.

// *Rules:
//             a. Variables are case sensitive
//             b. 1st character is alphabet or '_'
//             c. no comma/blank space
//             d. No other symbol other than '_'

// *Keywords:
//         Reserved words that have special
//         meaning to the compiler

#include <stdio.h>
void main()
{
    int number = 45;
    int age = 18;
    int price = 336; 
    printf("The value of number is: %d\n",number);
    printf("The value of is age : %d\n",age);
    printf("The value of price is: %d\n",price);

    float PI = 3.142;
    float salary = 456.89;
    float average = 459.665;
    printf("The value of PI is: %f\n",PI);
    printf("The value of salary is: %f\n",salary);
    printf("The value of price is: %f\n",average);

}

//NOTE: C programming language does'nt have boolean and string 
// datatype.