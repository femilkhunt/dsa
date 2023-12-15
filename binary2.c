#include <stdio.h>

int a[10], mid, end, start, l, r,z=0,x=0;
int getdata()
{
    for (int i = 0; i < l; i++)
    {
        printf("enter the %d number :", i + 1);
        scanf("%d", &a[i]);
    }
}

int arrange()
{
    int b;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (a[i] > a[j])          
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}

int function(int s)
{
    if (mid >= 0 && mid <= l)
    {
        if(z==mid)
        {
            x++;
             if(x>3)
            {
            return 0;
            }
        }
        if (a[mid] == s)
        {
            return 1;
        }
        else if (a[mid] < s)
        {
            start = mid+1;
            end =l;
            z=mid;
            mid = (start + end) / 2;
            
            return function(s);
        }
        else if (a[mid] > s)
        {
            end = mid-1;
            start=0;
             z=mid;
            mid = (start + end) / 2;
           
            return function(s);
        }
        
    }
    else
    {
        return 0;
    }
}

int display()
{
    for (int i = 0; i < l; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int s;

    printf("Enter the length of the array :");
    scanf("%d", &l);

    getdata();
    arrange();
    printf("\n");

    printf("Enter a number to search :");
    scanf("%d", &s);
    start = 0;
    end = l;
    mid=(start+end)/2;
    r = function(s);
    
    if (r == 1)
    {
        printf("Value is present in the Array ");
    }
    else if (r == 0)
    {
        printf("Value is not present in the Array ");
    }

    return 0;
}