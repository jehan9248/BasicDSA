#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
void delete_at_last(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node *tempLast=head;
        struct node *tempSLast=head;
        while (tempLast->link!=NULL)
        {
            tempSLast=tempLast;
            tempLast=tempLast->link;
        }
        tempSLast->link=NULL;
        free(tempLast);
        tempLast=NULL;
    }
}
void printNode(struct node *head)
{
    struct node *ptr=head;
    while (ptr->link!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    struct node *head= malloc(sizeof(struct node ));
    head->data=45;
    head->link=NULL;

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current= malloc(sizeof (struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    printNode(head);
}