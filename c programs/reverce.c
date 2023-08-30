#include <stdio.h>
int main()
{
    int i = 99, sum = 0, squsum = 0;
    while (i >= 11)
    {
        printf("%d\t", i);
        i--;
        // sum = sum + i;
        squsum = sum + (i * i);
    }
    // printf("\nThe sum of numbers is:%d", sum);
    printf("\nThe squares of the number is%d", squsum);
    return 0;
}