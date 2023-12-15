#include<stdio.h>
#include<stdlib.h>
int a[10];

int bubble()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
            }
        }
    }
}

int display()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        a[i]=rand()%50;
    }
    display();
    printf("\n\n");
    bubble();
    display();

    return 0;
}