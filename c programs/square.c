#include <stdio.h>
int main()
{
    int squ = 0;
    for (int i = 0; i <= 100; i++)
    {

        squ = i * i;
        printf("%d\t", squ);
    }

    return 0;
}