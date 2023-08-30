#include <stdio.h>

int main()
{

    int num, rem;
    int arm = 0;
    int orignalNum;

    printf("Enter the number: ");
    scanf("%d", &num);
    orignalNum = num;
    while (num > 0)
    {

        rem = num % 10;
        arm = (rem * rem * rem) + arm;
        num = num / 10;
    }
    if (orignalNum == arm)
    {

        printf("it is armstrong");
    }
    else
    {
        printf("it not armstrong");
    }

    return 0;
}