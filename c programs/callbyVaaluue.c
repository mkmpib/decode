#include <stdio.h>

void swap(int a, int b)
{

    int tamp;
    tamp = a;
    a = b;
    b = tamp;
    printf("the values formal argument after swap:%d and %d\n", a, b);
}
int main()
{
    int x = 23;
    int y = 56;
    printf("the values befor swap:%d and %d\n", x, y);
    swap(x, y);
    printf("the values actual argument after swap:%d and %d\n", x, y);

    return 0;
}