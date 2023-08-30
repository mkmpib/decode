#include <stdio.h>
int main()
{
    for (int i = 3; i <= 23; i++)
    {
        printf("%d\t", i);
    }
    printf("The square of number is:");
    for (int i = 3; i <= 23; i++)
    {
        int sq = i * i;
        printf("%d\t", sq);
    }
    return 0;
}