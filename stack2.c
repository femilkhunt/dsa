#include <stdio.h>
#define n 5
int arr[5], top = -1, b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int deleteend()
{
    if (top == -1)
    {
        printf("Stack is empty.......\n");
    }
    else
    {
        top--;
    }
}

int insertfirst(int val)
{
    int j, k;
    if (top == -1)
    {
        top++;
        arr[top] = val;
    }
    else if (top >= 4)
    {
        printf("\nStack is already full");
    }
    else
    {
        top++;
        k = top - 1;

        for (int i = top; i > 0; i--)
        {
            arr[i] = arr[k];
            k--;
        }
        arr[0] = val;
    }
}

int deletefirst()
{
    int j = 1;

    if (top == -1)
    {
        printf("\nStack is already empty");
    }

    else
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = arr[j];
            j++;
        }
    }
    top--;
}

int find(int val)
{
    int a = 0;

    for (int i = 0; i <= top; i++)
    {
        if (val == arr[i])
        {
            a++;
        }
    }
    return a;
}

int main()
{
    int a, b, c;

    printf("1) insertend\n2)deleteend\n3)insertfirst\n4)deletefirst\n5)End\n\n");

    for (int x = 0; x <= 5; x++)
    {
        printf("Enter Your Choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
        {
            printf("Enter a value :");
            scanf("%d", &b);
            insertend(b);
            break;
        }

        case 2:
        {
            deleteend();
            break;
        }

        case 3:
        {
            printf("Enter a value :");
            scanf("%d", &b);
            insertfirst(b);
            break;
        }

        case 4:
        {
            deletefirst();
            break;
        }

        case 5:
        {
            goto end;
        }

        default:
        {
            goto end;
        }
        }
    }
end:

    printf("\nEnter a value you need to find :");
    scanf("%d", &b);
    c = find(b);
    if (c <= 0)
    {
        printf("The value %d is not present in the array\n", b);
    }
    else
    {
        printf("The value %d is present %d times in the array", b, c);
    }

    display();
    return 0;
}