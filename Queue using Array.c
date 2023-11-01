#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int queue[100];
int rear=-1;
int front=-1;
int n,item;
void main()
{
int choice;
printf("Enter the size of the Queue : \n");
scanf("%d",&n);
while(1)
{
printf("\nChoose between 1-4 :\n1.Enqueue 2.Dequeue 3.display
4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1 :
enqueue();
break;
case 2 : dequeue();
break;
case 3 : display();
break;
case 4 : exit(0);
break;
default : printf("WRONG CHOICE!!!");
break;
}
}
}
void enqueue()
{
printf("Enter the item to be inserted : ");
scanf("%d",&item);
if(rear==(n-1))
{
printf("Queue Overflow!!!");
}
else
{
if(rear==-1)
{
front=0;
rear=0;
}
else
rear++;
queue[rear]=item;
printf("%d Inserted",item);
}
}
void dequeue()
{
int item;
if(rear==-1)
printf("Stack underflow!!!\n");
else if(front==rear)
{
item=queue[front];
front=rear=-1;
printf("%d Deleted ",item);
}
else
{
item=queue[front];
front++;
printf("%d Deleted ",item);
}
}
void display()
{
if(rear==-1)
printf("Queue Underflow!!!\n");
else
{
printf("--------QUEUE--------\n");
for(int i=front;i<=rear;i++)
{
printf("%d ",queue[i]);
}
printf("\n----------------------");
}
}
