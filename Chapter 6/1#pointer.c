// pointer is used to store address

#include <stdio.h>

int main()
{
    int age = 24;
    int *ptr = &age;
    int _age = *ptr;
printf("The value is: %d\n",age);
printf("The value is: %d\n",&age);
printf("The value is: %d\n",_age);
printf("The value is: %d\n",*ptr);

printf("The address is : %p\n",&age);
printf("The address is : %d",*(&age));

    return (0);
}