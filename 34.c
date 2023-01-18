#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
void del_at_pos(struct node **head,int pos)
{
    struct node *current=*head;
    struct node *previous=*head;
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else if(pos==1)
    {
        *head=current->link;
        free(current);
        current=NULL;
    }
    else
    {
        while (pos!=1)
        {
            previous=current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
        free(current);
        current=NULL;
    }
}
void printNode(struct node *head)
{
    struct node *ptr=head;
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

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current= malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;
    printNode(head);
    printf("\n");

    del_at_pos(&head,2);
    printNode(head);
}