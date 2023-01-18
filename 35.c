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
struct node* delete_linkedList(struct node *head)
{

    if(head==NULL)
    {
        printf("\n Linked list is empty ");
        exit(1);
    }
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        ptr=ptr->link;
        free(head);
        head=ptr;
    }
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
    printNode(head);

    head=delete_linkedList(head);
    printNode(head);
    if(head==NULL)
    {
        printf("\n linked list deleted successfully");
    }


}