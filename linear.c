#include<stdio.h>


int linear(int a[5] , int c)
{
    int x=0;

    for(int i=0;i<5;i++)
    {
        if(a[i]==c)
        {
            x++;
        }
    }
    return c;
}

int main()
{
    int a[5],b,x=0,i,c;

    printf("Enter the array :\n");
    for(i=0;i<5;i++)
    {
        printf("Enter :");
        scanf("%d",&a[i]);
    }
    printf("Enter a value to search :");
    scanf("%d",&c);
    b=linear(a,c);

    if(b>0)
    {
        printf("The value %d is present in the array",c);
    }
    else{
        printf("The value %d is not present in the array",c);
    }
}