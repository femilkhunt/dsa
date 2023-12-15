#include<stdio.h>
void main()
{
    int i,j,a[5],k=0;

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
            continue;
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("%d ",a[0]);
}