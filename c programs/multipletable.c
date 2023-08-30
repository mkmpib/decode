#include <stdio.h>
int main()
{
    int k;
    for (int i = 11; i <= 18; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            k = i * j;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}