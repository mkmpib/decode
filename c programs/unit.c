#include <stdio.h>
int main()
{

    int unit;
    float result;
    printf("Enter the unit of electrisity:\n ");
    scanf("%d", &unit);

    if (unit <= 50)
    {
        result = unit * 0.5;
    }
    else if (unit < 100)
    {
        result = unit * 1;
    }
    else

    {
        result = unit * 1.5;
    }
    float final;
    final = (result * 20) / 100;
    float total=result+final;
    printf("The payble amount is:%f", total);
    return 0;
}