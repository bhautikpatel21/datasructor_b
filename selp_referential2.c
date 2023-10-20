#include <stdio.h>

struct node 
{
    int data;
    char ch;
    struct node*ptr;
};

int main()
{
    struct node a,b,c;

    a.data=50;
    a.ch='A';
    a.ptr=NULL;

    b.data=21;
    b.ch='B';
    b.ptr=NULL;

    printf ("A data = %d char = %c",a.data,a.ch);
    printf ("\nB data = %d char = %c",b.data,b.ch);

}