#include <stdio.h>

int factorial()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{

    int k;

    printf("The factorial of %d is %d ", k, factorial());
    return 0;
}