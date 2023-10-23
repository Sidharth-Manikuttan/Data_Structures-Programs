#include <stdio.h>
#include <stdlib.h>
int size;
int h[20];
void insert(){
 int i,key,hkey,index;
 printf("\nEnter the element to be inserted : \n");
 scanf("%d",&key);
 hkey=key%size;
 for(i=0;i<size;i++){
  index=(hkey+i)%size;
  if(h[index]==0){
  h[index]=key;
  break;
  }
 }
 if(i==size)
 printf("\nThe element cannot be inserted!!!\n");
}
void search(){
  int i,key,hkey,index;
 printf("\nEnter the element to be searched : \n");
 scanf("%d",&key);
 hkey=key%size;
 for(i=0;i<size;i++){
  index=(hkey+i)%size;
  if(h[index]==key){
  printf("The element is found at the index %d",index);
  break;
  }
 }
 if(i==size)
 printf("The element is not found!!!");
}
void display(){
 int i;
 printf("The contents of the Hash table are : ");
 for(i=0;i<size;i++){
 printf("\nThe value at the index %d = %d",i,h[i]);
 }
}
void main(){
 int i,ch;
 printf("\nEnter the size of the table : \n");
 scanf("%d",&size);
 while(1){
 printf("\nEnter your choice\n1.INSERT\n2.SEARCH\n3.DISPLAY\n4.EXIT\n");
 scanf("%d",&ch);
 switch(ch){
 case 1:insert();
 break;
 case 2:search();
 break;
 case 3:display();
 break;
 case 4:exit(0);
 }
 }
}
