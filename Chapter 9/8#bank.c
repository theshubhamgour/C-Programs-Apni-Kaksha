#include <stdio.h>
typedef struct bank
{
    int accountno;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Shubham"};
    acc acc2 = {124, "Shubhank"}; 
    acc acc3 = {128, "Shubhankj"};

    printf("Account number = %d\n", acc1.accountno);
    printf("Name = %s\n", acc1.name);
    return (0);
}