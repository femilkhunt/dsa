#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node{
    int data;
    struct node *next;
    struct node *previous;`
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

void insertmiddle(int val, int last)
{
    struct node *ptr=head,*p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    int i,j,k=1,l,x;

    if(head==NULL)
    {
        printf("List is already empty so Data will be store at topmost position only;\n");
        head =temp;
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
            temp->next=head;
            head=temp;
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
    // p=ptr->next;
    // ptr -> next =temp;
    // ptr= ptr->next;
    // ptr->next=p;
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
            head=ptr->next;
            free(ptr);
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


void insertfirst(int val)
{
    struct node *ptr=head;
    struct node *temp= malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;
}
void deletefirst()
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
    }
}


int count ()
{
    struct node *ptr =head;
    int i;
    i=0;
    while(ptr != NULL)
    {
        i++;
        ptr=ptr->next;
    }
    return i;
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
                    printf("Enter value to insert :");    
                    scanf("%d",&x);
                    insertfirst(x);
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
                    deletefirst();
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