#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("enter the number");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    printf("the factorial of the input number is%d", f);

    return 0;
}