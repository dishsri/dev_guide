#include<stdlib.h>
#include<stdio.h>
#include"ll_operations.h"

struct node *head = NULL;
void create()
{
    struct node *newNode, *ptr;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("New node is not created\n");
    }
    else
    {
        printf("Enter the value of the node\n");\
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            ptr = head;
            while(ptr->next != NULL)
            {
                ptr=ptr->next;
            }
            ptr->next = newNode;
        }
    }
}/* end of create */


void display()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        ptr = head;
        while(ptr != NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}/* end of display */

void insert_begin()
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("New node is not craeted\n");
    }
    else
    {
        printf("Enter the value of the node\n");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
    }
}/*end of insert begin */

void insert_end()
{
    struct node *newNode,*ptr;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("New node is not created\n");
    }
    else
    {
        printf("Enter the value of the node\n");
        scanf("%d",&newNode->data);
        newNode->next = NULL;
        if(head == NULL)
        {
            head=newNode;
        }
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newNode;
        }
    }
}/* end of insert end */

void delete_begin()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);
    }
}

void delete_end()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else if(head->next==NULL)
    {
        ptr=head;
        head=NULL;
        free(ptr);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        free(ptr);
    }
}/* end of delete end */

