#include <stdio.h>
int isPrime(int num)
{

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b;
    printf("Enter the two numbers:\n");
    scanf(" %d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}