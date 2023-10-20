#include <stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main ()
{
    struct node a,b,c;

    a.data=65;
    a.ch='A';
    a.ptr=NULL;

    b.data=97;
    b.ch='B';
    b.ptr=NULL;
    
    a.ptr=&b;
    b.ptr=&a;

    printf ("A  data = %d ch = %c",b.ptr->data,b.ptr->ch);
    printf ("\nb  data = %d ch = %c",a.ptr->data,a.ptr->ch);
}