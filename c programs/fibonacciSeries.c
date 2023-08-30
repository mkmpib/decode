#include <stdio.h>
int fibonacci()
{
    int term;
    printf("Enter the nubers of term:");
    scanf("%d", &term);
    int ft = 0; // first term
    int st = 1; // second term
    int nt;     // next term
    for (int i = 1; i <= term; i++)
    {
        printf("%d\t", ft);
        nt = ft + st;
        ft = st;
        st = nt;
    }
}
int main()

{
    fibonacci();
    // printf("%d", fibonacci());

    return 0;
}