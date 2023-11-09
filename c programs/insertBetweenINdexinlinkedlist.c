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

// if we want to add at index andd between index
// Case 2
struct Node * insertAtIndex(struct Node * head, int data, int index){
    struct Node * add = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
 
    while (i!=index-1)
    {
        p = p->link;
        i++;
    }
    add->data = data;
    add->link = p->link;
    p->link = add;
    return head;
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
  
    printf("After adding the node between the node:\n");
    head = insertAtIndex(head, 56,1);
    trivesal(head);
    return 0;
}