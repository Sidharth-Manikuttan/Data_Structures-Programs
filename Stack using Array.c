#include<stdio.h>
#include<stdlib.h>
void push(int item,int n);
void pop();
void display();
int stack[100];
int top=-1;
void main()
{
int choice,item,n;
printf("Enter the size of the Stack : \n");
scanf("%d",&n);
while(1)
{
printf("\nChoose between 1-4 :\n1.push 2.pop 3.display 4.exit \n");
scanf("%d",&choice);
switch(choice)
{
case 1 : printf("Enter the item to be inserted : \n");
scanf("%d",&item);
push(item,n);
break;
case 2 : pop();
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
void push(int item,int n)
{
if(top==(n-1))
printf("Stack Overflow!!!");
else
{
stack[++top]=item;
printf("%d inserted\n",item);
}
}
void pop()
{
if(top==-1)
printf("Stack underflow!!!\n");
else
{
printf("%d Deleted \n",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
printf("Stack Underflow!!!\n");
else
{
printf("--------STACK--------");
for(int i=top;i>=0;i--)
{
printf("\n %d\n",stack[i]);
}
printf("----------------------");
}
}
