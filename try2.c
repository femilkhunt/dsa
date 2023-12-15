#include<stdio.h>
void main()
{
    int i,j,k,l,a[5];
    j=0;
    for(i=0;i<5;i++)
    {
        printf("Enter %d A :",i+1);
        scanf("%d",&a[i]);
        j++;
    }
    j--;

    for(i=0;i<=j;i++)
    {
        for(k=0;k<5;k++)
        {
            if(i<=k)
            {
                continue;
            }
            else{
                printf("%d ",a[k]);
            }
        } 
        for(l=0;l<5;l++)
        {
            if(i<=l)
            {
                printf("%d ",a[l]);
            }
            else{
                continue;
            }
        }
        printf("\n");
    }
}