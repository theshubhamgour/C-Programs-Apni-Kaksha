// Program to print namaste for indian users and Bonjour for French users
#include <stdio.h>
void indian();
void french();
int main()
{
    char ch;
    printf("Enter you nationalitiy: \n (I) for Indian and (F) if you're French: ");
    scanf("%c", &ch);
    if (ch == 'i' || ch == 'I' )
    {
        indian();
    }
    if (ch == 'f' || ch == 'F')
    {
        french();
    }

    return (0);
}
void indian()
{
    printf("\nNamaste!!\n");
}
void french()
{
    printf("\nBonjour!~\n");
}