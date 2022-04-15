// Condition ? doSomething if TRUE : doSomething if FALSE;
#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    age >= 18 ? printf("you are adult") : printf("Not adult");
    // in the above statement we haven't used ';' because we didn't want to terminate the statement.
    return (0);
}