#include <stdio.h>
int main()
{

    int n;
    _Bool flag = 0;
    printf("Enter the numer :");
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("it is prime");
    }
    if (flag == 1)
    {
        printf("it is not prime");
    }
    return 0;
}
