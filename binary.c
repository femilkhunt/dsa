#include<stdio.h>

int a[10],mid,end,start,l,r;
int getdata()
{
    for(int i=0;i<l;i++)
    {
        printf("enter the %d number :",i+1);
        scanf("%d",&a[i]);
    }
}

int arrange()
{
    int b;

    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
}

int function(int s)
{
    start=0;
    end=l;
    mid=(start + end)/2 ;

    if(a[mid]==s)
    {
        return 1;
    }
    else if(a[mid]<s)
    {
         right(s);
    }
    else if(a[mid]>s)
    {
        left(s);
    }
}

int right(int s)
{

    if(start<l)
    {

    
    int c,d=0;
    start=mid+1;
    mid=(end+start)/2;


    if(a[mid]==s)
    {
         r=1;
    }
    else if(a[mid]<s)
    {
        right(s);
    }
    else if(a[mid]>s)
    {
        left(s);
    }
    }
    else {
        r=0;
    }
    
}

int left(int s)
{
    if(end>0)
    {
    int c,d=0;

    end = mid-1;
    mid=(end+start)/2;


    if(a[mid]==s)
    {
         r=1;
 
    }
    else if(a[mid]<s)
    {
        right(s);
    }
    else if(a[mid]>s)
    {
         left(s); 
    }
    }
    else{
        r=0;
    }
}


int display()
{
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int s;

    printf("Enter the length of the array :");
    scanf("%d",&l);
    
    getdata();
    arrange();
    printf("\n");

    printf("Enter a number to search :");
    scanf("%d",&s);

    r=function(s);
    
    if(r==1)
    {
        printf("Value is present in the Array ");
    }
    else if(r==0){
        printf("Value is not present in the Array ");
    }

    return 0;
}