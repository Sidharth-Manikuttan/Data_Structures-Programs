#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *start;
void insert_begin();
void insert_end();
void insert_loc();
void delete_begin();
void delete_end();
void delete_loc();
void display();
void main(){
int ch;
while(1){
 printf("Enter your choice : ");
 printf("Enter :\n1.insert at beginning\n2.insert at end\n3.insert at a location\n4.delete from beginning\n5.delete from end\n6.delete from a location\n7.display\n8.exit\n");
 scanf("%d",&ch);
 switch(ch){
 case 1:insert_begin();
 break;
 case 2:insert_end();
 break;
 case 3:insert_loc();
 break;
 case 4:delete_begin();
 break;
 case 5:delete_end();
 break;
 case 6:delete_loc();
 break;
 case 7:display();
 break;
 case 8:exit(0);
 break;
 default :printf("Invalid entry!!!");
 break;
 }
}
}
void insert_begin(){
 struct node *p;
 int item;
 p=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value");
 scanf("%d",&item);
 p->data=item;
 if(start==NULL){
    p->next=NULL;
    start=p;
 }
 else{
    p->next=start;
    start=p;
 }
 printf("The value is entered");
}
void insert_end(){
 struct node *p,*temp;
 int item;
 p=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value");
 scanf("%d",&item);
 p->data=item;
 if(start==NULL){
  p->next=NULL;
  start=p;
 }
 else{
 temp=start;
 while(temp->next!=NULL){
  temp=temp->next;
 }
 temp->next=p;
 p->next=NULL;
 }
 printf("The value is entered");
}
void insert_loc(){
 struct node *p,*temp;
 int item,loc;
 p=(struct node*)malloc(sizeof(struct node));
 printf("Enter the location");
 scanf("%d",&loc);
 temp=start;
 if(loc==1&&start==NULL){
 insert_begin();
 }
 else{
 printf("Enter the value");
 scanf("%d",&item);
 p->data=item;
 for(int i=1;i<(loc-1);i++){
   temp=temp->next;
   if(temp==NULL){
    printf("entry not possible!!!");
    return;
   }
 }
 p->next=temp->next;
 temp->next=p;
 printf("value is inserted");
 }
}
void delete_begin(){
 struct node *p;
 if(start==NULL){
    printf("LL Empty!!!");
    return;
 }
 else{
  p=start;
  start=start->next;
  printf("%d is Deleted",p->data);
  free(p);
 }
}
void delete_end(){
struct node *p,*temp;
if(start==NULL){
 printf("LL Empty!!!");
    return;
}
else if(start->next==NULL){
   p=start;
   start=NULL;
   printf("%d is deleted",p->data);
   free(p);
}
else{
 p=start;
 temp=start->next;
 while(temp->next!=NULL){
 p=temp;
 temp=temp->next;
 }
 p->next=NULL;
 printf("%d is deleted",temp->data);
 free(temp);
}
}
void delete_loc(){
 struct node *p,*temp;
 int loc,i;
 if(start==NULL){
 printf("LL Empty!!!");
    return;
 }
  printf("Enter the location");
 scanf("%d",&loc);
 p=start;
 temp=start;
 i=1;
 while(i<(loc-1)&&temp!=NULL){
 temp=temp->next;
 i++;
 }
 if(temp==NULL){
  printf("Search fails!!!");
 }
 else if(loc==1&&temp->next==NULL){
 delete_begin();
 }
 else if(loc==1){
 delete_begin();
 }
 else{
 p=temp->next;
 temp->next=p->next;
 printf("%d is deleted",p->data);
 free(p);
 }
 }
void display(){
 struct node *p;
 if(start==NULL){
 printf("LL Empty!!!");
    return;
 }
 else{
  p=start;
  while(p->next!=NULL){
    printf("%d\t",p->data);
    p=p->next;
  }
  printf("%d\t",p->data);
 }
}
