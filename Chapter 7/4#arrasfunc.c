#include <stdio.h>

// we can use both notations arr[] or *arr both are same
void number(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    number(arr, 6);
    return (0);
}
void number(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t ", arr[i]);
    }
    printf("\n");
}