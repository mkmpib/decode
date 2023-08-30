#include <stdio.h>
int main()
{

    int n;
    printf("Enter the numer :");
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            printf("it is not prime\n");
            break;
        }
    }

    printf("it is prime\n");

    return 0;
}
