#include <stdio.h>
int main()
{
    const int size = 5;
    int a[size], b[size], sum[size], i;

    for (i = 0; i < size; i++)
    {
        printf("Enter the element of array a %d:", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("Enter the element of array b %d:", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < size; i++)
    {

        sum[i] = a[i] + b[i];
    }
    printf("size the sum array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}