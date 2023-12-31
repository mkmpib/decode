#include <stdio.h>

#define MAX_SIZE 5
int stack[MAX_SIZE];
int top = -1;
void push(int item)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Overflow! & exit \n");
    }
    else
    {
        stack[++top] = item;
        // printf("%d item inserted.\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow1 & exit\n");
    }
    else
    {
        int item = stack[top--];
        // printf("%d item deleted. \n", item);
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        printf("stack elements: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf(" \n");
    }
}
int main()
{

    int choice, item;
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    while (1)
    {
        printf("Enter the choice: ");
        scanf("%d", &choice); // choiced

        switch (choice)
        {
        case 1:
            printf("Enter value for push: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice!!");
        }
    }
    return 0;
}