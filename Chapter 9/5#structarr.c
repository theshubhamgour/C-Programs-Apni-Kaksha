#include <stdio.h>
#include <string.h>
struct address
{
    int housenumber;
    int block;
    char city[100];
    char state[100];
};
void printadd(struct address add);
int main()
{
    struct address adds[5];
    // input
    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].housenumber);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[1].housenumber);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3: ");
    scanf("%d", &adds[2].housenumber);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 4: ");
    scanf("%d", &adds[3].housenumber);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 5: ");
    scanf("%d", &adds[4].housenumber);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);
    return (0);
}

void printadd(struct address add)
{
    printf("Address is: %d, %d, %s, %s\n", add.housenumber, add.block, add.city, add.state);

}