#include<stdio.h>
#include<stdlib.h>
int a[10];

int selection()
{
    int i,j,k,l;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
}


int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        a[i]=rand()%50;
        printf("%d ",a[i]);
    }
    
    selection();
    printf("\n");

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}