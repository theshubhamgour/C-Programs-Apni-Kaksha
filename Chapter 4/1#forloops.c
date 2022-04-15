// for(initialisation; condition; updation) {
// //do something
// }

// Special Things
// - Decrement Operator
// - Loop counter can be float
// or even character
// - Infinite Loop

#include <stdio.h>

int main()
{
    // Print hello world 5 times using for-loop
    for (int i = 0; i <= 5; i++)
    {
        printf("Hello world\n", i);
    }

    printf("------------------\n");

    // To print number from 1 to 100
    for (int i = 0; i <= 100; i++)
    {
        printf("The number is: %d\n", i);
    }

    printf("------------------\n");

    // To print number from 1 to 100 IN REVERSE MANNER
    for (int i = 100; i >= 1; i--)
    {
        printf("The number is: %d\n", i);
    }

    printf("------------------\n");

    // To print alphabets in lower case
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("Alphabets in Lower case: %c\n",ch);
    }
        
     
    printf("------------------\n");


     // To print alphabets in upper case
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("Alphabets in Upper case: %c\n",ch);
    }
        
        return (0);
}