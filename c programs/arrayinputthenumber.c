// input three values in array and 10 in each
#include <stdio.h>
int main()
{
    int marks[4]; // hare 4 elements is store
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d :", i);

        scanf("%d", &marks[i]);
    }
    for (int k = 0; k < 4; k++)
    {

        marks[k] = marks[k] + 10;
        printf("%d \n", marks[k]);
    }

    return 0;
}