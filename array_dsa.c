#include <stdio.h>
#define n 5

int a[n], top = -1,data;

int insertEnd()
{
    printf ("Enter the insert value : ");
    scanf ("%d",&data);
    if (top>=n-1)
    {
        printf ("Stack is overflow \n");
    }
    else 
    {
        top++;
        a[top]=data;
    }
}

int delete()
{
    if (top<0)
    {
        printf ("All stack is delete \n ");
    }
    else 
    {
        top--;
    }
}
int display()
{
    for (int i=0; i<=top; i++)
    {
        printf ("%d ",a[i]);
    }
}

int main ()
{
    int x;

    printf ("press 1 to insertEnd\n");
    printf ("press 2 to delete \n");
    printf ("Press 3 to display\n");
    printf ("press 0 to exit\n");

    do
    {
    scanf ("%d",&x);
   
    switch(x)
    {
        case 1:
        insertEnd();
    
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        break;

        case 0:
        printf ("Exit");
        break;

        default :
        printf ("|| Your choice is not correct ||");
        break;

    }

    }while(x!=0);

}