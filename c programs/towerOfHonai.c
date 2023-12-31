#include <stdio.h>
void tower(int n, char beg, char aux, char end)
{

    if (n <= 0)
    {
    
        printf("\nillegal entery");
    }
    else if (n == 1)
    {
        printf("\nmove disc from %c to %c", beg, end);
    }
    else
    {
        tower(n - 1, beg, end, aux);
        tower(1, beg, aux, end);
        tower(n - 1, aux, beg, end);
    }
}
int main()
{
    int n;
    char a, b, c;
    printf("Enter the number of disks:\n", n);
    scanf("%d", &n);
    printf("Tower of honai of %d disk\n", n);
    tower(n, 'a', 'b', 'c');

    return 0;
}
