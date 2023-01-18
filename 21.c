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
void print_node_data(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
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

    struct node *ptr=head;
    add_at_the_end(ptr,98);
    add_at_the_end(ptr,3);
    add_at_the_end(ptr,67);

    print_node_data(head);

}