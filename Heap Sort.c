#include <stdio.h>
#include <stdlib.h>
int i;
void heapify(int a[],int n,int i){
int temp,left,right;
int large=i;
left=(2*i)+1;
right=(2*i)+2;
if(left<n&&a[left]>a[large]){
    large=left;
}
if(right<n&&a[right]>a[large]){
    large=right;
}
if(large!=i){
 temp=a[i];
 a[i]=a[large];
 a[large]=temp;
 heapify(a,n,large);
}
}
void heapsort(int a[],int n){
int temp;
for(i=n/2-1;i>=0;i--){
    heapify(a,n,i);
}
for(i=n-1;i>=0;i--){
    temp=a[0];
    a[0]=a[i];
    a[i]=temp;
    heapify(a,i,0);
}
}
void main(){
int size;
printf("Enter the size of the array :");
scanf("%d",&size);
int a[size];
printf("Enter the array elements :");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
heapsort(a,size);
printf("The sorted array is :");
for(i=0;i<size;i++){
 printf("%d ",a[i]);
}
}
