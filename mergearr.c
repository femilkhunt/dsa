#include<stdio.h>
void main()
{
    int m=0,i,j,l=0,a[5],b[5],c[15],k;

    for(i=0;i<5;i++)
    {
        printf("Enter %d A value :",i+1);
        scanf("%d",&a[i]);
        l++;
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d B value :",i+1);
        scanf("%d",&b[i]);
        m++;
    }

    j=0;
    for(i=0;i<l;i++)
    {
        c[i]=a[i];
        j++;
    }
     
    k=0;
    for(i=j;k<m;i++)
    {
        c[i]=b[k++];
        j++;
    }
   printf("\n %d \n",k);
    
    for(i=0;i<j;i++)
    {
        printf("%d ",c[i]);
    }

}