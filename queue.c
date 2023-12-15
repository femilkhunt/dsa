#include<stdio.h>
int a[50],f=-1,r=-1;

int insertend()
{
    if(f==r && r==-1)
    {
        f++;
        r++;
        printf("Enter a value :");
        scanf("%d",&a[r]);
    }
    else if(r>=4){
        printf("Queue is already full\n");
    }
    else if(r<4)
    {
        r++;
        printf("Enter a value :");
        scanf("%d",&a[r]);
    }
}

int deletefirst()
{
    if(f==r)
    {
        if(f!=-1){
            f=r=-1;
        }
        else if(f==-1){
            printf("Queue is already empty\n");
        }
    }
    else if(f>-1 && f<r){
        f++;
    } 
}


int insertfirst(){

    if(r<4)
    {   
        if(f==r)
        {
            if(f==-1)
            {
                r++;
                f++;
                printf("Enter a value :");
            scanf("%d",a[r]);
            goto end2;
            }
        }
        if(f>0)
        {
            f--;
            printf("Enter a value :");
            scanf("%d",a[f]);
        }
        else if(f==0)
        {
            printf("You can't add value here\n");
        }
    }
    else{
        printf("Queue is already full\n");
    }
    end2:
    printf(" ");
    
}

int deleteend()
{
    if(f==r)
    {
        if(f!=-1)
        {
            f=-1;
            r=-1;
        }
        else if(f==-1)
        {
            printf("Queue is already empty\n");
        }
    }
    else if(f>-1 && f<r)
    {
        r--;
    }
}


int display()
{
    if(r!=-1)
    {
    for(int i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    }
}

int main()
{
    int i,j;

printf("1)inseretend\n2)deletefirst\n3)insertfirst\n4)deleteend\n5)exit\n");

for(i=0;i<50;i++)
{
    printf("Enter your choice :");
    scanf("%d",&j);

    switch(j)
    {
    case 1:
    {
        insertend();
        break;
    }

    case 2:
    {
        deletefirst();
        break;
    }
    
    case 3:
    {
        insertfirst();
        break;
    }
    case 4:
    {
        deleteend();
        break;
    }
    case 5:
    {
        goto end;
    }

    default :
    {
        goto end;
    }
    }
}
end :


    
    display();

    return 0;
}