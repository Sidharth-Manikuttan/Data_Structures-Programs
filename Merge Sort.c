#include <stdio.h>
#include <stdlib.h>
int t[50],i,j,k;
void main(){
int n;
printf("Enter the number of elements :");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array :");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("The sorted array is:");
for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void mergesort(int a[],int start,int end){
int mid;
if(start!=end){
    mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}
}
void merge(int a[],int start,int mid,int end){
i=start;
j=mid+1;
k=start;
while(i<=mid&&j<=end){
    if(a[i]<a[j]){
     t[k]=a[i];
     i++;
     k++;
    }
    else{
     t[k]=a[j];
     j++;
     k++;
    }
}
while(i<=mid){
 t[k]=a[i];
 i++;
 k++;
}
while(j<=end){
 t[k]=a[j];
 j++;
 k++;
}
for(i=start,k=start;i<=end;i++,k++){
    a[i]=t[k];
}
}
