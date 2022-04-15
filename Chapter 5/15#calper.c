// Calculate percentage of three subject
#include <stdio.h>
int percentage(int maths, int science, int CS);
int main()
{
    int maths = 98;
    int science = 97;
    int CS = 100;
    printf("The Percentage is: %d", percentage(maths, science, CS));
    return (0);
}

int percentage(int maths, int science, int CS)
{
    return ((maths + science + CS) / 3);
}