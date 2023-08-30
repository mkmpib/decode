#include <stdio.h>
int main()
{
    printf(" Enter the first matrix is :\n ");
    int arr1[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("Enter the value of eliment (%d %d) is: \n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The first matrix is :\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf(" Enter the second matrix is :\n ");
    int arr2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("Enter the value of eliment (%d %d) is: \n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The first matrix is :\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrix array is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum);
        }
        printf("\n");
    }

    return 0;
}