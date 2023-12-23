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

    if(head == NULL)
    {
        head=temp;
        head->next=head;
    }
    else{
        while(ptr->next != head)
        {
            ptr = ptr ->next;
        }
        ptr->next = temp;
        temp->next=head;
    }
}

void deleteend()
{
    struct node *ptr = head,*p;

    if(head == NULL)
    {
        printf("List is already empTY\n");
    }
    else if(ptr->next == head)
    {
        head= NULL;
        free(ptr);
    }
    else{
        while(ptr->next != head)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=head;
        free(ptr);
    }
}

void insertmiddle(int val, int last)
{
    struct node *ptr=head,*p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    int i,j,k=1,l,x;

    if(head==NULL)
    {
        printf("List is already empty so Data will be store at topmost position only \n");
        head =temp;
        head->next=head;
    }
    else{
        printf("Enter a position to Insert :");
        scanf("%d",&x);
        if(x<=0 || x>last)
        {
            printf("Invalide position\n");
            goto end;
        }
        i=1;
        if(x==1)
        {
            insertfirst(val,last);
        }
        else{
        while(i<x)
        {
            i++;
            p=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr;
        p->next=temp;
        }   
    }
    end :
        printf("");
}

void deletemiddle(int last)
{
    struct node *ptr=head,*p;
    int x,i;
    
    if(head==NULL)
    {
        printf("List is already empty\n");
    }
    else{
        printf("Enter a position to Delete :");
        scanf("%d",&x);
        if(x<=0 || x>last)
        {
            printf("Invalide position\n");
            goto end;
        }
        i=1;
        if(x==1)
        {
            deletefirst(last);
        }
        else if(x==last)
        {
            deleteend();
        }
        else{
        while(i<x) 
        {
            i++;
            p=ptr;
            ptr=ptr->next;
        }
        p->next=ptr->next;
        free(ptr);
        }
    
    }
    end :
        printf("");
}


void insertfirst(int val,int last)
{
    struct node *ptr=head;
    struct node *temp= malloc(sizeof(struct node));
    temp->data=val;
    int i;
    if(head==NULL)
    {
        head=temp;
        ptr=head;
        ptr->next=head;
    }
    else{
    i=1;
    while(i<last)
    {
        i++;
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    head=temp;
    }
}

void deletefirst(int last)
{
    struct node *ptr=head;
    struct node *temp= malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("List is already empty \n");
    }
    else{
    head=ptr->next;
    free(ptr);
    ptr=head;
     int i;
    i=1;
    while(i<last-1)
    {
        i++;
        ptr=ptr->next;
    }
    ptr->next=head;
    }
}


int count ()
{
    struct node *ptr =head;
    int i;
    i=0;
    if(head==NULL)
    {
        return 0;
    }
    else{
    do{
        i++;
        ptr=ptr->next;
    }while(ptr != head);
    return i;
    }
}

void display()
{
    struct node *ptr =head;
    if(head==NULL)
    {
        printf("List already Empty\n");
    }
    else 
    {
        do{
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }while(ptr != head);
        printf("\n");
    }
}

int main()
{
   int i,x,last;

   printf("1)insertend\n2)insertfirst\n3)middle insert\n4)deleteend\n5)deletefirst\n6)middle delete\n7)exit\n");
    for(int j=0;j<50;j++)
    {
        printf("Enter Your Choice :");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                {
                    printf("Enter value to insert :");    
                    scanf("%d",&x);
                    insertend(x);
                    break;
                }
            case 2:
                {
                    last=count();
                    printf("Enter value to insert :");    
                    scanf("%d",&x);
                    insertfirst(x,last);
                    break;
                }
            case 3:
                {
                    last=count();
                    printf("Enter value to insert :");    
                    scanf("%d",&x);
                    printf("List :");
                    display();
                    insertmiddle(x,last);
                    break;
                }
            case 4:
                {
                    deleteend();
                    break;
                }
            case 5:
                {
                    last=count();
                    deletefirst(last);
                    break;
                }
            case 6:
                {
                    last=count();
                    printf("List :");
                    display();
                    deletemiddle(last);
                    break;
                }
            case 7:
                {
                    goto end;
                }
            default :
                goto end;
                
        }
    }
    end :
    display();
    return 0;
}