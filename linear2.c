#include <stdio.h>
#include <stdlib.h>
#define n 20

int a[n],i,v,b;

int linear_element(int a[],int v)
{
    for (int i=0; i<=n-1; i++)
    {
        if (a[i]==v)
        return i+1;
    }
    return -1;
}
int main ()
{
   for (i=0; i<=n; i++)
    {
        a[i]=rand()%50;
    }
    for (i=0; i<=n-1; i++)
    {
        printf ("%d ",a[i]);
    }
    printf ("\n ==> || Enter the search element || \n");

    scanf ("%d",&v);

    b=linear_element(a,v);

    if (b>0)
    {
        printf ("\n || ==> %d position of search element is found || <==\n\n",b);
    }
    else 
    {
        printf ("|| : Search element is not found : ||");
    }
}
