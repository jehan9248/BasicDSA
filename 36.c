#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
void printNode(struct node *head)
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("\n Linked list havent any node");
    }
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
struct node* reverseLinkList(struct node *head)
{
    struct node *prev=NULL;
    struct node *next=NULL;
    while (head!=NULL)
    {
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}
int main()
{
    struct node *head= malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current= malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    current= malloc(sizeof (struct node));
    current->data=10;
    current->link=NULL;
    head->link->link->link=current;
    printNode(head);
    printf("\n");

    head= reverseLinkList(head);
    printNode(head);
}