#include <stdio.h>
#include <stdlib.h> // so we use the malloc function

// structure ka use isliye kar rahe hai because we have diferent type of data type
struct node
{
    int data;
    struct node *link;
};
void trivesal(struct node *add) // add= addres of data
{
    while (add != NULL)
    {
        printf("element:%d\n", add->data);
        add = add->link;
    }
}
struct node *insertAtFirst(struct node *head, int datan)
{
    struct node *add = (struct node *)malloc(sizeof(struct node));
    add->link = head;
    add->data = datan;
    return add;
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
    printf("After adding the node in begning:\n");
    head = insertAtFirst(head, 56);
    trivesal(head);
    return 0;
}