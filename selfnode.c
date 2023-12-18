#include<stdio.h>

struct node{
    int a;
    char c;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;

    a.a=10;
    a.c='a';

    b.a=20;
    b.c='b';

    c.a=30;
    c.c='c';

    a.ptr=&b;
    b.ptr=&c;
    c.ptr=&a;

    
    printf("Value of A: %d,Char : %c",c.ptr->a,c.ptr->c);
    printf("\nValue of B: %d,Char : %c",a.ptr->a,a.ptr->c);
    printf("\nValue of C: %d,Char : %c",b.ptr->a,b.ptr->c);


}