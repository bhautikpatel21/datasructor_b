#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
    temp->prev = ptr;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("List is already empty....");
        return;
    }

    while (ptr->next != head)
    {
        p= ptr;
        ptr = ptr->next;
    }

    p->next = head;
    free(ptr);
    return;

}
/*void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        temp->next=NULL;
        temp->prev=NULL;
        head = temp;
        return;
    }
    else
    {
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}
}*/
void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty....");
        return;
    }

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("\n");
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    deleteEnd();
    //insertFirst(10);
    display();
}