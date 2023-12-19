#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node{
    int data;
    struct node *next;
};


void insertend(int val)
{
    struct node *ptr = head; 
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(head == NULL)
    {
        head=temp;
        return;
    }
    else{
        while(ptr->next != NULL)
        {
            ptr = ptr ->next;
        }
        ptr->next = temp;
        return;
    }
}

void deleteend()
{
    struct node *ptr = head,*p;

    if(head == NULL)
    {
        printf("List is already empTY\n");
    }
    else if(head->next == NULL)
    {
        head= NULL;
        free(ptr);
    }
    else{
        while(ptr->next != NULL)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=NULL;
        free(ptr);
    }
}





void display()
{
    struct node *ptr =head;
    if(head==NULL)
    {
        printf("Line already Empty\n");
    }
    else 
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    deleteend();
    deleteend();
    deleteend();
    deleteend();
    display();
    return 0;
}