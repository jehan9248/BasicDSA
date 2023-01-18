#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
void add_at_the_end(struct node *head,int newData)
{
    struct node *temp= malloc(sizeof(struct node));
    temp->data=newData;
    temp->link=NULL;

    struct node *ptr=NULL;
    ptr=head;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void add_at_pos(struct node *head,int newData,int pos)
{
    struct node *temp= malloc(sizeof(struct node));
    temp->data=newData;
    temp->link=NULL;

    struct node *ptr=NULL;
    ptr=head;
    pos--;
    while (pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }

    temp->link=ptr->link;
    ptr->link=temp;
}
void printNode(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
        exit(1);
    }
    struct node *ptr=NULL;
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head= malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *ptr=NULL;
    ptr=head;
    add_at_the_end(ptr,98);
    add_at_the_end(ptr,3);
    add_at_the_end(ptr,10);

    add_at_pos(head,67,3);
    printNode(head);
}
