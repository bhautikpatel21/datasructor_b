#include <stdio.h>

int size,i,a[100];

int linear()
{
    printf ("Enter the aray size : ");
    scanf ("%d",&size);

    for (i=0; i<=size; i++)
    {
    scanf ("%d ",a[i]);
   }
}
int main ()
{
    linear();
}