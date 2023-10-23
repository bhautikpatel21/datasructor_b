#include <stdio.h>
#include <stdlib.h>

int val,num;
struct node 
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insertEnd()
{

    printf ("Enter the value = ");
    scanf ("%d",&val);
    struct node *ptr = head;
    struct node *temp =malloc(sizeof(struct node));
    temp ->data = val;
    temp ->next = NULL;

    if(head==NULL)
    {
        head =temp;
        return;
    }
    while(ptr->next!= NULL)
    {
        ptr=ptr->next;
    }
    ptr->next =temp;
    return;
}

void deleteEnd()
{
    struct node *ptr=head;
    struct node *prev;

    if (head == NULL)
    {
        printf ("List is allready empty...");
    }
    else if(head->next ==NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }
    while (ptr->next!=NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;

    if(head==NULL)
    {
        printf ("LIst is empty...");
    }
    else
    {
        while (ptr!=NULL)
        {
            printf ("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf ("\n");
}

int main()
{
    printf ("\nPress 1 for ----> Inser End");
    printf ("\nPress 2 for ----> delete End");
    printf ("\nPress 3 for ----> display");
    printf ("\nPress 0 for ----> exit\n");

    do
    {
        scanf("%d",&num);

        switch(num)
        {
            case 1:
            insertEnd();
            break;

            case 2:
            deleteEnd();
            break;

            case 3:
            display();
            break;
            
            case 0:
            printf ("Exit...");
            break;
            
            default:
            printf ("This element is not available");
            break;
        }
    }while (num!=0);
}