#include <stdio.h>
int main()
{
    const int size = 2;
    int arr1[size], arr2[size], sum[size], i;

    printf("Enter %d the elements of array1:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d the elements of array2:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < size; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("The sum of two array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
    return 0;
}