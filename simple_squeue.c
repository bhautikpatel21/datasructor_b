#include <stdio.h>
#define n 5
int i,f=-1,r=-1,a[n],data,num;

int insert()
{
    printf ("\n|| :  Enter the insert value  : ||");
    scanf ("%d",&data);
    if (r>=n-1)
    {
        printf ("Stack is overflow \n");
    }
    else 
    {
        r++;
        a[r]=data;
    }
}

int delete()
{
    if (f<0)
    {
        printf ("All stack is delete \n ");
    }
    else 
    {
        f++;
    }
}

int display ()
{
    printf ("\n|| : This is your array : ||");

    for (i=f; i<=r; i++)
    {
        printf ("%d ",a[i]);
    }
}

int main()
{
    printf ("\nPress 1 for ---> insert array ");
    printf ("\nPress 2 for ---> delete array ");
    printf ("\nPress 3 for ---> display array ");
    printf ("\nPress 0 for ---> Exit \n");

    do
    {
        scanf ("%d",&num);
        
        switch (num)
        {
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 0:
            printf (" Exit ");
            break;
        }
    }while (num!=0);
    
}