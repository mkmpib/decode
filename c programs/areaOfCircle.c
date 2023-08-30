#include <stdio.h>
int main()
{

    int r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    float area = 3.14 * r * r;
    printf("The area of the circle is%f :", area);
    return 0;
}
