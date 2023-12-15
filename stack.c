#include<stdio.h>
int in=-1,a[5];

int display()
{
    for(int i=0;i<=in;i++)
    {
        printf("%d ",a[in]);
    }
}

int insertend()
{
    if(in<5)
    {
        in++;
        printf("Enter a number :");
        scanf("%d",&a[in]);
    }
    else{
        printf("Stack is already Full");
    }
}

int deleteend()
{
    if(in>-1)
    {
        in--;
    }
    else{
        printf("Stack is Empty");
    }
}

void main()
{
    int i,j;
    char z,x;
    i=0;
    
    do{
        printf("Enter Y or y to enter data : ");
        scanf("%c",&z);
        
        if(z=='Y' || z=='y')
        {
            insertend();
        }
        else{
            break;
        }
        i++;
    }while(i<5);
    

    for(j=0;j<5;j++)   
    {
        printf("Enter Y or y to delete data");
        scanf("%c",&x);
        if(x=='Y' || x=='y')
        {
                deleteend();
        }
        else{
            break;
        }
    }
    display();
}