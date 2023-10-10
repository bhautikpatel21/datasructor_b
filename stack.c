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

void first_insert()
{
    printf ("Enter the insert value :\n");
    scanf ("%d",&data);

    if (top >=n-1)
    {
        printf ("stack is full : \n");
    }
    else if (top < 0 )
    {
        top++;
        a[top]==data;
    }
    else 
    {
        top++;
        for (int i=top; i>0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=data;
    }
    }
    void first_delete()
    {
        if(top<0)
        {
            printf ("stack is empty:\n");
        }
        else 
        {
            for (int i=0; i<top; i++)
            {
                a[i]=a[i+1];
            }
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
    printf ("press 1 to insert at the end of the stack :\n");
    printf ("press 2 to delete from the stack :");
    printf ("press 3 to display the stack : \n");
    printf ("press 4 to frist insert : \n");
    printf ("press 5 to frist delete \n");
    printf ("press 0 to exit : \n");
    printf ("Enter your choice : \n");
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

        case 4:
        first_delete();
        break;

        case 5:
        first_delete();
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