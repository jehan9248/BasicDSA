#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
struct node* add_at_the_beg(struct node *head,int newData)
{
    struct node *temp= malloc(sizeof(struct node));
    temp->data=newData;
    temp->link=NULL;
    temp->link=head;

    return temp;
}
void print_node_data(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
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

    struct node *current= malloc(sizeof (struct node));
    current->data=98;
    current->link=NULL;

    head->link=current;

    head= add_at_the_beg(head,3);
    head= add_at_the_beg(head,99);

    print_node_data(head);
}