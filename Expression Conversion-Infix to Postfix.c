#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char stack[100];
int top=-1;
void push(char x){
 stack[++top]=x;
}
char pop(){
 if(top==-1){
    return -1;
 }
 else{
    return stack[top--];
 }
}
int priority(char x){
 if(x=='('){
   return 0;}
 else if(x=='+'||x=='-'){
    return 1;}
 else if(x=='*'||x=='/'){
    return 2;}
 else if(x=='^'){
    return 3;
 }
return 0;
}
int main(){
 char exp[100];
 char *e,x;
 printf("Enter the expression : ");
 scanf("%s",exp);
 e=exp;
 int bc=0,OP=0,op=0;
 while(*e!='\0'){
 if(*e=='('){
    bc++;
 }
 else if(*e==')'){
    bc--;
 }
 else if(isalnum(*e)){
 OP++;
 }
 else{
 op++;
 }
 e++;
}
if(bc!=0||OP!=(op+1)){
 printf("Wrong Expression!!");
 exit(1);
}
printf("The converted postfix expression is : ");
e=exp;
while(*e!='\0'){
if(isalnum(*e)){
 printf("%c",*e);
}
else if(*e=='('){
 push(*e);
}
else if(*e==')'){
 while((x=pop())!='('){
 printf("%c",x);
 }
}
 else {
  while(priority(stack[top])>=priority(*e)){
    printf("%c",pop());
  }
  push(*e);
 }
 e++;
}
while(top!=-1){
 printf("%c",pop());
}
return 0;
}
