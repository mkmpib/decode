#include <stdio.h>

int main()
{
    int name[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of boy %d is:\n", i);
        scanf("%s", &name[i]);
    }

    return 0;
}

/*int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the array of student %d is: \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        int sum = marks[i] + 10;
        printf("The array of student %d is:%d \n", i, sum);
    }

    return 0;
}*/