#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(arr + 2));  //This will return 3 since there are 3 numbers (0+2)
    printf("%d\n", *(arr + 5)); //This will return 0 since there is no fifth element
    return (0);
}