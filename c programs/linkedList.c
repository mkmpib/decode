#include <stdio.h>
#include <stdlib.h> // so we use the malloc function

// structure ka use isliye kar rahe hai because we have diferent type of data type
struct node
{
    int data;
    struct node *link;
};
void trivesal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
    struct node *head; // head = first node
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // alloccte the values to node
    head->data = 7;
    head->link = second;

    // second ka data
    second->data = 37;
    second->link = third;

    // third ka data
    third->data = 57;
    third->link = fourth;

    // fourth ka data
    fourth->data = 97;
    fourth->link = NULL;
    trivesal(head);
    return 0;
}