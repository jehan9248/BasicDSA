#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node *link;
};
struct node* delete_first_node(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty");
    }
    struct node *temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    return head;
}
void print_node(struct node *head)
{
    struct node *ptr=NULL;
    ptr=head;
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

    struct node *current= malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;

    head->link=current;

    current= malloc(sizeof(struct node ));
    current->data=3;
    current->link=NULL;

    head->link->link=current;

    head= delete_first_node(head);
    head= delete_first_node(head);
    print_node(head);

}