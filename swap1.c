#include<stdio.h>
void main()
{
    int i,j,k=0,a[5],b[5];

    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        k++;
    }

        k--;
    for(i=0;i<=k;i++)
    {  
        if(i==0)
        {
            printf("%d ",a[k]);
        }
        else if(i==k)
        {
            printf("%d ",a[0]);
        }
        else{
            printf("%d ",a[i]);
        }
    }
}