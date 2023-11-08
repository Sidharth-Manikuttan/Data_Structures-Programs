#include<stdio.h>
#include<stdlib.h>
struct node {
int coeff;
int expo;
struct node *link;
};
struct node *insert(struct node* head,int co,int ex)
{
struct node*temp;
struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->coeff=co;
newnode->expo=ex;
newnode->link=NULL;
if(head==NULL)
head=newnode;
else
{
temp=head;
while(temp->link!=NULL)
temp=temp->link;
temp->link=newnode;
}
return head;
}
struct node* create(struct node*head)
{
int i,n;
int coeff;
int expo;
printf("Enter no of terms: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the coeff ");
scanf("%d",&coeff);
printf("enter the expo ");
scanf("%d",&expo);
head=insert(head,coeff,expo);
}
return head;
}
void print(struct node*head)
{
if(head==NULL)
printf("No Polynomial");
else
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
if(temp->expo!=0)
printf("%dx^%d",temp->coeff,temp->expo);
else
printf("%d",temp->coeff);
temp=temp->link;
if(temp!=NULL)
{
if(temp->coeff>=0)
printf("+");
}
else
printf("\n");
}
}
}
void polyAdd(struct node* head1,struct node*head2)
{
struct node*ptr1=head1;
struct node*ptr2=head2;
struct node*head3=NULL;
while(ptr1!=NULL&&ptr2!=NULL)
{
if(ptr1->expo==ptr2->expo)
{
head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
ptr1=ptr1->link;
ptr2=ptr2->link;
}
else if(ptr1->expo>ptr2->expo)
{
head3=insert(head3,ptr1->coeff,ptr1->expo);
ptr1=ptr1->link;
}
else if(ptr1->expo<ptr2->expo)
{
head3=insert(head3,ptr2->coeff,ptr2->expo);
ptr2=ptr2->link;
}
else
{
continue;
}
}
while(ptr1!=NULL)
{
head3=insert(head3,ptr1->coeff,ptr1->expo);
ptr1=ptr1->link;
}
while(ptr2!=NULL)
{
head3=insert(head3,ptr2->coeff,ptr2->expo);
ptr2=ptr2->link;
}
printf("\n polynomial expression: \n");
printf("\n");
print(head1);
printf("\n");
print(head2);
printf("\n");
printf("Polynomial expression : \n\n\n\n");
print(head3);
}
int main()
{
struct node*head1=NULL;
struct node*head2=NULL;
printf(" the polynomial 1 \n");
head1=create(head1);
printf("the polynomial 2 \n");
head2=create(head2);
polyAdd(head1,head2);
return 0;
}
