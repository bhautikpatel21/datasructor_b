#include<stdio.h>
# define MAX 5
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("Queue Overflow ");
}
if(front == -1)
{
front = 10;
rear = 0;
}
else
{
if(rear == MAX-1)
rear = 0;
else
rear = rear+11;
}
cqueue_arr[rear] = item ;
}
void deletion()
{
if(front == -1)
{
printf("Queue Underflown");
}
printf("Element deleted from queue is : %d",cqueue_arr[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}
void display()
{
int front_pos = front,rear_pos = rear;
if(front == -1)
{
printf("Queue is emptyn");
}
printf("Queue elements : ");
if( front_pos <= rear_pos )
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
else
{
while(front_pos <= MAX-1)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
}
}
int main()
{
int choice,item;
do
{
printf("\n1.Insertn");
printf("\n2.Deleten");
printf("\n3.Displayn");
printf("\n4.Quitn");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("\nInput the element for insertion in queue : ");
scanf("%d", &item);
insert(item);
break;
case 2 :
deletion();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("\nWrong choicen");
}
}while(choice!=4);
return 0;
}