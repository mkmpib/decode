#include <stdio.h>
// WITH ARGUMENT AND WITH RETURN VALUE

/*int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int k = 2;
    int j = 3;
    printf("The multiply of number is %d ", multi(k, j));

    return 0;
}
#include <stdio.h>

int subtraction(int a, int b)
{
    int sub = a - b;
    return sub;
}
int main()
{
    printf("The subtraction of two number is :%d", subtraction(4, 4));
    return 0;
}*/

// WITH ARGUMENT AND WITHOUT RETURN VALUE

/*
void table(int n)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d\t", n);
    }
}

int main()
{

    table(3);

    return 0;
    }
   // another example of with argument or without return value

#include <stdio.h>
void multi(int a, int b)
{
    printf("The multiple of two number is:%d", a * b);
}

int main()
{
    multi(2, 4);

    return 0;
}
*/

// WITHOUT ARGUMENT AND WITH RETURN VALUE

/*
#include <stdio.h>
int sum()
{
    int n1, n2;
    printf("enter the firdt number:\n");
    scanf("%d", &n1);
    printf("enter the second number:\n");
    scanf("%d", &n2);
    int add = n1 + n2;
    return add;
}
int main()
{

    printf("the sum is %d", sum());
    return 0;
}
}*/

// WITHOUT ARGUMENT AND WITHOUT RETURN VALUE

void takenumber()
{
    int i;
    printf("Enter the number ");
    scanf("%d", &i);
}
int main()
{
    takenumber();
    // printf("The enterd number is %d ", takenumber());
    return 0;
}
#include <stdio.h>

int subtraction()
{
    // int bool;
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("The subtraction of two number is %d:", a - b);
}
int main()
{
    subtraction();
    return 0;
}