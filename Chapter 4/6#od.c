// Program to print all the odd number which lies between 5 till 50
#include <stdio.h>

    int main(){
for (int i = 5; i <= 50; i++)
{
    if (i %2 !=0)
    {
        printf("%d\n",i);
    }
    
}

    return(0);
}