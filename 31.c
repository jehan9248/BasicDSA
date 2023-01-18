#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
void delete_last_node(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
        exit(1);
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *ptr=head;
        while (ptr->link->link!=NULL)
        {
            ptr=ptr->link;
        }
        free(ptr->link);
        ptr->link=NULL;
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

    current= malloc(sizeof(struct node));
    current->data=32;
    current->link=NULL;
    head->link->link->link=current;

    delete_last_node(head);
    printNode(head);
}