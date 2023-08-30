#include <stdio.h>
int reverse()
{
    int num, rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    int rev = 0; // reverse
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int rev = reverse();
    printf("The reverse is %d :  ", rev);
    return 0;
}